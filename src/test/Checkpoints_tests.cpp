// Copyright (c) 2011-2013 The Bitcoin Core developers
// Copyright (c) 2017 The PIVX developers
// Copyright (c) 2018 The Electra developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

//
// Unit tests for block-chain checkpoints
//

#include "checkpoints.h"

#include "uint256.h"

#include <boost/test/unit_test.hpp>

using namespace std;

BOOST_AUTO_TEST_SUITE(Checkpoints_tests)

BOOST_AUTO_TEST_CASE(sanity)
{
    uint256 p148000 = uint256("0xe51e81dd77a36b5d5db7e273463fc034360d779076d8a31ebfb8dd3d5ebd7a3d");
    uint256 p199000 = uint256("0xdc78cfb171a2ca24e235df6ec716d5a052dc89705c5af0393fad359b12753390");
    BOOST_CHECK(Checkpoints::CheckBlock(148000, p148000));
    BOOST_CHECK(Checkpoints::CheckBlock(199000, p199000));


    // Wrong hashes at checkpoints should fail:
    BOOST_CHECK(!Checkpoints::CheckBlock(341500, p199000));
    BOOST_CHECK(!Checkpoints::CheckBlock(199000, p148000));

    // ... but any hash not at a checkpoint should succeed:
    BOOST_CHECK(Checkpoints::CheckBlock(341500+1, p199000));
    BOOST_CHECK(Checkpoints::CheckBlock(199000+1, p148000));

    BOOST_CHECK(Checkpoints::GetTotalBlocksEstimate() >= 199000);
}

BOOST_AUTO_TEST_SUITE_END()

Electra
=====================

Setup
---------------------
[Electra](https://www.electraproject.org/electra-wallets/) is the original Electra client and it builds the backbone of the network. However, it downloads and stores the entire history of Electra transactions; depending on the speed of your computer and network connection, the synchronization process can take anywhere from one to two hours. Thankfully you only have to do this once.

Running
---------------------
The following are some helpful notes on how to run Electra on your native platform.

### Unix

Unpack the files into a directory and run:

- bin/32/electra-qt (GUI, 32-bit) or bin/32/electrad (headless, 32-bit)
- bin/64/electra-qt (GUI, 64-bit) or bin/64/electrad (headless, 64-bit)

### Windows

Run the installer, and then run electra-qt.exe.

### OSX

Drag Electra-Qt to your applications folder, and then run Electra-Qt.

### Need Help?

* See the documentation at the [Bitcoin Wiki](https://en.bitcoin.it/wiki/Main_Page) ***TODO***
for help and more information.
* Ask for help on our [Website](https://www.electraproject.org/help-support/) or on help-support channel in [Discord](http://discordapp.com/invite/B8F7Jdv).
* Join our Discord server [Discord Server](http://discordapp.com/invite/B8F7Jdv)
* Join our Telegram group [Telegram](http://t.me/Electracoin )

Building
---------------------
The following are developer notes on how to build Electra on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [OSX Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Gitian Building Guide](gitian-building.md)

### Resources

* Discuss on the [BitcoinTalk](https://bitcointalk.org/index.php?topic=1848351.0)

### Miscellaneous

- [Files](files.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)

License
---------------------
Distributed under the [MIT/X11 software license](http://www.opensource.org/licenses/mit-license.php).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.

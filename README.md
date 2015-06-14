# RF24Network
RF24Network for RaspberryPi.
This class implements an OSI Network Layer using nRF24L01(+) radios driven by the RF24 library.

# Original.
Original source is from https://github.com/maniacbug/RF24Network.
See the original documentation at http://maniacbug.github.io/RF24Network/index.html

# Why this repo
I got it to compile and work on the raspbery pi using wiringPi 

# How
clone the source to your disk
send a copy to the raspberry pi
install wiringPi (http://wiringpi.com/)
install libCurl dev library

run make

# The example
The RF24 sources are wrapped in a program I use which reads messages from a number of AVR based sensor nodes around my house, these messages are then packed in to some classes which are then streamed to JSON to send to my server in a HTTP POST using libCurl..




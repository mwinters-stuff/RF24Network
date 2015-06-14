/*
 * File:   spi.cpp
 * Author: Purinda Gunasekara <purinda@gmail.com>
 *
 * Created on 24 June 2012, 11:00 AM
 *
 * Inspired from spidev test in linux kernel documentation
 * www.kernel.org/doc/Documentation/spi/spidev_test.c
 */

#include "spi.h"
#include <wiringPiSPI.h>

SPI::SPI() {

//	this->device = "/dev/spidev0.0";;
	this->bits = 8;
//	this->speed = 24000000; // 24Mhz - proly doesnt work
//	this->speed = 16000000; // 16Mhz
//	this->speed = 8000000; // 8Mhz
	this->speed = 2000000; // 2Mhz
	this->mode = 0;

//	this->init();
}

void SPI::setbits( uint8_t bits )
{
 this->bits = bits;
}

void SPI::setspeed( uint32_t speed )
{
 this->speed = speed;
}

void SPI::setdevice( string devicefile )
{
	this->device = devicefile;
}

void SPI::init()
{
  #ifndef WIN32
  this->fd = wiringPiSPISetup (0, this->speed);
	#endif
}

uint8_t SPI::transfer(uint8_t tx_)
{
#ifndef WIN32
	int ret;
	// One byte is transfered at once

	ret = wiringPiSPIDataRW (0, &tx_, 1) ;

	if (ret < 1)
	{
		perror("can't send spi message");
		abort();
	}

  return tx_;

	#else
	return 0;
	#endif
}

SPI::~SPI() {
#ifndef WIN32
  close(this->fd);
#endif // WIN32
}


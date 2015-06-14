
/*
 Copyright (C) 2011 J. Coliz <maniacbug@ymail.com>

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 version 2 as published by the Free Software Foundation.
 */

#ifndef __RF24_CONFIG_H__
#define __RF24_CONFIG_H__

//#include <pololu/orangutan.h>


#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//#include <avr/pgmspace.h>
//#include <avr/io.h>


//#define SERIAL_DEBUG
//#undef SERIAL_DEBUG
#ifdef SERIAL_DEBUG
#define IF_SERIAL_DEBUG(x) ({x;})
#else
#define IF_SERIAL_DEBUG(x)
#endif


//#undef PROGMEM
//#define PROGMEM __attribute__(( section(".progmem.data") ))
//#undef PSTR
//#define PSTR(s) (__extension__({static const char __c[] PROGMEM = (s); &__c[0];}))


#undef PSTR
#define PSTR(x) (x)
#define printf_P printf
#define PRIPSTR "%s"

#endif // __RF24_CONFIG_H__
// vim:ai:cin:sts=2 sw=2 ft=cpp

#ifndef PARSER_H
#define PARSER_H

#include <stdint.h>

uint8_t     readOnebyte();
uint16_t    readTwobyte();
uint32_t    readFourbyte();
uint64_t    readEightByte();    

#endif /* parser_h */
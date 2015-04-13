#ifndef _SENSORS_H_
#define _SENSORS_H_

#include <Arduino.h>

const uint8_t TYPE_RGB_LED = 0;

typedef struct {
    uint8_t type;
    uint8_t payload[15];
} Message;

#endif

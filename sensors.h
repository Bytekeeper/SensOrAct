#ifndef _SENSORS_H_
#define _SENSORS_H_

#include <Arduino.h>

const uint8_t TYPE_RGB_LED = 0;

typedef struct {
    uint8_t type;
    uint8_t payload[15];
} Message;

const uint8_t RGB_LED_MODE_FADE = 0;

typedef struct {
    uint8_t type;
    uint8_t mode;
    uint16_t src_r, src_g, src_b;
    uint16_t trg_r, trg_g, trg_b;

} CmdRGBLedFade;

#endif

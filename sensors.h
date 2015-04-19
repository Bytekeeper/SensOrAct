#ifndef _SENSORS_H_
#define _SENSORS_H_

#define MESSAGE_DISPATCH(CODE, TYPE, CALLBACK) if (payload.type == (CODE)) { CALLBACK( (TYPE*) &payload); }


// Types 0-200 currently reserved
// Types 201-255 for custom messages
const uint8_t TYPE_IDENTIFY = 0;
const uint8_t TYPE_TRIGGER = 1;
const uint8_t TYPE_SWITCH = 2;

typedef struct {
    uint8_t type;
    uint8_t payload[15];
} Message;

/**
 * TYPE_IDENTIFY - 0
 * As incoming message:
 * Command to identify device
 * As outgoing message:
 * Device identification
 */
struct Identity_t {
    // TYPE_IDENTITY
    uint8_t type;
    char identity[19];
};

/**
 * TYPE_TRIGGER - 1
 * As incoming message:
 * Command to trigger the actor "id"
 * As outgoing message:
 * Sensor "id" was triggered - event.
 */
struct Trigger_t {
  // TYPE_TRIGGER
  uint8_t type;
  // id of sensor or actor to trigger
  uint8_t id;
};

/**
 * TYPE_SWITCH - 2
 * As outgoing message:
 * Sensor "id"s state changed
 */
struct Switch_t {
    // TYPE_SWITCH
    uint8_t type;
    uint8_t id;
    bool on;
};

#endif

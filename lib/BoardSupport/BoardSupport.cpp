#include "BoardSupport.h"

const char *boardSupportName() {
#if defined(ARDUINO_AVR_UNO)
    return "Arduino Uno";
#elif defined(ARDUINO_AVR_NANO_EVERY)
    return "Arduino Nano Every";
#elif defined(ARDUINO_AVR_MEGA)
    return "Arduino Mega";
#elif defined(ARDUINO_AVR_NANO)
    return "Arduino Nano";
#else
    return "Unknown Arduino-Compatible Board";
#endif
}

void boardSupportInitialize() {
    // Placeholder for board-specific initialization logic.
}

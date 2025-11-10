#pragma once

#include <Arduino.h>

// Returns a human-readable name for the currently selected Arduino-compatible board.
const char *boardSupportName();

// Provide a hook for board specific setup logic; intentionally empty for now.
void boardSupportInitialize();

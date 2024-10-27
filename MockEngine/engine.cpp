#include "engine.h"
#include <stdio.h>

// Note: Don't redeclare with MOCKENGINE_API here
void ScanFile(const char* filename) {
    printf("Scanning file: %s\n", filename);
}
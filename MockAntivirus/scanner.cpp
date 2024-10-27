#include "scanner.h"
#include <fstream>
#include <windows.h>

Scanner::Scanner() {
    loadDummyData();
}

Scanner::~Scanner() {
}

bool Scanner::initializeEngine() {
    // Create some dummy files during runtime
    std::ofstream dummyDll("dummy.dll", std::ios::binary);
    dummyDll.write("DUMMY", 5);
    dummyDll.close();
    return true;
}

void Scanner::loadDummyData() {
    // Create some runtime data
}
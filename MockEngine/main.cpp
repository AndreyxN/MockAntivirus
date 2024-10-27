#include <iostream>
#include "../MockEngine/engine.h"

int main() {
    std::cout << "MockAntivirus v1.0" << std::endl;
    ScanFile("test.txt");
    return 0;
}
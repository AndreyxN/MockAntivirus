#pragma once
#include <string>

class Scanner {
public:
    Scanner();
    ~Scanner();
    bool initializeEngine();
private:
    void loadDummyData();
};
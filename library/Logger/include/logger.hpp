#pragma once

#include <iostream>
#include <string>

class Logger
{
    public:
    Logger();
    ~Logger();

    int Begin();
    void Print(string str);
}
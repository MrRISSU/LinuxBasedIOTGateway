#include "logger.hpp"
Logger log;


int main()
{
    log.Begin();
    log.print("Test\r\n");
    return 0;
}
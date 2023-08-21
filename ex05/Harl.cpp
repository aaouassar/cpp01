#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug()
{
    std::cout << "DEBUG 42" << std::endl;
}

void Harl::info()
{
    std::cout << "INFO 42" << std::endl;
}

void Harl::warning()
{
    std::cout << "WARNING 42" << std::endl;
}

void Harl::error()
{
    std::cout << "ERROR 42" << std::endl;
}

void Harl::complain ( std::string level )
{
    void (Harl::*ptr[4])(void) = { &Harl::debug, &Harl::info, &Harl::error, &Harl::warning };
    std::string levels[4] = { "DEBUG", "INFO", "ERROR", "WARNING" };
    for( int i = 0 ; i < 4 ; i++ )
    {
        if ( level == levels[i] )
            (this->*(ptr[i]))();
    }
}

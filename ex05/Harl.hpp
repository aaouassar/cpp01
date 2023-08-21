#ifndef HARL1_HPP
#define HARL1_HPP

#include<iostream>
#include<string>


class Harl
{
    private:
        void debug();
        void info();
        void warning();
        void error();

    public:
        Harl();
        ~Harl();
        void complain(std::string level);
};

#endif
//
// Created by Илья on 07.01.2019.
//
#include "../include/headers.h"



const int N = 6;

class Automata {
private:
    double cash;
    std::string menu[N] = {"coffee   ", "milk     ", "tea      ", "water    ", "whiskey  ", "puerh tea"};
    double prices[N] = {40, 12, 20, 10, 120, 50};
    STATES state;
    int position;
public:
    Automata();

    STATES on();
    STATES off();
    STATES coin(double money);
    double getCash();
    void printMenu();
    STATES printState();
    STATES cancel();
    STATES choice(int position);
    bool check();
    STATES cook();
    std::string finish();
    double getSurplus();    //get delta
};

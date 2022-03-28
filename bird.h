//
// Created by Tonyl on 3/27/2022.
//
#include <string>
using namespace std;

#ifndef GIT_DEMO_BIRD_H
#define GIT_DEMO_BIRD_H


class bird {
public:
    bird(std::string);
    int get_seeds();

private:
    int seeds = 10;
    int nuts = 2;
    std::string bird_type;
};


#endif //GIT_DEMO_BIRD_H

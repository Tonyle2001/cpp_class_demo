//Tony Le
//CSCE 306; Spring 2022
//Lab #10 - main.cpp

//bird Class

#include "bird.h"
using namespace std;
#include <iostream>

    bird::bird(string species)
    : bird_type{species}
    {}

    int bird::get_seeds(){
        return this->seeds;
    }
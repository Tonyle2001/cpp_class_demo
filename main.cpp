//Tony Le
//CSCE 306; Spring 2022
//Lab #10 - main.cpp

//Driver Class

#include <string>
#include <iostream>
#include "bird.h"
using namespace std;

int main(){

    cout << "hello world" << endl;

    bird robin("robin");
    cout << robin.get_seeds() << endl;

    return 0;

}


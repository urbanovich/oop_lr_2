/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: setler
 *
 * Created on December 27, 2017, 10:29 PM
 */

#include <cstdlib>
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int count = 3;
    Circle cs[count];
    int rd = 0;
    for (int i = 0; i < count; i++) {
        
        rd = rand() % 100;
        
        cs[i].move(rd, rd);
        cs[i].resize(rd);
        cs[i].rotation(rd);
        cs[i].setPointCoordinates(rd);

        std::cout << cs[i] << std::endl;
    }
    
    Square sqs[count];
    
    for (int i = 0; i < count; i++) {
        
        rd = rand() % 100;
        
        sqs[i].move(rd, rd);
        sqs[i].resize(rd, rd);
        sqs[i].rotation(rd);

        std::cout << sqs[i] << std::endl;
    }
    
    Rectangle recs[count];
    
    for (int i = 0; i < count; i++) {
        
        rd = rand() % 100;
        
        recs[i].move(rd, rd);
        recs[i].resize(rd, rd);
        recs[i].rotation(rd);

        std::cout << recs[i] << std::endl;
    }
    
    
    return 0;
}


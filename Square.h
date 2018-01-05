/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Square.h
 * Author: setler
 *
 * Created on December 27, 2017, 10:44 PM
 */

#ifndef SQUARE_H
#define SQUARE_H
#include "Figure.h"
#include <iostream>

class Square : public Figure {
    
    int width = 0;
    int height = 0;
    int x = 0;
    int y = 0;
    int angle = 1;
    
    double radius;
    
    float Ax;
    float Ay;
    
    float Bx;
    float By;
    
    float Cx;
    float Cy;
    
    float Dx;
    float Dy;
    
    const double PI = 3.14159265;
    
    void setRadius();
    void setCoordinates();
    
public:
    Square();
    Square(int width, int height);
    Square(const Square& orig);
    virtual ~Square();
    
    void move(int x, int y);
    void resize(int width, int height);
    void rotation(int angle);
    void recounting();
    
    friend std::ostream& operator<<(std::ostream &stream, Square &sq);

private:

};

#endif /* SQUARE_H */


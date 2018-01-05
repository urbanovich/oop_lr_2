/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rectangle.h
 * Author: setler
 *
 * Created on December 27, 2017, 10:49 PM
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Figure.h"

class Rectangle : public Figure {
    
    int width = 0;
    int height = 0;
    int x = 0;
    int y = 0;
    int angle = 1;
    
    double radius;
    double diagonal;
    
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
    Rectangle();
    Rectangle(int width, int height);
    Rectangle(const Rectangle& orig);
    virtual ~Rectangle();
    
    void move(int x, int y);
    void resize(int width, int height);
    void rotation(int angle);
    void recounting();
    
    friend std::ostream& operator<<(std::ostream &stream, Rectangle &r);
    
private:

};

#endif /* RECTANGLE_H */


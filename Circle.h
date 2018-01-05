/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Circle.h
 * Author: setler
 *
 * Created on December 27, 2017, 10:42 PM
 */

#ifndef CIRCLE_H
#define CIRCLE_H

#include "Figure.h"

class Circle : public Figure {
    
    int radius = 0;
    int x = 0;
    int y = 0;
    int angle = 0;
    
    float Px;
    float Py;
    
    const double PI = 3.14159265;
    
    void setCoordinates();
    
public:
    Circle();
    Circle(int radius);
    Circle(const Circle& orig);
    virtual ~Circle();
    
    void move(int x, int y);
    void resize(int number);
    void rotation(int angle);
    void recounting();
    void setPointCoordinates(int angle);
    
    friend std::ostream& operator<<(std::ostream &stream, Circle &c);
    
private:
    
};

#endif /* CIRCLE_H */


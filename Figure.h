/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Figure.h
 * Author: setler
 *
 * Created on January 2, 2018, 9:40 PM
 */

#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>

class Figure {
public:
    Figure();
    Figure(const Figure& orig);
    virtual ~Figure();
    
    virtual void move(int x, int y) = 0;
    virtual void resize(int width, int height) {};
    virtual void resize(int number) {};
    virtual void rotation(int angle) = 0;
    virtual void recounting() = 0;
    
    friend std::ostream& operator<<(std::ostream &stream, Figure &f) { return stream; };
    
private:

};

#endif /* FIGURE_H */


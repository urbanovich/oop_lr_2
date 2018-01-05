/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Circle.cpp
 * Author: setler
 * 
 * Created on December 27, 2017, 10:42 PM
 */

#include "Circle.h"
#include <cmath>

Circle::Circle() {
    
    this->recounting();
}

Circle::Circle(int radius) {
    
    this->radius = radius;
    
    this->recounting();
}

Circle::Circle(const Circle& orig) {
}

Circle::~Circle() {
}

void Circle::move(int x, int y) {
    
    this->x = x;
    this->y = y;
    
    this->recounting();
}

void Circle::resize(int number) {
    
    this->radius = number;
    
    this->recounting();
}

void Circle::rotation(int angle) {
    
    this->angle = angle;
    
    this->recounting();
}

void Circle::setCoordinates() {
    
    this->x = this->radius * cos(this->angle * this->PI / 180) + this->x;
    this->y = this->radius * sin(this->angle * this->PI / 180) + this->y;
}

void Circle::recounting() {
    
    this->setCoordinates();
}

void Circle::setPointCoordinates(int angle) {

    this->Px = this->radius * cos((this->angle + angle) * this->PI / 180) + this->x;
    this->Py = this->radius * sin((this->angle + angle) * this->PI / 180) + this->y;
    
}

std::ostream& operator<<(std::ostream &stream, Circle &c) {
    
    stream << "Circle: " << std::endl;
    
    stream << "\tCoordinates: " << std::endl;
    stream << "\t\t x: " << c.x << std::endl;
    stream << "\t\t y: " << c.y << std::endl;
    
    stream << "\tAngle: " << std::endl;
    stream << "\t\t angle: " << c.angle << std::endl;
    
    stream << "\tPoint coordinates: " << std::endl;
    stream << "\t\t Px: " << c.Px << std::endl;
    stream << "\t\t Py: " << c.Py << std::endl;
    
    return stream;
}
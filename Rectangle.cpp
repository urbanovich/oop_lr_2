/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rectangle.cpp
 * Author: setler
 * 
 * Created on December 27, 2017, 10:49 PM
 */

#include "Rectangle.h"
#include <cmath>

Rectangle::Rectangle() {
}

Rectangle::Rectangle(int width, int height) {
    
    this->width = width;
    this->height = height;
    
    this->recounting();
}

Rectangle::Rectangle(const Rectangle& orig) {
}

Rectangle::~Rectangle() {
}

void Rectangle::move(int x, int y) {
    
    this->x = x;
    this->y = y;
    
    this->recounting();
}

void Rectangle::resize(int width, int height) {
    
    this->width = width;
    this->height = height;
    
    this->recounting();
}

void Rectangle::rotation(int angle) {
    
    this->angle = angle;
    
    this->recounting();
}

void Rectangle::setRadius() {
    
    this->radius = sqrt(pow(this->width, 2) + pow(this->height, 2)) / 2;
    this->diagonal = sqrt(pow(this->width, 2) + pow(this->height, 2));
}

void Rectangle::setCoordinates() {
    
    this->Ax = this->radius * cos(this->angle * this->PI / 180) + this->x;
    this->Ay = this->radius * sin(this->angle * this->PI / 180) + this->y;
    
    int a = (2 * asin(this->height / this->diagonal)) * 180 / this->PI;
    
    this->Bx = this->radius * cos((this->angle + a) * this->PI / 180) + this->x;
    this->By = this->radius * sin((this->angle + a) * this->PI / 180) + this->y;
    
    this->Cx = this->radius * cos((this->angle + 180) * this->PI / 180) + this->x;
    this->Cy = this->radius * sin((this->angle + 180) * this->PI / 180) + this->y;
    
    int b = (2 * asin(this->width / this->diagonal)) * 180 / this->PI;
    
    this->Dx = this->radius * cos((this->angle + b) * this->PI / 180) + this->x;
    this->Dy = this->radius * sin((this->angle + b) * this->PI / 180) + this->y;
}

void Rectangle::recounting() {
    
    this->setRadius();
    this->setCoordinates();
}

std::ostream& operator<<(std::ostream &stream, Rectangle &r) {
    
    stream << "Rectangle: " << std::endl;
    
    stream << "\tCoordinates: " << std::endl;
    stream << "\t\t x: " << r.x << std::endl;
    stream << "\t\t y: " << r.y << std::endl;
    stream << "\t\t Ax: " << r.Ax << std::endl;
    stream << "\t\t Ay: " << r.Ay << std::endl;
    stream << "\t\t Bx: " << r.Bx << std::endl;
    stream << "\t\t By: " << r.By << std::endl;
    stream << "\t\t Cx: " << r.Cx << std::endl;
    stream << "\t\t Cy: " << r.Cy << std::endl;
    stream << "\t\t Dx: " << r.Dx << std::endl;
    stream << "\t\t Dy: " << r.Dy << std::endl;
    
    stream << "\tAngle: " << std::endl;
    stream << "\t\t angle: " << r.angle << std::endl;
    
    stream << "\tRadius: " << std::endl;
    stream << "\t\t radius: " << r.radius << std::endl;
        
    return stream;
}
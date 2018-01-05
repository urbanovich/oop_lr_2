/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Square.cpp
 * Author: setler
 * 
 * Created on December 27, 2017, 10:44 PM
 */

#include "Square.h"
#include <iostream>
#include <cmath>

Square::Square() {
}

Square::Square(int width, int height) {
    
    this->width = width;
    this->height = height;
    
    this->recounting();
}

Square::Square(const Square& orig) {
}

Square::~Square() {
}

void Square::move(int x, int y) {
    
    this->x = x;
    this->y = y;
    
    this->recounting();
}

void Square::resize(int width, int height) {
    
    this->width = width;
    this->height = height;
    
    this->recounting();
}

void Square::rotation(int angle) {
    
    this->angle = angle;
    
    this->recounting();
}

void Square::setRadius() {
    
    this->radius = sqrt(pow(this->width, 2) + pow(this->height, 2)) / 2;
}

void Square::setCoordinates() {
    
    this->Ax = this->radius * cos(this->angle * this->PI / 180) + this->x;
    this->Ay = this->radius * sin(this->angle * this->PI / 180) + this->y;
    
    this->Bx = this->radius * cos((this->angle + 90) * this->PI / 180) + this->x;
    this->By = this->radius * sin((this->angle + 90) * this->PI / 180) + this->y;
    
    this->Cx = this->radius * cos((this->angle + 180) * this->PI / 180) + this->x;
    this->Cy = this->radius * sin((this->angle + 180) * this->PI / 180) + this->y;
    
    this->Dx = this->radius * cos((this->angle + 270) * this->PI / 180) + this->x;
    this->Dy = this->radius * sin((this->angle + 270) * this->PI / 180) + this->y;
}

void Square::recounting() {
    
    this->setRadius();
    this->setCoordinates();
}

std::ostream& operator<<(std::ostream &stream, Square &sq) {
    
    stream << "Square: " << std::endl;
    
    stream << "\tCoordinates: " << std::endl;
    stream << "\t\t x: " << sq.x << std::endl;
    stream << "\t\t y: " << sq.y << std::endl;
    stream << "\t\t Ax: " << sq.Ax << std::endl;
    stream << "\t\t Ay: " << sq.Ay << std::endl;
    stream << "\t\t Bx: " << sq.Bx << std::endl;
    stream << "\t\t By: " << sq.By << std::endl;
    stream << "\t\t Cx: " << sq.Cx << std::endl;
    stream << "\t\t Cy: " << sq.Cy << std::endl;
    stream << "\t\t Dx: " << sq.Dx << std::endl;
    stream << "\t\t Dy: " << sq.Dy << std::endl;
    
    stream << "\tAngle: " << std::endl;
    stream << "\t\t angle: " << sq.angle << std::endl;
    
    stream << "\tRadius: " << std::endl;
    stream << "\t\t radius: " << sq.radius << std::endl;
    
    return stream;
}
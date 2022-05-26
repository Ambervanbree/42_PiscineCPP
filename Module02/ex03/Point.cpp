#include "Point.hpp"

Point::Point(void) : _x(Fixed(0)), _y(Fixed(0)){}

Point::Point(float x, float y) : _x(Fixed(x)), _y(Fixed(y)){}

Point::Point(const Point &inst){
    *this = inst;
    return ;
}

Point & Point::operator =(Point const &inst){
    if (this != &inst){
        this->_x =  //get _x from instance
        this->_y =  //get _y from instance
    }
    return *this;
}

Point::~Point(){}
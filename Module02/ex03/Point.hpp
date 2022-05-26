#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point{
    private:
        Fixed const _x;
        Fixed const _y;

    public:
		Point(void);
        Point(float x, float y);
		Point(const Point &inst);
        Point &operator =(Point const & inst);
		~Point(void);

};

#endif
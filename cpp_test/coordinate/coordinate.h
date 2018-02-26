#ifndef __COORDINATE_H__
#define __COORDINATE_H__
#include <iostream>
using namespace std;

class Coordinate{
public:
    friend Coordinate& operator-(Coordinate& coor);
    friend Coordinate operator+(const Coordinate&, const Coordinate& );
    friend ostream& operator<<(ostream& out, const Coordinate&);
    Coordinate();
    Coordinate(int, int);
    ~Coordinate();
    int getX();
    int getY();
    //Coordinate& operator-();
    Coordinate& operator++();
    Coordinate operator++(int);
    //Coordinate operator+(const Coordinate&);
    int operator[](int);

private:
    int m_iX;
    int m_iY;
};
#endif
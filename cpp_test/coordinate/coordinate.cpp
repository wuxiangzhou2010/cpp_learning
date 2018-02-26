#include <iostream>
#include "coordinate.h"

using namespace std;
Coordinate::Coordinate(){
    
}
Coordinate::Coordinate(int x, int y){
    m_iX = x;
    m_iY = y;
}
Coordinate::~Coordinate(){
    
}
int Coordinate::getX(){

    cout << "getX()" <<endl;
    return m_iX;
}
int Coordinate::getY(){
    cout << "getY()" <<endl;
    return m_iY;
}
/*
Coordinate& Coordinate::operator-(){
    m_iX = -m_iX;
    m_iY = -m_iY;
    return *this;
}
*/

Coordinate& Coordinate::operator++(){
    ++m_iX;
    ++m_iY;
    return *this;
}


Coordinate Coordinate::operator++(int){
    Coordinate old(*this);
    this->m_iX++;
    this->m_iY++;
    return old;
}
/*
Coordinate Coordinate::operator+(const Coordinate& coor){
    Coordinate temp;
    temp.m_iX = this->m_iX + coor.m_iX;
    temp.m_iY = this->m_iY + coor.m_iY;
    return temp;
}

*/


ostream& operator<<(ostream& out, const Coordinate& coor){
    out << coor.m_iX << "," << coor.m_iY;
    return out;
}


int Coordinate::operator[](int index){
    if(0 == index) return m_iX;
    if(1 == index) return m_iY;
}
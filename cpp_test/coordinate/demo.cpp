#include <iostream>
#include "coordinate.h"

using namespace std;

Coordinate& operator-(Coordinate& coor){
    coor.m_iX = -coor.m_iX;
    coor.m_iY = -coor.m_iY;
}


Coordinate operator+(const Coordinate& coor1, const Coordinate& coor2){
    Coordinate temp;
    temp.m_iX = coor1.m_iX + coor2.m_iX;
    temp.m_iY = coor1.m_iY + coor2.m_iY;
    return temp;

}


int main(){
    Coordinate coor1(1,2);
    Coordinate coor2(3,4);
    cout << coor1.getX() << "," << coor1.getY() << endl;
    //-coor1;//-(-coor1);
    //++coor1;
    Coordinate coor3 = coor1 + coor2;
    
    cout << coor3.getX() << "," << coor3.getY() << endl;
    cout << coor2 <<endl ;
    cout << coor2[0] << "," << coor2[1] <<endl;

}


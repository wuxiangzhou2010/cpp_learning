#include <iostream>
#include <string>
#include "person.h"

using namespace std;

Person::Person():m_iAge(10),m_strName("mubiale"){
    cout<< " Person() "<<endl;
}
Person::Person(const Person & _person){
    m_iAge = _person.m_iAge;
    m_strName = _person.m_strName;
     cout<< " Person(const Person & _person) "<<endl;
}
Person::Person(string _name, int _age){
    m_iAge = _age;
    m_strName = _name;
     cout<< " Person(string _name, int _age=10) "<<endl;
}
Person::~Person(){
cout<< " ~Person() "<<endl;
}
string Person::getName(){
    return m_strName;
}
void Person::setName(string _name){
    m_strName = _name;
}
int Person::getAge(){
    return m_iAge;
}

void Person::setAge(int _age){
    m_iAge = _age;
}

void Person::print() const{
    // "this" argument has type const Personcan not call non-const function, it is not visiable 
    //setAge(10);
    // can not assign to non-static data member within const member function
    // static member is not using this pointer
    //m_iAge = 100;
}
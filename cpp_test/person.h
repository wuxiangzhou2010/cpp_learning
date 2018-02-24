#ifndef __PERSON_H__
#define __PERSON_H__
#include <string>
using namespace std;

class Person{
public:
    Person();
    Person(const Person &);
    Person(string _name /*= "mubiale"*/, int _age = 10);
    ~Person();
    string getName();
    void setName(string _name);
    int getAge();
    void setAge(int _age);
    void print() const;
protected:
    string m_strName;
private:

    int m_iAge;
};
#endif
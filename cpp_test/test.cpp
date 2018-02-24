#include <iostream>
#include <string>
#include "person.h"
#include "worker.h"

using namespace std;

int personTest(){
     Person p0("test");
    Person p = p0;
    cout << p.getAge() << p.getName() << endl;
    Person *p1 = new Person();
    cout << p1->getAge() << p1->getName() << endl;
    //cout << p1->m_strName<<endl;
    delete p1;
    p1 = NULL;
    return 0;
}

int workerTest(){
     Worker p0;
    //Person p = (Person)p0;
    // cout << p.getAge() << p.getName() << endl;
    Worker *p1 = new Worker();
    p1->work(3);
   //cout << p1->getAge() << p1->getName() << endl;
    //cout << p1->m_strName<<endl;

    delete p1;
    p1 = NULL;
    return 0;
}

int main(){

    personTest();
    //workerTest();
    return 0;
}
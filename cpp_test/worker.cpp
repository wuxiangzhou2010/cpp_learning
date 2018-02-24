#include <iostream>
#include <string>
#include "worker.h"

using namespace std;


Worker::Worker():m_iSalary(0){
cout <<  " Worker() " << endl;
}
Worker::Worker(const Worker &){
    cout <<  " Worker(const Worker &) " << endl;
}
Worker::~Worker(){
    cout <<  " ~Worker() " << endl;
}
int Worker::getSalary(){
    return m_iSalary;
}
void Worker::work(int _salary){
    m_iSalary += _salary;
    //m_strName = "tst";
    //m_iAge = 20;
}
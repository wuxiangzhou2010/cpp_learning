#ifndef __WORKER_H__
#define __WORKER_H__
#include <string>
#include "person.h"
using namespace std;

class Worker:private Person{
public:
    Worker();
    Worker(const Worker &);
    ~Worker();
    int getSalary();
    void work(int _salary);

private:
    int m_iSalary;
};
#endif
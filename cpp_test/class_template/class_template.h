#include <iostream>

using namespace std;

template <typename T, int kSize, int kVal>
class MyArray{
    public:
    MyArray();
    ~MyArray(){
        delete[] m_pArr;
        m_pArr = NULL;
    }
    void display();

private:
    T* m_pArr;

};


template <typename T, int kSize, int kVal>
MyArray<T, kSize, kVal>::MyArray(){
    m_pArr = new T[kSize];
    for(int i = 0;i < kSize; i++){
        m_pArr[i] = kVal;
    }
}
template <typename T, int kSize, int kVal>
void MyArray<T, kSize, kVal>::display(){
    for(int i = 0;i < kSize; i++){
        cout << m_pArr[i] << endl;
    }
}
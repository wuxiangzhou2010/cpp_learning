#include <iostream>

using namespace std;

template <typename T>
void display(T a){
    cout << a << endl;
}
template <typename T, class S>
void display(T t, S s){
    cout << t << s <<endl;
}

template <typename T, int kSize>
void display(T a){
    for(int i = 0; i < kSize; i++){
        cout << a << endl;
    }
}

int main(){
    display<int>(10);
    display<double>(10.89);
    display<int, double>(10,8.3);
    display<int,5>(6);
}
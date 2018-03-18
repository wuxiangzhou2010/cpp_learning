### [compiler generated functions](https://www.youtube.com/watch?v=KMSYmY74AEs&index=4&list=PLE28375D4AC946CC3)
1. copy constructor
2. copy assigment operator
3. destructor
4. default constructor (only if there is no constructor decleared)

```cpp
class Dog{};

class Dog{
public:
    Dog(){...}  // 1. call base class's default constructor
                // 2. call data member's default constructor
                // will not be generated when the base class do not have the default  constructor
    ~Dog(){...} // 1. call base class's destructor
                // 2. call data member's destructor
                // will not be generated when the base class do not have a public deconstructor
    Dog& operator=(const Dog& rhs){...} //member by member initialization

    Dog(const Dog& rhs){...} // member by member copy
        //const and reference can only be initialized and can not be copied
        // if the class has reference or const member, the compiler will not  generate the copy constructor

};
```
note 

    1. The auto generated function is public and inline
    2. They are generated only when they are needed

```cpp

#include <iostream>

using namespace std;

class Dog {
    public:
    // string& m_name;  // 1. cannot define the implicit copy assignment operator for 'Dog',
                        // 2. this class can not be used in the standard constainer, because it can no copy assigment
    string& m_name; 
    Dog(string name ="Bob") {m_name = name; cout << name << "is born." << endl;}
    ~Dog() {cout << m_name << "is destroyed." << endl;}
};

int main(){
    Dog dog1("Henry");
    Dog dog2;
    dog2 = dog1;
}
~    
```


```cpp
#include <iostream>
using namespace std;

class Collar {
    public:
       // Collar() = default; //this is a c++11 feature
        Collar(string color) {std:: cout <<"collar is born" <<endl;} //error,  no default constructor
};
class Dog {
    Collar m_collar;
};

int main(){
    Dog dig1;
}

```
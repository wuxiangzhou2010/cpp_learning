# const reference as the function parameter

will guard the variable from being modified

```cpp
void setAge(const int& i){age = i;/*i++*/} //error i++
```

```cpp

void setAge(const int) //const is useless
void setAge(int) //error, can not overload

void setAge(const int*)
void setAge(int*)//ok, can overload

void setAge(const int&)
void setAge(int&)//ok, can not overload
```

## const return value

```cpp
const string& getName(){return name} //improve perfomance
const string getName(){return name} //improve perfomance  //const is useless
```

## const function

 1. the function will not change any of the member variable
 2. can not call non const function
 3. can be overloaded

```cpp
void printDogName() const { cout << name << endl}   //invoked when the object is a const
void printDogName() { cout << name << endl}   //invoked when the dog is not a const
```
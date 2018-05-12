# R value and L value

lvalue: an object that occupies some `identifiable location` in memory
rvalue: any object that is not a lvalue

reference (or lvalue reference)

```cpp
int i;
int& r = i;

int& r = 5; //error

const int& r =5 //ok
```

Rvalue reference

perfect forwarding

shared pointer

an object should be assigned to a smart pointer as soon as it  is created, Raw pointer should not be used.

``` cpp
shared_ptr<Dog> p = make_shared<Dog>("Tank") // faster and safer
```

static_pointer_cast
dynamic_pointer_cast
const_pointer_cast
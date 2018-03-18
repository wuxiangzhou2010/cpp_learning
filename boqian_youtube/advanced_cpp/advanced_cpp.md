## [const](https://www.youtube.com/watch?v=7arYbAhu0aw&list=PLE28375D4AC946CC3)

### const 三种不同的位置
```cpp
    const* int a 
    const int * a 
    cont * int* a 
```
### const_cast
```cpp
const int i = 5;
const_cast<int&>(i) = 6; //OK
```
### static_cast
```CPP
int j= 10;
static_cast<const int&>(j) = 0; //error
```

#### 使用 const 的优点
1. guards against inadvertent write to the variable 
2. self documenting
3. Enables compiler to do more optimization, making code tighter
4. const means the variable can be put in ROM(This seems important in embeded system)

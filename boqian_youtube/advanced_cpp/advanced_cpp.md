# [const](https://www.youtube.com/watch?v=7arYbAhu0aw&list=PLE28375D4AC946CC3)

## const 三种不同的位置

```cpp
    const int i = 9;
    const int *p1 = &i; // the data point to can not be modified
    p1++;
    int* const p2 = &i; // the pointer can not be modified
    const int* const p3 = &i; // the pointer and data both can not be modified
```

## const_cast

cast away constness

```cpp
const int i = 5;
const_cast<int&>(i) = 6; //OK
```

## static_cast

cast a data to const

```CPP
int j= 10;
static_cast<const int&>(j) = 0; //error
```

## why use const

1. guards against inadvertent write to the variable
2. self documenting
3. Enables compiler to do more optimization, making code tighter
4. const means the variable can be put in ROM(This seems important in embeded system)

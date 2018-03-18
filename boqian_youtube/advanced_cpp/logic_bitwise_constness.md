## logic constness

mutable const_cast used in  const function to modify member variables

```cpp
class BigArray {
    vector<int> v;
    mutable int accessCounter;
    int* v2;
public:
    int getItem(int index) const {
        //accessCounter++;
        const_cast<BigArray*>(this)->accessCounter++;
        return v[index];
    }
    void setV2Item(int index, int x) const { //const is not useless
        *(v2+index) = x;
    }
};
int main() {
    BigArray a;
}
```

question
```cpp
const int* const func(const int* const& p) const
```


1. the return value of fun is a constant pointer pointing to a constant integer value 
2. the parameter of fun is a reference of a constant pointer pointing to a constant integer 
    the reference cannot refer to a different pointer (nature of references)
    the referred pointer cannot point to a different value 
    the pointed value of the referred pointer cannot be changed 
3. fun is also a const function, meaning that it cannot directly modify members unless they are marked mutable, also it can only call other const functions

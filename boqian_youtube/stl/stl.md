# STL

## Algorithms and containers

containers offer iterators

in std namespace

### container: vector  allocated on the heap

push_back

### iterator: vec.begin vec.end

### algorithm: sort(iter1, iter2)

## Reasons to use C++ STL

- code resuse
- Efficiency
- accurate and less bugy
- readable code
- standardization

## sequence containers (array and linked list)

vector, deque, list, forward list, array
dynamic array grow in one direction

vec.size()
vec[2]
vec.at(2) // have range check

## associative containers(binary tree)

sorted no push_back/push_front  readonly
set no duplicates
multiset allow duplicatea

``` cpp
set<int> myset;
myset.insert(2)

```

- fast search O(log(n))
- treaversing is slow(compared to vector and deque)
- no random access, no []operator

map/multiple_map

```cpp
map<char, int> mymap;
mymap.insert(pair<char,int>('a',100));
mymap.insert(make_pair('z',200));
```

## unordered containers(hash table)

unordered map/multi_map
unordered set/multi_set

- fatest search/insert at any place
- associative containers take O(log(n))
    vector,deque takes O(n)
    list take O(1) to insert, O(n) to search
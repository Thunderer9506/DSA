# STL (standard Template Library)
The C++ Standard Template Library (STL) is a powerful collection of generic classes and functions that provide implementations of common data structures and algorithms. It is a fundamental part of the C++ Standard Library and is widely used for efficient and robust programming.

using this we can implement DS like
- vector
- queue
- stack
- set

## Vector
Normally in c++ while implementing array the size is fixed initially but vectors are dynamic, they can change their size depending upon insertion and deletion just like a dynamic array

### Syntax
```sh
# default 0
vector<int> vec;
```
```sh
vector<int> vec = {1,2,3};
```
```sh
# (size of array, value at each index)
vector<int> vec (3,0);
```

### Foreach Loop
Here the i is used for accessing value not the index
syntax:
```sh
for(int i: vec){
    # code
}
```

### functions
1. size()
   return size of array
2. push_back(x)
   it works like append function in python insert an element at the back and `x:` is the value
3. pop_back()
   delete an element at the back
4. front()
   return value at index 0
5. back()
   return value at index n-1
6. at()
   just an alternate way of writing vec[index]

## Static vs Dynamic Allocation
Static and dynamic memory allocation are two ways to manage memory in computer programming, differing primarily in when the memory is allocated and its mutability during program execution. Static allocation happens at compile time, creating fixed-size memory blocks that cannot change during runtime. Dynamic allocation, on the other hand, occurs during program execution, allowing for flexible memory size adjustments. 

# 136 Single Number Solution
- a condition has been given that we must solve this problem in a linear search
- we used bitwise operator because lets say we have [1,4,-1] then its sum will be equal to 4
- exactly xor operator work xor of same number will always be 0
- for ex 2^2 = 0
- similarly 4^1^2^1^2 = 4 because at the end 4^0 = 4

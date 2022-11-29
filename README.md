# Your First C++ Application

## Topics

- Introduction
  - Advantages of C++
- Anatomy of C++ Application
  - Compiling exercise
  - C++ build pipeline
- C++ keywords
  - Keyword examples
- Preprocessor Directives
  - Include
  - Macros
  - Conditional compilation
  - Exercise
- Basic I/O Statements
  - Exercise: Reading users details
- Functions
  - Passing by value and reference
  - Function Overloading
  - Default paramerter
  - Exercise function
  - Writing my own c++ application



## Introduction

### Advantages of C++

PPGL

- Perfomance: C++ brings us closer to the system's hardware which makes it easy to write efficient codes. The layer of abstraction is smaller compared to other languages.
- Portability: C++ can be cross compiled to various platforms
- General purpose: C++ is a general purpose programming language, you can use it to create virtually anything
- Large libraries: Abundant libraries to choose from with lots of open source repo.



## Anatomy of a c++ application

```c++
    #include <iostream>  // 1
  
    int main(){
        std::cout << "Hello world!";
        return 0;
    }   
    
```

One

```c++
  #include <iostream>
```

  The #include is a preprocessor directive which runs before the project is built. It simply says `copy here` as in copy the content in this referenced header into this project. This way, we can work with the functionalites in the header file named iostream.




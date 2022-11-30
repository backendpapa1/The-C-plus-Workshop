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

The Preprocessor directives

```c++
  #include <iostream>
```

  The #include is a preprocessor directive which runs before the project is built. It simply says `copy here` as in copy the content in this referenced header into this project. This way, we can work with the functionalites in the header file named iostream.



The Entry point
```c++
  int main()
```

This is the entry point and the main function of the application. Once all statements executes within this function, you app will exits


IO Statement

```c++
  std::cout << "Hello world!";
```
Because we included the standard stream which gives us functionalities such as printing to the console. we are able to print an `hello world` to the console.


Return and exit app

```c++
  return 0;
```

This signals that we are done with the current function and returns 0, stating the application ran without error



### Exercise: Compiling our first application

```
  check ./main.cpp
```


### C++ Build Pipeline

- Preprocessor stage: Goes through the code and resolves any preprocessor directives such as include, macros and many others.
- Compilation: Convert human readable files into object files. o or obj.
- Linker: Links all object files together to create the final executables.


## C++ Keywords

Keywords are reserved name, which you cannot use except for the purpose intended for.

Examples of these keywords include:

- Basic types: `bool char int`
- Program flow: `if else switch`
- Object scope: `class struct namespace`


```c++
    #include <iostream>
    #include <string>

    int main(){
        int myInt = 1;
        double myDouble = 1.5;
        char myChar = 'c';
        bool myBool = true;
        
        if(myBool){
            std::cout << "true";
        }else{
            std::cout << "false";
        }
        
        struct myStruct {
            int myInt = 1;
        };
    }   

```
#include <iostream>
#include <string>


int main() {

    int myInt = 1;
    bool myBool = false;
    char myChar = 'a';


    std::cout << "The size of a int is " << sizeof(myInt) << std::endl;
    std::cout << "The size of a bool is " << sizeof(myBool) << std::endl;
    std::cout << "The size of a char is " << sizeof(myChar) << std::endl;


    int customerAges[5];

    std::cout << &customerAges[0] << std::endl;
    std::cout << &customerAges[1] << std::endl;
    std::cout << &customerAges[2] << std::endl;
    std::cout << &customerAges[3] << std::endl;
    std::cout << &customerAges[4] << std::endl;
    std::cout << sizeof(customerAges) / sizeof (customerAges[0]) << std::endl;
    return 0;
}

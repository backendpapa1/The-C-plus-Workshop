#include <iostream>
#include <string>

class MyClassName {
    int myInt = 0;


    public:
        MyClassName() {
            std::cout << "Constructor class called \n";
            myPublicInt = 5;
        }
        int myPublicInt = 0;

    virtual ~MyClassName() {
        std::cout << "cleaning up class and exiting \n";
    }


};

struct myCoordinate {
    float x = 10.5;
    float y = 23.4;
};

int main() {

    MyClassName myClassName;
    myCoordinate mycoordinate;
//    mycoordinate.y = 10;
//    mycoordinate.x = 15;
    std::cout << myClassName.myPublicInt << std::endl;



    return 0;
}

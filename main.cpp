#include <iostream>
#include <string>
#include <vector>

std::vector<int> myArray1 {1,2,3,4,5,6,7};
std::vector<int> myVector (myArray1.begin(),myArray1.end());

void PrintVector(){
    for(int i = 0; i < myVector.size();i++){
        std::cout << myVector[i] <<std::endl;
    }
}

int main() {
    myVector.push_back(1);
    myVector.pop_back();
    myVector.insert(myVector.begin()+2,14);
    myVector.erase(myVector.end()-2);
    PrintVector();

    return 0;
}

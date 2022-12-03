#include <iostream>
#include <string>


int main() {

    std::string input;
    int number;

    std::cout << "Please enter a number: ";
    getline(std::cin,input);

    try {
        number = std::stoi(input);
    }
    catch (const std::invalid_argument & e) {
        std::cout << e.what() << "\n";
    }

    if(number < 10){
        std::cout << "The number you entered was less than 10! \n";
    }else if(number > 10) {
        std:: cout << "The number you entered was greater than 10! \n";
    }
    number < 10 ? std::cout << "The number you entered was less than 10! \n" : std:: cout << "The number you entered was greater than 10! \n";

    return 0;
}

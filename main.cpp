#include <iostream>
#include <string>

#define NAME_COUNT 3
int main() {

    std::string books[NAME_COUNT];


//    application loop
    bool isRunning = true;
    std::cout << "Welcome!" << std::endl;
    int i = 0;
    while(isRunning){
        std::cout << "-----------------------------------------------------------" << std::endl;

        std::cout << "Please select your actions" << std::endl;
        std::cout << "1 - Add a new Book" << std::endl;
        std::cout << "2 - Find a Book" << std::endl;
        std::cout << "3 - List all Book" << std::endl;
        std::cout << "-1 - Exit" << std::endl;
        std::cout << "-----------------------------------------------------------" << std::endl;

        std::string inputValue = "";
        int cinput = 0;
        std::cout << "Action: ";
        std::getline(std::cin,inputValue);

        cinput = std::stoi(inputValue);

        if(cinput != -1 && cinput<NAME_COUNT){
            if(cinput == 1){
                if((sizeof(books)/sizeof(books[0])) == i){
                    std::cout << "No available space to add new books" << std::endl;
                    continue;
                }
                std::cout << "Please enter your book title:  ";
                std::getline(std::cin,books[i]);;


                std::cout << "loading" << std::endl;
                std::cout << "loading." << std::endl;
                std::cout << "loading.." << std::endl;
                std::cout << "loading..." << std::endl;

                std::cout << "Book with index number " << i << " and title " << books[i] << " is saved"<< std::endl;
                i=i+1;
                continue;
            }
            if(cinput == 2 ){
                std::cout << "Please enter book index id: ";
                std::getline(std::cin,inputValue);
                cinput = std::stoi(inputValue);

                if(cinput >=0 && cinput < NAME_COUNT){
                    if(books[cinput] == ""){
                        std::cout << "Registry empty, pls try again" << std::endl;
                        continue;

                    }
                    std::cout << "Book is: " << books[cinput] << std::endl;
                    continue;
                }
            }

            if(cinput == 3){
                std::cout << "Listing all books in registry!" << std::endl;
                for(int j =0;j < NAME_COUNT; j++){
                    std::cout << j << " - " << books[j] << std::endl;
                }
                continue;
            }
        }else{
            isRunning = false;
        }
    }



    return 0;
}

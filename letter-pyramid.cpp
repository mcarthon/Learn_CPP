#include <iostream>
#include <string>

std::string input_string {};
signed short int substring_cut {1};
signed short int substring_index {0};

int main () {

    std::cout << "\nInput a string:" << std::endl; 

    std::getline(std::cin, input_string);

    if (input_string.length() == 0) {
        std::cout << "\nYou did not input any text.\n" << std::endl; 
    }
    else {
        while (substring_index < input_string.length());
            std::cout << input_string.at(substring_index);
            substring_cut += 1;
            substring_index += 1;
        
    }

}
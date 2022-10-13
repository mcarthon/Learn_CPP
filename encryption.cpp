#include <iostream>
#include <string>

std::string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.?"};
std::string key      {"ZYXWVUTSRQPONMLKJIHGFEDCBAzywxvutsrqponmlkjihgfedcba9876543210?."};
std::string secret_message {};
signed short int alphabet_index {};
std::string encrypted_message {};

int main() {

std::cout << "\nEnter your secret message:" << std::endl;

std::getline(std::cin, secret_message);

for (signed short int message_index {0}; message_index < secret_message.length(); ++message_index) {    
    alphabet_index = alphabet.find(secret_message[message_index]);

    if (alphabet_index == -1) {
        encrypted_message += secret_message[message_index];
    }
    else {
        encrypted_message += key.at(alphabet_index);
    }
} 

std::cout << "\nHere is your encrypted message:\n" << encrypted_message << "\n" << std::endl;

}
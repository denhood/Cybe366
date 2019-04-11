//simple Caesar Cipher
#include <iostream>
#include <string>
#include <sstream>

std::string safe_text_input()
{
    std::string input = "";
    getline(std::cin, input);
    return input;
}

int safe_int_input()
{
    std::string userInput = "";
    int output = 0;
    while (true)
    {
        userInput = safe_int_input();
        std::stringstream intStream(userInput);
        if (intStream >> output)
                    break;
        std::cout << "Invalid sequence" << std::endl;
    }
    return output;
}

int main(void)
{
    std::string inputText = "";
    int key = 0;
    //prompt user for input
    std::cout << "Enter plaintext: ";
    ///std::cin >> inputText;
    inputText = safe_text_input();

    //prompt user for key
    std::cout << "Enter key value between 0 and 25: ";
    ///std::cin >> key;
    key = safe_int_input();

    //calculate ciphertext
    std::string cipherText = "";
    for(int i = 0; i < inputText.length(); i++)
    {//string(1,(char)int(letter)+offset)
       cipherText.append( std::string(1,(char)int(inputText[i])+key) );
    }

    //output ciphertext
    std::cout << "Text:   " << inputText << std::endl;
    std::cout << "Key:    " << key << std::endl;
    std::cout << "Cipher: " << cipherText << std::endl;

    return 0;
}


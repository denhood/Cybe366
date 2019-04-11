#include <iostream>
#include <string>

using namespace std;

int main(void)
{

    string message = "hello";
    string output = "";
    int offset = 1;
    for(int i = 0; i < message.length(); i++)
    {
        char letter = message[i];
        cout << letter << " " << int(letter) << " " << (char)int(letter) <<endl;
        output.append(string(1,(char)int(letter)+offset));
    }
    cout << output;
    return 0;
}

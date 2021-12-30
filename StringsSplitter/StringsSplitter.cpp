#include <iostream>
#include <string>

using std::string;

int main()
{
    char ch;
    string str = "Fortune favors the bold";

    /*middle character*/
    ch = str[20];
    std::cout << str[11] << "\n" << std::endl;

    /*first half*/
    std::cout << str.substr(0, 11) << "\n" << std::endl;

    /*from the middle character to the end(not including the middle character*/
    std::cout << str.substr(12, 20) << "\n";

    return 0;
}

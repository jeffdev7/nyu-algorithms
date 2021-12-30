#include <iostream>
#include <string>
#include <cstring>

using std::string;

/*the task suggested this way but it was given a warning so that's why I changed it*/
//string firstword(string s) {  
//    
//    char ch;
//    ch = s[17];
//    std::cout<< s.substr(0, 4);
//    return 0;
//}

void firstword(string s) {

    char ch;
    ch = s[17];
    std::cout << s.substr(0, 4) << std::endl; // it prints only the first word
}

int main()
{
    firstword("the quick brown fox");
    return 0;
}

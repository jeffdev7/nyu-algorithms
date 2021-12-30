#include <iostream>
#include<string>

using std::string;

void remainingwords(string s) {

    s = s.substr(s.find_first_of(" \t") + 1); //it will remove the first word
    std::cout << s;
}

int main()
{
    remainingwords("the quick brown fox");
    return 0;
}
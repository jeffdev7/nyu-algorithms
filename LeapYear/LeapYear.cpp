#include <iostream>

int DESIRED_YEAR = 2000;
bool isleapyear(int yr);

int main()
{
    if (DESIRED_YEAR % 4 == 0) {
        isleapyear(DESIRED_YEAR);
        printf("Year %i was a leap year.\n", DESIRED_YEAR);
    }
    else {
        isleapyear(DESIRED_YEAR);
        printf("Year %i wasn't a leap year.\n", DESIRED_YEAR);
    }
    return 0;
}


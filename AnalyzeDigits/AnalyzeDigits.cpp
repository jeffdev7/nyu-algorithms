#include <iostream>

int analyzeDigits(int num, int& outSum) {

    int count, sum;
    int currDig;

    count = 0;
    sum = 0;
    while (num > 0) {
        currDig = num % 10;
        count++;
        sum += currDig;
        num = num / 10;
    }
    outSum = sum;
    return count;

}

int main()
{
            /*write a positive number and it counts how many digits there are and the sum of them*/
   
    int num, countDigits, sumDigits;
    while (true) {

        std::cout << "\nEnter a positive number: " << std::endl;
        std::cin >> num;
        countDigits = analyzeDigits(num, sumDigits);
        std::cout << num << " has " << countDigits << " digits and their sum is " << sumDigits << std::endl;

    }  
   
}
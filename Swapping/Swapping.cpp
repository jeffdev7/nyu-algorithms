#include <iostream>

void swap(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    //swapping number using reference
    
   int a = 3, b = 4;
   std::cout << "Before : a = " << a << " b = " << b << std::endl;
   swap(a, b);
   std::cout << "After: a = " << a << " b = " << b << std::endl;
   return 0;
}
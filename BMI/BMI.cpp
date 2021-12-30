#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    float weight, height, bmi;
    cout << "\tWeight (kg) / (Height(m)^2)\n" << endl;
    cout << " Please enter your weight in kilograms " << endl;
    cin >> weight;
    cout << " And your height in meters " << endl;
    cin >> height;
    bmi = weight / (height * height);
    cout << "\nYour BMI is " << round(bmi) << endl;

    if (std::isless(bmi, 18.5))
        cout << "Status: Underweight" << endl;
    else if (std::isgreaterequal(bmi, (25, 29)))
        cout << "Status: Overweight" << endl;
    else if (std::isgreater(bmi, 30))
        cout << "Status: Obese" << endl;
    else
        cout << "Status: Normal" << endl;
}

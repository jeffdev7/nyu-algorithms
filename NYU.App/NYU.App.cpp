#include <iostream>

const int MAX_CLASS_SIZE = 60;
int main()
{
	int numberOfStudents;
	int gradesList[MAX_CLASS_SIZE];
	int currGrade;
	int ind, sum;
	double average;

	std::cout << "Please enter the number of students in the class (no more than " << MAX_CLASS_SIZE << ")" << std::endl;
	std::cin >> numberOfStudents;

	//reading the grades
	std::cout << "Enter the students' grades (separated by a space): " << std::endl;
	for (ind = 0; ind < numberOfStudents; ++ind) {
		std::cin >> currGrade;
		gradesList[ind] = currGrade;
	}

	//calculating the average
	sum = 0;
	for (ind = 0; ind < numberOfStudents; ++ind) {
		sum += gradesList[ind];
	}
	average = (double)sum / (double)numberOfStudents; //casting SUM into DOUBLE
	std::cout << "The class average is " << average << std::endl;

	//print grades above the average
	std::cout << "The grades above the average are ";
	for (ind = 0; ind < numberOfStudents; ++ind) {
		if (gradesList[ind] > average) {
			std::cout << gradesList[ind] << " ";
		}
	}
	std::cout << std::endl;
	return 0;
	std::cin.get();
}
#include <iostream>
#include <string>

using std::cin;
using std::string;
using std::cout;
using std::endl;

int main() {
	string userName;
	int i;

	while (true) {
		cout << "\nEnter your name: " << endl;
		
		getline(cin, userName);

		for (i = userName.length() - 1; i >= 0; --i) {
			cout << userName[i];
		}	
		cout << endl;
	}	
}

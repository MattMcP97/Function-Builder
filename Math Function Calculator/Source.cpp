#include <iostream>
#include "Header.h"
using namespace std;
functionmodifier term;

int main() {
	functionmodifier term;
	term.enterfunction();

	float input;
	cout << "Enter a new input: ";
	cin >> input;
	cout << term.executefunction(input);

	bool again = 1;
	char choice;

	while (again) {

		cout << "Enter a new input: ";
		cin >> input;
		cout << term.executefunction(input);

		cout << "\na) New input\nb)Exit";
		cin >> choice;
		if (choice == 'b') {
			again = 0;
		}
		else {
			again = 1;
		}
	}

	return 0;
}
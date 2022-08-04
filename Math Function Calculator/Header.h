/*
This class allows user to enter and save a function.
A structure of two arrays is used to save operations and numbers.
Operations are coded as characters (a, b, c, d, e, f) and saved in the operations array.
The number associated with each array is saved in the numbers array
*/
#pragma once
#ifndef functionModifier

class functionmodifier {
private:
	//The structure where the function is saved
	struct savedfunction {
		char* operations = new char[99];
		float* numbers = new float[99];
	};
	savedfunction funct;
	//Used to save number of operations
	int numberofoperations;
public:
	//Allows user to enter and save function
	void enterfunction();
	//Allows user to execute function with an input value
	float executefunction(float input);
};
void functionmodifier::enterfunction() {
	std::cout << "This object allows the user to build and\n save functions as a series of math operations.\nSelect an operation (a-f) and corresponding value,\nor g to complete and save the function.\n";
	int counter = 0;
	bool again = 1;
	char operation;
	float number;
	while (again) {
		std::cout << "\na) Addition\nb) Subtraction\nc) Multiplication\nd) Division\ne) Power\nf) Root\ng) Save Function";
		std::cout << "\nSelect Operation: ";
		std::cin >> operation;
		if (operation == 'g') {
			break;
		}
		funct.operations[counter] = operation;
		std::cout << "\nEnter number: ";
		std::cin >> number;
		funct.numbers[counter] = number;
		counter++;
		void displayfunction(int counter);
		numberofoperations = counter;
	}
	return;
}
float functionmodifier::executefunction(float input) {
	float output;
	for (int i = 0; i < numberofoperations; i++) {
		char currentoperation = funct.operations[i];
		float currentnumber = funct.numbers[i];
		switch (currentoperation) {
		case 'a':
			input = input + currentnumber;
			break;
		case 'b':
			input = input - currentnumber;
			break;
		case 'c':
			input = input * currentnumber;
			break;
		case 'd':
			input = input / currentnumber;
			break;
		case 'e':
			input = pow(input, currentnumber);
			break;
		case 'f':
			input = pow(input, (1 / currentnumber));
			break;
	}
	}
	output = input;
	return output;
}

#endif // !functionModifier

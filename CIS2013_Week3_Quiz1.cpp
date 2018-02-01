#include <iostream>
using namespace std;

int main() {
	
		float num1;
		float num2;
		char op;

		cout << "enter a number" << endl;
		cin >> num1;
		cout << "enter another number" << endl;
		cin >> num2;
		cout << "enter either +, -, /, *" << endl;
		cin >> op;

		switch (op) 
		{
		case '+':
			cout << num1+num2 << endl;

			break;
			
		case '-':
			cout << num1-num2 << endl;

			break;

		case '/':
			cout << num1/num2 << endl;

			break;

		case '*':
			cout << num1*num2 << endl;
			break;

		default:
			cout << "incorrect value" << endl;

			break;
	}

		cout << "enter a number" << endl;
		cin >> num1;
		cout << "enter another number" << endl;
		cin >> num2;
		cout << "enter either +, -, /, *" << endl;
		cin >> op;




	return 0;
}
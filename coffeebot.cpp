#include <iostream>
#include <string>
using namespace std;

int main() {
	string name, wait;
	int answer = 0;
	cout << "Hi, Welcome to CoffeeboT!\n\n";
	cout << "What is your name? \n\n";
	cin >> name;
	cout << "\nWhat can I get started for you today, " << name << " ?\n";
       	cout << "Here are our four coffees: \n";
	cout<<"1. Espresso\t\n"<<endl;
	cout<<"2. Americano\t\n"<<endl;
	cout<<"3. Cafe Latte\t\n"<<endl;
	cout<<"4. Killer Cali Mocha\t\n"<< endl;
	cin >>answer;

	switch (answer)
	{
		case 1:
		cout << "Espresso, coming right up!  " << endl;
		break;
		case 2:
		cout << "Americano, coming right up! " << endl;
		break;
		case 3:
		cout << "Cafe Latte, coming right up! " << endl;
		break;
		case 4:
		cout << "Killa Cali Mocha, coming right up! " << endl;
		break;
		default:
		cout << "I'm sorry could you repeat that I only understand numbers, specifically 1-4.  Thank you.\n";
	}



	cout << "enter any key to terminate";
	cin >> wait;

	return 0;
}

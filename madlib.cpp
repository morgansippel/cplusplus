/**
    CS-11 Asn 2, madlibs.cpp
    Purpose: Improve math and variable skills.
    @author Morgan
    @version 1.0 Date Completed
*/


#include <iostream>
#include <string>
using namespace std;


int main() {

	string first, last, food, adjective, color, animal, secondadjective, wait;
  int whole = 0;
	double number = 0;

	cout << "Welcome to Mad Libs!" << endl;

	cout << "Enter your first name: " << first << endl;
	cin >> first;

	cout << "Enter your instructor's last name: " << last << endl;
	cin >> last;

	cout << "Enter a food: " << food << endl;
	cin >> food;

	cout << "Enter a number between 100 and 120:  " << number << endl;
	cin >> number;

	cout << "Enter an adjective " << adjective << endl;
	cin >> adjective;

	cout << "Enter a color: " << color << endl;
	cin >> color;

	cout << "Enter an animal: " << animal << endl;
	cin >> animal;

	cout << "Enter another adjective: " <<secondadjective << endl;
	cin >> secondadjective;

	cout << "Enter a whole number: "<< whole << endl;
	cin >> whole;

/**
   Dear Instructor [Instructor's Last Name]
I am sorry that I am unable to turn in my homework today. First I ate a rotten [food], which made me turn [color] and very sick.
I came down with a fever of [number]. Next, my [adjective] pet [animal] must have smelled the remains of the [food] on my homework,
because my pet ate my homework.
I knew I should not have ordered that [adjective] [animal] on eBay!
I am beginning to feel [second adjective] and was hoping you would accept my homework only [whole number] days late.
Sincerely,
[Your name]
*/


	cout << "Dear Instructor " << last << endl;
	cout << "I am sorry that I cannot turn in my homework today. First, I ate a rotten " << food;
	cout << " ,which made me turn" << color << "and very sick. I came down with a fever of " << number << endl;

  cout << "Next, my " << adjective;
	cout << " pet " << animal;
	cout << " must have smelled the remains of the" << food;
	cout << " on my homework, because my pet ate my homework." << endl;

  cout << "I knew I should not have ordered that" << adjective << endl;
	cout << animal << "on eBay!" << endl;

	cout << "I am beginning to feel " << secondadjective;
	cout << "and am hoping you will accept my homework only " << whole;
	cout << " days late."  << endl;

	cout << "Sincerely," << endl;

	cout << first << endl;

	cout << " " << wait << endl;
	cin >> wait;

  return 0;

}

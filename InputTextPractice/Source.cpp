//12
#include <iostream>

#include <fstream>
#include <string>
#include "BaseClass.h"
using namespace std;

class Person {
public:
	void introduce() {
		cout << "hello from person" << endl;
	}
};

class Student : public Person {
public:
	void introduce() {
		cout << "hello from student" << endl;
	}
	
};
class Farmer : public Person {
public:
	void introduce() {
		cout << "hello from farmer" << endl;
	}

};/*
int main() {
	ifstream inFS;     // Input file stream
	int fileNum1 = 0;  // Data value from file
	int fileNum2 = 0;  // Data value from file
	
					   // Try to open file
	cout << "Opening file myfile.txt." << endl;

	inFS.open("myfile.txt");
	if (!inFS.is_open()) {
		cout << "Could not open file myfile.txt." << endl;
		return 1; // 1 indicates error
	}

	// Can now use inFS stream like cin stream
	// myfile.txt should contain two integers, else problems
	cout << "Reading two integers." << endl;
	inFS >> fileNum1;
	inFS >> fileNum2;
	cout << "Closing file myfile.txt." << endl;
	inFS.close(); // Done with file, so close it

				  // Ouput values read from file
	cout << "num1: " << fileNum1 << endl;
	cout << "num2: " << fileNum2 << endl;
	cout << "num1 + num2: " << (fileNum1 + fileNum2) << endl;
	*/

	/*
	ofstream outFS;
	int ago = 50;
	string one = " Henshin.";
	outFS.open("myfile.txt");
	if (!outFS.is_open()) {
		cout << "Error opening file" << endl;
	}
	outFS << ago << one;

	outFS.close();
	*/
	/*
	BaseClass b1;
	b1.GetName("Zackary");
	//b1.PrintAll();

	DerivedClass d1;
	d1.GetName("Ariel Morillo");
	d1.PrintAll();
	*/
	/*
	Person ariel;
	Student zack;
	Farmer john;

	ariel.introduce();
	zack.introduce();
	john.introduce();
	
return 0;
*/
void Ayo(int *p) {

	cout << p << endl;
}
int main(){

	int *a;
	
	Ayo(&a);
	cout << &a << endl;
	//cout << *0018FD80 << endl;

	return 0;


}
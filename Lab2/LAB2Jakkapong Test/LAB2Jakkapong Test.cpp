// LAB2Jakkapong Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello Lab 2\n";
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


 /*#include <iostream>
#include <string>
using namespace std;

int main() {
	int age;
	float height;
	string name;
	string stdid;
	float gpa;
	cout << "Enter Student ID: ";
	cin >> stdid;
	cout << "Enter Name: ";
	cin >> name;
	cout << "Enter Age: ";
	cin >> age;
	cout << "Enter Height (cm): ";
	cin >> height;
	cout << "Enter GPA: ";
	cin >> gpa;

	cout << "Student Profile" << endl;
	cout << "-----------------------" << endl;
	cout << "Student ID: " << stdid << endl;
	cout << "Name: " << name << endl;
	cout << "GPA : " << gpa << endl;
	cout << "Age : " << age << endl;
	cout << "Height: " << height << " cm" << endl;

	return 0;
}*/

#include <iostream>
#include <string>
using namespace std;
int main() {
	string itemName;
	float price;
	int qty;
	float total;
	// ?????????????
	cout << "Enter item name: ";
	cin >> itemName;
	cout << "Enter price: ";
	cin >> price;
	// ???? ????
	cout << "Enter quantity: ";
	cin >> qty;
	// ? ???????????
	total = price * qty;
	// ???????????
	cout << endl;
	cout << "------- Receipt -------" << endl;
	cout << "Item: " << itemName << endl;
	cout << "Price: " << price << endl;
	cout << "Quantity: " << qty << endl;
	cout << "Total: " << total << endl;
	cout << "------------------------" << endl;
	return 0;
}
#include "Definitions.h"
#include <iostream>
using std::cin;
using std::cout;

void readDesk(Desk& D) {
	cout << "Characteristics of desk\n";
	cout << "Height = ";
	cin >> D.height;
	cout << "Width = ";
	cin >> D.width;
	cout << "Length = ";
	cin >> D.length;
	cout << "Color = ";
	cin >> D.color;
}
void readLaptop(Laptop& L) {
	cout << "Characteristics of laptop\n";
	cout << "Inches = ";
	cin >> L.Inches;
	cout << "Memory = ";
	cin >> L.Memory;
	cout << "Brand = ";
	cin >> L.brand;
}

void printDesk(const Desk D){
	cout << "Characteristics of desk\n";
	cout << "Height = " << D.height << '\n';
	cout << "Width = " << D.width << '\n';
	cout << "Length = " << D.length << '\n';
	cout << "Color = " << D.color << '\n';
}
void printLaptop(const Laptop L) {
	cout << "Characteristics of laptop\n";
	cout << "Inches = " << L.Inches << '\n';
	cout << "Memory = " << L.Memory << '\n';
	cout << "Brand = " << L.brand << '\n';
}

Laptop createDefaultLaptop() {
	Laptop L;
	L.Inches = 0;
	L.Memory = 0;
	L.brand[0] = '\0';
	return L;
}
Desk createDefaultDesk() {
	Desk D;
	D.height = 0;
	D.width = 0;
	D.length = 0;
	D.color[0] = '\0';
	return D;
}

void readRoom(Room& R) {
	readDesk(R.desk);
	readLaptop(R.laptop);
}
void printRoom(const Room R) {
	cout << '\n';
	printDesk(R.desk);
	cout << '\n';
	printLaptop(R.laptop);
}

/*Inputs
3 
4
5 
black
15.6
16
Acer
*/
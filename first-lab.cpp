#include <iostream>
#include "class_square.hpp"

int main(){
	using namespace std;
	float n;

	cout << "Enter the side lengh of the square: ";
	cin >> n;

	if (n < 0) {
		cout << "Side lengh cannot be negative";
	}
	else {
		sq::square a(n);
		cout << "Area of square: " << a.area_of_square() << endl;
		cout << "Perimeter of square: " << a.perimeter() << endl;
		cout << "Length os square: " << a.lengh_of_diagonal() << endl;
	}
}
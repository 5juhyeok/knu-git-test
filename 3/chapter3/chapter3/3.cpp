#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	int innerRadius;
	int outerRadius;
	double getArea();
};

double Circle::getArea() {

	return (3.14 * outerRadius * outerRadius) - (3.14 * innerRadius * innerRadius );
}

int main() {
	Circle donut;
	donut.outerRadius = 1;
	donut.innerRadius = 0;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza;
	pizza.outerRadius = 30;
	pizza.innerRadius = 0;
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;

	Circle donut_two;
	donut_two.outerRadius = 1;
	donut_two.innerRadius = 0;
	double k = donut_two.getArea();
	cout << "donut_two 면적은 " << k*2 << endl;
}
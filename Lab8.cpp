//This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
#include "Shapes.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include <iostream>
using namespace std;

char getSelection(void);

char getSelection(void)
{
	char c;
	cout << endl;
	cout << "Calculate Area" << endl;
	cout << "1) Rectangle" << endl;
	cout << "2) Triangle" << endl;
	cout << "3) Circle" << endl;
	cout << "0) Exit" << endl;
	cout << "Selection: ";
	cin >> c;
	cout << endl;
	return c;
}

int main(void)
{
	char c = '1';
	Shape *s = 0;
	while(c != '0')
	{
		c = getSelection();
		switch(c)
		{
			case '1':
				s = new Rectangle();
				break;
			case '2':
				s = new Triangle();
				break;
			case '3':
				s = new Circle();
				break;
			default:
				break;
		}
		if(s)
		{
			s->getParameters();
			s->calcArea();
			s->printArea();
			delete s;
			s = 0;
		}
	}
	cout << "Thank you for using the calculator." << endl << endl;
	return 0;
}

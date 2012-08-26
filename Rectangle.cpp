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
#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle():Shape()
{
	this->width = this->height = 0;
	return;
}

void Rectangle::getParameters(void)
{
	cout << "Rectangle:" << endl;
	cout << "Enter height: ";
	cin >> this->height;
	cout << "Enter width : ";
	cin >> this->width;
	return;
}

void Rectangle::calcArea(void)
{
	this->area = this->height * this->width;
	return;
}

void Rectangle::printArea(void)
{
	cout << "Area of rectangle is " << this->area << endl;
	return;
}

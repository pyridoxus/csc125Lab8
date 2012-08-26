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
#include "Triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle():Shape()
{
	this->base = this->height = 0;
	return;
}

void Triangle::getParameters(void)
{
	cout << "Triangle:" << endl;
	cout << "Enter height: ";
	cin >> this->height;
	cout << "Enter base : ";
	cin >> this->base;
	return;
}

void Triangle::calcArea(void)
{
	this->area = 0.5 * this->height * this->base;
	return;
}

void Triangle::printArea(void)
{
	cout << "Area of triangle is " << this->area << endl;
	return;
}

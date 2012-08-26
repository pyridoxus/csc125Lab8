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
#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shapes.h"
#define PI 3.141592654

class Circle: public Shape
{
	public:
		Circle();
		void getParameters(void);
		void calcArea(void);
		void printArea(void);
	private:
		float radius;
};

#endif

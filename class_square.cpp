#include "class_square.hpp"
#include <math.h>
namespace sq {
		square::square(float side) {
			this->side_lengh = side;
		}

		square::~square() {

		}

		float square::area_of_square() {
			return side_lengh * side_lengh;
		}

		float square::perimeter() {
			return side_lengh * 4;
		}

		double square::lengh_of_diagonal() {
			return sqrt(side_lengh * 2);
		}
}
#pragma once
namespace sq {
	class square {

		float side_lengh;


	public:
		square(float side);

		~square();

		float area_of_square();

		float perimeter();

		double lengh_of_diagonal();
	};
}
#include <iostream>

int main() {
	//Euler problem 5
	// 19*20 means divisible by 2,4,5,10
	// start high: 18,17,16,15,14,13,12,11
	// what's a better way to determine used divisors....
	int test = 19*20;
	int smallest = 0;
	int count = 0;
	for (int i = 1; i <= test*i; ++i) {
		count = 0;
		for (int j = 18; j >= 11; --j) {
			if ((test*i)%j == 0)
				count++;
		}
		if (count == 8) {
			smallest = test*i;
			break;
		}
	}
	std::cout << "Smallest number divisible is " << smallest << std::endl;
	return 0;
}
 

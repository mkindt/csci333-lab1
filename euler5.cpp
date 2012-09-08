#include <iostream>

int main() {
	//Euler problem 5
	// 9*10 means divisible by 2,3,5
	// 8 includes 4, 7...
	int test = 9*10;
	int smallest = 0;
	int count = 0;
	for (int i=1; i<=test*i; ++i) {
		count = 0;
		for (int j = 8; j>=7; --j) {
			if ((test*i)%j == 0)
				count++;
		}
		if (count == 2) {
			smallest = test*i;
			break;
		}
	}
	std::cout << "Smallest number divisible is " << smallest << std::endl;
	return 0;
}
 

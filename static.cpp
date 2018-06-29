#include <iostream>

// Function declaration
void func(void);

static int count = 10; /* Global variable */

main() {
	while (count--) {
		func();
	}

	return 0;
}

// Function definition
void func(void) {
	static int i = 5; // local static variable
	i++;
	std::cout << "i is " << i;
	std::cout << " and count is " << count << std::endl;
}
/* output */

/*

i is 6 and count is 9
i is 7 and count is 8
i is 8 and count is 7
i is 9 and count is 6
i is 10 and count is 5
i is 11 and count is 4
i is 12 and count is 3
i is 13 and count is 2
i is 14 and count is 1
i is 15 and count is 0

*/
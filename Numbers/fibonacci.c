#include <stdio.h>
#include <stdlib.h>

/**
* Generates and prints the fibonacci numbers up to n
* Works up to 10 ^ 6
* Running time O(n)
*/
void genFibNumbers(const unsigned int n) {

	unsigned long fibs[n];
	unsigned int i = 0;

	fibs[0] = 0;
	fibs[1] = 1;

	if (n > 0) {
		printf("0\n");
	}
	if (n > 1) {
		printf("1\n");
	}

	for (i = 2; i < n; i++) {
		fibs[i] = fibs[i-1] + fibs[i-2];
		printf("%lu\n", fibs[i]);
	}
}


main(int argc, char ** argv) {
	genFibNumbers(atoi(argv[1]));
}
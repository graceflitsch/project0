// This is similar to Java's "import" statement
#include <stdio.h>

int main(void) {
	// The "\n" means "start a new line"
	printf("Hello, world!\n");

	for (int i = 10; i > 0; i--) {
		// "%d" means "insert a decimal (base-10) int here"
		// Notice no "\n" - this will continue on one line...
		printf("%d! ", i);
	}
	// ... until we reach the "\n" here.
	printf("Blastoff\n");

	return 0;
}

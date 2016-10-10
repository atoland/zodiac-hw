/*Adam Toland*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void) {

	srand(getpid());

	/*Part 1 Code*/
	int num1 = rand();

	printf("Num1 is: %d\n", num1);



	return 0;
}

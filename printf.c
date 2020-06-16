#include <stdio.h>

int main(void) {
	
	printf("int = %d\n", -12);
	printf("unsigned = %u\n", 12);
	
	int age = 20, id = 123456789, score = 95;
	int age2 = 100, id2 = 56789584, score2 = 3;
	
	printf(" age | id | scr \n");
	printf(" %3d | %09d | %3d \n", age, id, score);
	printf(" %3d | %09d | %3d \n", age2, id2, score2);
	
	printf("size of int = %lu\n", (long unsigned) sizeof(12));
	return 0;
}

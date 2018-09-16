#include <stdio.h>

int main() {
	unsigned int big = 3000000000;
	char * pointer = & big;
	printf("%li\n", pointer);
	printf("%x\n", big);
	for(int i = 0; i < 4; i++) {
		printf("%hhx\n", * (pointer + i));
	}
	printf("%li\n", pointer);
	printf("%x\n", big);
	for(int i = 0; i < 4; i++) {
		* (pointer + i) += 1;
	}
	printf("%li\n", pointer);
	printf("%x\n", big);
	for(int i = 0; i < 4; i++) {
		* (pointer + i) += 16;
	}
	printf("%li\n", pointer);
	printf("%x\n", big);

}
#include "lib.h"

int main() {
	char text[] = "3when76 you're 123 1 r567ead4y 548 , 9 come &677 get itÎ";
	char *ptext = text;

	int digitCount = countOfDigits(ptext);/**масив з кількістью чисел в тексті*/

	int *arr = (int*) malloc (digitCount * sizeof(int));/**масив з числами, що є в тексті*/

	fillArrayByDigits(arr, ptext, digitCount);
	
	free(ptext);
	free(arr);

	return 0;
}

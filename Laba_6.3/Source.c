#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define AMOUNT
#define MAKE_MATRIX(a, name, amount) a name##[amount]; 
int amount_of_words(char arr[100]) {
	char limits[] = { " " };
	char* ptr = strtok(arr, limits);
	int amount;
	for (amount = 0; ptr != NULL; amount++) {
		ptr = strtok(NULL, limits);
	}
	return amount;
}
int max_value(int arr[10]) {
	int max = arr[0];
	for (int i = 0; i < 10; i++) {
		if (arr[i] >= max) {
			max = arr[i];
		}
	}
	return max;
}
int main() {

#ifdef MAX
	MAKE_MATRIX(int, arr, 10);
		for (int i = 0; i < 10; i++) {
			arr[i] = rand();
			printf("%d ", arr[i]);
	}
	printf("\n");
	int max;
	max = max_value(arr);
	printf("%d", max);

#endif
#ifdef AMOUNT
	MAKE_MATRIX(char, arr, 100);
	int amount;
	gets(arr);
	amount = amount_of_words(arr);
	printf("Amount of words: %d", amount);
#endif
}
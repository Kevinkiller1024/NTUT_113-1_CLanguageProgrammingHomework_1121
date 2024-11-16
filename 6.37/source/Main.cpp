#include <stdio.h>
#include <stdlib.h>

int recursiveMaximum(int area[],int size);

int main() {
	int area[] = { 5,6,89,4,78,24,45,21,12,14,53 };
	int size = sizeof(area) / sizeof(area[0]);
	printf("原陣列為:");
	for (int i = 0; i < size; i++) {
		printf("%d ", area[i]);
	}
	int max = recursiveMaximum(area, size);
	printf("\n最大值為%d\n\n", max);
	system("pause");
	return 0;
}

int recursiveMaximum(int area[],int size) {
	if (size == 1)
		return area[0];

	int max = recursiveMaximum(area, size - 1);

	if (area[size - 1] > max)
		return area[size - 1];
	else
		return max;
}
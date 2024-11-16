#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int binarySearch(int array[], int left, int right, int key);

int main() {
    int array[SIZE] = { };
    int goal,i;

    for (i = 0; i < 10; i++) {
        array[i] = i + 1;
    }
    printf("��J�n����Ӹ��X(1~10): ");
    scanf_s("%d", &goal);

    int result = binarySearch(array, 0, SIZE - 1, goal);

    if (result != -1) {
        printf("���Ʀb�}�C����%d��\n", result);
    }
    else {
        printf("�d�L����\n");
    }
    system("pause");
    return 0;
}

int binarySearch(int array[], int left, int right, int goal) {
    int middle = left + (right - left) / 2;

    if (array[middle] == goal) {
        return middle;
    }
    if (left > right) {
        return -1;
    }
    else if (array[middle] > goal) {
        return binarySearch(array, left, middle - 1, goal);
    }
    else {
        return binarySearch(array, middle + 1, right, goal);
    }
}
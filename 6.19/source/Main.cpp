#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COUNT 36000

void RandomDice(int area[COUNT]);
void Statistics(int area1[COUNT],int area2[COUNT]);
void display(int area_result[11]);
int point[11] = { 0 };
int count_point[COUNT] = { 0 };

int main() {
	int dice1[COUNT] = { 0 };
	int dice2[COUNT] = { 0 };
	for (int i = 2; i <= 12; i++) {
		point[i - 2] = i;
	}
	srand(time(NULL));
	RandomDice(dice1);
	RandomDice(dice2);
	Statistics(dice1, dice2);
	display(count_point);
	system("pause");
	return 0;
}

void RandomDice(int area[COUNT]) {
	int DicePoint;
	int i;

	for (i = 0; i < COUNT; i++) {
		do {
			DicePoint = (rand() % 6) + 1;
		} while (area[i] != 0);
		area[i] = DicePoint;
	}
}

void Statistics(int area1[COUNT], int area2[COUNT]) {
	int Sum[COUNT];
	int i,j;

	for (i = 0; i < COUNT; i++) {
		Sum[i] = area1[i] + area2[i];
		for (j = 0; j < 11; j++) {
			if (Sum[i] == point[j]) {
				count_point[j]++;
			}
		}
	}
}

void display(int area_result[COUNT]) {
	int i;

	for (i = 0; i < 11; i++){
		printf("%2d �X�{�F %4d ��\n",i + 2, area_result[i]);
	}
	printf("7�I���n�X�{�`�ƪ�1/6�� ������%.3f��\n", (float)1 / 6);
	printf("�o���X�{�F %d�� ���`�ƪ�%.3f��\n", area_result[5], ((float)area_result[5]/36000));
}
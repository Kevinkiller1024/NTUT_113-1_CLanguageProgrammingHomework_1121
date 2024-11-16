#include <stdio.h>

void stringReverse(char *str) {
	if (*str == '\0') {
		return; // �J��r�굲���A����j
	}
	stringReverse(str + 1); // ���j�I�s�A���V�U�@�Ӧr�� ()
	putchar(*str); // �ϦV���L�r��
}

int main() {
	char str[] = "Hello, World!";
	printf("��r�ꬰ: %s\n", str);
	printf("�A�˫ᬰ: ");
	stringReverse(str);
	printf("\n");
	return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
#define StringSize 20

void stringReverse(char string1[]);

int main() {
	char InputString[StringSize];

	printf("�п�J�n�A�˪��y�l(20�r��) : ");
	scanf("%s", InputString);
	stringReverse(InputString);
	system("pause");
	return 0;
}

void stringReverse(char string1[]) {
	int i;
	int count;
	char temp;

	for (i = StringSize; i > 0; i--) {
		if (string1[i] == '\0') {
			count = i - 1;
			break;
		}
	}
	printf("\n��r�ꬰ %s\n", string1);

	for (i = 0; i <= (count/2); i++) {
		temp = string1[i];
		string1[i] = string1[count - i];
		string1[count - i] = temp;
	}
	printf("�r���A�˵��G�� %s\n\n", string1);
}
*/
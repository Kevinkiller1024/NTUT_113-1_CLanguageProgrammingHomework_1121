#include <stdio.h>

void stringReverse(char *str) {
	if (*str == '\0') {
		return; // 遇到字串結尾，停止遞迴
	}
	stringReverse(str + 1); // 遞迴呼叫，指向下一個字元 ()
	putchar(*str); // 反向打印字元
}

int main() {
	char str[] = "Hello, World!";
	printf("原字串為: %s\n", str);
	printf("顛倒後為: ");
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

	printf("請輸入要顛倒的句子(20字內) : ");
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
	printf("\n原字串為 %s\n", string1);

	for (i = 0; i <= (count/2); i++) {
		temp = string1[i];
		string1[i] = string1[count - i];
		string1[count - i] = temp;
	}
	printf("字串顛倒結果為 %s\n\n", string1);
}
*/
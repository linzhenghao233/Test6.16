#include <stdio.h>

int main(void) {
//1.
	//char ch[26] = {0};
	//int i;

	//for (i = 0; i < 26; i++) {
	//	ch[i] = 'a' + i;
	//	printf("%2c", ch[i]);
	//}

//2.
	//int i, j;

	//for (i = 0; i < 5; i++) {
	//	for (j = 0; j <= i; j++) {
	//		printf("$");
	//	}
	//	printf("\n");
	//}

//3.
	//int i, j;

	//for (i = 0; i < 6; i++) {
	//	for (j = 0; j <= i; j++) {
	//		printf("%c", 'F' - j);
	//	}
	//	printf("\n");
	//}

//4.
	//int i, j, k = 0;

	//for (i = 0; i < 6; i++) {
	//	for (j = 0; j <= i; j++, k++) {
	//		printf("%c", 'A' + k);
	//	}
	//	printf("\n");
	//}

//5.
	int i, j, k, m;
	char ch;

	printf("请输入一个大写字母：_\b");
	scanf_s("%c", &ch, 1);

	for (i = 'A'; i <= ch; i++) {
		for (j = 0; j < ch - i; j++) {
			printf(" ");
		}
		for (k = 'A'; k <= i; k++) {
			printf("%c", k);
		}
		for (m = 1; m <= k - 'B'; m++) {
			printf("%c", k - m - 1);
		}
		printf("\n");
	}

	return 0;
}
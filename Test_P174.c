#include <stdio.h>
#include <math.h>

double db(double db1, double db2);

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
	//int i, j, k, m;
	//char ch;

	//printf("������һ����д��ĸ��_\b");
	//scanf_s("%c", &ch, 1);

	//for (i = 'A'; i <= ch; i++) {
	//	for (j = 0; j < ch - i; j++) {
	//		printf(" ");
	//	}
	//	for (k = 'A'; k <= i; k++) {
	//		printf("%c", k);
	//	}
	//	for (m = 1; m <= k - 'B'; m++) {
	//		printf("%c", k - m - 1);
	//	}
	//	printf("\n");
	//}

//6.
	//int i, j;

	//printf("����һ��������");
	//scanf_s("%d", &i);
	//printf("������һ�������������");
	//scanf_s("%d", &j);

	//for (; i <= j; i++) {
	//	printf("������%d��ƽ����%d��������%d\n", i, i * i, i * i * i);
	//}

//7.
	//int i;
	//char ch[20] = { 0 };

	//printf("������һ�����ʣ�");
	//scanf_s("%s", &ch, 20);
	//for (i = strlen(ch); i >= 0; i--) {
	//	printf("%c", ch[i]);
	//}

//8.
	//double db1, db2;

	//printf("������������������");
	//int status = scanf_s("%lf %lf", &db1, &db2);
	//while (status == 2) {
	//	printf("����֮���������֮���Ľ��Ϊ��");
	//	printf("%lf\n", (db1 - db2) / (db1 * db2));
	//	printf("������������������");
	//	status = scanf_s("%lf %lf", &db1, &db2);
	//}
	//printf("��������ȷ�����֣�");

//9.
	//double db1, db2;

	//printf("������������������");
	//int status = scanf_s("%lf %lf", &db1, &db2);
	//while (status == 2) {
	//	printf("����֮���������֮���Ľ��Ϊ��");
	//	db(db1, db2);
	//	printf("������������������");
	//	status = scanf_s("%lf %lf", &db1, &db2);
	//}
	//printf("��������ȷ�����֣�");

//10.
	//int num_min, num_max, status;
	//int sum = 0;

	//printf("������һ������������һ������������");
	//scanf_s("%d %d", &num_min, &num_max);
	//status = num_max > num_min;
	//while (status == 1) {
	//	for (sum = 0; num_min <= num_max; num_min++) {
	//		sum += num_min * num_min;
	//	}
	//	printf("���޵����޷�Χ������������ƽ���ͣ�%d\n", sum);
	//	printf("������һ������������һ������������");
	//	scanf_s("%d %d", &num_min, &num_max);
	//	status = num_max > num_min;
	//}
	//printf("������");

//11.
	//int int_arr[10];
	//int i;

	//printf("������8��������");
	//for(i = 0; i < 8; i++)
	//	scanf_s("%d", &int_arr[i]);
	//for(i = 7; i >= 0; i--)
	//	printf("�����ӡ��%d ", int_arr[i]);

//12.
	//int num, i;
	//double sum1, sum2;

	//printf("������Ҫ�����������");
	//scanf_s("%d", &num);
	//while (num > 0) {
	//	for (i = 1, sum1 = 0, sum2 = 0; i <= num; i++) {
	//		sum1 += 1.0 / i;
	//		if (i % 2 == 0) {
	//			sum2 -= 1.0 / (double)i;
	//		}
	//		else {
	//			sum2 += 1.0 / (double)i;
	//		}
	//	}
	//	printf("��һ���������е�ǰ%d�����֮����%lf\n", num, sum1);
	//	printf("�ڶ����������е�ǰ%d�����֮����%lf\n", num, sum2);
	//	printf("������Ҫ�����������");
	//	scanf_s("%d", &num);
	//}
	
//13.
	//int arr[10], i, j = 0;
	//
	//for (i = 0; i < 8; i++) {
	//	arr[i] = pow(2, i + 1);
	//}
	//do {
	//	printf("%d ", arr[j]);
	//	j++;
	//} 
	//while (j < 8);

//14.
	//double arr1[10], arr2[10], sum;
	//int i, j;

	//printf("������8������");
	//for (i = 0; i < 8; i++) {
	//	scanf_s("%lf", &arr1[i]);
	//}
	//for (i = 0; i < 8; i++) {
	//	for (j = 0, sum = 0; j <= i; j++) {
	//		sum += arr1[j];
	//	}
	//	arr2[i] = sum;
	//}
	//for (i = 0; i < 8; i++) {
	//	printf("%lf	", arr1[i]);
	//}
	//printf("\n");
	//for (i = 0; i < 8; i++) {
	//	printf("%lf	", arr2[i]);
	//}

//15.
	

	return 0;
}

double db(double db1, double db2) {
	printf("%lf\n", (db1 - db2) / (db1 * db2));

	return 0;
}
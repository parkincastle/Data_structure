// �迭�� �������� ����
#include <stdio.h>

void printAry(int ary[], int size) {
	for (int i = 0; i < 5; i++) {
		printf("%d", ary[i]);
	}
}

void inputAry(int* ary, int size) {

	for (int i = 0; i < size; i++) {
		printf("%d��° �迭 ����� �� �Է� : ", i + 1);
		scanf_s("%d", &ary[i]);		//ary == �����ּ�, ary[i] == i��° �迭 ���{��}
									//ary[i] = *(ary + i)	//&ary[i] == (ary + i)

	}
}

int main() {

	/// example 01.
	int ary[5] = { 1, 2, 3, 4, 5 }; // ���� -5ĭ¥�� �迭
	*ary = 10; //ary[0] = 10;�� ���� ����.
				//ary�� �迭�� ���� �ּҰ��� ������ �����Ƿ�
	*(ary + 1) = 20;	//ary[1] = 20;// 109�� �ƴ϶� 112
	
	for (int i = 0; i < 5; i++) {
		printf("%d", ary[i]);
		printf("%d", *(ary + i));
	}

	/// example 02
	int funcAry[5] = { 1, 2, 3, 4, 5 };
	int size = sizeof(funcAry) / sizeof(funcAry[0]);

	printAry(funcAry, size);
	inputAry(funcAry, size);
	printAry(funcAry, size);





}
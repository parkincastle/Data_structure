#include <stdio.h>

#define MAX_SIZE 100

typedef int ArrayList;	//�迭��� ����Ʈ�� ������ ���ִ� �ִ��� ������ ����
typedef int element;	// ������ ���� ��� ����Ʈ�� ArrayList��� �̸�����

ArrayList list[MAX_SIZE];
int num_of_data = 0;

// 0. �ʱ�ȭ
void Init(ArrayList list[]) {
	num_of_data = 0;
}

// 1. ����
void Insert(ArrayList list[], element inputData) {
	// 1. ����Ʈ�� ������ ������� Ȯ���Ѵ�.
	// 1-1. ������� ������ ����
	// 1-2. ����ϸ� �����͸� �־���
	if (num_of_data == MAX_SIZE) { //	1-1
		return -1;
	}
	else {
		list[num_of_data] = inputData;
		num_of_data += 1;

	}
}

// 2. ����
void Delete(ArrayList list[], element delData) {

	if (num_of_data == 0) {
		printf("����Ʈ�� �����Ͱ� ����.\n");
		return -1;
	}
	
	for (int i = 0; i < num_of_data; i++) {	// Ž���� ���� �ݺ���
		if (list[i] == delData) {
			for (int j = i; j < num_of_data; j++) {
				list[j] = list[j + 1];
			}	// ����Ʈ�� ��������(�����Ͱ� ���������� ����)�� �����ֱ� ����
			num_of_data--;
			i--;
		}
	}
}

// 2. ����
void Change(ArrayList list[], element targetdata, element changeData) {

	if (num_of_data == 0) {
		printf("����Ʈ�� �����Ͱ� ����.\n");
		return -1;
	}

	for (int i = 0; i < num_of_data; i++) {	// Ž���� ���� �ݺ���
		if (list[i] == targetdata) {
			list[i] = changeData;
		}
	}
}

// 3. ���
void Print(ArrayList list[]) {
	if (num_of_data == 0) {
		printf("����Ʈ�� �����Ͱ� ����.\n");
		return -1;
	}
	
	for (int i = 0; i < num_of_data; i++) {
		printf("%d ", list[i]);
	}
	printf("\n");
}

int main() {
	Init(list, 1);

	Insert(list, 1);
	Insert(list, 2);
	Insert(list, 3);
	Insert(list, 4);
	Insert(list, 2);
	Insert(list, 5);

	Print(list);

	Change(list, 2, 10);
	
	Print(list);
}

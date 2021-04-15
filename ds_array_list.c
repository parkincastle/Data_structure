#include <stdio.h>

#define MAX_SIZE 100

typedef int ArrayList;	//배열기반 리스트에 담응ㄹ 수있는 최대의 데이터 갯수
typedef int element;	// 재정의 정수 담는 리스트를 ArrayList라는 이름으로

ArrayList list[MAX_SIZE];
int num_of_data = 0;

// 0. 초기화
void Init(ArrayList list[]) {
	num_of_data = 0;
}

// 1. 삽입
void Insert(ArrayList list[], element inputData) {
	// 1. 리스트에 공간이 충분한지 확인한다.
	// 1-1. 충분하지 않으면 거절
	// 1-2. 충분하면 데이터를 넣어줌
	if (num_of_data == MAX_SIZE) { //	1-1
		return -1;
	}
	else {
		list[num_of_data] = inputData;
		num_of_data += 1;

	}
}

// 2. 삭제
void Delete(ArrayList list[], element delData) {

	if (num_of_data == 0) {
		printf("리스트에 데이터가 없음.\n");
		return -1;
	}
	
	for (int i = 0; i < num_of_data; i++) {	// 탐색을 위한 반복문
		if (list[i] == delData) {
			for (int j = i; j < num_of_data; j++) {
				list[j] = list[j + 1];
			}	// 리스트의 제약조건(데이터가 연속적으로 저장)을 지켜주기 위해
			num_of_data--;
			i--;
		}
	}
}

// 2. 수정
void Change(ArrayList list[], element targetdata, element changeData) {

	if (num_of_data == 0) {
		printf("리스트에 데이터가 없음.\n");
		return -1;
	}

	for (int i = 0; i < num_of_data; i++) {	// 탐색을 위한 반복문
		if (list[i] == targetdata) {
			list[i] = changeData;
		}
	}
}

// 3. 출력
void Print(ArrayList list[]) {
	if (num_of_data == 0) {
		printf("리스트에 데이터가 없음.\n");
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

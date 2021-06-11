#include <stdio.h>
// 트리의 순회를 구현해 보자
// 1. 배열로 표현된 이진트리
// 배열 공간에 양수를 저장(0은 자료가 없는 상태)
#define SIZE 10
// 데이터의 갯수는 9개까지 저장가능
int tree[SIZE] = { -1, 1, 2, 3, 4, 5, 6, 7, 0, 8 };
//		1
//	2		3
//4	  5	  6	  7
// 8

// 전위순회 : 현재인덱스 읽기 -> 현재인덱스*2 읽기 -> 현재인덱스 *2+1 읽기
void preOrder(int* tree, int idx) {		// 처음에는 배열, 루트 인덱스 (1)
	if(tree[idx] != 0)
		printf("%d인덱스 방문 : [%d]\n", idx, tree[idx]);
	
	if((idx*2) < SIZE)
		preOrder(tree, idx * 2);

	if((idx*2+1) < SIZE)
		preOrder(tree, idx * 2 + 1);



}


// 중위순회 : 횬재인덱스*2 읽기 -> 현재인덱스 읽기 -> 현재인덱스 *2+1 읽기
// 전위순회 : 횬재인덱스 읽기 -> 현재인덱스*2+1 읽기 -> 현재인덱스 읽기

int main() {
	preOrder();
}



// 2. 노드로 표현된 이진트리

// 


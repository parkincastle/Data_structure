#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct Node {
	int data;
	struct Node* leftChild;
	struct Node* rightChild;
} TreeNode;


//			 데이터, 왼쪽자식노드주소, 오른쪽자식노드주소
TreeNode n1 = { 1, &n2,&n5};
TreeNode n2 = { 2, &n3, &n6 };
TreeNode n3 = { 3, NULL, NULL };
TreeNode n4 = { 4, &n6, NULL };
TreeNode n5 = { 5, &n7, NULL };
TreeNode n6 = { 6, NULL, NULL };
TreeNode n7 = { 7, NULL, NULL };

void inOrder(TreeNode* parent) {	// 중위순회
	// 1. 왼쪽 자식들을 (중위순회) 방문한다.
	if (parent->leftChild != NULL) 
		inOrder(parent->leftChild);
	// 2. 부모노드를 방문한다.
	printf("%d, ", parent->data);	//출력함으로써 방문했다고 표시
	// 3. 오른족 자식들을 방문한다.
	if (parent->rightChild != NULL)
		inOrder(parent->rightChild);

}




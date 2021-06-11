#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct Node {
	int data;
	struct Node* leftChild;
	struct Node* rightChild;
} TreeNode;


//			 ������, �����ڽĳ���ּ�, �������ڽĳ���ּ�
TreeNode n1 = { 1, &n2,&n5};
TreeNode n2 = { 2, &n3, &n6 };
TreeNode n3 = { 3, NULL, NULL };
TreeNode n4 = { 4, &n6, NULL };
TreeNode n5 = { 5, &n7, NULL };
TreeNode n6 = { 6, NULL, NULL };
TreeNode n7 = { 7, NULL, NULL };

void inOrder(TreeNode* parent) {	// ������ȸ
	// 1. ���� �ڽĵ��� (������ȸ) �湮�Ѵ�.
	if (parent->leftChild != NULL) 
		inOrder(parent->leftChild);
	// 2. �θ��带 �湮�Ѵ�.
	printf("%d, ", parent->data);	//��������ν� �湮�ߴٰ� ǥ��
	// 3. ������ �ڽĵ��� �湮�Ѵ�.
	if (parent->rightChild != NULL)
		inOrder(parent->rightChild);

}




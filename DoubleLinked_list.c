// doubleLinkedList.c
// ����� ���Ḯ��Ʈ�� ����

#include <stdio.h>

typedef int element;        // int �ڷ����� element��� �̸����� ���

// ����� ���Ḯ��Ʈ�� ���� ����ü(���) ���� (�� ������)
typedef struct _node {
    struct _node* prev;
    element data;
    struct _node* next;
} Node;

int main() {
    Node* prevNode = (Node*)malloc(sizeof(Node));
    Node* nextNode = (Node*)malloc(sizeof(Node));
    prevNode->data = 1;
    prevNode->prev = NULL;          // ���� ����
    prevNode->next = nextNode;      //  prevNode            nextNode
    nextNode->data = 3;             //  ������������������������������---�� ������������������������������
    nextNode->prev = prevNode;      //  ��N ��   1   ��  ��     ��  ��   3   �� N��
    nextNode->next = NULL;          //  ������������������������������ ��---������������������������������

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = 2;

    /* ��ǥ ����
    //  prevNode                                nextNode
    //  ������������������������������---�� ������������������������������---�� ������������������������������
    //  ��N ��   1   ��  ��     ��  ��   2   ��  ��     ��  ��   3   �� N��
    //  ������������������������������ ��---������������������������������ ��---������������������������������
    //                      newNode
    */

    // prevNode�� newNode �������� �̿��ؼ� '���� ����'���� '��ǥ ����'�� �ǵ���
    // �瓇�� ���� ����Ʈ�� �����Ͻÿ�.
    // �ڵ� �ۼ� �κ� (4��) ��




    // �ڵ� �ۼ� �κ� ��
    //next node
    prevNode->next->prev = newNode;
    newNode->next = prevNode->next;
    //prevnode
    prevNode->next = newNode;
    newNode->prev = prevNode;


    // �ڵ� ���� �κ� (���� X)
    printf("prevNode�������� ������ ��ȸ: ");
    Node* cur = prevNode;
    while (cur != NULL) {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    printf("\n\n");

    printf("nextNode�������� ������ ��ȸ: ");
    cur = nextNode;
    while (cur != NULL) {
        printf("%d ", cur->data);
        cur = cur->prev;
    }
    //

}
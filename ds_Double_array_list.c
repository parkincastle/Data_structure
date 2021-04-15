// doubleLinkedList.c
// ����� ���Ḯ��Ʈ

#include <stdio.h>
// #include <stdlib.h>

typedef int element;        // int �ڷ����� element��� �̸����� ���

// ����� ���Ḯ��Ʈ�� ���� ����ü(���) ���� (�� ������)
typedef struct _node {
    struct _node* prev;
    element data;
    struct _node* next;
} Node;

Node* head, * tail;      // ���Ḯ��Ʈ�� ó���� ���� ����Ű�� ������

// 0. �ʱ�ȭ
void Init() {
    printf("\n");
    if (head != NULL) {
        Node* cur = head, * freeNode;
        while (cur != NULL) {
            freeNode = cur;
            cur = cur->next;
            printf("%d�� ����� �޸� ��ȯ��\n", freeNode->data);
            free(freeNode);
        }
    }
    head = NULL;
    tail = NULL;
}

// 1. ����
void Insert(element data) {
    // (����) ���ο� ��� �����
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    // ���Ḯ��Ʈ�� ó�� ������ ���� �׷��� ���� ���� ������ ����
    if (head == NULL) {
        head = newNode;
    }
    else {    // ���Ḯ��Ʈ�� �̹� �����Ͱ� ������ ��
        tail->next = newNode;
        newNode->prev = tail;
    }
    tail = newNode;
}

// 2. ����
void Delete(element delData) {
    Node* cur = head;
    Node* delNode = NULL;   // ����� ���� ��带 ����Ŵ (free�� ����)

    if (cur == NULL) {
        printf("���Ḯ���� ������ ���� X");
        return -1;
    }

    while (cur != NULL) {
        printf("���� ����� �� : %d", cur->data);
        // case1 -> ù ��° ��带 ����� ���� ��
        if (delData == head->data) {
            delNode = cur;
            head = head->next;
            cur = head;
            // ������� ��尡 ������ ��尡 �ƴҶ��� 
            // head->prev ���� �������־�� ��
            if (head != NULL) {
                head->prev = NULL;
            }
            free(delNode);
            printf("ù��° ��� ����\n");
        }
        else if (delData == cur->data && cur != head) { // �� ��° ������ ��带 �����
            delNode = cur;  // ���� free�� �ϱ� ���ؼ�
            if (cur == tail) {   // ���� ���� ��尡 ������ �����
                tail = tail->prev;
                tail->next = NULL;
                cur = tail->next;
                printf("������ ��带 ������\n");
            }
            else {    // �߰��� �����ִ� ��带 ������ ���
                cur->prev->next = cur->next;
                cur->next->prev = cur->prev;
                cur = cur->next;
                printf("���̿� �����ִ� ��� ����\n");
            }
            free(delNode);
        }
        else {    // ��带 �������� �ʴ� ���
            cur = cur->next;
            printf("��带 �������� ����\n");
        }
    }
}

// 3. ��ȸ
void Print() {
    Node* cur = head;
    printf("\n");
    if (cur == NULL) {
        printf("���Ḯ��Ʈ�� �����Ͱ� �������� ����");
        return;
    }
    while (cur != NULL) {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    printf("\n");

    /**/
    printf("���Ḯ��Ʈ�� �ڿ������� Ž��: ");
    cur = tail;
    while (cur != NULL) {
        printf("%d ", cur->data);
        cur = cur->prev;
    }
    /**/
    printf("\n");
}

int main() {
    Init();

    Insert(1);
    Insert(1);
    Insert(2);
    Insert(3);
    Insert(1);
    Insert(4);
    Insert(1);

    Print();

    Delete(1);

    Print();

    Init();

    Print();

}

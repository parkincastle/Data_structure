#include <stdio.h>

#define STACK_SIZE 5

int stack[STACK_SIZE];
int top = -1;

void StackInit() {
    top = -1;
}

void SPush(int inputData) {
    if (top == STACK_SIZE - 1) {
        printf("������ ������\n");
    }
    else {
        top++;
        stack[top] = inputData;
    }
}

int SPop() {
    if (top == -1) {
        printf("���ÿ� ���� �����Ͱ� ����\n");
        exit(-1);   // ���� ����
    }
    else {
        int popData = stack[top];
        top--;
        return popData;
    }
}

int SPeek() {
    if (top == -1) {
        printf("���ÿ� Ȯ���� �����Ͱ� ����\n");
        exit(-1);   // ���� ����
    }
    else
        return stack[top];
}

int main() {
    StackInit();
    SPush(1);
    SPush(2);
    SPush(3);
    SPush(4);
    SPush(5);
    SPush(6);   // StackOverflow�� �߻�, ����ó��
    printf("Pop�� ������: %d\n", SPop());
    printf("Peek�� ������: %d\n", SPeek());
    printf("Pop�� ������: %d\n", SPop());
    printf("Peek�� ������: %d\n", SPeek());
    printf("Pop�� ������: %d\n", SPop());
    printf("Pop�� ������: %d\n", SPop());
    printf("Pop�� ������: %d\n", SPop());
    printf("Pop�� ������: %d\n", SPop());   // StackUnderflow �߻�, ����ó��, ��������
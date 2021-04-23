
// 1.������ �迭 ������ ȿ�������� ����ϱ� ���� ���?
// - ������ �����ڸ� ��� ���� �ε����� ������ �ʰ��� ��� �ٽ� 0���� ���ư�����
// 2. N-1���� ����ϴ� ����???
// front == rear ť�� ����ִ� ���� or �� �� �ִ� ���� ������ �ȵǴ� ���� �ذ�
// +@ �������� ������ ������� ����ִ� ���� & �� �� ���¸� ������ �� �� ����


#include <stdio.h>
#define QUEUE_SIZE 10	//�ε��� ���� 0~9

int front = 0, rear = 0;	// ť�� ó���� �� ��ġ�� ����Ű�� �ε��� (�ʱ�ȭ)
int queue[QUEUE_SIZE];


// �̽� 1�� ���� �ذ�
int NextPosition(int pos) {
	// 1. ���� �ڵ�
	return (pos + 1) % QUEUE_SIZE;

	// 2. �ļ� �ڵ�(�ǹ̸� ��ġ)
	/*if (pos == QUEUE_SIZE - 1) {
		return 0;
	}
	else
		return pos + 1;*/

}

void Enqueue(int Data) {
	if (NextPosition(rear) == front) {	// �� á�� ���
		printf("ť�� �����Ͱ� �� ��\n");
	}
	else {	//�� ���� �ʾ��� ���
		queue[rear] = Data;
		rear = NextPosition(rear);
	}
}

int Dequeue() {
	if (front == rear) {
		printf("ť�� �����Ͱ� ����\n");
		exit(-1);
	}
	else {
		int dequeueData = queue[front];
		front = NextPosition(front);
		return dequeueData;
	}
}



int main() {
	Enqueue(1);
	Enqueue(2);
	Enqueue(3);
	Enqueue(4);
	Enqueue(5);
	Enqueue(6);
	Enqueue(7);
	printf("dequeue : %d\n", Dequeue());
	printf("dequeue : %d\n", Dequeue());
	printf("dequeue : %d\n", Dequeue());





}
// ������ -> �޸𸮸� ���� ����
// ������ �����ϸ� (int a = 5;) �����Ϸ��� 
// ���� ũ��(4byte) ��ŭ ������ �Ҵ�

// �����͸� �����Ҷ����� �ڷ����� �ſ� �����ؾ� �Ѵ�
// int double �鿡 ���� �����ּҿ�������
// �� ����Ʈ�� �о���� �������� ����

#include <stdio.h>

void swap(int* a, int* b) {
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
} // ������ �������� �ڵ�

int main() {
	
	int a = 10;
	double b = 20.20;
	char c = "c";

	swap(&a, &b);

	printf("int �� ���� �ּ� : %p\n", &a);
	printf("double�� ���� �ּ� : %p\n", &b);
	printf("char�� ���� �ּ� : %p\n", &c);

	//������ ���� ����
	int* pa;	// int ������ �޸� �ּҸ� ���� �����̰�, �� �̸��� pa��
				// int *pa *pb, *pc�� ������ ���� ����

	//������ ���� ���
	pa = &a; //�ּ� ���� ��� �ʹ�
	printf("\n%p\n", pa);
	*pa = 30;
	printf("���������� ���� : %d, �ּҰ� ���� ���� ������ ��� : %d\n", a, *pa);

	return 0;
}
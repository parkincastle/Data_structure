//����Ʈ �迭, �����迭

#include <stdio.h>

int main() {
	//������ : ����. ���� �ڷ����� �����͵��� ���� ����� ���
	//�װ��� �迭�� ��� �����ϴ� ���� ȿ����

	char* stirng, * string2, * string3, * string4;
	char* stringArray[4];

	stringArray[0] = "Gwanju";
	stringArray[1] = "Softwart";
	stringArray[2] = "Meister";
	stringArray[3] = "4th Student";

	for (int i = 0; i < sizeof(stringArray) / sizeof(stringArray[0]; i++) {
		printf("%s\n", stringArray[i]);
	}

	
	// ���� �Ҵ�
	// ���� ����۷� ������ �迭�μ� ���ڿ��� �����ϴ� ���� 
	// '���� ����'�ؼ� �ʱ�ȭ��Ű�� ������ ������.
	// ����ڿ��� ������ȭ�� ���ڿ�(���ڼ� ����x) �Է¹޴� �椷��?

	// case. ���� ���� ����� ��(�Ϻ� ���ڿ��� �ſ� �� ���)

	char inputAry[3][300];
	for (int i = 0; i < 3; i++) {
		printf("[%d]��° ���ڿ� �Է� : ", i + 1);
		gets(inputAry[i]);
	}

	//case2. �ش� ������ �ذ��ϱ� ���� ���� �Ҵ� - malloc - �� ���
	char tempAry[10000];	//�ӽ÷� �Է°��� �ޱ� ���� ����� ũ���� �迭 ����
	char* str[3] = { 0 };	//���� �Ҵ��� �� �� �ּҸ� ������ ũ���� �迭 ����
							//��� �ε����� NULL�� �ʱ�ȭ
	//�Ҵ� ����
	for (int i = 0; i < 3; i++) {
		printf("[%d]��° ���ڿ� �Է� : ", i + 1);
		gets(tempAry);
		str[i] = (char*)malloc(strlen(tempAry) + 1);
		// �ٽ�!  ���ڿ� ���� ������ �ľ��ؼ� �׸�ŭ�� �Ҵ��Ѵ�.(NULL ���Ե� ��ŭ)
		// 1. malloc('����') void�����͸� ���c=> "������ ��ŭ�� ������ �޸𸮿� �Ҵ�����"
		// 2. (char*) : ����ȯ "��ݳ��� �Ѱ��� ������ char * ���·� ���� �������� ����Ұž�"
		// 3. free(str)�� ����Ͽ� �ٽ� ����Ҽ� �ְ� �Ѵ�
	}


}
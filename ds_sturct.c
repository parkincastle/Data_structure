#include <stdio.h>

// 1. ����ü�� ������ ���� *
// 2. ����ü �迭(���Ϸ� ����)
// 3.typedef **
// 4. �ڱ����� ����ü

// example1.
struct exam {
	int kor;
	int math;
	int eng;
};

// example3.typedef ������
// unsigned int abc; -> typedef unsigned int Uint;
	
	// case1. ������ ���ǵ� ������H ������
typedef struct exam Exam;

	// case2. �����츦 �����԰� ���ÿ� typedef ����
typedef struct {
	char name[20];
	int hakbun;
}; Student;

//example4. �ڱ���������ü
typedef struct list {
	int data;
	struct list* next;
} Node;

int main() {
	struct exam lmg;
	lmg.kor = 100;
	lmg.math = 50;
	lmg.eng = 75;

	struct edam* examPointer = &lmg;
	examPointer->kor /= 2;	//lmg.kor /= 2;
	examPointer->math /= 2;
	examPointer->eng /= 2;
}
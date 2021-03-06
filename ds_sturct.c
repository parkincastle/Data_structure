#include <stdio.h>

// 1. 구조체의 포인터 열결 *
// 2. 구조체 배열(파일로 제공)
// 3.typedef **
// 4. 자기참조 구조체

// example1.
struct exam {
	int kor;
	int math;
	int eng;
};

// example3.typedef 재정의
// unsigned int abc; -> typedef unsigned int Uint;
	
	// case1. 기존에 정의된 굳조헤츷 재정의
typedef struct exam Exam;

	// case2. 구조헤를 정의함과 종시에 typedef 적용
typedef struct {
	char name[20];
	int hakbun;
}; Student;

//example4. 자기참조구조체
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
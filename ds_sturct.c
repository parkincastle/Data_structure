#include <stdio.h>

// 1. ±¸Á¶Ã¼ÀÇ Æ÷ÀÎÅÍ ¿­°á *
// 2. ±¸Á¶Ã¼ ¹è¿­(ÆÄÀÏ·Î Á¦°ø)
// 3.typedef **
// 4. ÀÚ±âÂüÁ¶ ±¸Á¶Ã¼

// example1.
struct exam {
	int kor;
	int math;
	int eng;
};

// example3.typedef ÀçÁ¤ÀÇ
// unsigned int abc; -> typedef unsigned int Uint;
	
	// case1. ±âÁ¸¿¡ Á¤ÀÇµÈ ±»Á¶Çì¯H ÀçÁ¤ÀÇ
typedef struct exam Exam;

	// case2. ±¸Á¶Çì¸¦ Á¤ÀÇÇÔ°ú Á¾½Ã¿¡ typedef Àû¿ë
typedef struct {
	char name[20];
	int hakbun;
}; Student;

//example4. ÀÚ±âÂüÁ¶±¸Á¶Ã¼
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
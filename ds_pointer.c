// 데이터 -> 메모리를 통해 관리
// 변수를 선언하면 (int a = 5;) 컴파일러는 
// 변수 크기(4byte) 만큼 공간을 할당

// 포인터를 대입할때에는 자료형에 매우 엄격해야 한다
// int double 들에 따라 시작주소에서부터
// 몇 바이트를 읽어들일 것인지가 결정

#include <stdio.h>

void swap(int* a, int* b) {
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
} // 이제는 정상적인 코드

int main() {
	
	int a = 10;
	double b = 20.20;
	char c = "c";

	swap(&a, &b);

	printf("int 형 변수 주소 : %p\n", &a);
	printf("double형 변수 주소 : %p\n", &b);
	printf("char형 변수 주소 : %p\n", &c);

	//포인터 변수 정의
	int* pa;	// int 형태의 메모리 주소를 담을 공간이고, 그 이름은 pa야
				// int *pa *pb, *pc등 여러개 선언 가능

	//포인터 변수 사용
	pa = &a; //주소 값을 담고 싶다
	printf("\n%p\n", pa);
	*pa = 30;
	printf("변수명으로 접근 : %d, 주소값 간접 참조 연산자 사용 : %d\n", a, *pa);

	return 0;
}
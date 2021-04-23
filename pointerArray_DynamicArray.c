//포인트 배열, 동적배열

#include <stdio.h>

int main() {
	//포인터 : 변수. 같은 자료형의 포인터들을 많이 사용할 경우
	//그것을 배열로 묶어서 선언하는 것이 효율적

	char* stirng, * string2, * string3, * string4;
	char* stringArray[4];

	stringArray[0] = "Gwanju";
	stringArray[1] = "Softwart";
	stringArray[2] = "Meister";
	stringArray[3] = "4th Student";

	for (int i = 0; i < sizeof(stringArray) / sizeof(stringArray[0]; i++) {
		printf("%s\n", stringArray[i]);
	}

	
	// 동적 할당
	// 위에 경우퍼럼 포인터 배열로서 문자열을 관리하는 것은 
	// '직접 재입'해서 초기화시키기 때문데 가능함.
	// 사용자에세 비정형화된 문자열(글자수 제한x) 입력받는 경ㅇ우?

	// case. 공간 낭비가 생기는 예(일부 문자열이 매우 긴 경우)

	char inputAry[3][300];
	for (int i = 0; i < 3; i++) {
		printf("[%d]번째 문자열 입력 : ", i + 1);
		gets(inputAry[i]);
	}

	//case2. 해당 문제를 해결하기 위해 동적 할당 - malloc - 을 사용
	char tempAry[10000];	//임시로 입력값을 받기 위해 충분한 크기의 배열 선언
	char* str[3] = { 0 };	//동적 할당한 루 그 주소를 연결할 크기의 배열 선언
							//모든 인덱스를 NULL로 초기화
	//할당 과정
	for (int i = 0; i < 3; i++) {
		printf("[%d]번째 문자열 입력 : ", i + 1);
		gets(tempAry);
		str[i] = (char*)malloc(strlen(tempAry) + 1);
		// 핵심!  문자열 저장 공간을 파악해서 그만큼만 할당한다.(NULL 포함될 만큼)
		// 1. malloc('숫자') void포인터를 반홤=> "사이즈 만큼의 공간을 메모리에 할당해줘"
		// 2. (char*) : 형변환 "방금내가 넘겨준 공간을 char * 형태로 저장 공간으로 사용할거야"
		// 3. free(str)을 사용하여 다시 사용할수 있게 한다
	}


}
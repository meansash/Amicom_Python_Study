

#define _CRT_SECURE_NO_WARNINGS		

#include<stdio.h>					// 표준출력 함수 printf() 사용을 위해 헤더 파일 포함

int main()							// main 함수 헤더, 입력 인자는 없고 int형 값 반환
{
	int year, month, day;			// 정수형 변수 year, month, day 지정
	printf("년, 월, 일을 입력하세요:");
	scanf("%d.%d.%d", &year, &month, &day);	// 변수 year, month, day에 정수형 값을 입력
	printf("입력받은 날짜는 %d-%d-%d입니다.", day, month, year);	// 위에서 입력받은 정수형 값을 형태를 바꾸어 출력


	return 0;						// 함수를 끝냄
}
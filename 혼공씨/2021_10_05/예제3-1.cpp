// 변수의 선언과 사용

#include <stdio.h>

int main(void)
{
    int a;          // int형 변수 a 선언
    int b, c;       // 2개의 int형 변수 b,c를 동시에 선언
    double da;      // double형 변수 da 선언
    char ch;        // char형 변수 ch 선언

    a = 10;         // int형 변수 a에 정수 10 대입
    b = a;          // int형 변수 b에 변수 a의 값 대입
    c = a + 20;     // int형 변수 c에 변수 a의 값과 정수 20을 더한 값 대입
    da = 3.5;       // double형 변수 da에 실수 3.5 대입
    ch = 'A';       // char형 변수 ch에 문자 'A' 대입

    printf("변수 a의 값 : %d\n", a);
    printf("변수 b의 값 : %d\n", b);
    pritnf("변수 c의 값 : %d\n", c);
    pritnf("변수 da의 값 : %d\n", da);
    printf("변수 ch의 값 : %d\n", ch);

    return 0;
}

/*
실행결과

변수 a의 값 : 10
변수 b의 값 : 10
변수 c의 값 : 30
변수 da의 값 : 3.5
변수 ch의 값 : A
*/
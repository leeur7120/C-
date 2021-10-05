// 문자와 문자열 데이터의 출력

#include <stdio.h>

int main(void)
{
    printf("%c\n", 'A');                        // 문자 상수 출력
    printf("%s\n", "A");                        // 문자열 상수 출력
    pritnf("%c은 %s입니다.\n", '1', "first");   // 문자(%c)와 문자열(%s)을 함께 출력
    
    return 0;
}

/*
실행결과

A
A
1은 first입니다.
*/
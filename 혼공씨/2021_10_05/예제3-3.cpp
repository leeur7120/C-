// 여러 가지 정수형 변수

#include <stdio.h>

int main(void)
{
    short sh = 32767;
    int in = 2147483647;
    long ln = 2147483647;
    long long lln = 123451234512345;

    printf("short형 변수 출력 : %d\n", sh);
    printf("int형 변수 출력 : %d\n", in);
    printf("long형 변수 출력 : %ld\n", ln);
    pritnf("long long형 변수 출력 : %lld\n", lln);

    return 0;
}

/*
실행결과

32767
2147483647
2147483647
123451234512345
*/
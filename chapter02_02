// int

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int age = get_int("What's your age?\n");
    printf("You are at least %i days old.\n", age * 365);
}


// float

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float price = get_float("What's thr price?\n");
    printf("Your total is %.2f.\n", price * 1.0625 );
}


// 짝수, 홀수 출력하기

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("n: "); //정수 값 n 입력받기
    
    if (n % 2 == 0) //만약 n이 짝수라면
    {
        printf("even\n"); //'even' 출력
    }
    else //만약 n이 홀수라면
    {
        printf("odd\n"); //'odd' 출력 

    }
}


// 마리오 블럭 출력하기

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Width: ");
    }
    while(n < 1);
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
             printf("#");
        }
        printf("\n");
    }
}


// 사용자 정의 함수

#include <stdio.h>

// 함수 선언 시 앞의 void는 출력, 뒤의 void는 입력을 의미함
void cough(int n);

int main(void)
{
    cough(3);
}

// 함수 정의
void cough(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("cough\n");
    }
}


// 오버플로우_부동소수점

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float x = get_float("x: ");
    float y = get_float("y: ");

    printf("x / y = %.50f\n", x / y);
}


// 오버플로우_정수

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    for (int i = 1; ; i *= 2) //'; ;' 조건 없이 영원히 반복
    {
        printf("%i\n", i);
        sleep(1); // 1초 쉬어가기
    }
}




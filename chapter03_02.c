//배열

//5)배열2

//전역변수

#include <cs50.h>
#include <stdio.h>

//변하지 않는 전역 변수, 변수명은 대문자로
const int N = 3;

int main(void)
{
    int scores[N]; //정수 3개를 위한 메모리를 주세요
    score[0] = 72;
    score[1] = 73;
    score[2] = 33;

    printf("Average: %i\n", (score[0]+score[1]+score[2]) / 3);
}

//배열의 동작 선언 및 저장

#include <cs50.h>
#include <stdio.h>

float average(int length, int array[]);

int main(void)
{
    // 사용자로부터 점수의 갯수 입력
    int n = get_int("Numbers of scores: ");

    // 점수 배열 선언 및 사용자로부터 값 입력
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score %i: ", i+1);
    }

    // 평균 출력
    printf("Average: %.1f\n", average(n, scores));
}

//average 함수 선언
float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return (float) sum / (float) length;
}


//6)문자열과 배열

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string names[4];
    names[0] = "EMMA";
    names[1] = "RODRIGO";
    names[2] = "BRIAN";
    names[3] = "DAVID";

    printf("%s\n", names[0]);
    printf("%c%c%c%c%i\n", names[0][0], names[0][1], names[0][2], names[0][3], names[0][4]);
}


//7)문자열의 활용

//문자열의 길이_strlen()

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input:  ");
    printf("Output: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}

//소문자->대문자 변환

//uppercase1

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            // convert to uppercase
            // 자동으로 형변환해줌
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}

//uppercase2_toupper()

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // toupper 함수 이용
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}


//8)명령행 인자

#include <cs50.h>
#include <stdio.h>

//argc, argv[]

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
}

//exit

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // 파일명 뒤에 인자가 입력되기때문에, 컴퓨터는 argument 2개가 입력된 것이라고 생각
    if (argc != 2)
    {
        printf("missing coommand-line argument\n");
        return 1;
    }
    // argv[0]은 파일명, argv[1]은 입력 값
    printf("hello, %s\n", argv[1]);
    return 0;
}



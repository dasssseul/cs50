//chapter03. 배열

<디버깅>

//buggy0
int main(void)
{
    printf("hello, world\n");
}

//buggy1

#include <stdio.h>

int main(void)
{
    string name = get_string("What's your name?\n");
    printf("hello, %s\n", name);
}

//buggy2
//문법적 오류가 아닌 논리적 오류

#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        printf("#\n");
    }
}


<배열1>

//hi

#include <stdio.h>

int main(void)
{
    char c1 = 'H'; //char을 입력할 때는 작은 따옴표
    char c2 = 'I';
    char c3 = '!';
    printf("%c %c %c\n", c1, c2, c3);
    printf("%i %i %i\n", (int)c1, (int)c2, (int)c3); //int를 입력하지 않아도 자동으로 바꿔줌
}

//scores

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int scores[3]; //정수 3개를 위한 메모리를 주세요
    score[0] = 72;
    score[1] = 73;
    score[2] = 33;

    printf("Average: %i\n", (score[0]+score[1]+score[2]) / 3);
}

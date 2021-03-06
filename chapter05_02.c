
//5.메모리

//5)문자열 복사

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("s: ");

    //메모리의 주소가 저장되기때문에
    string t = s;

    t[0] = toupper(t[0]);

    //s와 t의 첫 글자가 모두 대문자로 출력
    printf("%s\n", s);
    printf("%s\n", t);
}



#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
    char *s = get_string("s: ");

    //메모리 할당 함수 malloc
    char *t = malloc(strlen(s) + 1);

    //null 종단 문자까지 복사해야하기 때문에 n+1
    for(int i = 0, n = strlen(s); i < n+1; i++)
    {
        t[i] = s[i];
    }
    
    t[0] = toupper(t[0]);

    printf("%s\n", s);
    printf("%s\n", t);
}



#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
    char *s = get_string("s: ");

    //메모리 할당 함수 malloc
    char *t = malloc(strlen(s) + 1);

    //문자열 복사 함수 strcpy
    strcpy(t, s);

    t[0] = toupper(t[0]);

    printf("%s\n", s);
    printf("%s\n", t);
}



//6)메모리 할당과 해제

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
    char *s = get_string("s: ");

    //메모리 할당 함수 malloc
    char *t = malloc(strlen(s) + 1);

    //문자열 복사 함수 strcpy
    strcpy(t, s);

    t[0] = toupper(t[0]);

    printf("%s\n", s);
    printf("%s\n", t);

    //valgrind : 메모리가 누수되고 있는지 확인 가능
    //할당된 메모리를 해제해주는 함수
    free(t);
    
}



//7)메모리 교환, 스택, 힙

#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
    
}



//8)파일쓰기
//get_int

#include <stdio.h>

int main(void)
{
    int x;
    printf("x: ");
    scanf("%i", &x);
    printf("x: %i\n", x);
}



//get_string

#include <stdio.h>

int main(void)
{
    char s[5];
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}



//파일

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    
    //파일 불러오기
    FILE *file = fopen("phonebook.csv","a");
    char *name = get_string("Name: ");
    char *number = get_string("Number ");

    //파일에 직접 내용 출력
    fprintf(file, "%s,%s\n",name,number);
    fclose(file);
}



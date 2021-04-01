
//5.메모리

//1)메모리 주소

#include <stdio.h>

int main(void)
{
    int n = 50;

    //n이 있는 주소를 출력_16진수
    printf("%p\n", &n);

    //n이 있는 주소를 돌려받고 다시 그 주소로 가서 출력
    printf("%i\n", *&n);
}



//2)포인터

#include <stdio.h>

int main(void)
{
    int n = 50;

    //주소는 반드시 *포인터로 저장해야함
    //*p라는 포인터 변수에 변수 n의 주소를 저장
    //'*'는 이 변수가 포인터라는 의미
    //int는 이 포인터가 int 타입의 변수를 가리킨다는 의미
    int *p = &n;
    
    printf("%i\n", *p);

}



//3)문자열

#include <stdio.h>

int main(void)
{
    char *s = "EMMA";
    printf("%p\n", s);
    printf("%p\n",&s[0]);
    printf("%p\n",&s[1]);
    printf("%p\n",&s[2]);

}



//4)문자열 비교

#include <stdio.h>

int main(void)
{
    char *s = "EMMA";

    //s의 첫번째 문자 출력
    printf("%c\n", *s);

     //s의 두번째, 세변째, 네번째 문자 출력
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%c\n", *(s+3));
}


#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //입력받은 S와 t는 첫 글자의 주소를 담고 있기 때문에 비교 불가
    string s = get_string("s: "); 
    string t = get_string("t: ");

    if (s == t)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}




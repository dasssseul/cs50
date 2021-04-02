
//6.자료구조

//2)배열의 크기 조정하기

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //int 자료형 3개로 이루어진 list라는 포인터 선언 후 메모리 할당
    int *list = malloc(3 * sizeof(int));

    //포인터가 잘 선언되었는지 확인
    if (list == NULL)
    {
        return 1;
    }

    //list 배열의 각 인덱스에 값 저장
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    //int 자료형 4개의 크기의 tmp라는 포인터를 선언하고 메모리 할당
    int *tmp = malloc(4 * sizeof(int));
    if (tmp == NULL)
    {
        return 1;
    }

    //list의 값을 tmp로 복사
    for (int i = 0; i <3; i++)
    {
        tmp[i] = list[i];
    }
    
    //tmp배열의 네번째 값 저장
    tmp[3] = 4;

    //list의 메모리 초기화
    free(list);
    
    //list가 tmp와 같은 곳을 가리키도록 지정
    list = tmp;

    //새로운 배열 list의 값 확인
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list);
}



//realloc 함수 이용

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    //realloc 함수 사용
    //tmp 포인터에 메모리를 할당하고 list의 값 복사
    int *tmp = realloc(list, 4 * sizeof(int));

    if (tmp == NULL)
    {
        return 1;
    }
    
    tmp[3] = 4;
    
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }
}



//4)연결리스트 : 코딩

#include <stdio.h>
#include <stdlib.h>

//node구조체 정의
typedef struct node
{
    //node 안에서 정수형 값이 저장되는 변수를 number로 지정
    int number;

    //다음 node의 주소를 가리키는 포인터를 *next로 저장
    struct node *next;
}
node;

int main(void)
{
    //list라는 이름의 node 포인터 정의, 연결 리스트의 가장 첫번째 node를 가리킬 예정
    //현재 아무것도 가리키고 있지 않기 때문에 NULL로 초기화
    node *list = NULL;

    //새로운 node를 위한 메모리 할당
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }

    //n의 number 필드에 1의 값 저장
    n->number = 1;

    //n다음에 정의된 node가 없으므로 NULL로 초기화
    n->next = NULL;

    //첫번째 node 정의 완료, list 포인터를 n 포인터로 바꿔줌
    list = n;

    //list에 다른 node를 더 연결하기 위해 n에 새로운 메모리 할당
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }

    n->number = 2;
    n->next = NULL;

    //첫번째 node의 다음 node를 n포인터로 지정
    list->next = n;

    n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }

    n->number = 3;
    n->next = NULL;

    //첫번째 node의 다음 다음 node를 n 포인터로 지정
    list->next->next = n;

     //list에 연결된 node를 방문하면서 각 number값 출력
    for(node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i\n", tmp->number);
    }

    //메모리 해제
    while (list != NULL)
    {
        node *tmp = list->next;
        free(list);
        list = tmp;
    }
}






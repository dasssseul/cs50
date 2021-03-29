
//4. 알고리즘

//선형검색_numbers

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[6] = {4, 8, 15, 16, 23, 42};
   
   for (int i = 0; i < 6; i++)
   {
       if (numbers[i] == 50)
       {
           printf("Found\n");
       }
   }
   printf("Not found\n");
}


//선형검색_names

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[4] = {"EMMA", "RODRIGO", "BRIAN", "DAVID"};

    for (int i = 0; i < 4; i++)
    {
        //C에서는 문자열을 '==' 연산자로 비교할수 없음
        if (strcmp(names[i], "EMMA") == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}


//선형검색_전화번호부

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[4] = {"EMMA", "RODRIGO", "BRIAN", "DAVID"};
    string numbers[4] = {"617-555-0100", "617-555-0101", "617-555-0102","617-555-0103"};

    for (int i = 0; i < 4; i++)
    {
        if(strcmp(names[i], "EMMA") == 0)
        {
            printf("%s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}


//선형검색_구조체

#include <cs50.h>
#include <stdio.h>
#include <string.h>

//person이라는 이름의 구조체를 자료형으로 정의
typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    //person 자료형의 배열 선언
    person people[4];

    //그 안에 포함된 속성값
    people[0].name = "EMMA";
    people[0].number = "617-555-0100";
    
    people[1].name = "RODRIGO";
    people[1].number = "617-555-0101";

    people[2].name = "BRIAN";
    people[2].number = "617-555-0102";

    people[3].name = "DAVID";
    people[3].number = "617-555-0103";

    for (int i = 0; i < 4; i++)
    {
        if(strcmp(people[i].name, "EMMA") == 0)
        {
            printf("%s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}



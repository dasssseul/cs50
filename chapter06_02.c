
//6.자료구조

//6)연결리스트 : 트리


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//이진 검색 트리의 노드 구조체 
typedef struct node
{
    int number;

    //왼쪽 자식 노드
    struct node *left;

    //오른쪽 자식 노드
    struct node *right;
}
node;

//이진 검색 함수(*tree 이진 검색 트리를 가리키는 포인터)
bool search(node *tree)
{
    //트리가 비어있는 경우
    if (tree == NULL)
    {
        return false;
    }
    //현재 노드의 값이 50보다 크면 왼쪽 노드 검색
    else if (50<tree->number)
    {
        return search(tree->left);
    }
    //현재 노드의 값이 50보다 작으면 오른쪽 노드 검색
    else if (50>tree->number)
    {
        return search(tree->right);
    }
    //노드의 값이 50인 경우
    else
    {
        return true;
    }
}

    
        

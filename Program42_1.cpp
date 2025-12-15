#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

/* Insert node at first position */
void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = new NODE;
    newn->Data = no;
    newn->Next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

/* 1. Search First Occurrence */
int SearchFirstOcc(PNODE Head, int no)
{
    int iPos = 1;

    while(Head != NULL)
    {
        if(Head->Data == no)
        {
            return iPos;
        }
        Head = Head->Next;
        iPos++;
    }
    return -1;
}

/* 2. Search Last Occurrence */
int SearchLastOcc(PNODE Head, int no)
{
    int iPos = 1;
    int iAns = -1;

    while(Head != NULL)
    {
        if(Head->Data == no)
        {
            iAns = iPos;
        }
        Head = Head->Next;
        iPos++;
    }
    return iAns;
}

/* 3. Addition of all elements */
int Addition(PNODE Head)
{
    int iSum = 0;

    while(Head != NULL)
    {
        iSum = iSum + Head->Data;
        Head = Head->Next;
    }
    return iSum;
}

/* 4. Maximum element */
int Maximum(PNODE Head)
{
    int iMax = Head->Data;

    while(Head != NULL)
    {
        if(Head->Data > iMax)
        {
            iMax = Head->Data;
        }
        Head = Head->Next;
    }
    return iMax;
}

/* 5. Minimum element */
int Minimum(PNODE Head)
{
    int iMin = Head->Data;

    while(Head != NULL)
    {
        if(Head->Data < iMin)
        {
            iMin = Head->Data;
        }
        Head = Head->Next;
    }
    return iMin;
}

/* Main function */
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    iRet = SearchFirstOcc(First, 30);
    cout << "First occurrence of 30 is at position : " << iRet << endl;

    iRet = SearchLastOcc(First, 30);
    cout << "Last occurrence of 30 is at position : " << iRet << endl;

    iRet = Addition(First);
    cout << "Addition of all elements is : " << iRet << endl;

    iRet = Maximum(First);
    cout << "Maximum element is : " << iRet << endl;

    iRet = Minimum(First);
    cout << "Minimum element is : " << iRet << endl;

    return 0;
}

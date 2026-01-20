////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<iostream>
#include<stdlib.h>
using namespace std;

////////////////////////////////////////////////////////////////////
//
// Structure Definition
//
////////////////////////////////////////////////////////////////////

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

////////////////////////////////////////////////////////////////////
//
// Function Name : SearchFirstOcc
// Description   : Searches first occurrence of given element
// Input         : PNODE, Integer
// Output        : Integer
// Author        : Sakshi Santosh Jadhav
// Date          : 14/12/2025
//
////////////////////////////////////////////////////////////////////

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

////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
////////////////////////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;

    First = new NODE{10,NULL};
    First->Next = new NODE{20,NULL};
    First->Next->Next = new NODE{30,NULL};
    First->Next->Next->Next = new NODE{40,NULL};
    First->Next->Next->Next->Next = new NODE{50,NULL};
    First->Next->Next->Next->Next->Next = new NODE{30,NULL};
    First->Next->Next->Next->Next->Next->Next = new NODE{70,NULL};

    cout << SearchFirstOcc(First,30);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Test Case
//
// Input  : 30
// Output : 3
//
//////////////////////////////////////////////////////////////////// 

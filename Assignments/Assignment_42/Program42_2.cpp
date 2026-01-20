////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<iostream>
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

typedef struct node* PNODE;

////////////////////////////////////////////////////////////////////
//
// Function Name : SearchLastOcc
// Description   : Searches last occurrence of given element
// Input         : PNODE, Integer
// Output        : Integer
// Author        : Sakshi Santosh Jadhav
// Date          : 14/12/2025
//
////////////////////////////////////////////////////////////////////

int SearchLastOcc(PNODE Head, int no)
{
    int iPos = 1, iLast = -1;

    while(Head != NULL)
    {
        if(Head->Data == no)
        {
            iLast = iPos;
        }
        Head = Head->Next;
        iPos++;
    }
    return iLast;
}

////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
////////////////////////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;

    First = new node{10,NULL};
    First->Next = new node{20,NULL};
    First->Next->Next = new node{30,NULL};
    First->Next->Next->Next = new node{40,NULL};
    First->Next->Next->Next->Next = new node{50,NULL};
    First->Next->Next->Next->Next->Next = new node{30,NULL};
    First->Next->Next->Next->Next->Next->Next = new node{70,NULL};

    cout << SearchLastOcc(First,30);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Test Case
//
// Input  : 30
// Output : 6
//
//////////////////////////////////////////////////////////////////// 

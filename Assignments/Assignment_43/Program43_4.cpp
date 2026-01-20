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
// Function Name : SecMaximum
// Description   : Returns second maximum element
// Input         : PNODE
// Output        : Integer
// Author        : Sakshi Santosh Jadhav
// Date          : 14/12/2025
//
////////////////////////////////////////////////////////////////////

int SecMaximum(PNODE Head)
{
    int iMax = 0, iSecMax = 0;

    while(Head != NULL)
    {
        if(Head->Data > iMax)
        {
            iSecMax = iMax;
            iMax = Head->Data;
        }
        else if(Head->Data > iSecMax && Head->Data != iMax)
        {
            iSecMax = Head->Data;
        }
        Head = Head->Next;
    }
    return iSecMax;
}

////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
////////////////////////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;

    First = new node{110,NULL};
    First->Next = new node{230,NULL};
    First->Next->Next = new node{320,NULL};
    First->Next->Next->Next = new node{240,NULL};

    cout << SecMaximum(First);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Test Case
//
// Output : 240
//
//////////////////////////////////////////////////////////////////// 

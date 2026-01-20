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
// Function Name : DisplayPerfect
// Description   : Displays perfect numbers from linked list
// Input         : PNODE
// Output        : Displays elements
// Author        : Sakshi Santosh Jadhav
// Date          : 14/12/2025
//
////////////////////////////////////////////////////////////////////

void DisplayPerfect(PNODE Head)
{
    while(Head != NULL)
    {
        int iSum = 0;
        for(int i = 1; i <= Head->Data / 2; i++)
        {
            if(Head->Data % i == 0)
            {
                iSum += i;
            }
        }
        if(iSum == Head->Data)
        {
            cout << Head->Data << "\t";
        }
        Head = Head->Next;
    }
}

////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
////////////////////////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;

    First = new node{11,NULL};
    First->Next = new node{28,NULL};
    First->Next->Next = new node{17,NULL};
    First->Next->Next->Next = new node{41,NULL};
    First->Next->Next->Next->Next = new node{6,NULL};
    First->Next->Next->Next->Next->Next = new node{89,NULL};

    DisplayPerfect(First);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Test Case
//
// Output : 6   28
//
//////////////////////////////////////////////////////////////////// 

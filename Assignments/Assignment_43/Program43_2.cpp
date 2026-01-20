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
// Function Name : DisplayPrime
// Description   : Displays prime numbers from linked list
// Input         : PNODE
// Output        : Displays elements
// Author        : Sakshi Santosh Jadhav
// Date          : 14/12/2025
//
////////////////////////////////////////////////////////////////////

void DisplayPrime(PNODE Head)
{
    while(Head != NULL)
    {
        int iCnt = 0;
        for(int i = 1; i <= Head->Data; i++)
        {
            if(Head->Data % i == 0)
            {
                iCnt++;
            }
        }
        if(iCnt == 2)
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
    First->Next = new node{20,NULL};
    First->Next->Next = new node{17,NULL};
    First->Next->Next->Next = new node{41,NULL};
    First->Next->Next->Next->Next = new node{22,NULL};
    First->Next->Next->Next->Next->Next = new node{89,NULL};

    DisplayPrime(First);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Test Case
//
// Output : 11   17   41   89
//
//////////////////////////////////////////////////////////////////// 

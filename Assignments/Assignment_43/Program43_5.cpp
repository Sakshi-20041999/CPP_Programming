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
// Function Name : SumDigit
// Description   : Displays sum of digits of each element
// Input         : PNODE
// Output        : Displays elements
// Author        : Sakshi Santosh Jadhav
// Date          : 14/12/2025
//
////////////////////////////////////////////////////////////////////

void SumDigit(PNODE Head)
{
    while(Head != NULL)
    {
        int iNo = Head->Data;
        int iSum = 0;

        while(iNo != 0)
        {
            iSum += (iNo % 10);
            iNo = iNo / 10;
        }
        cout << iSum << "\t";
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

    First = new node{110,NULL};
    First->Next = new node{230,NULL};
    First->Next->Next = new node{20,NULL};
    First->Next->Next->Next = new node{240,NULL};
    First->Next->Next->Next->Next = new node{640,NULL};

    SumDigit(First);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Test Case
//
// Output : 2   5   2   6   10
//
//////////////////////////////////////////////////////////////////// 

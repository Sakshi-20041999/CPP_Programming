#include <stdio.h>

void Display(int iNo)
{
    if(iNo > 0)
    {
        printf("%d\t", iNo);
        Display(iNo - 1);
    }
}

int main()
{
    int iValue = 0;

    scanf("%d", &iValue);
    Display(iValue);

    return 0;
}

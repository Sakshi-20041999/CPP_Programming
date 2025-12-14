#include <stdio.h>

void Display(int iNo)
{
    static char ch = 'a';

    if(iNo > 0)
    {
        printf("%c\t", ch);
        ch++;
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

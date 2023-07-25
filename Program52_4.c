// Write a recursive progarm which display below pattern
//  A  B  C  D  E

#include<stdio.h>

void Display()
{
    static int iCnt = 0;
    static char ch = 'A';

    if(iCnt <= 5)
    {
        printf("%c\t", ch);
        ch++;
        iCnt++;
        Display();
    } 
    

}

int main()
{
    Display();

    return 0;
}
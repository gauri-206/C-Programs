// Write a recursive progarm which display below pattern
//  a  b  c  d  e

#include<stdio.h>

void Display()
{
    static int iCnt = 0;
    static char ch = 'a';

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
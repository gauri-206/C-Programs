// check prime or not

#include<stdio.h>
#include<stdbool.h>

int DisplaySumFactor(int iNo)
{
    int iSum =0;
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt ;
            
        }
    }
    return iSum;
}

bool CheckPerfect(int iNumber)
{
    int iResult = 0;

    iResult = DisplaySumFactor(iNumber);
    if (iResult == iNumber)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue =0;
    bool bRet =false; 

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    bRet = CheckPerfect(iValue);
   

    if(bRet == true)
    {
        printf("Perfect...\n");
    }
    else
    {
        printf("Not Perfect...\n");
    }
    return 0; 
    
 
}
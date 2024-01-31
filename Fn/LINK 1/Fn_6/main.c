#include <stdio.h>
#include <stdlib.h>

long TOBin (int DecNum);

int main()
{
    long BinNum;
    int DecNum;

    printf("enter the decimal number :\n");
    scanf("%i",&DecNum);

    BinNum=TOBin(DecNum);

    printf("\n The Binary value is : %1d\n\n",BinNum);


    return 0;
}

long TOBin (int DecNum)
{
   long BinNum=0,reminder=0,f=1;
   while(DecNum!=0)
   {
       reminder=DecNum%2;
       BinNum=BinNum+reminder*f;
       f=f*10;
       DecNum=DecNum/2;
   }
    return BinNum;

}

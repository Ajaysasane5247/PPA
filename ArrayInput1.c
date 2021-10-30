#include<stdio.h>
#include<stdlib.h>
  

  int Addition(int *Brr,int iSize)
  int main()
  {
  	int iCnt = 0, iLength = 0 , iRet = 0;
  	int *Arr = NULL;
  	printf("Enter Length of Array\n");
  	scanf("%d",&iLength);

  	Arr = (int*) malloc (sizeof(int)*iLength);
  	printf("Enter the numbers \n");

  	for(iCnt = 0; iCnt< iLength; iCnt++)
  	{
  		scanf("%d",&Arr[iCnt]);
  	}
    iRet = Addition(Arr,iLength);
    printf("Addition of Array is:%d",iRet);

  	return 0;
  }
  
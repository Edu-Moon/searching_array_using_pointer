/******
  This is an example of Pointer search in this code we give address of each and every element of array to pointer
  and at the time of search when pointer get corrected it display output.
******/
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5},search,bool=0;
    printf("Enter the number you want to search: ");
    scanf("%d",&search);
    int *ptr;
    ptr=arr;
    for(int i=0;i<5;i++)
    {
        if(search==ptr[i])
        {
            bool=1;
        }
        else
        {
            continue;
        }
      ptr++;//You ccan skip ptr++ then also it works but for convienence we write ptr++ int he code.
    }
    if(bool==1)
    {
        printf("Number is available in the array");
    }
    else
    {
        printf("Number is not available in the array");
    }
}

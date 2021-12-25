#include<stdio.h>
int main()
{
  //This is just an sample array
    int arr[5]={1,2,3,4,5},search,bool=0;
  //Here search variable is used for searching number and Bool is an boolean type variable
    printf("Enter the number you want to search: ");
    scanf("%d",&search);
    for(int i=0;i<5;i++)
    {
        if(nsearch==arr[i])
        {
            bool=1;
        }
        else
        {
           continue;
        }
    }
    if(bool==1)
        {
            printf("The number is available in the array");
        }
        else
        {
            printf("Number is not available in the array");
        }
}

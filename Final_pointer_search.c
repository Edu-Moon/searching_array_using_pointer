#include<stdio.h>
void searcharr(int *ptr,int n)
{
    int search,bool=0;
    printf("Enter the number you want to search: ");
    scanf("%d",&search);
    for(int i=0;i<n;i++)
    {
        if(search==ptr[i])
        {
            bool=1;
        }
        else
        {
            continue;
        }
        ptr++;
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
int main()
{
    int arr[5]={1,2,3,4,5};
    searcharr(arr,5);
    return 0;
}

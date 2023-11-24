//This program is created by  Kayasytha Arya_23CE055
#include<stdio.h>
int main()
{
    int a[20],b[20],i,j;
    //a[20] is the input array and b[20] will be the reversed array
    for(i=0;i<10;i++)
    {
        printf("Enter the %d number of your array:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nYour Entered array is :");
    for(i=0;i<10;i++)
    {
        printf("\n%d",a[i]);
    }
    for(i=0,j=9;i,i<10;i++,j--)
    {
        b[i]=a[j];
    }
    printf("\nNow the reversed string is:");
    for(i=0;i<10;i++)
    {
        printf("\n%d",b[i]);
    }
    printf("\nThis program is created by  Kayasytha Arya_23CE055");
    return 0;
}

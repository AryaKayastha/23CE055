//This program is created by  Kayasytha Arya_23CE055
#include<stdio.h>
int main()
{
    int city[20],city2[20],temp[20],i,j;

    for(i=0;i<10;i++)
    {
        printf("Enter the Tempratures of city%d:",i+1);
        scanf("%d",&city[i]);
    }
    printf("\nYour Entered Tempratures of following cities  is :");
    for(i=0;i<10;i++)
    {
        printf("\n%d",city[i]);
    }
    for (i=0; i<10; i++)
    {
        for (j=i+1;j<10; j++)
        {
            if(city[i]>city[j])
            {
                temp[i]=city[i];
                city[i]=city[j];
                city[j]=temp[i];
            }
        }
    }
    printf("\nThe highest temprtaure among all cities:%d",city[9]);
    printf("\nThe lowest temprtaure among all cities:%d",city[0]);
    printf("\nThis program is created by  Kayasytha Arya_23CE055");
    return 0;
}

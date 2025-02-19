#include<stdio.h>
#define MAX 10
void main()
{
    int warehouse[MAX],warno;
    int capacity[100]={1,2,12,4,10,20,15,6,4,10};
    for(int i=0;i<MAX;i++)
    {
         warehouse[i]=0;
    }
    while(1)
    {
        printf("Enter the warehouse num:");
        scanf("%d",&warno);
        warehouse[warno]++;
        if(warehouse[warno]>=capacity[warno])
        {printf("full capacity. no sapce for new goods,go for another warehouse\n");
        return;}
        else{
            int n=MAX-warno;
            printf("%d space is left\n",n);}
    }
}
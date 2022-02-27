#include<stdio.h>
 void main()
 {
     int i,a[15],sum=0,count=0;
     for(i=0;i<15;i++)
     {
         printf("Enter the attendance of student %d \n",i+1);
         scanf("%d",&a[i]);
         if (a[i]==1)
         {
             count++;
         }
         sum=sum+a[i];
     }
     if(count==15)
     {
         printf("Class is full \n");
     }
     else
     {
         printf("\nThere are few absentees \n",count);
     }

 }




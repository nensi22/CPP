#include<stdio.h>

int main ()
{
     int s1,s2,s3,s4,s5,s6,total;
     float per;
     
     printf("\n maths=");
     scanf("%d",&s1);
     printf("\n eng=");
     scanf("%d",&s2);
     printf("\n chem=");
     scanf("%d",&s3);
     printf("\n phys=");
     scanf("%d",&s4);
     printf("\n com=");
     scanf("%d",&s5);
     printf("\n bio=");
     scanf("%d",&s6);
     total=s1+s2+s3+s4+s5+s6;
     printf("\n total=%d",total);
     per=total/6;
     printf("\n per=%f",per);
     printf("\n \ts1 \ts2 \ts3 \ts4 \ts5 \ts6 \ttotal \tper");
     printf("\n \t%d \t%d \t%d \t%d \t%d \t%d \t%d \t%f",s1,s2,s3,s4,s5,s6,total, per);



}
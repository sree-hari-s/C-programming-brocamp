#include<stdio.h>
void main()
{
    int i,j,n=5,m=1,l=1,k,tot;
    for(i=1;i<=n;i++)
    {   
        if(i<=3)
            tot=i;
        else
            tot=i+1;
        k=1;
        for(j=1;j<=tot;j++)
        {
            if(k%2!=0)
            {
                printf("%3d",3*m);
                m++;
            }  
            else
            {
                printf("%3d",5*l);
                l++;
            }
            k++;
        }
        printf("\n");
    }
}
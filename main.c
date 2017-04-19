#include <stdio.h>
#include <stdlib.h>
#define DATOS 20

void reordenar (int x[],int n);
int main()
{
    int n,i,x[DATOS];
    printf("Cuantos datos desea introducir:");
    scanf("%i",&n);
    for(i=0;i<n;i++)
    {
        printf("\nA[%i]=",i+1);
        scanf("%i",&x[i]);
    }
    reordenar(x,n);
    for(i=0;i<n;i++)
        printf("\nA[%i]=%i",i+1,x[i]);
    return 0;
}
void reordenar (int x[],int n)
{
    int i,j,tmp;
    for(i=0;i<(n-1);i++)
        for(j=i+1;j<n;j++)
        {
            if(x[j]<x[i])
            {
                tmp=x[j];
                x[j]=x[i];
                x[i]=tmp;
            }
        }

}

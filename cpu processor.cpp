#include <stdio.h>

int main() 
{
  int n=1000,p,p1,i;
  float cr,cpu[5], cpi,ct,max;
  for(i=0;i<=4;i++)
  {
      cpu[5]=0;
  }
  printf("\n Enter the number of processors:");
  scanf("%d",&p);
  p1=p;
  for(i=0;i<p;i++)
{
    printf("\n Enter the Cycles per Instrcution of processor:");
  scanf("%f",&cpi);
  printf("\n Enter the clockrate in GHz:");
  scanf("%f",&cr);
  ct=1000*cpi/cr;
  printf("The CPU time is: %f",ct);
  cpu[i]=ct;
}
max=cpu[0];
for(i=0;i<p1;i++)
{
    if(cpu[i]<=max)
    max=cpu[i];
}
printf("\n The processor has lowest Execution time is: %f ", max);
    return 0;
}


#include<stdio.h>
int input(int *p, int *q)
{
 int num;
 printf("Enter two numbers");
 scanf("%d %d", p,q); 
}
void add(int p, int q, int *sum)
{
*sum=p+q;
}

void output(int p, int q, int sum)
{
  printf("Addition of %d + %d is = %d\n", p,q,sum);
}
int main()
{
  int p,q,sum;
  input (&p,&q);
  add(p,q,&sum);
  output(p,q,sum);
  return 0;
}
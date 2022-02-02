#include<stdio.h>
int input()
{printf("ENter a number\n");
scanf("%d", &a);
return a;
}
int cmp(int a, int b, int c)
{
  int g;
  if(a>b && a>c)
  {
    g=a;
  }
  else if(b>c)
  {

    g=b;
  }
  else{
    g=c;
  }
  return g;
}
void output(int g)
{
  printf("The greatest number among the three is %d\n", g);
}
int main()
{
  int a,b,c,ga;
  a=input();
  b=input();
  c=input();
  ga=cmp(a,,c);
  output(ga);
  return 0;
}
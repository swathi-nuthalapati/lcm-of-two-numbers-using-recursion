#include<stdio.h>
int lcm(int a, int b);
void main()
{
  int a, b, LCM;
  printf("enter any two numbers to find lcm:");
 scanf("%d%d" &a, &b);
 if(a > b)
   LCM = lcm(b, a);
  else
   LCM = lcm(a, b);
  printf("LCM of %d and %d = %d, a,b");
  getch();
}
int lcm(int a, int b)
{
  static int multiple = 0;
  multiple += b;
  if((multiple % a ==0) && (multiple % b ==0))
  {
    return multiple;
  }
  else
  {
    return lcm(a,b);
  }
 }

  
  

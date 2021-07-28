#include<stdio.h>
int isNegative(int n);
long factorial(int n);


int main()
{
  int num;
  long result;

  printf("Enter a number: ");
  scanf("%d",&num);

  if(isNegative(num))
  {
    printf("%d is a negative number.\n",num);
    printf("Factorial of %d is not possible.\n", num);
  }

  else
  {
    result = factorial(num);
    printf("Factorial of %d = %ld", num, result);
  }

  return 0;
}


int isNegative(int n)
{
  if(n>0) return 0;
  else return 1;
}

long factorial(int n)
{
  long fact=1;
  for(int i=n; i>=1; i--)
  {
    fact *= i;
  }
  return fact;
}

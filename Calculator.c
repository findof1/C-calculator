#include <stdio.h>

// compile cmd: gcc -g -o Calculator.exe ./Calculator.c
// run cmd: ./Calculator.exe

int main()
{
  long long int num1;
  long long int num2;
  long long int res;
  char opp;
  printf("Input Number 1:");
  scanf("%lld", &num1);

  printf("Input Number 2:");
  scanf("%lld", &num2);

  printf("Input Operator (ex: +, -, *, or /):");
  scanf(" %c", &opp);

  if (opp == '+')
  {
    res = num1 + num2;
  }
  if (opp == '-')
  {
    res = num1 - num2;
  }
  if (opp == '*')
  {
    res = num1 * num2;
  }
  if (opp == '/')
  {
    res = num1 / num2;
  }
  printf("Result: %lld", res);
  return 0;
}
#include<stdio.h>
  void main()
  {
      int n,revNum = 0,remainder,orgNum;
      printf("Enter a number\n");
      scanf("%d",&n);
      orgNum=n;
      while(n != 0)
      {
          remainder = n % 10;
          revNum = revNum * 10 + remainder;
          n = n / 10;
      }
      if (orgNum == revNum)
      {
          printf("%d is a palindrome number\n",orgNum);
      }
      else
      {
          printf("%d is not a palindrome number\n",orgNum);
      }
  }
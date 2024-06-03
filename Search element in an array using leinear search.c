#include<stdio.h>
  void main()
  {
      int n,revNum = 0,remainder,orgNum;
      printf("Enter a number\n");
      scanf("%d",&n);
      orgNum=n;#include <stdio.h>
// C code to linearly search x in arr[].

#include <stdio.h>

int search(int arr[], int N, int x)
{
    for (int i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

// Driver code
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int N = sizeof(arr) / sizeof(arr[0]);

    // Function call
    int result = search(arr, N, x);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", result);
    return 0;
}

#define MAX_SIZE 100 //Maximum size of the array

int main()
{
    int arr[MAX_SIZE];
    int i, size, even, odd;

    /* Input size of the array */
    printf("Enter size of the array: ");
    scanf("%d", &size);

    /* Input array elements */
    printf("Enter %d elements in array: ", size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    /* Assuming that there are 0 even and odd elements */
    even = 0;
    odd  = 0;

    for(i=0; i<size; i++)
    {
        /* If the current element of array is even then increment even count */
        if(arr[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Total even elements: %d\n", even);
    printf("Total odd elements: %d", odd);

    return 0;
}
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
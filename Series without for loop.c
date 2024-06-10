#include <stdio.h>

void PrintNumber(int N, int Original, int K, int flag)
{
	printf("%d ", N);

	if (N <= 0)
		flag = !flag;

	if (N == Original && !flag)
		return;

	if (flag) {
		PrintNumber(N - K, Original, K, flag);
		return;
	}

	if (!flag) {
		PrintNumber(N + K, Original, K, flag);
		return;
	}
}

int main()
{
	int N = 20, K = 6;

	PrintNumber(N, N, K, 1);

	return 0;
}

// Function to sort the numbers using pointers

#include <stdio.h>

void sort(int n, int* ptr)
{
	int i, j, t;
	for (i = 0; i < n; i++) {

		for (j = i + 1; j < n; j++) {

			if (*(ptr + j) < *(ptr + i)) {

				t = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = t;
			}
		}
	}

	for (i = 0; i < n; i++)
		printf("%d ", *(ptr + i));
}

int main()
{
	int n = 5;
	int arr[] = { 0, 23, 14, 12, 9 };

	sort(n, arr);

	return 0;
}

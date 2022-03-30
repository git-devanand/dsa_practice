#include <stdio.h>

/*Quick sort algorithm for sorting
 Time complexity of Quicksort :
    - Best case :- O(nlogn)
    - Worst case :- O(n^2)
    - Average case :- O(nlogn)
*/

int Partition(int A[], int p, int r)
{
    int x, i, j, temp;
    x = A[r];
    i = p - 1;
    for (j = p; j <= r - 1; j++)
    {
        if (A[j] <= x)
        {
            i = i + 1;
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    temp = A[i + 1];
    return i+1;
}

int QuickSort(int A[], int p, int r)
{
    int q;
    if (p < r)
    {
        q = Partition(A, p, r);
        QuickSort(A, p, q - 1);
        QuickSort(A, q + 1, r);
    }
    return A;
}

int main()
{   
    int A = [9,10,5,3,2,1,4,8,7,6];
    int i;
    QuickSort(A, 0, 9);
    printf("Sorted array is \n");
    for (i = 0; i <= 9; i++)
        printf("%d ", A[i]);
    return 0;

}

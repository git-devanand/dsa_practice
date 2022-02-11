# Quick Sort implementation using python

def Partition(A, p, r):
    pivot = A[r]
    i = p - 1
    for j in range(p, r):
        if (A[j] <= pivot):
            i = i + 1
            A[i], A[j] = A[j], A[i]
    
    A[i+1], A[r] = A[r], A[i+1]
    return i+1

def QuickSort(A, p, r):
    q = Partition(A, p, r)
    if (p < q):
        QuickSort(A, p, q-1)
        QuickSort(A, q+1, r)

def printArray(A):
    for i in range(len(A)):
        print(A[i], end=" ")
    print()

if __name__ == "__main__":
    A = [5, 2, 4, 6, 1, 3] 
    print("Unsorted Array: ", end="")
    printArray(A)
    QuickSort(A, 0, len(A)-1)
    print("Sorted Array: ", end="")
    printArray(A)


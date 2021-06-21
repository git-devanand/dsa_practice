def merge_sort(list):
    """
    Sort a list in ascending order to
    Returns a new sorted list

    Divide : Find the midpoint of the  list and divide into sublist 
    Conqure : Recursively sort the sublists created to previous step
    Combine : Merge the sorted sublist created in previous step

    Takes overall O(kn log n) time
    """

    if len(list) <= 1:
        return list
    
    left_half, right_half = split(list)
    left = merge_sort(left_half)
    right = merge_sort(right_half)
    
    return merge(left, right)

def split(list):
    """
    Divide the unsorted list at midpont into two sublists
    Returns two sublists - left and right half
    Runs in overall O(k log n) time
    """

    mid = len(list)//2
    left = list[:mid]
    right = list[mid:]
    return left, right

def merge(left, right):
    """
    Merge two lists (arrays) sorting them to the process
    Returns a new merge list
    Runs in overall O(n) time
    """

    l = []
    i=0
    j=0

    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            l.append(left[i])
            i += 1
        else:
            l.append(right[j])
            j += 1

    while i < len(left):
        l.append(left[i])
        i += 1
    
    while j < len(right):
        l.append(right[j])
        j += 1

    return l

def verify_sorted(list):
    n = len(list)

    if n == 0 or n == 1:
        return True

    return list[0] < list[1] and verify_sorted(list[1:])



alist = [23,43,45,54,65,22,11,31,7]
solist = merge_sort(alist)
print(verify_sorted(solist))



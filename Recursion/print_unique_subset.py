#User function Template for python3

class Solution:
    
    #Function to find all possible unique subsets.
    def AllSubsets(self, arr,n):
        #code here
        ans = []
        d = {}
        def recurse(arr1,k1):
            key = (arr1[:])
            key.sort()
            if tuple(key) in d:
                return
            ans.append(key)
            d[tuple(key)] = 1
            
            if k1 >= len(arr):
                return
            
            
            for i in range(k1,len(arr)):
                arr1.append(arr[i])
                recurse(arr1,i+1)
                arr1.pop()
        recurse([],0)
        ans.sort()
        return(ans)


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases):
        n = int(input())
        a = list(map(int,input().strip().split()))
        obj  = Solution()
        result = obj.AllSubsets(a,n)
        for i in range(len(result)):
            print("(",end="")
            size = len(result[i])
            for j in range(size-1):
                print(result[i][j],end=" ")
            if(size):
                print(result[i][size-1],end=")")
            else:
                print(")",end="")
        print()


# } Driver Code Ends
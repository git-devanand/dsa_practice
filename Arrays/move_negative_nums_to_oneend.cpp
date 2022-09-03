// C++ program of the above
// approach

#include <iostream>
#include<algorithm>
using namespace std;

// Approach 2: Two pointer approach
// Function for shift all the
// negative elements on left side
void shiftall(int arr[], int left,
			int right)
{

// Loop to iterate over the
// array from left to the right
while (left<=right)
{
	// Condition to check if the left
	// and the right elements are
	// negative
	if (arr[left] < 0 && arr[right] < 0)
		left+=1;
	
	// Condition to check if the left
	// pointer element is positive and
	// the right pointer element is negative
	else if (arr[left]>0 && arr[right]<0)
	{
		int temp=arr[left];
		arr[left]=arr[right];
		arr[right]=temp;
		left+=1;
		right-=1;
	}
	
	// Condition to check if both the
	// elements are positive
	else if (arr[left]>0 && arr[right] >0)
		right--;
	else{
		left++;
		right--;
	}
}
}

// Approach 3: Using Dutch National Flag Algorithm.
// first color will be for all negative number and 
// second color will be for all positive number.

   
// Using Dutch National Flag Algorithm.
void reArrangeByDNFA(int arr[],int n){
      int low =0, high = n-1;
      while(low < high){
      	if(arr[low]<0){
          low++;
      	}
		else if(arr[high]>0){
          high--;
      	}
		else{
        	swap(arr[low],arr[high]);
      }
    }
}

// Function to print the array
void display(int arr[], int right){

// Loop to iterate over the element
// of the given array
for (int i=0;i<=right;++i){
	cout<<arr[i]<<" ";
}
cout<<endl;
}

// Driver Code
int main()
{
	int arr[] = {-12, 11, -13, -5,
			6, -7, 5, -3, 11};
	int arr_size = sizeof(arr) /
				sizeof(arr[0]);

// Function Call
	shiftall(arr,0,arr_size-1);
	display(arr,arr_size-1);
	reArrangeByDNFA(arr, arr_size);
	display(arr,arr_size-1);
	return 0;
}


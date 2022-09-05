#include <iostream>
using namespace std;

int square(int n)
{
    // Approach 1
    // TC = o(n)
    // TC = O(1)
	// handle negative input
	// if (n < 0)
	// 	n = -n;

	// // Initialize result
	// int res = n;

	// // Add n to res n-1 times
	// for (int i = 1; i < n; i++)
	// 	res += n;

	// return res;

    // Approach 2  
    // TC = O(logn) & SC = O(1)
    // if (n < 0) n = -n;
 
    // // Initialize result
    // int result = 0, times = n;
 
    // while (times > 0)
    // {
    //     int possibleShifts = 0, currTimes = 1;
 
    //     while ((currTimes << 1) <= times)
    //     {
    //         currTimes = currTimes << 1;
    //         ++possibleShifts;
    //     }
 
    //     result = result + (n << possibleShifts);
    //     times = times - currTimes;
    // }
 
    // return result;


    // //Approach 3  TC = O(logn) & SC = O(1)
    // Base case
    if (n == 0)
        return 0;
 
    // Handle negative number
    if (n < 0)
        n = -n;
 
    // Get floor(n/2) using right shift
    int x = n >> 1;
 
    // If n is odd
    if (n & 1)
        return ((square(x) << 2) + (x << 2) + 1);
    else // If n is even
        return (square(x) << 2);
}

// Driver code
int main()
{
	for (int n = 1; n <= 5; n++)
		cout << "n = " << n << ", n^2 = " << square(n)
			<< endl;
	return 0;
}

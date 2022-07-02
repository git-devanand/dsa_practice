#include<iostream>
using namespace std;

int firstOccurance(int arr[], int n, int key){
    int ans=-1;
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e=mid-1;
        }
        else if (arr[mid]>key){
            e=mid-1;
        }
        else {
            s=mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOccurance(int arr[], int n, int key){
    int ans=-1;
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s=mid+1;
        }
        else if (arr[mid]<key){
            s=mid+1;
        }
        else {
            e=mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int even[11] = {1,2,3,3,3,3,3,3,3,3,5};

    cout << "First Occurance of 3 is at index "<< firstOccurance(even, 11, 3)<<endl;
    cout << "First Occurance of 3 is at index "<< lastOccurance(even, 11, 3)<<endl;

    return 0;

}
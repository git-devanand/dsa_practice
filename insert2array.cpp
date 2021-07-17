#include <bits/stdc++.h>

using namespace std;
void insertIntoArray(vector <int> arr, int x, int pos){
    int n;
    n = arr.size();
    n++;
    for (int i=n-1; i>= pos; i--)
        arr[i]=arr[i-1];
    
    arr[pos - 1] = x;
    
    for (int i=0; i<n; i++)
        cout << arr[i] <<"\t";


    cout <<"\n";
    

}

int main(){
    vector <int> arr = {2,3,5,8,16,32,64};
    int x, pos;
    cout << "Enter the element to insert : "<<"\n";
    cin >> x;
    cout <<"Enter the postion where the element be insert : "<<"\n";
    cin >> pos;

    insertIntoArray(arr, x, pos);

    
    return 0;

}
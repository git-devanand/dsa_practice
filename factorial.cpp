#include<bits/stdc++.h>

using namespace std ;
typedef long long ll;
// factorial function find factorial of a given natural number
int factorial(int n){
    if (n==1) return true;
    return n*(n-1) && factorial(n-1);

}

int main(){
    cout <<"Enter a number : ";
    int num;
    cin >> num;
    cout << "Factorial of "<<num<<" is "<<factorial(num)<<"\n";


}
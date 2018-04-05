#include<iostream>
#include<cmath>
using namespace std;
int factorial(int n){
if (n==0 )
    return 1;
else
    return n*factorial(n-1);
    }
int main (){
    int n,  asc[100],add=0, pos=0;
    char arr[100];
     cin>>n;
     for (int i =0; i<n; i++){
        cin>>arr[i];
        asc[i] = arr[i];
     }
       int inp[100];
     for (int i =0; i<n; i++){
       cin>> inp[i];
     }
      for (int i =0; i<n; i++)
        {
            int add = 0;
     for (int j =0; j<n; j++)
        {

     if (inp[i] > asc[j] )
        add++;

        pos = pos + add* factorial(n - add - i) ;
        }
      }
cout<< pos;
return 0;
}

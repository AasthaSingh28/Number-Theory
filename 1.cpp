//Primality test- to determine whether the given number is prime or not

#include <iostream>
#include <math.h>
using namespace std;

/*bool isPrime(int n){
    if (n==1)
    return false;
    for(int i=2; i<n; i++){
        if(n%i ==0)
        return false;
    }
    return true;
}*/

//better approach 

bool issPrime(int n){
     if (n==1)
    return false;
    for(int i=2; i*i<=n; i++){
        if(n%i ==0)
        return false;
    }
    return true;
}


int main(){
    int n;
    cin>>n;

    if (issPrime(n)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

   
} // O(n)


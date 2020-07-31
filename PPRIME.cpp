#include <bits/stdc++.h> 
using namespace std; 
#define N 1000005 

int sumPrime(int number){
     int factor = 2;
     int sum=0;

    while(1 != number){ .
       if(number%factor==0){ //Check if factor divides the number.
          number /= factor; //If yes, update the number.
          sum+=factor; //Add factor to sum.
 
          continue;
        }
        factor++; //If the current number is not a factor, check the next number.
    }

    return sum;
}


int main() 
{ 
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	cin>>A[i];
	
	for(int i=0;i<n;i++)
	{
		A[i] = sumPrime(A[i]);
		
	}
	
	 sort(A, A + n, greater<int>()); 
	 	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
	}
}
	
	
	

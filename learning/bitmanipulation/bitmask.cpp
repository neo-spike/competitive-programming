#include <bits/stdc++.h>
using namespace std;

void bit_mask(int x){
	for (int i=31; i>=0; i--){
		if (x&(1<<i)){
			cout<<1;
		}
		else{
			cout<<0;
		}
	}
	cout<<endl;
	
	// the number of zeroes at the beginning of bit representation
	// __builtin_clz(x)
	//
	// number of zeroes at the end
	// __builtin_ctz(x)
	//
	// number of ones
	// __builtin_popcount(x)
	//
	// the parity of number of ones 
	// __builtin_parity(x)
		
}

int main(){
	int x;
	cin>>x;
	bit_mask(x);

	return 0;
}

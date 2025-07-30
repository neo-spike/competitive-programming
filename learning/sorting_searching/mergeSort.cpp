#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& a, int l, int m, int r){
	int n1=m-l+1;
	int n2=r-m;
	vector <int> left(n1);
	vector <int> right(n2);

	for(int i=0; i<n1; i++){
		left[i]=a[l+i];
	}
	for (int i=0; i<n2; i++){
		right[i]=a[m+1+i];
	}

	int i=0, j=0, k=l;
	while (i<n1 && j<n2){
		if (left[i] <= right[j]){
			a[k]=left[i];
			k++;
			i++;
		}
		else{
			a[k]=right[j];
			k++;
			j++;
		}
	}
	
	// take the remainings
	while (i<n1){
		a[k]=left[i];
		k++; i++;
	}
	while (j < n2){
		a[k]=right[j];
		k++;
		j++;
	}

}

void mergeSort(vector <int>& a, int l, int r){
	//base case
	if (l>=r){
		return;
	}
	int mid = (l+r)/2;

	mergeSort(a, l, mid);
	mergeSort(a, mid+1, r);

	// merging
	merge(a, l, mid, r);
}

int main(){
	int n;
	cin>>n;
	vector <int> a(n);
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	mergeSort(a, 0, n-1);
	for (int num : a){
		cout<<num<<" ";
	}
	cout<<endl;
	
	return 0;
}

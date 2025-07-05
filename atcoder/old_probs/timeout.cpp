// beginner contest 408

#include <bits/stdc++.h>
using namespace std;

int main(){
  float n, s;
  cin>>n>>s;
  vector<float> a(n);
  bool sleep=false;
  for (int i=0; i<n; ++i){
    cin>>a[i];
    if (i==0 && a[i]>=(s+0.5)){
        sleep=true;
    }
    else if (i!=0 && abs(a[i]-a[i-1])>=(s+0.5)){
      sleep =true;
    }
  }
  if (sleep){
    cout<<"No";
  }
  else{
    cout<<"Yes";
  }
  
  return 0;
}
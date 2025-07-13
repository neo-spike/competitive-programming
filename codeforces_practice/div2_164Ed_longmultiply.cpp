#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while (t--){
		string x,y;
		cin>>x>>y;
		if (x.size()==1){
			cout<<y<<endl<<x<<endl;
		}
		else{
			if (x.size()<=2e5){
				bool ft = true;
				for (int i=0; i<x.size(); i++){
					int tmp = max(x[i], y[i]);
					int tmp2 = min(x[i], y[i]);
					if (tmp==tmp2){
						if (i==0){
							ft=true;
						}
					}
					else{
						if (ft){
							y[i] = tmp2;
							x[i] =tmp;
							ft=false;
						}
						else{
							x[i] = tmp2;
							y[i] = tmp;
						}
					}
					
				}
			}
			else{
				bool ft = true;
				for (int i=0; i<2e5; i++){
					int tmp = max(x[i], y[i]);
					int tmp2 = min(x[i], y[i]);
					if (tmp==tmp2){
						if (i==0){
							ft=true;
						}
					}
					else{
						if (ft){
							y[i] = tmp2;
							x[i] =tmp;
							ft=false;
						}
						else{
							x[i] = tmp2;
							y[i] = tmp;
						}
					}
				}
			}

			cout<<x<<endl<<y<<endl;
		}		
	

		
	}
	return 0;
}

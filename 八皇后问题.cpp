#include<bits/stdc++.h>
using namespace std;
int N;
int Place(int k,int x[]){
	for(int i=0;i<k;i++)
	if(x[i]==x[k]||abs(i-k)==abs(x[i]-x[k]))
	return 1;
	return 0;
} 
void Queen(int N,int x[]){
	int k=0,tar=0;
	while(k>=0){
		x[k]++;
		while(x[k]<N && Place(k,x)==1)
		x[k]++;
		if(x[k]<N && k==N-1){
			if(tar==1)
			cout<<endl;
			tar=1;
			for(int m=0;m<N;m++){
				for(int f=0;f<N;f++){
					if(f!=x[m])
					cout<<".";
					else cout<<"Q";
					if(f!=N-1)
					cout<<" ";
				} 
			cout<<endl;
		}
		}
		if(x[k]<N&&k<N-1)
		k=k+1;
		else 
		x[k--]=-1;
	}
	if(tar==0)
	cout<<"None"<<endl;
}
int main(){
	 cin>>N;
	 int x[N];
	 fill(x,x+N,-1);
	 Queen(N,x);
	 return 0;
} 

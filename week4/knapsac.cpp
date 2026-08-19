#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	float w[100],p[100];
	float we;
	int i,n;
	float m=0;float tp=0;
	float v[100];
	cout<<"enter the total weight of sac "<<endl;
	cin >> we;
	cout<<"enter no of iteams present"<<endl;
	cin>>n;
	float x[n]={0};
	cout<<"enter the weights of objects"<<endl;
	for(i=0;i<n;i++){
		cin>>w[i];
	}
	cout<<"enter the profits of objects"<<endl;
	for(i=0;i<n;i++){
		cin>>p[i];
	}
	for(int j=0;j<n;j++){
		v[j]=(p[j]/w[j]);
	}
	sort(v,v+n);
	int k=n-1;
	while(m<we && k>0){
		if((m+w[k])<we){
			x[k]=1;
			m=m+w[k];
			tp=tp+p[k];
		}
		else{
			x[k]=(we-m)/w[k];
			m=we;
			tp=tp+(x[k]*p[k]);
		}
		k--;
	}
	for(int s=0;s<n;s++){
		cout<<x[s]<<endl;
	}
	cout<<"total profit"<<tp<<endl;
	
}

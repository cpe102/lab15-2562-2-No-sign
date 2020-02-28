#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void randData(double *,int,int);

void findRowSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[N] = {};
	double *dPtr = data[0];

	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findRowSum(dPtr,result,N,M);
	showData(result,N,1);
}
void randData(double *u,int a,int b){
	
	for(int i=0;i<a*b;i++){
		*(u+i)=(rand()%101/100.0);
		
	}	
}
	void showData(double *v,int x,int y){
		for(int i=0;i<x*y;i++){
			if(i%(y)==0){
				cout<<"\n";
				cout<<*(v+i)<<" ";
				
			}
			else{
					cout<<*(v+i)<<" ";
			}
		
		}
		cout<<"\n";
	}
	void findRowSum(const double *g,double *h,int m,int n){
		double k=0;
	for(int i=0;i<n*m;i++){
k+=*(g+i);
	if((i+1)%m==0){
		h[((i+1)/m)-1]=k;
		k=0;
	}
	
	}
	
	
	
}






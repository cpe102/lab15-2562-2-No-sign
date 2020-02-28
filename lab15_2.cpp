#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void randData(double *,int,int);

void findColSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[M] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findColSum(dPtr,result,N,M); 
	showData(result,1,M);
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
	void findColSum(const double *g,double *h,int m,int n){
		double k=0;
		for(int j=0;j<n;j++){
			
			for(int i=0;i<n;i++){
			k+=*(g+(n*i)+j);	
								}
				*(h+j)=k;
				k=0;
			
		}
	
	
}


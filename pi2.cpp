#include <iostream>
#include <cmath>

void print(int list[],int length);
int oddgen(int list[],int length2);
double sign(double list[], int length);
double sum(double list[],int length);


int l=10000000;
int odd[10000000]={};
double frac[10000000]={};


int main(){

	
	
	oddgen(odd,l);
	//print(odd,l);


	for(int i=0; i<l; i++){
		
		double num= 1/(double)odd[i];
		frac[i]=num;
		
	}
	
	sign(frac,l);
	std::cout<<sum(frac,l);
	
	/*
	for(int i=0; i<l; i++){
		
		std::cout<<frac[i]<<"\n";
		
	}*/
	
}

void print(int list[],int length){
	
	
	for (int i=1;i<=length;i++){
		
		std::cout<<list[i]<<"\n";
		
	}
	
}

int oddgen(int list[], int length2){
	
	
	
	int i=1;
		
		for (int j=0;j<length2;j++){
						
				
			int num=i;
			list[j]=num;
			i=i+2;
			
			}

	}

double sign(double list[],int length){

	for(int i=0; i<length; i++){
		
		if (i%2==0){
			
			list[i]=list[i];
			
		}
		
		else if(i%2 == 1){
			
			double num=list[i];
			num=-1*num;
			list[i]=num;
		
		}

		
	}
	
	
}

double sum(double list[],int length){
	
	double sum=0.0;
	
	for(int i=0; i<=length; i++){
		
		sum+=list[i];
		
	}
	
	std::cout<<sum*4;
	
}
	

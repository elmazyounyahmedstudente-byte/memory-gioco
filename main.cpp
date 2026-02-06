#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(int argc, char** argv) {
	srand(time(0));
	const int d=rand()%4+4;
	int matrice[d][d];
	
	for(int i=0; i<d;i++){
		for(int j=0;j<(d+1)/2;j++){
		matrice[i][j]=rand()%26+65;
		cout<<" "<<char(matrice[i][j]);
		int numeri[26];
		for(int k=0; k<26;k++){
			int n;
			n=matrice[i][j]-64;
			numeri[n]++;
			if(numeri[n]>2){
				char o=matrice[i][j]=rand()%26+65;
			
		
			}
			
			}
		
	cout<<" "<<char(matrice[i][j]);
		
	}
	cout<<endl;
	}
	
	return 0;
}


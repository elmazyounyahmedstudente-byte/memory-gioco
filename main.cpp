#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int r,c;
	int tab[r][c];
	cout<<"inserisci il numero delle righe: ";
	cin>>r;
	cout<<"e delle colonne: ";
	cin>>c;
	while(r%2==1 && c%2==1){
	cout<<"il numero delle righe e delle colonne devono essere pari!"<<endl<<"riprova...";
	cin>>r;
	cin>>c;
}
	return 0;
}

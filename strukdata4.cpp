#include <iostream>

using namespace std;

int main(int argc,char* argv[])
{
int matA[2][2]= {4, 2, 8, 10};
int matB[2][2]= {-5, 8, 4, -12};
int j,k;
cout<<"matriks A"<<endl;
for (int i=0; i<2; i++) {
	for (int j=0; j<2; j++) {
		cout<<matA[i][j]<<" ";
	}
	cout<<endl;
}
cout<<"Matrik B"<<endl;
	for (int i=0; i<2; i++) {
		for (int j=0; j<2; j++) {
			cout<<matB[i][j]<<" ";
		}
		cout<<endl;
}
cout<<"Hasil Perkalian Matriks A dan B"<<endl;
for (int i=0; i<2; i++){
	for (int j=0; j<2; j++){
		cout<<matA[i][j]*matB[i][j]<<" ";
	}
	cout<<endl;
}

return 0;
}

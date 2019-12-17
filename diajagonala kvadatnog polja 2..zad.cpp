#include <iostream>
using namespace std;
int main(){
    int n;
	cout<<"Unesi cjeli broj koji je veci od 2 a manji od 100 : "<<endl;
	cin>>n; 	
 	int a[n][n];
 	int brojac=0;
 	for(int i=0;i<n;i++){
 		for(int b=0;b<=n;b++){
 			brojac++;
 			a[i][b]=brojac;
 			
		 }
		 
	 }
	 int zbroj=0;
	 for(int i=0;i<n;i++){
	 zbroj=a[i][i]+zbroj;
	 }
	cout<<zbroj<<endl;
	 
	 system("pause");
	return 0;
}

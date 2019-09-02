# include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int opcion;


int main()
{
	do{
	int n,i,j,r,t;
	double a[n][n+1];            
    double x[n]; 
	cout<<"\nIntroduzca el # de ecuaciones\n";           
    cin>>n; 
    for (i=0;i<n;i++){
    	cout<<"\necuacion n"<<i+1<<"\n";
        for (j=0;j<=n;j++){
        cout<<"\na["<<i<<"]"<<"["<<j<<"] =";
        cin>>a[i][j]; 
    }
}
    cout<<endl<<endl<<"matriz "<<endl;
    for(r=0;r<n;r++){
        for(t=0;t<=n;t++)
        cout<<a[r][t]<<"  ";
        cout<<endl;
    }
cin.get();
cout <<"\nDESEAS REALIZAR LA OPERACION OTRA VEZ? SI[1] NO[2]\n"; 
cin >> opcion; 
}while(opcion<=1); 
    return 0;
}

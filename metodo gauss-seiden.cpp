#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
    cout.precision(4);
    cout.setf(ios::fixed);
    int n,i,j,k,flag=0,count=0,l=1,e=1;
    cout<<"--------------------------------GAUSS SEIDEL------------------------------------";
    cout<<"같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같";
    cout<<"\nIntroduzca el # de ecuaciones: ";           
    cin>>n;  
	                  
    double a[n][n+1];             
    double x[n];                
    double eps,y;
    cout<<"\nIntroduzca los elementos de la matriz en forma de fila: \n";
    for (i=0;i<n;i++){
    	cout<<"\necuacion "<<i+1<<"  \n";
        for (j=0;j<=n;j++){
        	cout<<"["<<i+1<<"]"<<"["<<j+1<<"] = ";
            cin>>a[i][j];
        }}
    x[i] =0;
    eps =0.001;
    system("cls");
    cout<<"--------------------------------GAUSS SEIDEL------------------------------------";
    cout<<"같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같";
    
    cout<<"---------------------------tu matriz es la siguiente----------------------------";
    cout<<"같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같";
    for (i=0;i<n;i++){
        	cout<<"\nx"<<l++<<"= ";
        	for (j=0;j<=n;j++){
        	
        	if(j==n){
        	cout<<"="<<setw(1)<<a[i][j]<<setw(1)<<setw(2);}	
        	else{
        	cout<<"|"<<setw(1)<<a[i][j]<<setw(1)<<"|"<<setw(2);}
			}}
    cout<<"\n";   	
    for (i=0;i<n;i++)                    //Pivotisation(partial) to make the equations diagonally dominant
        for (k=i+1;k<n;k++)
            if (abs(a[i][i])<abs(a[k][i]))
                for (j=0;j<=n;j++)
                {
                    double temp=a[i][j];
                    a[i][j]=a[k][j];
                    a[k][j]=temp;
                }
    cout<<"\n";
    
	cout<<"----------------MATRIZ DESPUES DE APLICAR LA DIAGONAL DOMINANTE-----------------";
    cout<<"같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같";
    for (i=0;i<n;i++){
        	cout<<"\nx"<<e++<<"= ";
        	for (j=0;j<=n;j++){
        	
        	if(j==n){
        	cout<<"="<<setw(1)<<a[i][j]<<setw(1)<<setw(2);}	
        	else{
        	cout<<"|"<<setw(1)<<a[i][j]<<setw(1)<<"|"<<setw(2);}
			}}
			
	cout<<"\n";
	cout<<"\n";
    cout<<"--------------------------------GAUSS SEIDEL------------------------------------";
    cout<<"같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같";       	            
    cout<<"Iter"<<setw(10);
    for(i=0;i<n;i++)
        cout<<"x"<<i<<setw(18);
    cout<<"\n------------------------------------------------------------------------------";
    do                            //Perform iterations to calculate x1,x2,...xn
    {
        cout<<"\n"<<count+1<<"."<<setw(16);
        for (i=0;i<n;i++)                //Loop that calculates x1,x2,...xn
        {
            y=x[i];
            x[i]=a[i][n];
            for (j=0;j<n;j++)
            {
                if (j!=i)
                x[i]=x[i]-a[i][j]*x[j];
            }
            x[i]=x[i]/a[i][i];
            if (abs(x[i]-y)<=eps)            //Compare the ne value with the last value
                flag++;
            cout<<x[i]<<setw(18);
        }
        cout<<"\n";
        count++;   
    }while(flag<n);                        //If the values of all the variables don't differ from their previious values with error more than eps then flag must be n and hence stop the loop
   
    cout<<"\nLa solucion es la siguiente: \n";
    for (i=0;i<n;i++)
        cout<<"x"<<i<<" = "<<x[i]<<endl;  
    system("PAUSE");     
    return 0;
}

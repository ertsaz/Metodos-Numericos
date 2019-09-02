//Trapezoidal Method for the evaluation of Definite Integrals
#include<iostream>
#include<cmath>
# include <iomanip> 
#define INTERVALOS 10
using namespace std;
void tabula(double a, double b);
double f(double x)        //write the function whose definite integral is to be calcuated here
{
    //double a=pow(x,2)+5*x;
    double a=2*pow(x,-3)+2*pow(x,2)-3;
    return a;
}
int main()
{
	int opcion;
	do{
	cout.precision(4);
    cout.setf(ios::fixed);
    int n,i;        //n is for subintervals and i is for loop
    double a,b,h,sum=0,integral;    
    cout<<"Enter the limits of integration,\nInitial limit,a=";    //get the limits of integration
    cin>>a;
    cout<<"Final limit, b=";
    cin>>b;
    cout<<"Enter the no. of subintervals, n=";            //get the no. of subintervals
    cin>>n; 
	tabula(a, b);   
    double x[n+1],y[n+1];    
    h=(b-a)/n;                //get the width of the subintervals
    for (i=0;i<=n;i++)            
    {                    //loop to evaluate x0,...xn and y0,...yn
        x[i]=a+i*h;            //and store them in arrays
        y[i]=f(x[i]);
    }
    for (i=1;i<n;i++)            //loop to evaluate h*(y1+...+yn-1)
    {
        sum=sum+h*y[i];
    }
    integral=h/2.0*(y[0]+y[n])+sum;        //h/2*[y0+yn+2(y1+y2+y3+...yn-1)]
    cout<<"integral = "<<h<<"/2"<<"["<<y[0]<<"+"<<sum<<"+"<<y[n]<<"]"<<endl;
	cout<<"The definite integral  is "<<integral<<endl;
    cout<<"\nDESEAS REALIZAR LA OPERACION OTRA VEZ?\n";
	cout<<"\nSI[1] NO[2]\n"; 
    cin >> opcion; 
    }while(opcion<=1);  
    system("PAUSE");
}

void tabula(double a, double b)
{
	int puntos = n + 1;
	
	double ancho = (b - a) / INTERVALOS;
	
	cout <<setw(10)<<"x"<<setw(10)<<"f(x)"<< endl;
	for (int i = 0; i < puntos; i++) {
		cout <<setw(10)<< a <<setw(10)<< f(a) << endl;
		a = a + ancho;
	}
}

//Simpson's 1/3rd Rule for Evaluation of Definite Integrals
#include<iostream>
#include<cmath>
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
    cout.precision(4);        //set the precision
    cout.setf(ios::fixed);
    int n,i;            //n is for subintervals and i is for loop
    double a,b,c,h,sum=0,integral;
    cout<<"\nEnter the limits of integration,\n\nInitial limit,a= ";
    cin>>a;
    cout<<"\nFinal limit, b=";                //get the limits of integration
    cin>>b;
    cout<<"\nEnter the no. of subintervals(IT SHOULD BE EVEN), \nn=";        //get the no. of subintervals
    cin>>n;
    tabula(a, b);
    double x[n+1],y[n+1];
    h=(b-a)/n;                        //get the width of the subintervals
    for (i=0;i<n+1;i++)
    {                        //loop to evaluate x0,...xn and y0,...yn
        x[i]=a+i*h;                //and store them in arrays
        y[i]=f(x[i]);
    }
    for (i=1;i<n;i+=2)
    {
        sum=sum+4.0*y[i];                //loop to evaluate 4*(y1+y3+y5+...+yn-1)
    }
    cout<<sum<<endl;
    for (i=2;i<n-1;i+=2)
    {
        sum=sum+2.0*y[i];                /*loop to evaluate 4*(y1+y3+y5+...+yn-1)+2*(y2+y4+y6+...+yn-2)*/ 
    }
    
    integral=h/3.0*(y[0]+y[n]+sum);    //h/3*[y0+yn+4*(y1+y3+y5+...+yn-1)+2*(y2+y4+y6+...+yn-2)]
    cout<<"\nThe definite integral  is "<<integral<<"\n"<<endl;
    cout<<"integral = "<<h<<"/"<<"["<<y[0]<<"+"<<sum<<"+"<<y[n]<<"]"<<endl;
    cout<<"\nDESEAS REALIZAR LA OPERACION OTRA VEZ?\n";
	cout<<"\nSI[1] NO[2]\n"; 
    cin >> opcion; 
    }while(opcion<=1);  
    system("PAUSE");
}

void tabula(double a, double b)
{
	int puntos = INTERVALOS + 1;
	
	double ancho = (b - a) / INTERVALOS;
	
	cout <<setw(10)<<"x"<<setw(10)<<"f(x)"<< endl;
	for (int i = 0; i < puntos; i++) {
		cout <<setw(10)<< a <<setw(10)<< f(a) << endl;
		a = a + ancho;
	}
}

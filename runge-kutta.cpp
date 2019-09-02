#include<iostream>
#include<iomanip>
#include<cmath>
#define PRECISION 3
using namespace std;
double df(double x, double y)
{
    //return 2-exp(-4*x)-2*y;   
    //return x+y;
    return x;
}
int main()
{
	cout.precision(3);
    cout.setf(ios::fixed);
    double x,y,x0,y0,h,k1,k2,k3,k4;    
    cout<<"\nIngrese los valores iniciales de x y y respectivamente:\n";
    cin>>x0>>y0;                    
    cout<<"\nIngrese el valor de x para el cual le gustaría encontrar y:\n";
    cin>>x;
    cout<<"\nIngrese el ancho de intervalo h:\n";
    cin>>h;                        
    cout<<"x"<<setw(13)<<"y"<<setw(13)<<"k1"<<setw(12)<<"k2"<<setw(12)<<"k3"<<setw(12)<<"k4"<<setw(16)<<"k_avg"<<endl;
    cout<<"________________________________________________________________________________\n";    
    while(fabs(x-x0)>0.0000001)      
    {   
        k1=h*df(x0,y0);
        k2=h*df(x0+h/2.0,y0+k1/2.0);
        k3=h*df(x0+h/2.0,y0+k2/2.0);
        k4=h*df(x0+h,y0+k3);
        cout<<x0<<setw(12)<<y0<<setw(12)<<k1<<setw(12)<<k2<<setw(12)<<k3<<setw(12)<<k4<<setw(14)<<1/6.0*(k1+2*k2+2*k3+k4)<<endl;
        y=y0+1/6.0*(k1+2*k2+2*k3+k4);
        y0=y;
        x0=x0+h;
    }
    cout<<x0<<setw(12)<<y0<<endl;
    cout<<"________________________________________________________________________________\n";    
    cout<<"El valor aproximado de y es"<<y0<<endl;    
    return 0;
}

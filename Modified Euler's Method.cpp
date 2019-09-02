//Modified Euler's Method for differential equations
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
float df(double x, double y)
{
    double a=x+y;            //function for defining dy/dx
    return a;
}
int main()
{
    cout.precision(3);
    cout.setf(ios::fixed);
	double x0,y0,x,y_i,dy1,dy2,dy_avg,y_n,h;    //for initial values, width, etc.
    cout<<"\nIngrese los valores iniciales de x y y respectivamente:\n";
    cin>>x0>>y0;                    
    cout<<"\nIngrese el valor de x para el cual le gustaría encontrar y:\n";
    cin>>x;
    cout<<"\nIngrese el ancho de intervalo h:\n";
    cin>>h; 
    cout<<"x"<<setw(13)<<"y"<<setw(13)<<"k1"<<setw(12)<<"k2"<<setw(12)<<"k3"<<setw(12)<<"k4"<<setw(16)<<"k_avg"<<endl;
    cout<<"________________________________________________________________________________\n";   
    while(fabs(x-x0)>0.0000001)      //I couldn't just write "while(x0<x)" as they both are floating point nos. It is dangerous to compare two floating point nos. as they are not the same in binary as they are in decimal. For instance, a computer cannot exactly represent 0.1 or 0.7 in binary just like decimal can't represent 1/3 exactly without recurring digits.

    {   
        dy1=h*df(x0,y0);        //calculate slope or dy/dx at x0,y0
        y_i=y0+dy1;            //calculate new y, which is y0+h*dy/dx
        dy2=h*df(x0,y_i);        //calculate slope or dy/dx at x0,new y
        dy_avg=(dy1+dy2)/2.0;        //calculate the average of the slopes at y0 and new y
        y_n=y0+dy_avg;            //calculate new y, which is y0+h*average(dy/dx)   
        cout<<x0<<setw(12)<<y0<<setw(12)<<dy1<<setw(12)<<y_i<<setw(12)<<dy2<<setw(12)<<dy_avg<<setw(14)<<y_n<<endl;
        x0=x0+h;            //calculate new x.
        y0=y_n;                //pass this new y as y0 in the next iteration.
    }
    cout<<x0<<setw(12)<<y0<<endl;
    cout<<"________________________________________________________________________________\n";    
    cout<<"El valor aproximado de y en x = 0 es "<<y0<<endl;    //print the solution.
    return 0;
}

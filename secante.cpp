#include <iostream>
#include <iomanip> // setprecision
#include <cmath> // fabs
#define PRECISION 4
#define INTERVALOS 11

using namespace std;
 int l,j,g,k,n;
 int v[20];
 double xi,e,fx1,fxo,fxi;

int main()
{
	system("cls");
	cout << setprecision(PRECISION);
	cout << "\nCalculo de las raices de una funcion aplicando el metodo secante\n";
	cout<<"\n\nPOLINOMIO A DESARROLLAR\n";
	cout<<"\ngrado de la ecuacion:";
	cin>>n;
	       for(l=0;l<=n;l++){
		   cout << " \nv[" << l << "] = ";
		   cin>>v[l];
		   }
	       cout<<"\npolinomio : ";
	       for(j=0;j<=n;j++){
		   cout<<v[j]<<"x^"<<j;
		   if(j != n) cout<<"+";
		   }
	
	double xo, x1, tolerancia;
	
	cout << "\n\nIngrese el intervalo inicial [xo,x1]:" << endl;
	
	cout << "\nxo = ";
	cin >> xo;
	
	cout << "x1 = ";
	cin >> x1;
	
	double xi; // La solución aproximada
	double e;
	int i;
	
    cout << "\nTolerancia = ";
    cin >> tolerancia;

	cout << "\ni\txi\tf(xi)\t\tf(xi-1)\t\terror\n" << endl;
	i=0;
		do {
			fxo=0;
		for(g=0;g<=n;g++){
			fxo = fxo + v[g] * pow(xo,g);
		}
		fx1=0;
		for(k=0;k<=n;k++){
			fx1 = fx1 + v[k] * pow(x1,k);
		}
			xi = x1 - ((fx1 * (xo - x1))/(fxo - fx1));
			e = fabs(xi - xo) / fabs(xi);
			
			cout << i << "\t" << xi << "\t" << fxi << "\t\t" << fx1 << "\t\t" << e << endl;

			// if (fabs(f(xr)) <= tolerancia) 
			if (e <= tolerancia) {
				cout << "\n\nPara una tolerancia de " << tolerancia << " la raiz de x es: " << x1 << endl;
				break;
			
			} else {
				
				xo = x1; // Se guarda el valor de la aproximación anterior
			    x1 = xi;
			    i++;
			}
		
		} while (1);
	
	
	cin.get();
	cin.get();
	return 0;
}



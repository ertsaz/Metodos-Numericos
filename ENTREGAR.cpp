# include <iostream>
# include <cstdlib>
# include <iomanip> // setprecision
# include <cmath> // fabs
# define PRECISION 3
# define INTERVALOS 11

using namespace std;
 int l,j,g,k,n,p,u;
 int v[20];
 double xi,e,fa,fb,fxr,fx1,fxo,fxi;

void menu_principal();
void menu_presentacion();
void menu_cerrado();
void menu_abierto();
 double f(double x);

int main()
{
  menu_principal();

   return 0;
}

void menu_principal()
{
   bool repite = true;
   int opcion;

   do {
      system("cls");

      // MENU
      cout<<"\n\t\t\tMENU\n";

      // LAS OPCIONES DEL MENU
      cout<<"\n\t1. PRESENTACION\n";
      cout<<"\t2. METODO CERRADO\n";
      cout<<"\t3. METODO ABIERTO\n";
      cout<<"\t0. SALIR\n";

      // LEER LAS OPCIONES POR EL USUARIO
      cout <<"\n\topcion: ";
      cin >>opcion;

      // ALTERNATIVAS
      switch (opcion) {
         case 1:
            menu_presentacion();
            break;

         case 2:
            menu_cerrado();
            break;

         case 3:
            menu_abierto();
            break;

         case 0:
            repite = false;
            system("pause>nul");
            break;
      }

   } while(repite);
}

void menu_presentacion()
{
   bool repite = true;
   int opcion;

   do {

      system("cls");
      // EL TITULO DEL MENU
      cout << "\n\t\t\t\tPRESENTACION\n";

      // PRESENTACION
      cout << " \n\t\t\tUNIVENCIDAD TECNOLOGICA DE PANAMA\n";
      cout << " \t\tFacultad de Ingenieria de Sistemas Computacionales\n";
      cout << " \t\t\tIngenier�a de Sistemas y Computacion\n";
      cout << "\n\n";
      cout << " \t\t\t\tPROYECTO # 2\n";
      cout << "\n\n";
      cout << " \t\t\t\tFacilitadora:\n";
      cout << " \t\t\tIng. Jacqueline S. de Ching\n";
      cout << "\n\n";
      cout << " \t\t\t\tErnesto Sanchez\n";
      cout << "\n\n";
      cout << " \t\t\t\tCedula:\n";
      cout << " \t\t\t\t9-734-681\n";
      cout << "\n\n";
      cout << " \t\t\t\tGRUPO:1IL121\n";
      cout << "\n\n";
      cout << " \t\t\t\tII SEMESTRE\n";
      cout << " \t\t\t\t16/10/2017\n";
      cout << " \t\t\t\t\0. SALIR";

      // LEER LAS OPCIONES POR EL USUARIO
      cout << "\n\topcion: ";
      cin >> opcion;

      // ALTERNATIVAS
      switch (opcion) {
      	 case 0:
            repite = false;
            system("pause>nul");
            break;
	  }

   } while(repite);
}

void menu_cerrado()
{
   bool repite = true;
   int opcion;

   do {
      system("cls");
      // EL TITULO DEL MENU
      cout << "\n\t\t\t\tMENU\n";
      // LAS OPCIONES DEL MENU
      cout << " \n\t1. METODO SECANTE\n";
      cout << " \t2. REGRESARAL MENU PRINCIPAL\n";

      // LEER LAS OPCIONES POR EL USUARIO
      cout << "\n\topcion: ";
      cin >> opcion;

      // ALTERNATIVAS
      system("cls");
      switch (opcion) {
         case 1:

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

		system("cls");
        cout << "\n\t\t\t\tTABLA DE INTERACCIONES\n" << endl;
        cout<<"\n\t\t\t\tf(x)=";
	       for(j=0;j<=n;j++){
		   cout<<v[j]<<"x^"<<j;
		   if(j != n) cout<<"+";
		   }

	cout << "\n\ni\txi\tf(xi)\t\tf(xi-1)\t\terror\n" << endl;
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
			fxi=0;
		for(u=0;u<=n;u++){
			fxi = fxi + v[u] * pow(xi,u);
		}
			cout << i << "\t" << xi << "\t" << fxi << "\t\t" << fx1 << "\t\t" << e << endl;

			// if (fabs(f(xr)) <= tolerancia)
			if (e <= tolerancia) {
				cout << "\n\nPara una tolerancia de " << tolerancia << " la raiz de x es: " << xi << endl;
				break;

			} else {
				i++;
				xo = x1; // Se guarda el valor de la aproximación anterior
			    x1 = xi;

			}

		} while (1);


	cin.get();
	cin.get();


            break;

         case 2:
            repite = false;
            system("pause>nul");
            break;
      }

   } while(repite);
}

void menu_abierto()
{
   bool repite = true;
   int opcion;
   void tabula(double a, double b);

   do {
      system("cls");
      // EL TITULO DEL MENU
      cout << "\n\t\t\t\tMENU\n";
      // LAS OPCIONES DEL MENU
      cout << " \n\t1. METODO REGULA FALSI\n";
      cout << " \t2. REGRESARAL MENU PRINCIPAL\n";

      // LEER LAS OPCIONES POR EL USUARIO
      cout << "\n\topcion: ";
      cin >> opcion;

      // ALTERNATIVAS
      system("cls");
      switch (opcion) {
         case 1:

         		system("cls");
	cout << setprecision(PRECISION);
	cout << "\nCalculo de las raices de una funcion aplicando el metodo de la falsa posicion\n";
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

	double a, b, tolerancia;

	cout << "\n\nIngrese el intervalo inicial [a,b]:" << endl;

	cout << "\na = ";
	cin >> a;

	cout << "b = ";
	cin >> b;


	double xr; // La solución aproximada
	double xa; // Solución anterior
	double e;

	if (fa * fb > 0) {
		cout << "\nNo se puede aplicar el metodo de la falsa posicion\n";
		cout << "porque f(" << a << ") y f(" << b << ") tienen el mismo signo" << endl;

	} else {
		cout << "\nTolerancia = ";
		cin >> tolerancia;

		system("cls");
        cout << "\n\t\t\t\tTABLA DE INTERACCIONES\n" << endl;
        cout<<"\n\t\t\t\tf(x)=";
	       for(j=0;j<=n;j++){
		   cout<<v[j]<<"x^"<<j;
		   if(j != n) cout<<"+";
		   }
		cout << "\n\na\tb\tx\tf(a)\t\tf(b)\t\tf(x)\t\te\n" << endl;
		xa=0;
		do {
				fa=0;
		for(g=0;g<=n;g++){
			fa = fa + v[g] * pow(a,g);
		}
		fb=0;
		for(k=0;k<=n;k++){
			fb = fb + v[k] * pow(b,k);
		}
			xr = b - fb * ((b - a) / (fb - fa));
			e = fabs(xr - xa) / fabs(xr);
			cout << a << "\t" << b << "\t" << xr << "\t" << fa << "\t\t" << fb << "\t\t" << fxr << "\t\t" << e << endl;
			fxr=0;
		for(p=0;p<=n;p++){
			fxr = fxr + v[p] * pow(xr,p);
		}
			// if (fabs(f(xr)) <= tolerancia)
			if (e <= tolerancia) {
				cout << "\n\nPara una tolerancia de " << tolerancia << " la raiz de x es: " << xr << endl;
				break;

			} else {
				xa = xr; // Se guarda el valor de la aproximación anterior
				if (fxr * fa > 0) {
					a = xr;

				} else if (fxr * fb > 0) {
					b = xr;
				}
			}

		} while (1);
	}

	cin.get();
	cin.get();
			break;

         case 2:
            repite = false;
            system("pause>nul");
            break;
      }

   } while(repite);
}

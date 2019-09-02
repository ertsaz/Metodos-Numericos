# include <iostream>
# include <cstdlib>
# include <iomanip>
# include <cmath>
# include <windows.h>
# define PRECISION 4

using namespace std;

bool AjustarVentana(int Ancho, int Alto);
void menu_principal();
void menu_presentacion();
void Euler();
void Kutta();

float f(double x, double y)
{
    double a= y - x + 1;
    //double a=x*y;
	//double a= -2*pow(x,3) + 12*pow(x,2) - 20*x + 8.5;
    return a;
}

float f1(double x, double y)
{
    double c = exp(x) + x;          //solucion analitica de kutta
    //double c= 2*exp(pow(x,2)/2-2);   //solucion analitica de euler
	//double c= - 0.5*pow(x,4) + 4*pow(x,3) - 10*pow(x,2) + 8.5*x + 1;
    return c;
}



int main ()
{
	//AjustarVentana(170,58);     // Para pantalla de resoluci�n 1360*760
	AjustarVentana(90,60);  // Para otras de menor resoluci�n
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
      cout<<"\n"<<setw(46)<<"MENU\n";

      // LAS OPCIONES DEL MENU
      cout<<"\n\t1. PRESENTACION\n";
      cout<<"\t2. METODO DE EULER\n";
      cout<<"\t3. METODO DE RUNGE-KUTTA\n";
      cout<<"\t0. SALIR DEL PROGRAMA\n";

      // LEER LAS OPCIONES POR EL USUARIO
      cout <<"\n\topcion: ";
      cin >>opcion;

      // ALTERNATIVAS
      switch (opcion) {
      	case 1:
      		menu_presentacion();
      		break;

         case 2:
            Euler();
            break;

         case 3:
            Kutta();
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
      cout << " \t\t\t\tPROYECTO # 4\n";
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
      cout << " \t\t\t\t23/11/2017\n";

      // LEER LAS OPCIONES POR EL USUARIO
      cout << "\n\tPRESIONE (0) PARA IR AL MENU PRINCIPAL ";
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

void Euler(){

 int opcion;
 system("cls");
do{
    system("cls");
	cout.precision(4);
    cout.setf(ios::fixed);
	double x0,y0,x,y_verd,error,y_i,dy1,dy2,dy_avg,y_n,h;
    cout<<"\n";
	cout<<"--------------------------------Metodos numericos para EDOs-------------------------------";
	cout<<"-------------------Problemas de valor inicial y problemas de frontera---------------------";
    cout<<"-------------------------------------Metodo de Euler--------------------------------------";
    cout<<"------------------------------------y(x) = y - x + 1--------------------------------------";
    cout<<"������������������������������������������������������������������������������������������\n";
    cout<<setw(58)<<"Ingrese los valores iniciales de x y y respectivamente:\n";
    cout<<"\nx0 = ";
    cin>>x0;
    cout<<"y0 = ";
	cin>>y0;
    cout<<"\n"<<setw(62)<<"Ingrese el valor de x para el cual le gustar�a encontrar y:\n";
    cout<<"\nx = ";
	cin>>x;
    cout<<"\n"<<setw(33)<<"Ingrese el ancho de intervalo \n";
    cout<<"\nh = ";
    cin>>h;
    cout<<"\n";
	cout<<"--------------------------------Metodos numericos para EDOs-------------------------------";
	cout<<"-------------------Problemas de valor inicial y problemas de frontera---------------------";
    cout<<"-------------------------------------Metodo de Euler--------------------------------------";
    cout<<"------------------------------------y(x) = y - x + 1--------------------------------------";
    cout<<"������������������������������������������������������������������������������������������\n";
    cout<<setw(4)<<"x"<<setw(15)<<"y_euler"<<setw(12)<<"y_exact"<<setw(10)<<"hy'"<<setw(12)<<"y_new"<<setw(14)<<"hy_new'"<<setw(11)<<"hy'avg"<<setw(10)<<"error"<<endl;
    cout<<"__________________________________________________________________________________________\n";
    while(fabs(x-x0)>0.0000001)
    {
        dy1=h*f(x0,y0);
        y_i=y0+dy1;
        dy2=h*f(x0,y_i);
        dy_avg=(dy1+dy2)/2.0;
        y_n=y0+dy_avg;
        y_verd= f1(x0,y0);
        error=((y0 - y_verd)/y_verd)*100.0;
		cout<<x0<<setw(12)<<y0<<setw(12)<<y_verd<<setw(12)<<dy1<<setw(12)<<y_i<<setw(12)<<dy2<<setw(12)<<dy_avg<<setw(9)<<abs(error)<<" %"<<endl;
        x0=x0+h;
        y0=y_n;
    }
    cout<<x0<<setw(12)<<y0<<setw(12)<<f1(x0,y0)<<endl;
    cout<<"__________________________________________________________________________________________\n";
	cout<<"\nComparacion de los valores exacto y aproximado"<<"\nde la integral de y' = y - x + 1, "<<"\ncon la condicion inicial de que y = 1 en x = 0."<<endl;
	cout<<"\nvalor exacto = "<<f1(x0,y0)<<endl;
	cout<<"\nvalor proximado = "<<y0<<endl;
	cout<<"\nerror relativo % = "<<(((y0 - (f1(x0,y0)))/(f1(x0,y0)))*100.0)<<" %"<<endl;
    cout<<"\nDESEAS REALIZAR LA OPERACION OTRA VEZ?\n";
	cout<<"\nSI[1] NO[2]\n";
    cin >> opcion;
    }while(opcion<=1);
    system("PAUSE");
}

/**********************Metodo de Runge Kutta******************************/

void Kutta(){
 int opcion;
 system("cls");
do{
    system("cls");
	cout.precision(4);
    cout.setf(ios::fixed);
    double a,x,y,y_verd,error,x0,y0,h,k1,k2,k3,k4;
    cout<<"\n";
	cout<<"--------------------------------Metodos numericos para EDOs-------------------------------";
	cout<<"-------------------Problemas de valor inicial y problemas de frontera---------------------";
	cout<<"----------------------------------Metodo de Runge Kutta-----------------------------------";
    cout<<"------------------------------------y(x) = y - x + 1--------------------------------------";
    cout<<"������������������������������������������������������������������������������������������\n";
    cout<<setw(58)<<"Ingrese los valores iniciales de x y y respectivamente:\n";
    cout<<"\nx0 = ";
    cin>>x0;
    cout<<"y0 = ";
	cin>>y0;
    cout<<"\n"<<setw(62)<<"Ingrese el valor de x para el cual le gustar�a encontrar y:\n";
    cout<<"\nx = ";
	cin>>x;
    cout<<"\n"<<setw(33)<<"Ingrese el ancho de intervalo \n";
    cout<<"\nh = ";
    cin>>h;
    cout<<"\n";
	cout<<"--------------------------------Metodos numericos para EDOs-------------------------------";
	cout<<"-------------------Problemas de valor inicial y problemas de frontera---------------------";
	cout<<"----------------------------------Metodo de Runge Kutta-----------------------------------";
	cout<<"------------------------------------y(x) = y - x + 1--------------------------------------";
    cout<<"������������������������������������������������������������������������������������������\n";
    cout<<setw(4)<<"x"<<setw(10)<<"y"<<setw(13)<<"y_verd"<<setw(8)<<"k1"<<setw(10)<<"k2"<<setw(10)<<"k3"<<setw(10)<<"k4"<<setw(12)<<"k_avg"<<setw(10)<<"error"<<endl;
    cout<<"__________________________________________________________________________________________\n";
	while(fabs(x-x0)>0.0000001)
    {
        k1=f(x0,y0);
        k2=f(x0+h/2.0,y0+k1*h/2.0);
        k3=f(x0+h/2.0,y0+k2*h/2.0);
        k4=f(x0+h,y0+k3*h);
        y_verd= f1(x0,y0);
        error=((y0 - y_verd)/y_verd)*100.0;
        cout<<x0<<setw(11)<<y0<<setw(10)<<y_verd<<setw(10)<<k1<<setw(10)<<k2<<setw(10)<<k3<<setw(10)<<k4<<setw(11)<<1/6.0*(k1+2*k2+2*k3+k4)<<setw(9)<<abs(error)<<" %"<<endl;
        y=y0+1/6.0*(k1+2*k2+2*k3+k4)*h;
        y0=y;
        x0=x0+h;
    }
    cout<<x0<<setw(11)<<y0<<setw(10)<<f1(x0,y0)<<endl;
    cout<<"__________________________________________________________________________________________\n";
	cout<<"\nComparacion de los valores exacto y aproximado"<<"\nde la integral de y' = y - x + 1, "<<"\ncon la condicion inicial de que y = 1 en x = 0."<<endl;
	cout<<"\nvalor exacto = "<<f1(x0,y0)<<endl;
	cout<<"\nvalor proximado = "<<y0<<endl;
	cout<<"\nerror relativo % = "<<abs((((y0 - (f1(x0,y0)))/(f1(x0,y0)))*100.0))<<" %"<<endl;
    cout<<"\nDESEAS REALIZAR LA OPERACION OTRA VEZ?\n";
	cout<<"SI[1] NO[2]\n";
    cin >> opcion;
    }while(opcion<=1);
    system("PAUSE");

}


bool AjustarVentana(int Ancho, int Alto) {
	_COORD Coordenada;
	Coordenada.X = Ancho;
	Coordenada.Y = Alto;

	_SMALL_RECT Rect;
	Rect.Top = 0;
	Rect.Left = 0;
	Rect.Right = Ancho - 1;
	Rect.Bottom = Alto - 1;

	// Obtener el handle de la consola
	HANDLE hConsola = GetStdHandle(STD_OUTPUT_HANDLE);

	// Ajustar el buffer al nuevo tama�o
	SetConsoleScreenBufferSize(hConsola, Coordenada);

	// Cambiar tama�o de consola a lo especificado en el buffer
	SetConsoleWindowInfo(hConsola, TRUE, &Rect);
	return TRUE;
}

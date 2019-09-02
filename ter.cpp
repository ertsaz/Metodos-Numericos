# include <iostream>
# include <cstdlib>
# include <iomanip> // setprecision
# include <cmath> // fabs
# define PRECISION 4
# define INTERVALOS 11

using namespace std;

void menu_principal();
void menu_presentacion();
void menu_conector();
void menu_iteractivo();
void menu_doolitle();
void gauss_seidel();
void soluciones_de_x();
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
      cout<<"\t2. METODO DEL SISTEMA DE ECUACIONES LINEALES\n";
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
            menu_conector();
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
      cout << " \t\t\tIngeniería de Sistemas y Computacion\n";
      cout << "\n\n";
      cout << " \t\t\t\tPROYECTO # 3\n";
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
      cout << " \t\t\t\t31/10/2017\n";
      
      // LEER LAS OPCIONES POR EL USUARIO
      cout << "\n\t0 PARA SALIR ";
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
 
void menu_conector()
{
   bool repite = true;
   int opcion;   
 
   do {
      system("cls");
      // EL TITULO DEL MENU
      cout << "\n\t\t\t\tMENU\n";
      // LAS OPCIONES DEL MENU
      cout << " \n\t1. METODO DOOLITLE\n";
      cout << " \t2. METODO ITERACTIVO\n";
      cout << " \t3. REGRESARAL MENU PRINCIPAL\n";
      
      // LEER LAS OPCIONES POR EL USUARIO
      cout << "\n\topcion: ";
      cin >> opcion;
      
      // ALTERNATIVAS 
      system("cls");
      switch (opcion) {
         case 1:
		 menu_doolitle();
		 break;

         case 2:
		 menu_iteractivo();
		 break;

         case 3:
            repite = false;
            system("pause>nul");
            break;
      }
 
   } while(repite);
}

void menu_iteractivo()
{
   bool repite = true;
   int opcion;
   
   do {
      system("cls");
      // EL TITULO DEL MENU
      cout << "\n\t\t\t\tMETODO ITERACTIVO\n";      
      // LAS OPCIONES DEL MENU
      cout << " \n\t1. TABLA O CUADRO DE ITERACCIONES\n";
      cout << " \t2. RESULTADOS DEL SISTEMA DE ECUACIONES LINEALES\n";
      cout << " \t3. REGRESARAL MENU ANTERIOR\n";
      
      // LEER LAS OPCIONES POR EL USUARIO
      cout << "\n\topcion: ";
      cin >> opcion;
      
      // ALTERNATIVAS 
      switch (opcion) {
         case 1:
         gauss_seidel();
		 break;
		 
         case 2:
         soluciones_de_x();
			break;
		 
						
         case 3:
            repite = false;
            system("pause>nul");
            break;
      }
 
   } while(repite);
}
 
void menu_doolitle()
{
   bool repite = true;
   int opcion;   
 
   do {
      system("cls");
      // EL TITULO DEL MENU
      cout << "\n\t\t\t\tMETODO DOOLITLE\n";      
      // LAS OPCIONES DEL MENU
      cout << " \n\t1.INGRESAR MATRIZ PRINCIPAL\n";
      cout << " \t2. MATRIZ TRIANGULAR INFERIOR\n";
      cout << " \t3. MATRIZ TRIANGULAR SUPERIOR\n";
      cout << " \t4. RESULTADO DEL SISTEMA DE ECUACIONES LINEALES\n";
      cout << " \t5. REGRESARAL MENU ANTERIOR\n";
      
      // LEER LAS OPCIONES POR EL USUARIO
      cout << "\n\topcion: ";
      cin >> opcion;
      
      // ALTERNATIVAS 
      system("cls");
      switch (opcion) {

         case 1:{

			break;
		 }
        

         case 2:
         	
			break;

         case 3:
         	
			break;

         case 4:
         	
			break;

         case 5:
            repite = false;
            system("pause>nul");
            break;
      }
 
   } while(repite);
}


void gauss_seidel(){
	int opcion;
	
    do{
    system("cls");         		
    cout.precision(4);
    cout.setf(ios::fixed);
    int n,i,j,k,flag=0,count=0,l=1,e=1;
    cout<<"--------------------------------GAUSS SEIDEL------------------------------------";
    cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
    cout<<"\nIntroduzca el # de ecuaciones: ";           
    cin>>n;  
	                  
    float a[n][n+1];             
    float x[n];                
    float eps,y;
    cout<<"\nIntroduzca los elementos de la matriz en forma de fila: \n";
    for (i=0;i<n;i++){
    	cout<<"\necuacion "<<i+1<<"  \n";
        for (j=0;j<=n;j++){
        	cout<<"a"<<i+1<<j+1<<"= ";
            cin>>a[i][j];
        }}
    x[i] =0;
    eps =0.00001;
    system("cls");
    cout<<"--------------------------------GAUSS SEIDEL------------------------------------";
    cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
    
    cout<<"---------------------------tu matriz es la siguiente----------------------------";
    cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
    for (i=0;i<n;i++){
        	cout<<"\nx"<<l++<<"= ";
        	for (j=0;j<=n;j++){
        	
        	if(j==n){
        	cout<<"="<<setw(1)<<a[i][j]<<setw(1)<<setw(2);}	
        	else{
        	cout<<"|"<<setw(1)<<a[i][j]<<setw(1)<<"|"<<setw(2);}
			}}
    cout<<"\n";   	
    for (i=0;i<n;i++)                    
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
    cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
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
    cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";       	            
    cout<<"Iter"<<setw(10);
    for(i=0;i<n;i++)
        cout<<"x"<<i<<setw(18);
    cout<<"\n------------------------------------------------------------------------------";
    do                           
    {
        cout<<"\n"<<count+1<<"."<<setw(16);
        for (i=0;i<n;i++)                
        {
            y=x[i];
            x[i]=a[i][n];
            for (j=0;j<n;j++)
            {
                if (j!=i)
                x[i]=x[i]-a[i][j]*x[j];
            }
            x[i]=x[i]/a[i][i];
            if (abs(x[i]-y)<=eps)            
                flag++;
            cout<<x[i]<<setw(18);
        }
        cout<<"\n";
        count++;   
    }while(flag<n);                       
   
    cout<<"\nLa solucion es la siguiente: \n";
    for (i=0;i<n;i++)
        cout<<"x"<<i<<" = "<<x[i]<<endl;
		cout <<"\nDESEAS REALIZAR LA OPERACION OTRA VEZ? SI[1] NO[2]\n"; 
        cin >> opcion; 
        }while(opcion<=1);  
        system("PAUSE");
        menu_iteractivo();
}

void soluciones_de_x(){
	int i,n;
	float x[10];
	    cout<<"\nLa solucion es la siguiente: \n";
    for (i=0;i<3;i++)
        cout<<"x"<<i<<" = "<<x[i]<<endl;
        system("PAUSE");
        
}

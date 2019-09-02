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
void solucion_de_x();
 
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
      cout << " \n\t1. INGRESE EL SISTEMA DE ECUACIONES PAR REALIZAR LAS INTERACCION\n";
      cout << " \t2. REGRESARAL MENU ANTERIOR\n";
      
      // LEER LAS OPCIONES POR EL USUARIO
      cout << "\n\topcion: ";
      cin >> opcion;
      
      // ALTERNATIVAS 
      system("cls");
      switch (opcion) {
         case 1:{
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
    
		 break;
		 }
			
         case 2:
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
      cout << " \n\t1. INGRESAR MATRIZ PRINCIPAL\n";
      cout << " \t2. REGRESARAL MENU ANTERIOR\n";
      
      // LEER LAS OPCIONES POR EL USUARIO
      cout << "\n\topcion: ";
      cin >> opcion;
      
      // ALTERNATIVAS 
      system("cls");
      switch (opcion) {

         case 1:{
         		do{
    int n,i,k,j,p,e=1;
    float a[10][10],l[10][10]={0},u[10][10]={0},sum,b[10],z[10]={0},x[10]={0};
    system("cls");
    cout<<"-------------------------------METODO DOOLITLE----------------------------------";
    cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
    cout<<"\nIntroduzca el # de ecuaciones: ";           
    cin>>n; 
    cout<<"\nIntroduzca los elementos de la matriz en forma de fila: \n";
    for (i=1;i<=n;i++){
    	cout<<"\necuacion "<<i<<"  \n";
        for (j=1;j<=n;j++){
        	cout<<"a"<<i<<j<<"= ";
            cin>>a[i][j];
        }}
    cout<<"\nIntrodusca los elementos de la matriz b"<<endl;
    for(i=1;i<=n;i++){
    	cout<<"b"<<i<<"= ";
        cin>>b[i];}
    //********** FANCTORIZACION LU *****//
    for(k=1;k<=n;k++)
    {
        u[k][k]=1;
        for(i=k;i<=n;i++)
        {
            sum=0;
            for(p=1;p<=k-1;p++)
                sum+=l[i][p]*u[p][k];
            l[i][k]=a[i][k]-sum;
        }

        for(j=k+1;j<=n;j++)
        {
            sum=0;
            for(p=1;p<=k-1;p++)
                sum+=l[k][p]*u[p][j];
            u[k][j]=(a[k][j]-sum)/l[k][k];
        }
    }
    //******** VENTANA DE LA MATRIZ LU**********//
	cout<<"-----------------------MATRIZ LU DESPUES DE DESCOMPONER-------------------------";
    cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
    cout<<"\n\tMATRIZ L";
        for (i=1;i<=n;i++){
        	cout<<"\n     ";
        	for (j=1;j<=n;j++){
        	cout<<"|"<<setw(1)<<l[i][j]<<setw(1)<<"|"<<setw(2);}
			}		
	cout<<"\n";
	cout<<"\n";
    cout<<"\n\tMATRIZ U";
        for (i=1;i<=n;i++){
        	cout<<"\n     ";
        	for (j=1;j<=n;j++){
        	cout<<"|"<<setw(1)<<u[i][j]<<setw(1)<<"|"<<setw(2);}
			}		
	cout<<"\n";
	cout<<"\n";
    //***** ENCONTRANDO Y; LY=b*********//

    for(i=1;i<=n;i++)
    {                                      
        sum=0;
        for(p=1;p<i;p++)
        sum+=l[i][p]*z[p];
        z[i]=(b[i]-sum)/l[i][i];
    }
    cout<<endl<<endl<<"ENCONTRANDO Y; LY=b"<<endl;    

        for(j=0;j<n;j++)
            cout<<"y"<<j+1<<"= "<<z[j]<<"\n";
        cout<<endl;
    
    //********** ENCONTRANDO X; UX=Z***********//

    for(i=n;i>0;i--)
    {
        sum=0;
        for(p=n;p>i;p--)
            sum+=u[i][p]*x[p];
        x[i]=(z[i]-sum)/u[i][i];
    }
    //*********** MOSTRANDO LAS SOLUCIONES**************//
    cout<<endl<<"SOLUCION DEL SISTEMA DE ECUACIONES X; UX=Z "<<endl;
    for(i=1;i<=n;i++){  
    cout<<"x"<<i<<"= "<<x[i]<<"\n";
    }
	cin.get();
cout <<"\nDESEAS REALIZAR LA OPERACION OTRA VEZ? SI[1] NO[2]\n"; 
cin >> opcion; 
}while(opcion<=1); 
    system("PAUSE");

			break;
		 }
         case 2:
            repite = false;
            system("pause>nul");
            break;
      }
 
   } while(repite);
}




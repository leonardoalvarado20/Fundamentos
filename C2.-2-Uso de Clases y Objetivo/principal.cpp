#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

//Class Persona

class Persona{
	
	private://Atributos
		int cedula;
		string nombre;
		int aa,ma,da,an,mn,dn,a,m,d;
		float peso;
		float altura;
		float IMC;
			
	public: //Metodos
		Persona(int,string,int,int,int,float,float,float);//Contructor
		void ingresar();
    	    				 
};
//Constructor
Persona::Persona(int _cedula,string _nombre,int _an,int _mn,int _dn,float _peso,float _altura,float _IMC){
	cedula = _cedula;
	nombre = _nombre;
	an = _an;
	mn = _mn;
	dn = _dn;
	peso = _peso;
	altura = _altura;   
	IMC = _IMC;
}

void Persona::ingresar(){
	                
    system("cls");

    cout<<"\n\n"; 
    cout<<"\t\t\t\t\t //========================================//"<<endl; 
	cout<<"\t\t\t\t\t      1.Cedula             :  "<<0<<cedula<<"\n";         
    cout<<"\t\t\t\t\t      2.Nombre             :  "<<nombre<<"\n";    
	cout<<"\t\t\t\t\t      3.Fecha Nacimiento   :  "<<dn<<"/"<<mn<<"/"<<an<<"\n"; 
	cout<<"\t\t\t\t\t      4.Peso               :  "<<peso<<"(Kg)"<<"\n";          
	cout<<"\t\t\t\t\t      5.Estatura           :  "<<altura<<"(Mt)"<<"\n"; 
    cout<<"\t\t\t\t\t //========================================//"<<endl;
    cout<<"\n";    	
 
}

//FUCION PRINCIPAL
int cedula;
string nombre;
int aa,ma,da,an,mn,dn,a,m,d;
float peso;
float altura;
float IMC;

int main()
{
	int op,flag;

	do{

    	cout<<"\t\t\t\t  //===================================================//"<<endl;
    	cout<<"\t\t\t\t  //                PROGRAMA: Class Persona            //"<<endl;
    	cout<<"\t\t\t\t  //                                                   //"<<endl;
    	cout<<"\t\t\t\t  //     AUTOR : Leonardo David Alvarado Cornejo       //"<<endl;
    	cout<<"\t\t\t\t  //                                                   //"<<endl;
    	cout<<"\t\t\t\t  //                    VESION: 1.0                    //"<<endl;
    	cout<<"\t\t\t\t  //===================================================//"<<endl;
    	cout<<"\n\n";
	    cout<<"\t\t      //=========================================================================//"<<endl;
		cout<<"\t\t      //        1) OPCION.- 1 Ingresar y mostrar los datos personales            //"<<endl;
	    cout<<"\t\t      //        2) OPCION.- 2 Obtener Mostrar la edad de la persona              //"<<endl;   
		cout<<"\t\t      //        3) OPCION.- 3 Mostrar el indice comporal                         //"<<endl;
		cout<<"\t\t      //        4) OPCION.- 4 Guardar los datos en un archivo .txt               //"<<endl;
		cout<<"\t\t      //        5) OPCION.- 5 Recuperar los datos desde el archivo .txt          //"<<endl;
		cout<<"\t\t      //        0) Salir                                                         //"<<endl;
		cout<<"\t\t      //=========================================================================//"<<endl;
		cout<<"\n\n";  
		cout<<" Digite una Opcion: ";    
		cin>>op; 
		
	switch(op){
		case 1:
    // Ingresar y mostrar los datos personales 
		system("cls");		
                 int perona();{
                    cout<<"\t\t\t\t\t //==============================================//"<<endl; 
                 	cout<<"\t\t\t\t\t //        1.Ingrese su Cedula           :       //"<<endl;                        	
                 	cout<<"\t\t\t\t\t //        2.Ingrese su Nombre           :       //"<<endl;
					cout<<"\t\t\t\t\t //        3.Ingrese su Fecha Nacimineto :       //"<<endl;
					cout<<"\t\t\t\t\t //        4.Ingrese su Peso (Kg)        :       //"<<endl;
					cout<<"\t\t\t\t\t //        5.Ingrese su Estatura (Mt)    :       //"<<endl;                  	                 	
                 	cout<<"\t\t\t\t\t //==============================================//"<<"\n";
                 	cout<<"\t\t1 - C.I. : ";cin>>cedula;
                 	cout<<"\n";
                 	cout<<"\t\t2 - Nombre : ";cin>>nombre;
                 	cout<<"\n";
                 	cout<<"\t\t3 - Dia: ";cin>>dn;
                 	cout<<"\t\t  - Mes: ";cin>>mn;
                 	cout<<"\t\t  - Anios: ";cin>>an;                
                 	cout<<"\n"; 
                 	cout<<"\t\t4 - Peso (Kg) : ";cin>>peso;
                 	cout<<"\n";				
                 	cout<<"\t\t5 - Estatura (Mt) : ";cin>>altura;
                 	cout<<"\n";						 	                 	
                 	system("pause");
                 	Persona p1 = Persona(cedula,nombre,an,mn,dn,peso,altura,IMC);
                	p1.ingresar();
 
                 }         				
		system("pause");
		system("cls");     
		break;
	    
		case 2:
	// Obtener y Mostrar la edad de la persona 
		system("cls");
				int edadd();{
				
					cout<<"\n";
					cout<<"\t\t\t\t         //======================================//"<<endl; 
 	                cout<<"\t\t\t\t         //           La Fecha Nacimiento        //"<<endl;
 	                cout<<"\t\t\t\t         //======================================//"<<endl;
 	                cout<<"\n";
 	                cout<<"\t\t\t - Dia: "<<dn;
 	                cout<<"\n\n";
 	                cout<<"\t\t\t - Mes: "<<mn;
 	                cout<<"\n\n";
 	                cout<<"\t\t\t - Anios: "<<an;
              		cout<<"\n";
					  		
					cout<<"\n";
					cout<<"\t\t\t\t      //============================================//"<<endl; 
 	                cout<<"\t\t\t\t      //           Ingrese la Fecha Actual          //"<<endl;
 	                cout<<"\t\t\t\t      //============================================//"<<endl;
 	                cout<<"\n";
 	                cout<<"\t\t\t - Dia: ";cin>>da;
 	                cout<<"\n";
 	                cout<<"\t\t\t - Mes: ";cin>>ma;
 	                cout<<"\n";
                    cout<<"\t\t\t - Anios: ";cin>>aa;
                    cout<<"\n";

 	                if(da>dn){
 		               d=da-dn;
 	                 }
					 else
					 {
	 	               da=da+31;
 		               ma=ma-1;
 		               d=da-dn;
 	                 }

	                 if(ma>mn){
 		                m=ma-mn;
 	                 }
					else
					{
 		               ma=ma+12;
 		               aa=aa-1;
 		               m=ma-mn;
 	                 }
	                  a=aa-an;
	                  cout<<"\t\t\t\t //======================================================//"<<endl;
	                  cout<<"\t\t\t                  Usted tiene : "<<a<<"  anios "<<m<<" meses y "<<d<< " dias"<<endl;
	                  cout<<"\t\t\t\t //======================================================//"<<endl;
                }          				
		system("pause");
		system("cls"); 
		break;
		
		case 3:
	// Mostrar el indice comporal
		system("cls");
				int corporal();{
					
					cout<<"\n";
					cout<<"\t\t\t\t         //========================================//"<<endl; 
 	                cout<<"\t\t\t\t         //        Mostrar  Indice Comporal        //"<<endl;
 	                cout<<"\t\t\t\t         //========================================//"<<endl; 	                
 	                cout<<"\n\n";
 	                cout<<"\t\t\tEl peso es : "<<peso<<" y la altura es : "<<altura<<" "<<"\n\n"; 
					 IMC = peso / (altura*altura);
					cout<<"\t\t\tEL IMC es de : "<<IMC<<"\n\n"; 
					if(IMC<18){
						cout<<"\t\t\tTienes un Peso bajo : Te encuentra en Excelente Salud "<<"\n\n";
					}else{
						if(IMC>=18 && IMC<=24.9){
							cout<<"\t\t\tTienes un Peso Normal : Tu Salud es Buena siga asi manteniendo su Salud "<<"\n\n";
					    }else{
						    if(IMC>=25 && IMC<=26.9){
							    cout<<"\t\t\tTienes un Sobrepeso : Tu Salud indica que debe hacer un mejoramiento en su alimentacion y ejercicio"<<"\n\n";
						    }else{
						    	if(IMC>=27 && IMC<=29.9){
						    		cout<<"\t\t\tTienes una Obesidad grado 1 : Tu Salud esta en un rango bajo de riesgo "<<"\n\n";
								}else{
									if(IMC>=30 && IMC<=39.9){
										cout<<"\t\t\tTienes una Obesidad grado 2 : Tu Salud esta en un rango medio de riesgo "<<"\n\n";
									}else{
										if(IMC>=40){
											cout<<"\t\t\tTienes una Obesidad grado 3 : Tu Salud esta en riesgo Muerte "<<"\n\n";
										}	
									}	
								}						    								    		
						    }
					    }
					} 	         	                					                
			    }	        				
		system("pause");
		system("cls"); 
		break;
		case 4:
	// Guardar los datos en un archivo .txt
		system("cls");
                void escribir();

                int guardar();{
                  void escribir();{
	                ofstream archivo;
	
	                archivo.open("Archivo.txt",ios::out); //Abriendo el archivo
	
	                if(archivo.fail()){
		               cout<<"No se pudo abrir el archivo";
		               exit(1);
	                }
	
	                archivo<<"Cedula : "<<0<<cedula<<"\n";  
	                archivo<<"Nombre : "<<nombre<<"\n";  
					archivo<<"Fecha Nacimiento : "<<dn<<"/"<<mn<<"/"<<an<<"\n";  
					archivo<<"Peso : "<<peso<<"(Kg)"<<"\n";
					archivo<<"Estatura : "<<altura<<"(Mt)"<<"\n"; 
					archivo<<"Edad : "<<a<<"  anios "<<m<<" meses y "<<d<< " dias"<<"\n";
					archivo<<"Indice Masa Corporal : "<<IMC<<"\n";    					       	                
	                archivo.close(); //Cerrar el archivo
                  }	               	
                }        				
		system("pause");
		system("cls"); 	
		break;
		
		case 5:
	// Recuperar los datos desde el archivo .txt 
		system("cls");
                void lectura();

                int recuperar();{
                  void lectura();{
	                ifstream archivo;
	                string texto;
	                
	                archivo.open("Archivo.txt",ios::in); //Abriendo el archivo modo lectura
	
	                if(archivo.fail()){
		               cout<<"No se pudo abrir el archivo";
		               exit(1);
	                }
	                
	                while(!archivo.eof()){  //mientras no sea el final del archivo	
	                	getline(archivo,texto);
	                	cout<<texto<<endl;	
									               	                	
	                }	                
	                	archivo.close(); // Cerramos el archivo	                
                  }	               	
                }        				
		system("pause");
		system("cls"); 	
		break;

                default:
                	if(op < 0||op >5){
                		system("cls");
                		cout<<endl<<"Este numero no es valido. . ."<<endl;
                		cout<<"\n\n";
						system("pause");
					    system("cls");
				    }			
		
		}

	if(op==0){
		
	cout<<"\n\n\tSalimos del Sistema: "<<endl;

	}	
	
	}while(op!=0);

	return(0);

}

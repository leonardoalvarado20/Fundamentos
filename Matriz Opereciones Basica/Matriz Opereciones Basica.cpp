//====================================================
//PROGRAMA: OPERACIONES BASICAS
// AUTOR : Leonardo David Alvarado Cornejo
// VESION: 2.0
//====================================================
#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<stdlib.h> 
#include<windows.h>

 COORD coord={0,0};
 void gotoxy (int x, int y){
 	coord.X=x;
 	coord.Y=y;
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
 }
 
using namespace std;
 //FUCION PRINCIPAL
  int main(){        	
   int opc;
    while(opc !=3){
      
	  cout<<"\n\n";	  
	  cout<<"*********************************************************************"<<endl;  
	  cout<<" 1) OPCION 1.- Actividad B2-1: OPERACIONES CON MATRICES"<<endl;
	  cout<<" 2) OPCION 2.- Actividad C2-1: OPERACIONES CON MATRICES EN 2 DIMENSIO"<<endl;
	  cout<<" 3) SALIR "<<endl;
	  cout<<"*********************************************************************"<<endl;  
	  cout<<"\n\n";
	  cout<<"Digite una Opcion: ";
	  cin>>opc;
	  
	  switch(opc){
	             	
	    case 1:
	    //clrscr
	    system("cls");
	    int main();
	    {
	     system("cls");
	     int op;
	      while(op !=6){
		   cout<<"\n\n";
	       cout<<"*******************************************"<<endl;
		   cout<<" 1) OPCION.- 1 MOSTRAR ELEMENTOS DE LA MATRIZ"<<endl;
		   cout<<" 2) OPCION.- 2 SUMAR DOS MATRIZ"<<endl;
		   cout<<" 3) OPCION.- 3 RESTA DOS MATRIZ"<<endl;
		   cout<<" 4) OPCION.- 4 MULTIPLICAR DOS MATRIZ"<<endl;
		   cout<<" 5) OPCION.- 5 DIVIDIR DOS MATRIZ"<<endl;
		   cout<<" 6) Salir "<<endl;
		   cout<<"*******************************************"<<endl;
		   cout<<"\n\n";
		   cout<<" Digite una Opcion: ";		   	
		   cin>>op;
			switch(op){
			  case 1:
			  //clrscr
			  system("cls");							
			  int imprimir();
	          {
		       int c=0;				                            
               float mat1[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
               float mat2[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1}; 
			   cout<<"\n\n"; 
			   cout<<"*******************************************************";
			   cout<<"\n Mostrar por pantalla los elementos de la matriz 1 y 2\n";
			   cout<<"*******************************************************";
               cout<<"\n\n"; 
               system("pause");
               system("cls");
               cout<<"\n\n";                                     
	           //Mostrar las matrices 
	           cout<<"\n\n"; 
			   cout<<"***************************";								 	       	                                        
			   cout<<"\n Mostrando matriz 1\n";
			   cout<<"***************************";
			   cout<<"\n\n";								 	        
               c=0;
               cout<<"\n Filas\n\n";
	           for(int x=0;x<10;x++){	
                   cout<<" |"<<mat1[x]<<"| ";       
	           }
	           cout<<"\n\n";
               cout<<"\n Columnas\n\n";
		       for(int y=0;y<10;y++){
			       cout<<" |"<<mat1[y]<<"| ";
		       }
	           cout<<"\n\n"; 
		       cout<<"***************************";								 	       	                                        
	           cout<<"\n Mostrando matriz 2\n";
     	       cout<<"***************************";
			   cout<<"\n\n";
               c=0;
               cout<<"\n Filas\n\n";
	           for(int x=0;x<10;x++){	
                   cout<<" |"<<mat2[x]<<"| ";
	           }
               cout<<"\n\n";
               cout<<"\n Columnas\n\n";
		       for(int y=0;y<10;y++){
                   cout<<" |"<<mat2[y]<<"| ";
	           }
		       cout<<"\n\n";                          
               system("pause");
			   system("cls");
		       break;
               return 0;   
              }	
            case 2:
			  //clrscr
	          system("cls");
		      int sumar();
		      {
		      	int m,n;
               cout<<"\n\n*************************************\n\n";                
               cout<<"  Introduzca el numero de filas  : ";cin>>m;
               cout<<"\n\n*************************************\n\n";  	
               cout<<"\n\n*************************************\n\n";                
               cout<<"  Introduzca el numero de columnas: ";cin>>n;
               cout<<"\n\n*************************************\n\n"; 
               cout<<"\n\n"; 
               system("pause");
               system("cls"); 
			   cout<<"\n\n";			    			   	      	
               float A[10][10], B[10][10], C[10][10];
               for(int i=0;i<m;i++){                         
                  for(int j=0;j<n;j++){
                      cout<<"Ingrese valor para A["<<i<<"]["<<j<<"]: ";
                      cin>>A[i][j];
                   }
                   cout<<"\n\n"; 
               }
               cout<<"\n\n"; 
               system("pause");
               system("cls");
               cout<<"\n\n";               
               for(int i=0;i<m;i++){                                   
                  for(int j=0;j<n;j++){
                      cout<<"Ingrese valor para B["<<i<<"]["<<j<<"]: ";
                      cin>>B[i][j];
                  }
                  cout<<"\n\n"; 
		       }
               cout<<"\n\n"; 
               system("pause");
               system("cls");          
			   cout<<"\n\n";     			                 
               for(int i=0;i<m;i++){  //Realiza la operacion de suma
                  for(int j=0;j<n;j++){                            	  
                      C[i][j]=A[i][j]+B[i][j];
                  }
                  cout<<"\n\n"; 
               }                         
               cout<<"\n\n  Datos guardados de la Matriz 1 es: \n\n";
               for(int i=0;i<m;i++){               
                   for(int j=0;j<n;j++){                   			   
          		       cout<<" "<< A[i][j]<<" ";
                   }
                   cout<<"\n\n"; 
               }                       
               cout<<"\n\n  Datos guardados de la Matriz 2 es: \n\n";
               for(int i=0;i<m;i++){               
                  for(int j=0;j<n;j++){             			
          		      cout<<" "<< B[i][j]<<" ";
                  }
                  cout<<"\n\n"; 
			   }                             
               cout<<"\n\n  Resultado de la suma es: \n\n";
               for(int i=0;i<m;i++){               
                  for(int j=0;j<n;j++){               			   
          		      cout<<" "<< C[i][j]<<" ";
                  }
                  cout<<"\n\n"; 
			   }
			   cout<<"\n\n";	                                                
	           system("pause");		 	
	           system("cls");
	           break;
		       return 0;
	          }				                        
            case 3:
			  //clrscr
	          system("cls");
		      int restar();
		      {
		      	int m,n;
               cout<<"\n\n*************************************\n\n";                
               cout<<"  Introduzca el numero de filas  : ";cin>>m;
               cout<<"\n\n*************************************\n\n";  	
               cout<<"\n\n*************************************\n\n";                
               cout<<"  Introduzca el numero de columnas: ";cin>>n;
               cout<<"\n\n*************************************\n\n"; 
               cout<<"\n\n"; 
               system("pause");
               system("cls"); 
			   cout<<"\n\n";		      	
               float A[10][10], B[10][10], C[10][10];            
               for(int i=0;i<m;i++){               
                  for(int j=0;j<n;j++){                              
                      cout<<"Ingrese valor para A["<<i<<"]["<<j<<"]: ";
                      cin>>A[i][j];
                  }
                  cout<<"\n\n"; 
               }
               cout<<"\n\n"; 
               system("pause");
               system("cls");          
			   cout<<"\n\n";                  
               for(int i=0;i<m;i++){               
                  for(int j=0;j<n;j++){
                      cout<<"Ingrese valor para B["<<i<<"]["<<j<<"]: ";
                      cin>>B[i][j];
                  }
                  cout<<"\n\n"; 
			   }      
               cout<<"\n\n"; 
               system("pause");
               system("cls");          
			   cout<<"\n\n";  			            
               for(int i=0;i<m;i++){   //Realiza la operacion de resta
                  for(int j=0;j<n;j++){                              
                      C[i][j]=A[i][j]-B[i][j];
                  }
                  cout<<"\n\n"; 
               }
               cout<<"\n\n  Datos guardados de la Matriz 1 es: \n\n";
               for(int i=0;i<m;i++){               
                  for(int j=0;j<n;j++){               			   
          		     cout<<" "<< A[i][j]<<" ";
                  }
                  cout<<"\n\n"; 
               }
               cout<<"\n\n  Datos guardados de la Matriz 2 es: \n\n";
               for(int i=0;i<m;i++){               
                  for(int j=0;j<n;j++){              			   
          	      	 cout<<" "<< B[i][j]<<" ";
           		  }
           		  cout<<"\n\n"; 
			   }
               cout<<"\n\n  Resultado de la resta es: \n\n";
               for(int i=0;i<m;i++){               
                  for(int j=0;j<n;j++){               			   
          		     cout<<" "<< C[i][j]<<" ";
                  }
                  cout<<"\n\n"; 
		       }
			   cout<<"\n\n";	                                                
	           system("pause");		 	
	           system("cls");
	           break;
		       return 0;
	          }				          
            case 4:
			  //clrscr
	          system("cls");
		      int multiplicacion();
		      {
		      	float A[10][10], B[10][10], C[10][10]; 
		      	int k, m, n;
		      	   cout<<"\n\nFUNCION PERMITE CALCULAR EL PRODUCTO ENTRE DOS MATRICES\n\n";
                     cout<<"\n\nLectura de matriz A.\n\n"<<endl;
                     cout<<"\nFilas de A: "; cin>>k;
                     cout<<"\nColumnas de A: "; cin>>m;                   
                     for(int i=0;i<k;i++){               
                         for(int j=0;j<m;j++){                              
                             cout<<"\n Ingrese valor para A["<<i<<"]["<<j<<"]: ";
                             cin>>*(*(A+i)+j);                
				         }
				         cout<<"\n\n"; 
                     }      
                     cout<<"\n\n"; 
                     system("pause");
                     system("cls");  
                     cout<<"\n\nLectura de matriz B.\n\n"<<endl;
                     cout<<"\n\nFilas de B: "<<m<<" (ya esta definido y no es necesario)."<<endl;
                     cout<<"\n Columnas de B: "; cin>>n;
                     cout<<endl;					 			            
                     for(int i=0;i<m;i++){               
                         for(int j=0;j<n;j++){                       
                             cout<<"\n Ingrese valor para B["<<i<<"]["<<j<<"]: ";
                             cin>>*(*(B+i)+j);
                         }
				         cout<<"\n\n";  
			         }
		                     
                   // Inicializamos la matriz C.
                   for(int i=0; i<k; ++i)
                       for(int j=0; j<n; ++j)
                           *(*(C+i)+j) = 0;
                   // Generamos la matriz C.
                   for(int i=0; i<k; ++i)
                       for(int j=0; j<n; ++j)
                           for(int z=0; z<m; ++z)
                               *(*(C+i)+j) += *(*(A+i)+z) * *(*(B+z)+j);
                   cout<<"\n\n"; 
                   system("pause");
                   system("cls");  				                          
    	           cout<<"\nImprimiendo matriz 1: \n\n";
	               for(int i=0;i<k;i++){
		               for(int j=0;j<m;j++){
		                   cout<<*(*(A+i)+j)<<"  "; //puntero de_matriz[i][j]
	                   }
	                   cout<<"\n\n";
                   }
                   cout<<"\n\n"; 
                   system("pause");
                   system("cls");                  
	               cout<<"\nImprimiendo matriz 2: \n\n";
	               for(int i=0;i<m;i++){
		               for(int j=0;j<n;j++){
		                   cout<<*(*(B+i)+j)<<"  "; //puntero de_matriz[i][j]
	                   }
	                   cout<<"\n\n";
                   }
                   cout<<"\n\n"; 
                   system("pause");
                   system("cls");                  
	               cout<<"\nImprimiendo matriz resultante : \n\n";
	               for(int i=0;i<k;i++){
		               for(int j=0;j<n;j++){
		                   cout<<*(*(C+i)+j)<<"  "; //puntero de_matriz[i][j]
	                   }
	                   cout<<"\n\n";
                   }    			   				       			                
			   cout<<"\n\n";	                                                
	           system("pause");		 	
	           system("cls");
	           break;
		       return 0;
	          }				          
            case 5:
			  //clrscr
	          system("cls");         
              float division();
			  {
                 int n,i,j,k;              
               cout<<"\n\n*************************************\n\n";                
               cout<<"  Introduzca el numero de filas y columnas: ";cin>>n;
               cout<<"\n\n*************************************\n\n";   
 			   			               
               float A[10][10], B[10][10], aux, pivote;
     
               for(int i=0;i<n;i++)
               	for(int j=0;j<n;j++)
				   {
               		gotoxy(5+j*3,i+10);
					   cin>>A[i][j];
					   B[i][j]=0;   
					   
					   if(i==j)
					   B[i][j]=1; 
                   }            		
                  // Reduccion por Reglones
               for(int i=0;i<n;i++)
			   {
			   	pivote=A[i][j];
			   	// Convertir el pivote A 1 y aplicar la operacion sobre la fila 
			   	
			   	for(int k=0;k<n;k++)
			   	{
			   		A[i][j]=A[i][j]/pivote;
			   		B[i][j]=B[i][j]/pivote;
			   	}
			   	
			   	    for(int j=0;j<n;j++)
			   	     {
			   	     	if(i!=j)  //No estoy en la diagonal
			   	     	{
			   	     		aux=A[j][i];
			   	     		
			   	     		for(int k=0;k<n;k++)
			   	     		{
			   	        		A[j][k]=A[j][k]-aux*A[i][k];
			   		            B[j][k]=B[j][k]-aux*B[i][k];
			   	     		}
			   	     	}
			   	     }
			   	
			   }				                                     
                  
               for(int i=0;i<n;i++)    
               	for(int j=0;j<n;j++){
               		gotoxy(5+j*10,i+15);
					cout<<A[i][j];
					
               		gotoxy(50+j*10,i+15);
					cout<<B[i][j];					     
                   }	   
			   cout<<"\n\n";	                                                
	           system("pause");		 	
	           system("cls");
	           break;
		       return 0;				                                                
	          }	          
		    default:
			  if(op < 1||op >6)
		      { 
			   system("cls");
			   cout<<endl<<"Este numero no es valido. . ."<<endl;
			   cout<<"\n";
			   system("pause");
			   system("cls");
			  }
		    }							
	      } 
	   	return 0;	 
	    }    
		  	
	    case 2:
	    //clrscr
	    system("cls");
	    int main();
	    {	     
		 	
	     int opp;
	      while(opp !=6){
		   cout<<"\n\n";
	       cout<<"*******************************************"<<endl;
		   cout<<" 1) OPCION 1.- Ingresar los valores de las matrices"<<endl;
		   cout<<" 2) OPCION 2.- Obtener el producto de las dos matrices"<<endl;
		   cout<<" 3) OPCION 3.- Mostrar la potencias 2 de la primera matriz"<<endl;
		   cout<<" 4) OPCION 4.- Mostrar la transpuesta de la primera matriz"<<endl;
		   cout<<" 5) OPCION 5.- Calcular la media y varianza y compararlas"<<endl;
		   cout<<" 6) Salir "<<endl;
		   cout<<"*******************************************"<<endl;
		   cout<<"\n\n";
		   cout<<" Digite una Opcion: ";
		   cin>>opp;
			switch(opp){
			  case 1:
			  //clrscrr
	          system("cls");
              //Prototipo de funcion
              void pedirDatos();
              void mostrarMatriz(float **,float **,float,float);
              float x,y;
              float **mat1,**mat2;
              int mat();
			  {
			  	cout<<"\n\nESTA FUNCION PERMITE INGRESAR EL VALOR A LAS MATRICES 5x5 \n\n";
              void pedirDatos();{
	            //Reservar memoria para la matriz 1
	            mat1 = new float*[5]; //Reservando memoria para las mmemoria de filas
	            for(int i=0;i<5;i++){
		            mat1[i] = new float[5]; //Reservando memoria para las memoria de columnas 
	            }
	            cout<<"\n\nDigitando elementos de la matriz 1: \n\n";
	            for(int i=0;i<5;i++){
		            for(int j=0;j<5;j++){
			            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			            cin>>*(*(mat1+i)+j); //puntero de_matriz[i][j]
		            }
	            }
               cout<<"\n\n"; 
               system("pause");
               system("cls");
               cout<<"\n\n";	            
	            //Reservar memoria para la matriz 2 
	            mat2 = new float*[5]; //Reservando memoria para las mmemoria de filas
	            for(int i=0;i<5;i++){
		            mat2[i] = new float[5]; //Reservando memoria para las memoria de columnas 
	            }
	            cout<<"\n\nDigitando elementos de la matriz 2: \n\n";
	            for(int i=0;i<5;i++){
		            for(int j=0;j<5;j++){
			            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			            cin>>*(*(mat2+i)+j); //puntero de_matriz[i][j]
		            }
	            }	
              } 	              
               cout<<"\n\n"; 
               system("pause");
               system("cls");
               cout<<"\n\n";
               void mostrarMatriz(float **mat1,float **mat2,float x,float y);{
	              cout<<"\nImprimiendo matriz 1: \n\n";
	             for(int i=0;i<5;i++){
		             for(int j=0;j<5;j++){
		                 cout<<*(*(mat1+i)+j)<<"  "; //puntero de_matriz[i][j]
	                 }
	                 cout<<"\n\n";
                 }
	             cout<<"\nImprimiendo matriz 2: \n\n";
	             for(int i=0;i<5;i++){
		             for(int j=0;j<5;j++){
		                 cout<<*(*(mat2+i)+j)<<"  "; //puntero de_matriz[i][j]
	                 }
	                  cout<<"\n\n";
                 }
    
               }               
	            //Liberar la memoria que hemos utilizado en la matriz 1
	            for(int i=0;i<x;i++){
		             delete[] mat1[i];
	            }
	             delete[] mat1;
	             //Liberar la memoria que hemos utilizado en la matriz 2
	             for(int i=0;i<x;i++){
		             delete[] mat2[i];
	             }
	             delete[] mat2;					         
			   cout<<"\n\n";	                                                
	           system("pause");		 	
	           system("cls");
			   break;	          
		       return 0;
	          }	                                    
			  				 	      
			  case 2:
			  //clrscrr
	          system("cls");
              void pedirDatos();              
              void mostrarMatriz();              
              float A[5][5], B[5][5], C[5][5];     
			     
		      int multiplicacion();
		      {
		      	cout<<"\n\nFUNCION PERMITE CALCULAR EL PRODUCTO ENTRE DOS MATRICES  5x5 \n\n";
                   void pedirDatos();{
                     for(int i=0;i<5;i++){               
                         for(int j=0;j<5;j++){                              
                             cout<<" Ingrese valor para A["<<i<<"]["<<j<<"]: ";
                             cin>>*(*(A+i)+j);                
				         }
				         cout<<"\n\n"; 
                     }      
                     cout<<"\n\n"; 
                     system("pause");
                     system("cls");  			            
                     for(int i=0;i<5;i++){               
                         for(int j=0;j<5;j++){                       
                             cout<<" Ingrese valor para B["<<i<<"]["<<j<<"]: ";
                             cin>>*(*(B+i)+j);
                         }
				         cout<<"\n\n";  
			         }
		           }
		           
                   cout<<"\n\n*************************************\n\n";
                   cout<<"  La Multiplicacion de las dos Matrices ";
                   cout<<"\n\n*************************************\n\n";               
                   // Inicializamos la matriz C.
                   for(int i=0; i<5; ++i)
                       for(int j=0; j<5; ++j)
                           *(*(C+i)+j) = 0;
                   // Generamos la matriz C.
                   for(int i=0; i<5; ++i)
                       for(int j=0; j<5; ++j)
                           for(int z=0; z<5; ++z)
                               *(*(C+i)+j) += *(*(A+i)+z) * *(*(B+z)+j);
                   cout<<"\n\n"; 
                   system("pause");
                   system("cls");  
				   void mostrarMatriz();{                          
    	           cout<<"\nImprimiendo matriz 1: \n\n";
	               for(int i=0;i<5;i++){
		               for(int j=0;j<5;j++){
		                   cout<<*(*(A+i)+j)<<"  "; //puntero de_matriz[i][j]
	                   }
	                   cout<<"\n\n";
                   }
                   cout<<"\n\n"; 
                   system("pause");
                   system("cls");                  
	               cout<<"\nImprimiendo matriz 2: \n\n";
	               for(int i=0;i<5;i++){
		               for(int j=0;j<5;j++){
		                   cout<<*(*(B+i)+j)<<"  "; //puntero de_matriz[i][j]
	                   }
	                   cout<<"\n\n";
                   }
                   cout<<"\n\n"; 
                   system("pause");
                   system("cls");                  
	               cout<<"\nImprimiendo matriz resultante : \n\n";
	               for(int i=0;i<5;i++){
		               for(int j=0;j<5;j++){
		                   cout<<*(*(C+i)+j)<<"  "; //puntero de_matriz[i][j]
	                   }
	                   cout<<"\n\n";
                   }    			   	
			       }
			       cout<<"\n\n";	                                                
	               system("pause");		 	
	              system("cls");
	             break;
		        return 0;
	          }		
				 
			  case 3:
			  //clrscrr
	          system("cls");
              void pedirDatos();              
              void mostrarMatriz();     		         			     
		      int potencia();
		      {
		      	float A[5][5], C[5][5];
		      	cout<<"\n\nFUNCION PERMITE OBTENER LA POTENCIA 2 DE UNA MATRIZ 5X5 \n\n";
                   void pedirDatos();{
                     for(int i=0;i<5;i++){               
                         for(int j=0;j<5;j++){                              
                             cout<<" Ingrese valor para A["<<i<<"]["<<j<<"]: ";
                             cin>>*(*(A+i)+j);                
				         }
				         cout<<"\n\n"; 
                     }      			            
 
		           }
		           
                   cout<<"\n\n*************************************\n\n";
                   cout<<"  La Potencia de la Matriz ";
                   cout<<"\n\n*************************************\n\n";               
                   // Inicializamos la matriz C.
                   for(int i=0; i<5; ++i)
                       for(int j=0; j<5; ++j)
                           *(*(C+i)+j) = 0;
                   // Generamos la matriz C.
                   for(int i=0; i<5; ++i)
                       for(int j=0; j<5; ++j)
                           for(int z=0; z<5; ++z)
                               *(*(C+i)+j) += *(*(A+i)+z) * *(*(A+z)+j);
                   cout<<"\n\n"; 
                   system("pause");
                   system("cls");  
				   void mostrarMatriz();{                          
    	           cout<<"\nImprimiendo matriz 1: \n\n";
	               for(int i=0;i<5;i++){
		               for(int j=0;j<5;j++){		                	                
						   cout<<*(*(A+i)+j)<<"  "; //puntero de_matriz[i][j]
	                   }
	                   cout<<"\n\n";            
                   }
                   cout<<"\n\n";
	               for(int i=0;i<5;i++){
		               for(int j=0;j<5;j++){		                	                
						   cout<<*(*(A+i)+j)<<"  "; //puntero de_matriz[i][j]
	                   }
	                   cout<<"\n\n";            
                   }                   
                   cout<<"\n\n"; 
                   system("pause");
                   system("cls");                  
	               cout<<"\nImprimiendo matriz resultante : \n\n";
	               for(int i=0;i<5;i++){
		               for(int j=0;j<5;j++){
		                   cout<<*(*(C+i)+j)<<"  "; //puntero de_matriz[i][j]
	                   }
	                   cout<<"\n\n";
                   }    			   	
			       }
			       cout<<"\n\n";	                                                
	               system("pause");		 	
	              system("cls");
	             break;
		        return 0;
	          }						 	   	      
	   	      
			  case 4:
			  //clrscrr
	          system("cls");
              void pedirDatos();              
              void mostrarMatriz();  
			    		         			     
		      int transpuesta();
		      {
		      	float A[5][5]; 
		      	cout<<"\n\nFUNCION CALCULA LA TRANSPUESTA DE LA PRIMERA MATRIZ 5X5 \n\n";
                   void pedirDatos();{
                     for(int i=0;i<5;i++){               
                         for(int j=0;j<5;j++){                              
                             cout<<" Ingrese valor para A["<<i<<"]["<<j<<"]: ";
                             cin>>*(*(A+i)+j);                
				         }
				         cout<<"\n\n"; 
                     }      			            
 
		           }
                   cout<<"\n\n"; 
                   system("pause");
                   system("cls");  
				   void mostrarMatriz();{                          
    	           cout<<"\nImprimiendo matriz Original: \n\n";
	               for(int i=0;i<5;i++){
		               for(int j=0;j<5;j++){		                	                
						   cout<<*(*(A+i)+j)<<"  "; //puntero de_matriz[i][j]
	                   }
	                   cout<<"\n\n";            
                   }                
                   cout<<"\n\n";                
	               cout<<"Imprimiendo matriz Transpuesta : \n\n";
	               for(int i=0;i<5;i++){
		               for(int j=0;j<5;j++){
		                   cout<<*(*(A+j)+i)<<"  "; //puntero de_matriz[i][j]
	                   }
	                   cout<<"\n\n";
                   }    			   	
			       }
			       cout<<"\n\n";	                                                
	               system("pause");		 	
	              system("cls");
	             break;
		        return 0;
	          }	
			  					 
			  case 5:
			  //clrscrr
	          system("cls");
              //Prototipo de funcion
              void pedirDatos();
              void mostrarMatriz(float **,float **,float,float);
              
              int main();{
              	float x,a=0,a1=0,m,v,a2=0,a3=0,m1,v1;
              void pedirDatos();{
	            //Reservar memoria para la matriz 1
	            mat1 = new float*[5]; //Reservando memoria para las mmemoria de filas
	            for(int i=0;i<5;i++){
		            mat1[i] = new float[5]; //Reservando memoria para las memoria de columnas 
	            }
	            cout<<"\n\nDigitando elementos de la matriz 1: \n\n";
	            for(int i=0;i<5;i++){
		            for(int j=0;j<5;j++){
			            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			            cin>>*(*(mat1+i)+j); //puntero de_matriz[i][j]
			            a=a+*(*(mat1+i)+j);
		            }
	            }
                cout<<"\n\n"; 
                system("pause");
                system("cls");  
                cout<<"\n\n";
	            //Reservar memoria para la matriz 2 
	            mat2 = new float*[5]; //Reservando memoria para las mmemoria de filas
	            for(int i=0;i<5;i++){
		            mat2[i] = new float[5]; //Reservando memoria para las memoria de columnas 
	            }
	            cout<<"\n\nDigitando elementos de la matriz 2: \n\n";
	            for(int i=0;i<5;i++){
		            for(int j=0;j<5;j++){
			            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			            cin>>*(*(mat2+i)+j); //puntero de_matriz[i][j]
			            a2=a2+*(*(mat2+i)+j);
		            }
	            }
               cout<<"\n\n"; 	            
	
              } 
          
                m=a/25;
	            for(int i=0;i<5;i++){
		            for(int j=0;j<5;j++){              
                         a1=a1+(*(*(mat1+i)+j)-m)*(*(*(mat1+i)+j)-m);
                       
                    }
                }  
                cout<<"\n\n"; 
                system("pause");
                system("cls");  
                cout<<"\n\n";     				              
                v=a1/25;
                cout<<"\n\n La media de la Matriz 1 es "<<m<<"\n\n La varianza de la Matriz 1 es  "<<v<<endl;
                m1=a2/25;
	            for(int i=0;i<5;i++){
		            for(int j=0;j<5;j++){              
                         a3=a3+(*(*(mat2+i)+j)-m)*(*(*(mat2+i)+j)-m);
                       
                    }
                }                
                v1=a3/25;                
                cout<<"\n\n La media de la Matriz 2 es "<<m1<<"\n\n La varianza de la Matriz 2 es  "<<v1<<endl;
                cout<<"\n\n"; 
                system("pause");
                system("cls");  
                cout<<"\n\n";                
                if(m==m1){
                	cout<<"\n\n Ambos valores son iguales\n\n";
                }
                else if(m>m1){
                	cout<<"\n\n El mayor de la media es : \n\n"<<m;
                }
                else{
                	cout<<"\n\n El mayor de la media es : \n\n"<<m1;
                }
                
                if(v==v1){
                	cout<<"\n\nAmbos valores son iguales\n\n";
                }
                else if(v>v1){
                	cout<<"\n\nEl mayor de la varianza es : \n\n"<<v;
                }
                else{
                	cout<<"\n\nEl mayor de la varianza es : \n\n"<<v1;
                }    
			       cout<<"\n\n";	                                                
	               system("pause");		 	
	              system("cls");
	             break;				            
                return 0;
               }			    	      
	   	      
		    default:
			  if(opp < 1||opp >6)
		      { 
			   system("cls");
			   cout<<endl<<"Este numero no es valido. . ."<<endl;
			   cout<<"\n";
			   system("pause");
			   system("cls");
			  }
		    }							
	      } 
        return 0;   
	    }                 		
  	
      case 3:	
	    //clrscr
	    system("cls");
	             		
	    system("pause");
	    system("cls");
	   	break;
					 					
	  default:
	    if(opc < 1||opc >3)
		{
		 system("cls");
		 cout<<endl<<"Este numero no es valido. . ."<<endl;
		 cout<<"\n";
		 system("pause");
		 system("cls");
		}

	  }			 
    }        
    return 0;   
  }			  		          

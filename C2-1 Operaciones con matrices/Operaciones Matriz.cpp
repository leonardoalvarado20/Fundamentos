#include<iostream>
#include<cstdlib>
using namespace std;
//FUCION PRINCIPAL
int main(){	         
    
    int op;
    while(op !=6){
    	cout<<"\t\t\t\t  //===================================================//"<<endl;
    	cout<<"\t\t\t\t  //           PROGRAMA: OPERACIONES BASICAS           //"<<endl;
    	cout<<"\t\t\t\t  //      AUTOR : Leonardo David Alvarado Cornejo      //"<<endl;
    	cout<<"\t\t\t\t  //                    VESION: 2.0                    //"<<endl;
    	cout<<"\t\t\t\t  //===================================================//"<<endl;
    	cout<<"\n\n";
	    cout<<"\t\t      //=========================================================================//"<<endl;
		cout<<"\t\t      //        1) OPCION.- 1 Ingresar los valores de las matrices               //"<<endl;
	    cout<<"\t\t      //        2) OPCION.- 2 Obtener el producto de las dos matrices            //"<<endl;   
		cout<<"\t\t      //        3) OPCION.- 3 Mostrar la potencias 2 de la primera matriz        //"<<endl;
		cout<<"\t\t      //        4) OPCION.- 4 Mostrar la transpuesta de la primera matriz        //"<<endl;
		cout<<"\t\t      //        5) OPCION.- 5 Calcular la media y varianza y compararlas         //"<<endl;
		cout<<"\t\t      //        6) Salir                                                         //"<<endl;
		cout<<"\t\t      //=========================================================================//"<<endl;
		cout<<"\n\n";  
		cout<<" Digite una Opcion: ";    
		cin>>op;    		   	
		switch(op){
			case 1:
				//clrscr
				system("cls");
				//Prototipo de funcion
				void pedirDatos();
				void mostrarMatriz(float **,float **,float,float);
				float x,y;
				float **mat1,**mat2;
				int mat();{
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
				}                              				
				system("pause");
			    system("cls");
		        break;
		    
			case 2:
				//clrscr
				system("cls");
				
				void pedirDatos();
				void mostrarMatriz();
				float A[5][5], B[5][5], C[5][5];
				int producto();{
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
					for(int i=0;i<5;i++){
						for(int j=0; j<5; ++j){
							*(*(C+i)+j) = 0;
						}
					}
					// Generamos la matriz C.
					for(int i=0;i<5;i++){
						for(int j=0;j<5;j++){
							for(int z=0;z<5;z++){
								*(*(C+i)+j) += *(*(A+i)+z) * *(*(B+z)+j);
							}
						}
					}
					cout<<"\n\n";	
					system("pause");
					system("cls");
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
					cout<<"\nImprimiendo matriz 3: \n\n";
					for(int i=0;i<5;i++){
						for(int j=0;j<5;j++){
							cout<<*(*(C+i)+j)<<"  "; //puntero de_matriz[i][j]
						}
						cout<<"\n\n";
					}					
																
				}
				system("pause");
			    system("cls");
		        break;
				
			case 3:
				//clrscr
				system("cls");
				void pedirDatos();
				void mostrarMatriz();
				int potencia();{
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
					for(int i=0;i<5;i++){
						for(int j=0; j<5; ++j){
							*(*(C+i)+j) = 0;
						}
					}
					// Generamos la matriz C.
					for(int i=0;i<5;i++){
						for(int j=0;j<5;j++){
							for(int z=0;z<5;z++){
								*(*(C+i)+j) += *(*(A+i)+z) * *(*(A+z)+j);
							}
						}
					}
					cout<<"\n\n";	
					system("pause");
					system("cls");
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
							cout<<*(*(A+i)+j)<<"  "; //puntero de_matriz[i][j]
						}
						cout<<"\n\n";
					}
					cout<<"\n\n";	
					system("pause");
					system("cls");
					cout<<"\nImprimiendo matriz 3: \n\n";
					for(int i=0;i<5;i++){
						for(int j=0;j<5;j++){
							cout<<*(*(C+i)+j)<<"  "; //puntero de_matriz[i][j]
						}
						cout<<"\n\n";
					}								
				}				
				system("pause");
			    system("cls");
		        break;						    
		    
			case 4:
				//clrscr
				system("cls");

				system("pause");
			    system("cls");
		        break;		    

			case 5:
				//clrscr
				system("cls");

				system("pause");
			    system("cls");
		        break;		        
		    
                default:
                	if(op < 1||op >6){
                		system("cls");
                		cout<<endl<<"Este numero no es valido. . ."<<endl;
                		cout<<"\n\n";
						system("pause");
					    system("cls");
				    }
			
		}
			
	}
    
    return 0;
}

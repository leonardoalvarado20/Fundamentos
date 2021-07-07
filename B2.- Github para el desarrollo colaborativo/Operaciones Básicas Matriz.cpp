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
    	cout<<"\t\t\t    //==============================================================//"<<endl;    
	    cout<<"\t\t\t    //        1) OPCION.- 1 MOSTRAR ELEMENTOS DE LA MATRIZ          //"<<endl;    
		cout<<"\t\t\t    //        2) OPCION.- 2 SUMAR DOS MATRIZ                        //"<<endl;    
		cout<<"\t\t\t    //        3) OPCION.- 3 RESTA DOS MATRIZ                        //"<<endl;       
		cout<<"\t\t\t    //        4) OPCION.- 4 MULTIPLICAR DOS MATRIZ                  //"<<endl;    
		cout<<"\t\t\t    //        5) OPCION.- 5 DIVIDIR DOS MATRIZ                      //"<<endl;    
	    cout<<"\t\t\t    //        6) Salir                                              //"<<endl;	    
	    cout<<"\t\t\t    //==============================================================//"<<endl;	    
		cout<<"\n\n";    
		cout<<" Digite una Opcion: ";    
		cin>>op;    		   	
		switch(op){
			case 1:
				//clrscr
				system("cls");
				
				//FUNCION MOSTRAR 2 Matriz 1x10
				
				int mostrar();{
					float A[10][10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
					float B[10][10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
					
					//Mostrar las matrice
					
					cout<<"\n\n";
				    cout<<"\t\t\t\t\t //============================//"<<endl;
					cout<<"\t\t\t\t\t //     Mostrando matriz 1     //"<<endl;
					cout<<"\t\t\t\t\t //============================//"<<endl;
					cout<<"\n\n";
					
					
					for(int i=0;i<1;i++){
						for(int j=0;j<10;j++){
							cout<<"\t"<<" ["<< A[i][j]<<"] ";
						
						}
					    cout<<"\n\n";
					}
					cout<<"\n\n";
				    cout<<"\t\t\t\t\t //============================//"<<endl;
					cout<<"\t\t\t\t\t //     Mostrando matriz 2     //"<<endl;
					cout<<"\t\t\t\t\t //============================//"<<endl;
					cout<<"\n\n";															
					
					
					for(int i=0;i<1;i++){
						for(int j=0;j<10;j++){
							cout<<"\t"<<" ["<< B[i][j]<<"] ";
						
						}
					    cout<<"\n\n";
					}	
					cout<<"\n\n";					 														
				}				
				system("pause");
			    system("cls");
		        break;
		    
			case 2:
				//clrscr
				system("cls");
				
				//FUNCION Sumar 2 Matriz 1x10
				
				int sumar();{	
							
				    float A[10][10], B[10][10], C[10][10];
				    
				    //Almacenar datos
				    
				    for(int i=0;i<1;i++){
				    	for(int j=0;j<10;j++){
				    		cout<<"\tIngrese valor para A["<<i<<"]["<<j<<"]: ";
							cin>>A[i][j];												
						}
					    cout<<"\n\n";	
					}
				    cout<<"\n\n";
					system("pause");
					system("cls");
					cout<<"\n\n";
					for(int i=0;i<1;i++){
						for(int j=0;j<10;j++){
							cout<<"\tIngrese valor para B["<<i<<"]["<<j<<"]: ";
							cin>>B[i][j];
						}
						cout<<"\n\n"; 
					}
				    cout<<"\n\n";
					system("pause");
					system("cls");
					cout<<"\n\n";
					
					//Realiza la operacion de suma
					
					for(int i=0;i<1;i++){
						for(int j=0;j<10;j++){
							C[i][j]=A[i][j]+B[i][j];
						} 
					    cout<<"\n\n";	
					}  											
					cout<<"\n\n";
							
					//Mostrar las matrice
					
					cout<<"\n\n";
				    cout<<"\t\t\t\t\t //============================//"<<endl;
					cout<<"\t\t\t\t\t //     Mostrando matriz 1     //"<<endl;
					cout<<"\t\t\t\t\t //============================//"<<endl;
					cout<<"\n\n";
					
					
					for(int i=0;i<1;i++){
						for(int j=0;j<10;j++){
							cout<<"\t"<<" ["<< A[i][j]<<"] ";
						
						}
					    cout<<"\n\n";
					}
					cout<<"\n\n";
				    cout<<"\t\t\t\t\t //============================//"<<endl;
					cout<<"\t\t\t\t\t //     Mostrando matriz 2     //"<<endl;
					cout<<"\t\t\t\t\t //============================//"<<endl;
					cout<<"\n\n";															
					
					
					for(int i=0;i<1;i++){
						for(int j=0;j<10;j++){
							cout<<"\t"<<" ["<< B[i][j]<<"] ";
						
						}
					    cout<<"\n\n";
					}	
	                cout<<"\n\n";        
			        cout<<"\t\t\t\t    //========================================//"<<endl;								 	       	                                        
			        cout<<"\t\t\t\t    //     Mostrando resultado de la Suma     //"<<endl;
			        cout<<"\t\t\t\t    //========================================//"<<endl;
			        cout<<"\n\n";
                    for(int i=0;i<1;i++){               
                        for(int j=0;j<10;j++){               			   
          		            cout<<"\t"<<"["<< C[i][j]<<"]";
                        }
                        cout<<"\n\n"; 
			        }
			        cout<<"\n\n";													
				}					
				system("pause");
			    system("cls");
		        break;
				
			case 3:
				//clrscr
				system("cls");
				
				//FUNCION Resta 2 Matriz 1x10
				
				int resta();{	
							
				    float A[10][10], B[10][10], C[10][10];
				    
				    //Almacenar datos
				    
				    for(int i=0;i<1;i++){
				    	for(int j=0;j<10;j++){
				    		cout<<"\tIngrese valor para A["<<i<<"]["<<j<<"]: ";
							cin>>A[i][j];												
						}
					    cout<<"\n\n";	
					}
				    cout<<"\n\n";
					system("pause");
					system("cls");
					cout<<"\n\n";
					for(int i=0;i<1;i++){
						for(int j=0;j<10;j++){
							cout<<"\tIngrese valor para B["<<i<<"]["<<j<<"]: ";
							cin>>B[i][j];
						}
						cout<<"\n\n"; 
					}
				    cout<<"\n\n";
					system("pause");
					system("cls");
					cout<<"\n\n";
					
					//Realiza la operacion de resta
					
					for(int i=0;i<1;i++){
						for(int j=0;j<10;j++){
							C[i][j]=A[i][j]-B[i][j];
						} 
					    cout<<"\n\n";	
					}  											
					cout<<"\n\n";
							
					//Mostrar las matrice
					
					cout<<"\n\n";
				    cout<<"\t\t\t\t\t //============================//"<<endl;
					cout<<"\t\t\t\t\t //     Mostrando matriz 1     //"<<endl;
					cout<<"\t\t\t\t\t //============================//"<<endl;
					cout<<"\n\n";
					
					
					for(int i=0;i<1;i++){
						for(int j=0;j<10;j++){
							cout<<"\t"<<" ["<< A[i][j]<<"] ";
						
						}
					    cout<<"\n\n";
					}
					cout<<"\n\n";
				    cout<<"\t\t\t\t\t //============================//"<<endl;
					cout<<"\t\t\t\t\t //     Mostrando matriz 2     //"<<endl;
					cout<<"\t\t\t\t\t //============================//"<<endl;
					cout<<"\n\n";															
					
					
					for(int i=0;i<1;i++){
						for(int j=0;j<10;j++){
							cout<<"\t"<<" ["<< B[i][j]<<"] ";
						
						}
					    cout<<"\n\n";
					}	
	                cout<<"\n\n";        
			        cout<<"\t\t\t\t    //==========================================//"<<endl;								 	       	                                        
			        cout<<"\t\t\t\t    //      Mostrando resultado de la Resta     //"<<endl;
			        cout<<"\t\t\t\t    //==========================================//"<<endl;
			        cout<<"\n\n";
                    for(int i=0;i<1;i++){               
                        for(int j=0;j<10;j++){               			   
          		            cout<<"\t"<<"["<< C[i][j]<<"]";
                        }
                        cout<<"\n\n"; 
			        }
			        cout<<"\n\n";													
				}				
				system("pause");
			    system("cls");
		        break;						    
		    
			case 4:
				//clrscr
				system("cls");
				
				//FUNCION Multiplicacion 2 Matriz 1x10
				
				int multiplicacion();{	
							
				    float A[10][10], B[10][10], C[10][10];
				    
				    //Almacenar datos
				    
				    for(int i=0;i<1;i++){
				    	for(int j=0;j<10;j++){
				    		cout<<"\tIngrese valor para A["<<i<<"]["<<j<<"]: ";
							cin>>A[i][j];												
						}
					    cout<<"\n\n";	
					}
				    cout<<"\n\n";
					system("pause");
					system("cls");
					cout<<"\n\n";
					for(int i=0;i<1;i++){
						for(int j=0;j<10;j++){
							cout<<"\tIngrese valor para B["<<i<<"]["<<j<<"]: ";
							cin>>B[i][j];
						}
						cout<<"\n\n"; 
					}
				    cout<<"\n\n";
					system("pause");
					system("cls");
					cout<<"\n\n";
					
					//Realiza la operacion de multiplicacion
					
					for(int i=0;i<1;i++){
						for(int j=0;j<10;j++){
							C[i][j]=A[i][j]-B[i][j];
						} 
					    cout<<"\n\n";	
					}  											
					cout<<"\n\n";
							
					//Mostrar las matrice
					
					cout<<"\n\n";
				    cout<<"\t\t\t\t\t //============================//"<<endl;
					cout<<"\t\t\t\t\t //     Mostrando matriz 1     //"<<endl;
					cout<<"\t\t\t\t\t //============================//"<<endl;
					cout<<"\n\n";
					
					
					for(int i=0;i<1;i++){
						for(int j=0;j<10;j++){
							cout<<"\t"<<" ["<< A[i][j]<<"] ";
						
						}
					    cout<<"\n\n";
					}
					cout<<"\n\n";
				    cout<<"\t\t\t\t\t //============================//"<<endl;
					cout<<"\t\t\t\t\t //     Mostrando matriz 2     //"<<endl;
					cout<<"\t\t\t\t\t //============================//"<<endl;
					cout<<"\n\n";															
					
					
					for(int i=0;i<1;i++){
						for(int j=0;j<10;j++){
							cout<<"\t"<<" ["<< B[i][j]<<"] ";
						
						}
					    cout<<"\n\n";
					}	
	                cout<<"\n\n";        
			        cout<<"\t\t\t\t    //======================================================//"<<endl;								 	       	                                        
			        cout<<"\t\t\t\t    //        Mostrando resultado de la Multiplicacxion     //"<<endl;
			        cout<<"\t\t\t\t    //======================================================//"<<endl;
			        cout<<"\n\n";
                    for(int i=0;i<1;i++){               
                        for(int j=0;j<10;j++){               			   
          		            cout<<"\t"<<"["<< C[i][j]<<"]";
                        }
                        cout<<"\n\n"; 
			        }
			        cout<<"\n\n";													
				}					
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

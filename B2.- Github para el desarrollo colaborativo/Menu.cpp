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
				
				system("pause");
			    system("cls");
		        break;
		    
			case 2:
				//clrscr
				system("cls");
				
				system("pause");
			    system("cls");
		        break;
				
			case 3:
				//clrscr
				system("cls");
				
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

// Matriz Opereciones Basica  //

// Mostrar Elementos Matriz - Sumar Matriz - Restar Matriz - Multiplicar Matriz - Dividir Matriz //

#include<iostream>
using namespace std;
int main()
{
       int c=0,sum=0,rest=0,mult=0,div=0;
       int op;
       float mat1[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
       float mat2[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
       
       cout<<"\n";
       cout<<"*****************************************************************"<<endl;
       cout<<"\n";       
       cout<<"Ingrese un numero del 1 al 5 para realizar la operacion basica : ";
	   cout<<"\n";
	   cout<<"\n";   
       cout<<"*****************************************************************"<<endl;
       cout<<"\n";       
	   cin>>op;
         
  if(op==1){
       	         
       cout<<"\n";
       cout<<"*****************************************************************"<<endl;
       cout<<"\n";   
       cout<<"Mostrar por pantalla los elementos de la matriz";
       cout<<"\n";
       cout<<"\n";
       cout<<"*****************************************************************"<<endl;
       cout<<"\n";
	   //Mostrar las matrices 
    do{
       cout<<mat1[c];
               c=c+1;  
       if(c<10){
          cout<<" - ";
       }
    
   }while(c<10);
          cout<<endl;
    
	c=0;
    
    do{
       cout<<mat2[c];
               c=c+1;  
       if(c<10){
          cout<<" - ";
       }
     
    }while(c<10);
           cout<<"\n";
   
  }
    // Llenar la matriz suma con la suma de cada uno de los elementos de la matriz 1 y la matriz 2 //
  
  if(op==2){ 
  
       cout<<"\n";
       cout<<"**********************************************************************************************"<<endl;
       cout<<"\n";
       cout<<"Llenar la matriz suma con la suma de cada uno de los elementos de la matriz 1 y la matriz 2";
  	   cout<<"\n";
  	   cout<<"\n";
	   cout<<"***********************************************************************************************"<<endl;
	   cout<<"\n";
	   
       //Almacenando los elementos de la matriz //

       cout<<"Ingrese un numero para la primera matriz"<<endl;
       cout<<"\n";
       cout<<"******************************************"<<endl;
       cout<<"\n";
    do{
	   cout<<"Digite un numero ["<<sum<<"] : "<<" "; //Ingrese un numero para la primera matriz//
	   cin>>mat1[sum];
              sum=sum+1;  
       if(sum<10){
       	        
       }
     cout<<"\n";  
    }
     while(sum<10);
     
      cout<<"\n";
	  cout<<"*****************************"<<endl;	
	  cout<<"\n";
	  sum=0;
	  
	  cout<<"Ingrese un numero para la segunda matriz"<<endl;
	  cout<<"\n";
      cout<<"*****************************"<<endl;
      cout<<"\n";
    do{
	   cout<<"Digite un numero ["<<sum<<"] : "; //Ingrese un numero para la segunda matriz//
	   cin>>mat2[sum];
              sum=sum+1;  
       if(sum<10){
       	        
       }
       cout<<"\n";
    }
	 while(sum<10);
           cout<<endl;
      
	  cout<<"\n";
      cout<<"***********************************************"<<endl;
      cout<<"\n";
      cout<<"Mostrar por pantalla los elementos de la matriz";
      cout<<"\n";
      cout<<"***********************************************"<<endl;
      cout<<"\n";
      //Mostrar las matrices 
   
      sum=0;
   do{
      cout<<mat1[sum];
              sum=sum+1;  
      if(sum<10){
         cout<<" - ";
        
      }
   }
    while(sum<10);
          cout<<endl;
	   sum=0;
    do{
       cout<<mat2[sum];
               sum=sum+1; 
       if(sum<10){
          cout<<" - ";
          
       }
    }
	 while(sum<10);
           cout<<endl;
    
    //Resultado de la suma de la Matriz
  
	cout<<"\n";
    cout<<"***********************************"<<endl;
    cout<<"\n";
	cout<<"Resultado de la suma de la Matriz";
	cout<<"\n";
	cout<<"***********************************"<<endl;
	cout<<"\n";
	   sum=0;
    do{
       
       cout<<mat1[sum]+mat2[sum];
       
       sum=sum+1;  
       if(sum<10){
       	  cout<<" - ";
          
       }
    }
	   while(sum<10);
	         cout<<"\n";
	         cout<<"\n";
  }
  
    // Llenar la matriz resta con la resta de la matriz 1 y la matriz 2 //
    
  if(op==3){
      	
       cout<<"\n";
       cout<<"******************************************************************"<<endl;
       cout<<"\n";
       cout<<"Llenar la matriz resta con la resta de la matriz 1 y la matriz 2";
  	   cout<<"\n";
  	   cout<<"\n";
	   cout<<"*******************************************************************"<<endl;
	   cout<<"\n";
	   
       //Almacenando los elementos de la matriz //
       
       cout<<"Ingrese un numero para la primera matriz"<<endl;
       cout<<"\n";
       cout<<"*****************************************"<<endl;
       cout<<"\n";
    do{
	   cout<<"Digite un numero ["<<rest<<"] : "<<" "; //Ingrese un numero para la primera matriz//
	   cin>>mat1[rest];
              rest=rest+1;  
       if(rest<10){
       	        
       }
     cout<<"\n";  
    }
     while(rest<10);
     
      cout<<"\n";
	  cout<<"******************************************"<<endl;	
	  cout<<"\n";
	  
	  rest=0;

	  cout<<"Ingrese un numero para la segunda matriz"<<endl;
	  cout<<"\n";
      cout<<"*****************************************"<<endl;
      cout<<"\n";
    do{
	   cout<<"Digite un numero ["<<rest<<"] : "; //Ingrese un numero para la segunda matriz//
	   cin>>mat2[rest];
              rest=rest+1;  
       if(rest<10){
       	        
       }
       cout<<"\n";
    }
	 while(rest<10);
           cout<<endl;
           
      cout<<"\n";
      cout<<"*************************************************"<<endl;
      cout<<"\n";
      cout<<"Mostrar por pantalla los elementos de la matriz";
      cout<<"\n";
      cout<<"\n";
      cout<<"*************************************************"<<endl;
      cout<<"\n";
      //Mostrar las matrices 
   
      rest=0;
   do{
      cout<<mat1[rest];
              rest=rest+1;  
      if(rest<10){
         cout<<" - ";
        
      }
   }
    while(rest<10);
          cout<<endl;
	   rest=0;
    do{
       cout<<mat2[rest];
               rest=rest+1; 
       if(rest<10){
          cout<<" - ";
          
       }
    }
	 while(rest<10);
           cout<<endl;
    
    //Resultado de la resta de la Matriz
  
	cout<<"\n";
    cout<<"*************************************"<<endl;
    cout<<"\n";
	cout<<"Resultado de la resta de la Matriz";
	cout<<"\n";
	cout<<"\n";
	cout<<"*************************************"<<endl;
	cout<<"\n";
	
	   rest=0;
    do{
       cout<<mat1[rest]-mat2[rest];
       
       rest=rest+1;  
       if(rest<10){
       	  cout<<" - ";
          
       }
    }
	   while(rest<10);
	         cout<<endl;
  }
  
    //  Llenar la matriz producto con la multiplicacion de la matriz 1 y la matriz 2 //
    
  if(op==4){ 
  
       cout<<"\n";
       cout<<"*********************************************************************************"<<endl;
       cout<<"\n";
       cout<<" Llenar la matriz producto con la multiplicacion de la matriz 1 y la matriz 2 ";
  	   cout<<"\n";
  	   cout<<"\n";
	   cout<<"*********************************************************************************"<<endl;
	   cout<<"\n";
	   
       //Almacenando los elementos de la matriz //
       
       cout<<"Ingrese un numero para la primera matriz"<<endl;
       cout<<"\n";
       cout<<"*******************************************"<<endl;
       cout<<"\n";
    do{
	   cout<<"Digite un numero ["<<mult<<"] : "<<" "; //Ingrese un numero para la primera matriz//
	   cin>>mat1[mult];
              mult=mult+1;  
       if(mult<10){
       	        
       }
     cout<<"\n";  
    }
     while(mult<10);
     
      cout<<"\n";
	  cout<<"**********************************************"<<endl;	
	  cout<<"\n";
	  
	  mult=0;

	  cout<<"Ingrese un numero para la segunda matriz"<<endl;
	  cout<<"\n";
      cout<<"*****************************************"<<endl;
      cout<<"\n";
    do{
	   cout<<"Digite un numero ["<<mult<<"] : "; //Ingrese un numero para la segunda matriz//
	   cin>>mat2[mult];
              mult=mult+1;  
       if(mult<10){
       	        
       }
       cout<<"\n";
    }
	 while(mult<10);
           cout<<endl;
           
      cout<<"\n";
      cout<<"**************************************************"<<endl;
      cout<<"\n";
      cout<<"Mostrar por pantalla los elementos de la matriz";
      cout<<"\n";
      cout<<"\n";
      cout<<"**************************************************"<<endl;
      cout<<"\n";
      
      //Mostrar las matrices 
   
      mult=0;
   do{
      cout<<mat1[mult];
              mult=mult+1;  
      if(mult<10){
         cout<<" - ";
        
      }
   }
    while(mult<10);
          cout<<endl;
	   mult=0;
    do{
       cout<<mat2[mult];
               mult=mult+1; 
       if(mult<10){
          cout<<" - ";
          
       }
    }
	 while(mult<10);
           cout<<endl;
    
    //Resultado de la multiplicacion de la Matriz
  
	cout<<"\n";
    cout<<"***********************************************"<<endl;
    cout<<"\n";
	cout<<"Resultado de la multiplicacion  de la Matriz";
	cout<<"\n";
	cout<<"\n";
	cout<<"************************************************"<<endl;
	cout<<"\n";
	
	   mult=0;
    do{
       cout<<mat1[mult]*mat2[mult];
       
       mult=mult+1;  
       if(mult<10){
       	  cout<<" - ";
          
       }
    }
	   while(mult<10);
	         cout<<endl;
  }
  
    //  Llenar la matriz división con la división de cada elemento de la matriz 1  con la matriz 2 //
    
  if(op==5){
  	
       cout<<"\n";
       cout<<"***********************************************************************************************"<<endl;
       cout<<"\n";
       cout<<" Llenar la matriz división con la division de cada elemento de la matriz 1  con la matriz 2 ";
  	   cout<<"\n";
  	   cout<<"\n";
	   cout<<"***********************************************************************************************"<<endl;
	   cout<<"\n";
	   
       //Almacenando los elementos de la matriz //
       
       cout<<"Ingrese un numero para la primera matriz"<<endl;
       cout<<"\n";
       cout<<"*******************************************"<<endl;
       cout<<"\n";
    do{
	   cout<<"Digite un numero ["<<div<<"] : "<<" "; //Ingrese un numero para la primera matriz//
	   cin>>mat1[div];
              div=div+1;  
       if(div<10){
       	        
       }
     cout<<"\n";  
    }
     while(div<10);
     
      cout<<"\n";
	  cout<<"**********************************************"<<endl;	
	  cout<<"\n";
	  
	  div=0;

	  cout<<"Ingrese un numero para la segunda matriz"<<endl;
	  cout<<"\n";
      cout<<"*******************************************"<<endl;
      cout<<"\n";
    do{
	   cout<<"Digite un numero ["<<div<<"] : "; //Ingrese un numero para la segunda matriz//
	   cin>>mat2[div];
              div=div+1;  
       if(div<10){
       	        
       }
       cout<<"\n";
    }
	 while(div<10);
           cout<<endl;
           
      cout<<"\n";
      cout<<"*************************************************"<<endl;
      cout<<"\n";
      cout<<"Mostrar por pantalla los elementos de la matriz";
      cout<<"\n";
      cout<<"\n";
      cout<<"**************************************************"<<endl;
      cout<<"\n";
      
      //Mostrar las matrices 
   
      div=0;
   do{
      cout<<mat1[div];
              div=div+1;  
      if(div<10){
         cout<<" - ";
        
      }
   }
    while(div<10);
          cout<<endl;
	   div=0;
    do{
       cout<<mat2[div];
               div=div+1; 
       if(div<10){
          cout<<" - ";
          
       }
    }
	 while(div<10);
           cout<<endl;
    
    //Resultado de la division de la Matriz
  
	cout<<"\n";
    cout<<"*****************************************"<<endl;
    cout<<"\n";
	cout<<"Resultado de la division  de la Matriz";
	cout<<"\n";
	cout<<"\n";
	cout<<"*****************************************"<<endl;
	cout<<"\n";
	
	   div=0;
    do{
       cout<<mat1[div]/mat2[div];
       
       div=div+1;  
       if(div<10){
       	  cout<<" - ";
          
       }
    }
	   while(div<10);
	         cout<<endl;
  }
  
  return 0;
   
}

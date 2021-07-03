// Llenar la matriz división con la división de cada elemento de la matriz 1  con la matriz 2 //

#include<iostream>
using namespace std;
int main()
{
  int c=0;
  float mat1[10]={2.3,3.4,5.6,9.8,10.4,15.1,4.6,7.3,1.5,3.5};
  float mat2[10]={2.3,3.4,5.6,9.8,10.4,15.1,4.6,7.3,1.5,3.5};

       cout<<"Division de Matrices";
  	   cout<<"\n";
	   cout<<"*****************************"<<endl;
	//Almacenando los elementos de la matriz
    cout<<"Ingrese un numero para la primera matriz"<<endl;
    cout<<"\n";
    cout<<"*****************************"<<endl;
    do{
	   cout<<"Digite un numero ["<<c<<"] : "<<" "; //Ingrese un numero para la primera matriz//
	   cin>>mat1[c];
       c=c+1;  
       if(c<10){


       }
     cout<<"\n";  
    }
     while(c<10);

      cout<<"\n";
	  cout<<"*****************************"<<endl;	

	c=0;
	cout<<"Ingrese un numero para la segunda matriz"<<endl;
	cout<<"\n";
    cout<<"*****************************"<<endl;
    do{

	   cout<<"Digite un numero ["<<c<<"] : "; //Ingrese un numero para la segunda matriz//
	   cin>>mat2[c];
       c=c+1;  
       if(c<10){

       }
       cout<<"\n";
    }
	 while(c<10);
    cout<<endl;
  cout<<"\n";
  cout<<"*****************************"<<endl;
  cout<<"Mostrar por pantalla los elementos de la matriz";
  cout<<"\n";
  cout<<"*****************************"<<endl;
  //Mostrar las matrices 

   c=0;

   do{
      cout<<mat1[c];
      c=c+1;  

      if(c<10){
         cout<<" - ";
      }
   }
    while(c<10);
          cout<<endl;

	c=0;

    do{
       cout<<mat2[c];
       c=c+1; 

       if(c<10){
          cout<<" - ";
       }
    }
	 while(c<10);
           cout<<endl;

  //Division de la Matriz
	cout<<"\n";
    cout<<"*****************************"<<endl;
    cout<<"\n";
	cout<<"Division de Matrices";
	cout<<"\n";
	cout<<"*****************************"<<endl;
	cout<<"\n";
	c=0;

    do{
       cout<<mat1[c]/mat2[c];

       c=c+1;  
       if(c<10){
       	  cout<<" - ";

       }
    }
	   while(c<10);
	         cout<<endl;

  return 0;

}

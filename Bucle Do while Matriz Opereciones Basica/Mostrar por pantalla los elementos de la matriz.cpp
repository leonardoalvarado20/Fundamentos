// Mostrar por pantalla los elementos de la matriz //

#include<iostream>
using namespace std;
int main()
{
 int c=0;
  float mat1[10]={2.3,3.4,5.6,9.8,10.4,15.1,4.6,7.3,1.5,3.5};
  float mat2[10]={2.3,3.4,5.6,9.8,10.4,15.1,4.6,7.3,1.5,3.5};
  float suma[10],resta[10],producto[10],division[10];
  cout<<"Mostrar por pantalla los elementos de la matriz";
  cout<<"\n";
  cout<<"*****************************"<<endl;
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
    cout<<endl;
 
  return 0;
   
}

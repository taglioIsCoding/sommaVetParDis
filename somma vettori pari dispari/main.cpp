#include <iostream>
#define max 10
using namespace std;

int main()
{
   int vet[max],i,pari=0,dispari=0;
   int n;
   //caricamento vettore
   do{
   cout<<"inserire la lunghezza del vettore:";
   cin>>n;
   }while(n<0);
   for(i=0;i<n;i++){
    cin>>vet[i];
   }
   //conteggio pari/dispari
   for(i=0;i<n;i++){
    if (vet[i]%2==0) pari=pari+1;
    else dispari=dispari+1;
   }
   cout<<"i numeri pari sono "<< pari<< endl;
   cout<<"i numeri dispari sono "<< dispari<< endl;
    return 0;
}

#include <iostream>
using namespace std;

void ordenamQS(int arreglo[],int primero, int ultimo) 
{
  int i, j, central , aux;
  i = primero;
  j = ultimo;
  central = arreglo [ (primero + ultimo) /2 ];
  do {
    while( central > arreglo[i]) i++;
    while( central < arreglo[j]) j--;
    if( i <= j ) {
      aux = arreglo[i];
      arreglo[i] = arreglo[j];
      arreglo[j] = aux;
      i++;
      j--;
    }
  } while( i <= j );
  if( primero < j ) {
  ordenamQS(arreglo, primero, j);
  }
  if(ultimo > i ) {
  ordenamQS(arreglo,i, ultimo);
  }
}

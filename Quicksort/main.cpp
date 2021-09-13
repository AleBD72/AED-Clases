#include <iostream>

#include "ordenamientoq.h"
#include "imprimir.h"
#include "agregarelem.h"
using namespace std;

int main() {
  int MAX=15;
  int arreglo[MAX];
  int n;
  cout<<"Ingrese la cantidad de elementos que desea agregar: ";
  cin>>n;
  agregar_elem(arreglo,n);
  cout<<endl;
  cout<<"EL ARREGLO INICIAL ES:"<<endl;
  imprimir_a(arreglo, n);
  cout<<endl;
  cout<<"EL ARREGLO ORDENADO ES:"<<endl;
  ordenamQS(arreglo, 0, n);
  imprimir_a(arreglo, n);
  return 0;
}
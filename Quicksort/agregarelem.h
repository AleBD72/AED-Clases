#include <iostream>
using namespace std;

//Agregar elementos a un arreglo
void agregar_elem(int a[], int n){
    for (int i=0; i<n; i++){
      cout<<"Ingrese el elmento "<<i+1<<": ";
      cin>>a[i];
    }
}
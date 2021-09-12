// Algoritmo de ordenamiento por inserción
//Toma un elemento clave y los compara con todos los elementos 
//a la izquierda y realiza el intercambio donde corresponda
void insercion (int a[], int n){
    int aux; //Almacena de forma temporal un dato
    for (int i=0; i<n; i++){
        aux=a[i];
        int p=i;
        while (p>0){
            if (a[p-1]>aux){
                a[p]=a[p-1];
                a[p-1]=aux;
            }
            p--;
        }
    }
}
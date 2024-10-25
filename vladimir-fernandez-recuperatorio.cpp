#include <iostream>
#include <vector>
#include <string>

using namespace std; 

void multiMatriz();

void listaDeLibros ();

void ordenarMatriz();



int main () {
int opcion = 0;
do {
cout <<"1- multiplicacion de matricez 3x3 \n"; 
cout << "2- lista de libros \n";
cout << "3-ordenamiento de matriz \n";
cout << "4- salir \n";
cout << "elija donde quiere ir: ";
cin >> opcion;
switch (opcion){
    case 1:{
    multiMatriz();
    break;
    }
    case 2:{
      listaDeLibros();
      break;
    }
    case 3: {
       ordenarMatriz();
       break;
    }
    default: {
        break;
    }
}

}while (opcion != 4);


    return 0;
}
/// anda todo bien 
void multiMatriz () {
int matrizA[3][3], matrizB[3][3], resultadoMatriz[3][3];

// ingresamos los datos de la matriz A
for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
    cout << "ingrese los datos de la MatrizA [" << i << "][" << j << "] :";
    cin >> matrizA[i][j];
    }
}
 // ingresamos los datos de la matriz b
 for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
    cout << "ingrese los datos de la MatrizB [" << i << "][" << j << "] :";
    cin >> matrizB[i][j];
    }
}
// hacemos la multiplicacion de la matrices
for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
   resultadoMatriz[i][j] = 0;
   for (int s = 0; s < 3; s++){
    resultadoMatriz[i][j] += matrizA[i][s] * matrizB[s][j];
   }
    }
}


// mostramos la matriz resultante de la multiplicacion
for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
        cout << resultadoMatriz[i][j] << " ";
    }
    cout << endl;
}




return;
}


void listaDeLibros() {
vector<string> listaDeLibros;
string respuesta , libro;
do {
    cout << "¿desea ingresar un libro? (s/n)";
    cin >> respuesta;
  cin.ignore();
    if (respuesta == "s" || respuesta == "S"){
      
cout << "ingrese el titulo del libro para agregar: ";
getline(cin, libro);

     listaDeLibros.push_back(libro);
   if(listaDeLibros.size() > 0){ 
    cout << "hay " <<  listaDeLibros.size() <<  " libro en la lista" << endl;
       
}
    }  
   if (respuesta == "n" || respuesta == "N"){
       cout << "el programa ha finalizado.\n\n";
          break;
      }

} while (respuesta == "s" || respuesta == "S");



return;
// terminado
}
void ordenarMatriz(){
int matriz[3][3], matrizOrdenada[3][3], vectormessi[9];;
int k = 0, q = 0;

// ingresamos los datos de la matriz 
for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
    cout << "ingrese los datos de la Matriz  3x3 [" << i << "][" << j << "] :";
    cin >> matriz[i][j];
    }
}


for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
        vectormessi[k++] = matriz[i][j];
    }
}
cout << "vector desordenado: \n";
for (int i = 0; i < 9; i++){
     cout << vectormessi[i] << " ";
}
cout << endl;
// mostramos el vector ordenado 
for (int i = 0; i < 9 - 1; i++){
    for (int j = 0; j < 9 - i - 1; j++){
       if (vectormessi[j] < vectormessi[j+1]){
       
        int auxiliar = vectormessi[j];
        vectormessi[j] = vectormessi[j+1];
        vectormessi[j+1] = auxiliar;
       }
    }
}
cout << "vector ordenado de forma descendente: \n";
for (int i = 0; i < 9; i++){
     cout << vectormessi[i] << " ";
}
cout << endl << endl;
// convertimos el vector a matriz de nuevo
for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
        matriz[i][j] = vectormessi[q++];
    }
}
cout << "esta seria la matriz ordenada: \n";
// mostramos la matriz
for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
        cout << matriz[i][j] << " ";
    }
    cout << endl;
}
cout << endl;
    return;
}






#include <iostream> 
using namespace std;
int main(){
int numero;
//aqui pedimos al usuario ingrsar su numero
cout<< "ingrese el nuemero"<< endl;
cin >> numero;
if (numero > 0){
cout<<"su numero es postivo"<<endl;
}
//ahora decimos que si el numero ingrsado es positivo negativo po igual a cero
else if (numero < 0){
cout<<"su numero es negativo"<<endl;
}

else if ( numero == 0){
    cout<<"su numero es igual a cero"<<endl;
}
return 0;
}
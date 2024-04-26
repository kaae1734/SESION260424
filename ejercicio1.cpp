/*Realice un programa que permita:
1. ingresar x catidad de numero.
2. calcular la suma de dichos numeros.
3. Mostrar todos los numeros.
4. Salir.*/

/*Uso de switch - recursividad.
recursividad -> es cando una funcion se llama a ella misma*/

#include <iostream>

using namespace std;
/*Constante -> las constantes deben ir en mayusculas y utilizados #DEFINE y sin ; */
#define MAX 8

/*variables globales -> puede usarse en cualquier parte del codigo*/
int nums [MAX];
int pos = 0; //posicion del elemento en el arreglo

//cuando utilizamos void es porque es un procedimiento
void agregarNum (int num)
{
    if (pos < MAX)
    {
        nums[pos] = num;
        pos++; //Aumenta la posicion de 1 en 1, tambien puede ponerse +=1
    }
    else
    {
        cout << "No se puede agregar el numero\n";
    }
 }
int sumar(int suma, int ultElem)
{
    if(ultElem == -1)
    {
        return suma;
    }
    suma = suma + nums[ultElem];
    sumar(suma, ultElem - 1);
}

void menu (){
    int suma = 0;
    int op, num;
    cout << "1. Agregar elemento. "<< endl;
    cout << "2. Agregar sumar. "<< endl;
    cout << "3. Mostrar. "<< endl;
    cout << "4. Salir. "<< endl;
    cin >> op;

    switch (op)
    {
        case 1:
        cout << "Dime un numero: ";
        cin >> num;
        agregarNum(num);
        break;

        case 2:
        cout << "la suma es. " << sumar(suma, pos -1) <<endl;
        break;

        case 4:
        break;

        default:
        cout << "No existe la opcion...\n";
        break;
    
    }
    menu();
}

int main(int argc, char const *argv[])
{
    menu();
    return 0;
}




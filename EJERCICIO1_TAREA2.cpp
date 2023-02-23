#include <iostream>
using namespace std;

int main() 
{
    int num;
    cout << "¿Qué tan grande será la lista? (Escribe un numero) ";
    cin >> num;
    int lista[num];
    for (int i = 0; i < num; i++) 
	{
        cout << "Ingresa un numero: " << i+1 << ": ";
        cin >> lista[i];
    }
    int* max = &lista[0], *min = &lista[0];
    for (int i = 1; i < num; i++) 
	{ 
        if (lista[i] > *max) 
		{ 
        max = &lista[i]; 
        }
        if (lista[i] < *min) 
		{
        min = &lista[i]; 
        }
    }
    int &Valor_Max=*max, &Valor_Min=*min, x;
    cout << "El numero mayor de la lista es: " << Valor_Max << endl; 
    cout << "El numero menor de la lista es: " << Valor_Min << endl;
    cout <<"Ingresa un numero que este entre estos parametros: "<<endl;
    cin>>x;
    
     if (x<Valor_Max & x>Valor_Min)
	 {
        cout<<"Este numero esta entre el mayor y el menor"<<endl;
     }
	 else
	 {
        cout<<"El numero no se encuentra en el rango del valor max y el valor min";
     }
    return 0;
}

/*Este programa lee la entrada de dos números, y muestra en la salida estándar la suma de estos, 
para ello se han asignado 3 variables de tipo float y el operador aritmético de suma,
aquí se muestran las variables en una sola línea*/

# include <iostream>//Librería estándar de entrada o  salida de datos
#include <locale.h> //Librería estándar de localización (regionalización)

using namespace std;//Damos acceso al espacio de nombres

main (){ //Inicio del programa
	setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librería y colocamos el valor para el manejo de caracteres, le asignamos el idioma español
	float numero1, numero2, sumando;//Declaramos las 3 variables a utilizar
	
	cout<<"Teclee el primer número a sumar"<<endl;//Solicitamos la entrada para la primera veriable
	cin>>numero1; //Almacenamos la primera variable
	cout<<"Teclee el segundo número a sumar"<<endl;//Solicitamos la entrada para la segunda variable
	cin>>numero2; //Almacenamos la segunda variable
	cout<<"El resultado de la suma es: "<<endl; //Imprimimos este mensaje en pantalla
	sumando = numero1+numero2; //Realizamos la operación de la suma
	cout<<sumando; //Imprimimos el resultado
	
	return 0; //Fin del programa
}

/* Este código fue escrito por Emilio Carcaño Bringas*/

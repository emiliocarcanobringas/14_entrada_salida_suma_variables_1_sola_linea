/*Este programa lee la entrada de dos n�meros, y muestra en la salida est�ndar la suma de estos, 
para ello se han asignado 3 variables de tipo float y el operador aritm�tico de suma,
aqu� se muestran las variables en una sola l�nea*/

# include <iostream>//Librer�a est�ndar de entrada o  salida de datos
#include <locale.h> //Librer�a est�ndar de localizaci�n (regionalizaci�n)

using namespace std;//Damos acceso al espacio de nombres

main (){ //Inicio del programa
	setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librer�a y colocamos el valor para el manejo de caracteres, le asignamos el idioma espa�ol
	float numero1, numero2, sumando;//Declaramos las 3 variables a utilizar
	
	cout<<"Teclee el primer n�mero a sumar"<<endl;//Solicitamos la entrada para la primera veriable
	cin>>numero1; //Almacenamos la primera variable
	cout<<"Teclee el segundo n�mero a sumar"<<endl;//Solicitamos la entrada para la segunda variable
	cin>>numero2; //Almacenamos la segunda variable
	cout<<"El resultado de la suma es: "<<endl; //Imprimimos este mensaje en pantalla
	sumando = numero1+numero2; //Realizamos la operaci�n de la suma
	cout<<sumando; //Imprimimos el resultado
	
	return 0; //Fin del programa
}

/* Este c�digo fue escrito por Emilio Carca�o Bringas*/

#include <iostream>
using namespace std;
void funcion1();
void funcion2();
void funcion3();
void funcion4();
void funcion5();
void funcion6();
void funcion7();

 int main(){
     int programa, respuesta = 1;
     while (respuesta == 1){
         cout << "\nBienvenido al menu de programas, si desea entrar escriba el numero 1, si desea salir escriba el numero 2: " <<endl;cin>>respuesta;
         if (respuesta == 1){
     cout << "\nSelecciona el programa que desea ejecutar:" << endl;
     cout << "\n1. Determinar si una persona es mayor de edad." << endl;
     cout << "2. Determinar el numero mayor entre dos numeros." << endl;
     cout << "3. Determinar si un numero entero es par o impar." << endl;
     cout << "4. Calcular el factorial de un numero." << endl;
     cout << "5. Mostrar numeros impares desde 1 hasta un numero dado. (Estructura for)" << endl;
     cout << "6. Mostrar numeros impares desde 1 hasta un numero dado. (Estructura while)" << endl;
     cout << "7. Mostrar el nombre del dia de la semana segun un numero del 1 al 5." << endl;
     cout << "\nIngrese la opcion deseada: ";
     cin >> programa;

     switch (programa) {

         case 1:
             funcion1();
             cout << "Desea ejecutar otro programa? (ponga un 1 para si y un 2 para no):" <<endl;cin>>respuesta;
             cout << "\nHasta pronto :b" <<endl;
             break;

         case 2:
           funcion2();
             cout << "Desea ejecutar otro programa? (ponga un 1 para si y un 2 para no):" <<endl;cin>>respuesta;
             cout << "\nHasta pronto :b" <<endl;
             break;

         case 3:
             funcion3();
             cout << "Desea ejecutar otro programa? (ponga un 1 para si y un 2 para no):" <<endl;cin>>respuesta;
             cout << "\nHasta pronto :b" <<endl;
             break;

         case 4:
             funcion4();
             cout << "Desea ejecutar otro programa? (ponga un 1 para si y un 2 para no):" <<endl;cin>>respuesta;
             cout << "\nHasta pronto :b" <<endl;
             break;

         case 5:
             funcion5();
             cout << "Desea ejecutar otro programa? (ponga un 1 para si y un 2 para no):" <<endl;cin>>respuesta;
             cout << "\nHasta pronto :b" <<endl;
             break;

         case 6:
             funcion6();
             cout << "Desea ejecutar otro programa? (ponga un 1 para si y un 2 para no):" <<endl;cin>>respuesta;
             cout << "\nHasta pronto :b" <<endl;
             break;

         case 7:
             funcion7();
             cout << "Desea ejecutar otro programa? (ponga un 1 para si y un 2 para no):" <<endl;cin>>respuesta;
             cout << "\nHasta pronto :b" <<endl;
             break;

     }

         }else{
             cout <<"Que rapido te vas :(" << endl;
         }
         }

     return 0;
 }






void funcion1(){
    int edad;
    cout << "Que edad tienes? " << endl;
    cin >> edad;

    if (edad <= 17) {
        cout << "Eres menor de edad " << endl;

    } else if (edad >= 18) {
        cout << "Eres mayor de edad" << endl;

    }
 }

 void funcion2(){
     int one, two;
     cout << "Escriba 1 numero:  " << endl;
     cin >> one;
     cout << "Escriba el segundo  numero:  " << endl;
     cin >> two;
     if (one < two) {
         cout << "El segundo numero es mayor que el primer numero" << endl;
     } else if (one > two) {
         cout << "El primer numero es mayor que el segundo numero" << endl;
     } else if (one == two) {
         cout << "Los dos numeros son iguales" << endl;
     }
 }

 void funcion3(){
     int num;
     cout << "Escriba un numero: " << endl;
     cin >> num;

     if (num % 2 == 0) {

         cout << "El numero es par" << endl;
     } else {
         cout << "El numero es impar" << endl;
     }
 }

 void funcion4(){
     int numero, factorial;
     cout<<"Ingrese un numero: "<<endl;
     cin>>numero;
     factorial = 1;
     while(numero != 0){
         factorial = factorial * numero;
         numero = numero -1;
     }
     cout <<"El factorial es de: "<<factorial<<endl;
 }

 void funcion5(){
     int num1;
     cout << "Escribe un numero mayor que 10 y menor que 30: " << endl;
     cin >> num1;
     while (num1 <= 10 || num1 >= 30) {
         cout << "El numero no esta en el rango solicitado, ingrese un numero mayor a 10 y menor que 30: ";
         cin >> num1;
     }
     for (int i = 1; i <= num1; i = i + 2) {
         cout<< i << endl;
     }
 }

 void funcion6(){
     int num2, i;
     cout << "Ingrese un numero mayor a 10 y menor que 30: ";
     cin >> num2;

     while (num2 <= 10 || num2 >= 30) {
         cout << "\nEl numero no esta en el rango solicitado, ingrese un numero mayor a 10 y menor que 30: ";
         cin >> num2;
     }
     i = 1;
     while (i <= num2) {
         cout<< i << endl;
         i += 2;
     }
 }

 void funcion7(){
     int dia;
     cout << "Ingrese un numero entre el 1 y el 5: ";cin>>dia;
     while (dia < 1 || dia > 5) {
         cout << "El numero no esta en el rango solicitado, ingrese un numero entre el 1 y el 5: ";
         cin >> dia;
     }
     switch (dia) {
         case 1: cout <<"\nEse dia es lunes compa.";break;
         case 2: cout <<"\nEse dia es martes compa.";break;
         case 3: cout <<"\nEse dia es miercoles compa.";break;
         case 4: cout <<"\nEse dia es jueves compa.";break;
         case 5: cout <<"\nEse dia es viernes compa.";break;
     }
 }
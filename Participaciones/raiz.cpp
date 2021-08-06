#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>

using namespace std; //

void calcular(double E, double X, double dato, double &respuestaC);

int main()
{
    double E; //error permitido
    double X; //Valor inicial 
    double datoN = 7; 
    double respuestaC = 0; //Para guardar la respuesta 

    cout << "Calcular raiz de: " << datoN << endl;  

    E =0.00000001; //10^(-8)
    X = datoN;
    calcular(E, X, datoN, respuestaC); 
    
    cout << "con error de " << E << " la respuesta es: " <<setprecision(8)<<respuestaC << endl; 
    cout << endl; 
    
    respuestaC = 0; 

    E = 0.0000000000000001; //10^(-16)
    X = datoN;
    calcular(E, X, datoN, respuestaC); 
    
    cout << "con error de " << E << " la respuesta es: " <<setprecision(16)<<respuestaC << endl; 
    cout << endl; 

    cout << "La raiz de 7 es: " << sqrt(datoN) << endl; 


    //GRAFICA DE iteracion i con i-1
    cout<< endl; 
    cout << "Grafica" << endl; 




}

void calcular(double E, double X, double dato, double &respuestaC)
{ 
    int cont = 0; 
    respuestaC =  (((X+(dato/X))/2)); 
    cout << E << endl; 
    while (abs(X - respuestaC) > E)
    {
        //cout << "El valor es: " <<setprecision(17)<<respuestaC << endl; 
        X = respuestaC; 
        respuestaC = abs(((X+(dato/X))/2));
        cont++; 
    } 
    cout << "iteraciones: " << cont << endl;  

}
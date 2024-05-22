#include <iostream>
using namespace std;
int main()
{
    float Promediodenotas = 0.00;
    float Corto1 = 0.00;
    float Corto2 = 0.00;
    float Parcial = 0.00;
    float Parcial2 = 0.00;
    float Laboratorio = 0.00;
    float Proyecto = 0.00;
    float notafinal=0.00;

    cout << " ---Calculo de notas---\n";
    cout << "Ingrese nota de corto 1\n";
    cin >> Corto1;
    cout << "Ingrese nota de corto 2\n";
    cin >> Corto2;
   cout << "Ingrese nota de parcial 1\n";
    cin >> Parcial;
   cout << "Ingrese nota de parcial 2\n";
    cin >> Parcial2;
   cout << "Ingrese nota de Laboratorio\n";
    cin >> Laboratorio;
    cout << "Ingrese nota de Proyecto\n";
    cin >> Proyecto;
notafinal= ((Corto1 * 0.10) + (Corto2 * 10) + (Parcial * 0.15)+ ( Parcial2 * 0.20)+( Laboratorio * 0.20)+ (Proyecto * 0.25));

cout << "la nota final es:" << notafinal <<"\n";

if (notafinal >=6){
    cout << "felicidades pasaste la materua ;)\n";
}else if (notafinal >=0 && notafinal <6) {

cout <<"Lastima, mas suerte a la prox\n";
}else {
    cout <<"Algo salio mal en el calculo";
}
return 0;
}
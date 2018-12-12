#include <iostream>

using namespace std;

// declaro variable global
double saldo = 100;

void sumarSaldo(double s){
    saldo = saldo + s;
}

void restarSaldo(double s){
    if (s < saldo){
        saldo = saldo - s;
        cout << saldo << endl;
    }else{
        cout << "Saldo insuficiente" << endl;
    }
}
string obtenerTipoCuenta(){
    string frase = "";

    if(saldo <= 100){
        frase = "Su saldo le permite ser un cliente tipo D";
    }else{
        if((saldo >= 101) && (saldo <= 1000)){
            frase = "Su saldo le permite ser un cliente tipo C";
        }else{
            if((saldo >= 1001) && (saldo <= 10000)){
                frase = "Su saldo le permite ser un cliente tipo B";
            }else{
                frase = "Su saldo le permite ser un cliente tipo A";
            }
        }
    }
    return frase;
}

int obtenerEdad(int a){
    int operacion = 2018 - a;
    return operacion;
}

int main()
{
    int opcion;
    double numero;
    int anioNacimiento;
    cout << "Ingrese su año de nacimiento" << endl;
    cin >> anioNacimiento;
    cout << "Ingrese la opcion" << endl;
    cin >> opcion;
    if (opcion == 1){
    cout << "Ingrese en numero que desea sumar" << endl;
    cin >> numero;
    sumarSaldo(numero);
    cout << saldo << endl;
    }else{
        if (opcion == 2){
            cout << "Ingrese en numero que desea restar" << endl;
            cin >> numero;
            restarSaldo(numero);
        }else{
            cout << "Opcion incorrecta" << endl;
        }
    }
    string tipo = obtenerTipoCuenta();
    cout << "Hola tu saldo es " << saldo << endl
        << tipo << endl;

    int edad = obtenerEdad(anioNacimiento);
    cout << "Su edad es " << edad << endl;
    return 0;
}

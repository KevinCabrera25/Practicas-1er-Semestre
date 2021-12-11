// 04_10_2021_Practica5_Reporte_IFELSE.cpp
//Kevin de Jesús Velázquez Cabrera
// Utilización de Condicionales If Else para llenar datos

#include <iostream>
using namespace std;

int main()
{
    string Usuario = "Kevin";
    int Edad { 21 };
    string Usuario_in;
    int Edad_in;
    float Pregunta1{ 9.81 };
    float Pregunta1_in;
    long double Pregunta2 { 999e99 };
    long double Pregunta2_in;
    char Inicial = 'K';
    char Inicial_in;
   


    //Solicitamos tipo de dato char para nombre de Usuario
    cout << "Ingresa tu nombre de Usuario: " << endl;
    cin >> Usuario_in;

    if (Usuario == Usuario_in) //Si el usuario esta registrado entonces desencadenara las siguientes acciones
    {
        //Solicitamos tipo de dato int para Edad
        cout << "Ingresa tu edad: " << endl;
        cin >> Edad_in;
        if (Edad == Edad_in) //Si la Edad es igual a la registrada entonces imprimira lo siguiente
        {
            cout << "Eres mayor de edad, puedes continuar" << endl;

            //Pregunta de seguridad para corroborar datos del usuario
            cout << "Cual es la aceleracion de la gravedad en la Tierra?" << endl;
            cin >> Pregunta1_in;
            if (Pregunta1 == Pregunta1_in) //Solicitamos un dato de tipo float para esta pregunta, si se ingresa el dato correcto se imprimira lo sig
            {
                cout << "Correcto. Estuviste estudiando, eh?" << endl;
            }
            else
            {
                //Si la respuesta a la pregunta anterior es incorrecta se imprimira lo siguiente
                cout << "Tu nombre de Usuario es el correcto?" << endl;
            }

            //Segunda pregunta de seguridad para corroborar datos del usuario
            cout << "Cual es el numero mas grande que conoces?" << endl;
            cin >> Pregunta2_in;
            if (Pregunta2 == Pregunta2_in) //Solicitamos un dato de tipo double para esta pregunta, si se ingresa el dato correcto se imprime lo sig    
            {
                cout << "Correcto. Has mostrado grandes conocimientos matematicos" << endl;
            }
            else
            {
                //Si la respuesta a la pregunta anterior es incorrecta se imprimira lo siguiente
                cout << "Incorrecto. Puede haber problemas con tu ID de Usuario" << endl;
            }

            //Tercera pregunta de seguridad
            cout << "Cual es tu inicial?" << endl;
            cin >> Inicial_in;
            if (Inicial == Inicial_in)
            {
                cout << "Has comprobado correctamente tu ID de Usuario" << endl;
            }
            else
            {
                cout << "Respuesta incorrecta" << endl;
            }

                     
        }
        else  //Si la Edad no es igual a la registrada entonces imprimira lo siguiente
        {
            cout << "No eres mayor de edad, no puedes continuar" << endl;
        }

    }
    else  //Si el usuario no esta registrado entonces imprimira lo siguiente
    {
       cout << "Tu usuario no esta registrado" << endl;
    }
}


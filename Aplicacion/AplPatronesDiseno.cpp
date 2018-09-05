//
// Created by Josue Chaves on 5/9/18.
//

#include "AplPatronesDiseno.h"

void AplPatronesDiseno::menuPrincipal() {
    opcion = 1;
    cout << "******************************************************************************************" << endl;
    cout << "\tBenvenido al menú de Patrones de Diseño. " << endl;
    cout << "\tEn este proyecto se encuentran los siguintes patrones de diseño: " << endl;
    cout << "\t\t Façade" <<endl;
    cout << "\t\t Builder" <<endl;
    cout << "\t\t Abstract Factory" <<endl;
    cout << "\t\t Adapter" <<endl;
    cout << "\t\t Observer" <<endl;
    cout << "\n" << endl;
    cout << "\tCada uno con ejemplo corto que se explicará durante la ejecución." << endl;
    cout << "\tPara mayor información, revisar el código, se encontrará con documentación importante." << endl;
    cout << "******************************************************************************************" << endl;

    do{
        cout << "Elija el patrón que desea probar: " << endl;
        cout << "\t\t 1. Façade" <<endl;
        cout << "\t\t 2. Builder" <<endl;
        cout << "\t\t 3. Abstract Factory" <<endl;
        cout << "\t\t 4. Adapter" <<endl;
        cout << "\t\t 5. Observer" <<endl;
        cout << "\t\t 6. Salir" <<endl;

        switch(opcion) {
            case 1: {
                cout << "*Patrón de diseño Façade*" << endl;
                cout << "El ejemplo consiste en lo siguiente:  " << endl;
                cout << "Para manejar un automóvil tenemos una interfaz muy sencilla, " << endl;
                cout << "Tenemos un volante, que controla las llantas, una llave que enciende el  " << endl;
                cout << "motor, la palanca de cambios para controlar la caja de cambios, y demás, esto a un nivel " << endl;
                cout << "muy abstracto.  " << endl;
                cout << "El façade, en este caso, se comporta como esta interfaz. " << endl;
                cout << "\nContamos con las siguientes clases:  " << endl;
                cout << "CajaMarchas" << endl;
                cout << "Llantas" << endl;
                cout << "LucesFrente" << endl;
                cout << "Motor" << endl;
                cout << "SistemaElectrico" << endl;
                cout << "SistemaSeguridad " << endl;
                cout << "Tanque" << endl;
                cout << "\tAunque esta última no necesariamente forma parte de la interfaz de un carro, podemos ver," << endl;
                cout << "el nivel de gasolina en el tablero." << endl;
                cout << "\nCada clase contiene diferentes métodos, todos accesibles mediante la clase 'Carro' " << endl;
                cout << "Para ver si funciona este ejemplo cada clase tiene un 'cout' que nos indica en que clase se encuentra el" << endl;
                cout << "método utilizado." <<endl;
                cout << "En este caso vamos a encender el objeto carro, lo cual enciende el motor," <<endl;
                cout << "el motor chequea los sistemas eléctrico y de seguridad. Luego encenderemos las luces, cambiaremos la intensidad," <<endl;
                cout << "haremos un cambio de marcha, revisaremos el nivel de gasolina, y lo podemos repostar si es necesario." <<endl;



















            }
            case 6:{
                cout << "...Saliendo de la ejecución del programa..." << endl;
                opcion = 0;
            }

            default:{
                std::cout << "Opcion Incorrecta" << std::endl;
            }

        }
    }while(opcion != 0);

    cout << "Fin." << endl;


}
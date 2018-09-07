//
// Created by Josue Chaves on 5/9/18.
//

#include "AplPatronesDiseno.h"
#include "../Observer/Observer.h"

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
        cout << "\t\t 3. Adapter" <<endl;
        cout << "\t\t 4. Abstract Factory" <<endl;
        cout << "\t\t 5. Observer" <<endl;
        cout << "\t\t 6. Salir" <<endl;
        cin >> opcion;

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
                cout << "\n\n\n" << endl;

                carro->encenderCarro();
                carro->encenderLuces();
                carro->subirIntensidadLuces();
                carro->bajarIntesidadLuces();
                carro->apagarLuces();
                carro->subirMarcha();
                carro->bajarMarcha();
                carro->neutro();
                carro->reversa();
                carro->revisarNivelGasolina();
                carro->repostar(50);
                carro->revisarNivelGasolina();
                carro->moverVolanteIzquierda();
                carro->moverVolanteDerecha();
                carro->moverVolantePosicionInicial();
                carro->apagarCarro();

                delete carro;
                cout << "***********************************Façade Finalizado***********************************" << endl;
                break;
            }
            case 2:{
                cout << "Patrón de Diseño Builder" << endl;
                cout << "Para este ejemplo:" <<  endl;
                cout << "Se quiere construir un avión, este está compuesto de un cuerpo y un motor," << endl;
                cout << "estos se construyen paso a paso." << endl;
                cout << "La clase Plane va a ser nuestro objeto final." <<  endl;
                cout << "La clase Plane Builder es una clase abstracta, esto significa, que los " <<endl;
                cout << "siguientes builders deben tener al menos los métodos de esta clase." << endl;
                cout << "La clase PropellerBuilder crea un avion con hélice, y solo sabe hacer este tipo de avión." << endl;
                cout << "La clase JetBuilder sabe hacer aviones tipo jet." << endl;
                cout << "La clase Director define los pasos y le dice a los constructores que orden seguir para construir un objeto" << endl;
                cout << "\n\n" << endl;

                cout << "********Ejecución en proceso********" << std::endl;
                Plane *avionJet = director.crearAvion(&constructorJet);
                Plane *avionHelice = director.crearAvion(&constructorHelice);
                avionJet->mostrar();
                avionHelice->mostrar();
                cout << "********Ejecución en finalizada********" << std::endl;

                delete avionHelice;
                delete avionJet;
                break;
            }
            case 3:{

                cout << "Patrón de Diseño Adapter" << endl;
                cout << "\n" << endl;
                cout << "El patron de diseño adapter consiste en:  " << endl;
                cout << "Tomar una clase que realice una serie de acciones" << endl;
                cout << "y convertir estas acciones para otros objetivos." << endl;
                cout << "\n" << endl;
                cout << "en el ejemplo tenemos una Clase Colones, esta clase" << endl;
                cout << "ingresa y saca colones de una cuenta." << endl;
                cout << "\n" << endl;
                cout << "La clase Adaptador toma la Clase Colones y convierte "<< endl;
                cout << "la moneda de colones a dolares." << endl;
                cout << "Es decir la adapta de manera tal que en lugar de ingresar o " << endl;
                cout << "retirar colones, sean dolares sin afectar a la clase Colones" << endl;
                cout << "\n" << endl;
                conversor->ingresarDolares(1000);
                cout << "\n" << endl;
                cout <<"Total de colones " << conversor->getSaldo();
                cout << "\n" << endl;
                conversor->sacarDolares(1000);
                cout << "\n" << endl;
                cout <<"Total de colones " << conversor->getSaldo();
                cout << "\n" << endl;

                delete conversor;
                cout << "***********************************Adapter Finalizado***********************************" << endl;
                break;
            }
            case 4:{
                cout << "Patrón de Diseño adapter" << endl;
                cout << "Podemos ver como la clase Cliente pide una carroceria de tipo azul y esta " << endl;
                cout << "pasa a traves de Abstract en la que manda a la clase Carros a crear una " << endl;
                cout << "carroceria de tipo azul donde clase cliente no se le permite ver "  << endl;
                cout << "la manera en la que esta siendo ejecutado"  <<endl;
                cout << "\n" << endl;
                cout << "********Ejecución en proceso********" << std::endl;

                factory = new carroRojo;
                factory = new carroAzul;

                Cliente *cliente = new Cliente(factory);
                cliente->crear();

                cout << "********Ejecución terminada********" << std::endl;
                delete cliente;
                break;
            }
            case 5:{
                cout << "Patrón de Diseño Observer" << endl;

                cout << "\n" << endl;
                cout << "********Ejecución en proceso********" << std::endl;

                DivOserver divOserver1(&sujeto,4);
                DivOserver divOserver2(&sujeto,3);
                DivOserver divOserver3(&sujeto,4);
                sujeto.setVal(14);

                cout << "********Ejecución terminada********" << std::endl;
                break;
            }
            case 6:{
                cout << "...Saliendo de la ejecución del programa..." << endl;
                opcion = 0;
                break;
            }

            default:{
                std::cout << "Opcion Incorrecta" << std::endl;
            }

        }
    }while(opcion != 0);

    cout << "Fin." << endl;


}
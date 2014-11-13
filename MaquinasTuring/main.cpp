#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <winbgim.h>
#include <stdio.h>
#include <LinkedList.h>
#include <Node.h>
#include <mainGrafico.h>
#include <manipuladorArchivo.h>

void misOpciones(){
    cout <<"\n        ______  ______  ______  ______  ______  ______  ______  ______ " << endl;
    cout <<"       ||M   ||||A   ||||Q   ||||U   ||||I   ||||N   ||||A   ||||S   ||" << endl;
    cout <<"       ||____||||____||||____||||____||||____||||____||||____||||____||" << endl;
    cout <<"       |/____\\||/____\\||/____\\||/____\\||/____\\||/____\\||/____\\||/____\\|" << endl;
	cout <<"  ______  ______  ___________  ______  ______  ______  ______  ______  ______ " << endl;
    cout <<" ||D   ||||E   ||||         ||||T   ||||U   ||||R   ||||I   ||||N   ||||G   ||" << endl;
    cout <<" ||____||||____||||_________||||____||||____||||____||||____||||____||||____||" << endl;
    cout <<" |/____\\||/____\\||/_________\\||/____\\||/____\\||/____\\||/____\\||/____\\||/____\\|" << endl;
    cout << endl;
    cout << "Menu:" << endl;
    cout << "   I. Ingresar nombre del archivo de texto\n";
    cout << "   M. Maquina de Turing\n";
    cout << "   S. Salir del programa\n\n";
}

void pausa(){
    cout << "\n\nPresione enter para volver al menu.";
    getwchar();
    getwchar();
}


int main(){
    LinkedList<string> miArchivo;
    bool bandera = false;
    do{
        char miOpcion;
        system("cls");
        misOpciones();
        cout << "Seleccione una opcion:  ";
        cin  >> miOpcion;
        if (miOpcion == 'I' || miOpcion == 'i'){
            system("cls");
            lectorArchivoTxt();
            predibujo();}
        if (miOpcion == 'M' || miOpcion == 'm'){
            mainG();
            system("cls");}
        if (miOpcion == 'S' || miOpcion == 's'){
            bandera = true;
            break;}
        else{pausa();}

        system("cls");
        misOpciones();
    }
    while (bandera != true);
    return 0;
};

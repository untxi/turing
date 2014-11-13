/*#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <winbgim.h>
#include <stdio.h>
#include <LinkedList.h>
#include <Node.h>
#include <mainGrafico.h>

LinkedList<string> lectorArchivoTxt(){//string nombreArchivo){
    LinkedList<string> misLineasDeArchivo;
    string lineaEnArchivo;
    ifstream archivoPorAbrir ("C:\\Users\\Samantha\\Desktop\\TuringEj1.txt");
    if (archivoPorAbrir.is_open()){
        while ( getline (archivoPorAbrir,lineaEnArchivo) ){
            //cout << lineaEnArchivo << '\n';
            misLineasDeArchivo.append(lineaEnArchivo);
         }
        archivoPorAbrir.close();
        cout << "DONE Successful append :D\n";
      }
      else cout << "Unable to open file";

    return misLineasDeArchivo;
}

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
    cout << "   a. Ingresar nombre del archivo de texto\n";
    cout << "   b. Información sobre Turing\n";
    cout << "   c. Salir del programa\n\n";
}

void pausa()
{
    cout << "\n\nPresione enter para volver al menu.";
    getwchar();
    getwchar();
}


int main2(){
    const char*queEsTuring = "Una Maquina de Turing es un dispositivo que manipula simbolos escritos"\
                              "sobre una tira de cinta de acuerdo a una tabla de reglas.\n"\
                              "A pesar de su simplicidad, puede ser adaptada para simular la lógica\n"\
                              "de cualquier algoritmo de computador.\n";

    const char*quienEsTuring =  "Alan Mathison Turing\n\  *  23 de junio de 1912\n\  t   7 de junio de 1954\n"\
                            "Fue un matematico, logico, cientifico de la computacion, criptografo y \n"\
                            "filosofo britanico.\n"\
                            "Es considerado uno de los padres de la ciencia de la computacion siendo\n"\
                            "el  precursor  de  la  informatica moderna.  Proporciono una influyente\n"\
                            "formalizacion de los conceptos de algoritmo y computacion.\n";
    LinkedList<string> miArchivo;
    bool bandera = false;
        do{
            char miOpcion;
            system("cls");
            misOpciones();
            cout << "Seleccione una opcion:  ";
            cin  >> miOpcion;
            if (miOpcion == 'a'){
                    system("cls");
                    cout << "hiA!\n";}//recibeArchivo();}
            if (miOpcion == 'b'){
                    system("cls");
                    mainG();
                    system("cls");
                    misOpciones();
            }
            if (miOpcion == 'e'){bandera = true;    break;}
            else{pausa();}
            system("cls");
            misOpciones();
        }
        while (bandera != true);
    return 0;
}
*/

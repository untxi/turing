/*#include <winbgim.h>
#include <stdio.h>
#include <lectorArchivoTxt.h>

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
/*
void pausa()
{
    cout << "\n\nPresione enter para volver al menu.";
    getwchar();
    getwchar();
}
/*
void recibeArchivo(){
    string miArchivo;
    cout << "El archivo debe estar ubicado en el escritorio.\n";
    cout << "Digite el nombre del Archivo :";
    cin  >> miArchivo;
    LinkedList<string> miMaquina;
    miMaquina = lectorArchivoTxt();//miArchivo);
    cout << "DONE Successful miMaquina assigment :D\n";
    cout << "\nRevision contenido MiMaquina\n" << miMaquina.getSize() << endl;
}*/

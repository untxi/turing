// Librerias
#include <iostream>
#include <cstdlib>
#include <string>
#include <string.h>
#include <strings.h>
#include <winbgim.h>
using namespace std;
// Estructuras
#include <GraficadorTuring.h>
#include <lectorArchivoTxt.h>

//Pausa para el menu
void pausa()
{
    cout << "P\ERROR\nPresione una tecla para volver al menu.";
    getwchar();
    getwchar();
}

int main()
{
    //Atributos
    bool bandera = false;
    char tecla;
    const char*queEsTuring = "Una M�quina de Turing es un dispositivo que manipula s�mbolos escritos"\
                              "sobre una tira de cinta de acuerdo a una tabla de reglas.\n"\
                              "A pesar de su simplicidad, puede ser adaptada para simular la l�gica\n"\
                              "de cualquier algoritmo de computador.\n";

    const char*quienEsTuring =  "Alan Mathison Turing\n\  *  23 de junio de 1912\n\  �   7 de junio de 1954\n"\
                            "Fue un matem�tico, l�gico, cient�fico de la computaci�n, cript�grafo y \n"\
                            "fil�sofo brit�nico.\n"\
                            "Es considerado uno de los padres de la ciencia de la computaci�n siendo\n"\
                            "el  precursor  de  la  inform�tica moderna.  Proporcion� una influyente\n"\
                            "formalizaci�n de los conceptos de algoritmo y computaci�n.\n";

    cout << "\n����,��,����`,��,����`����,��,����`'����,��,����`����,��,����`����" << endl;
    cout <<   "����,��,����`����,�	( MAQUINAS DE TURING )	����,��,����`����,�" << endl;
    cout <<   "����,��,����`,��,����`����,��,����`'����,��,����`����,��,����`����\n\n" << endl;

    return 0;
}

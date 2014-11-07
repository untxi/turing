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
    const char*queEsTuring = "Una Máquina de Turing es un dispositivo que manipula símbolos escritos"\
                              "sobre una tira de cinta de acuerdo a una tabla de reglas.\n"\
                              "A pesar de su simplicidad, puede ser adaptada para simular la lógica\n"\
                              "de cualquier algoritmo de computador.\n";

    const char*quienEsTuring =  "Alan Mathison Turing\n\  *  23 de junio de 1912\n\  †   7 de junio de 1954\n"\
                            "Fue un matemático, lógico, científico de la computación, criptógrafo y \n"\
                            "filósofo británico.\n"\
                            "Es considerado uno de los padres de la ciencia de la computación siendo\n"\
                            "el  precursor  de  la  informática moderna.  Proporcionó una influyente\n"\
                            "formalización de los conceptos de algoritmo y computación.\n";

    cout << "\n°º¤ø,¸¸,ø¤º°`,¸¸,ø¤º°`°º¤ø,¸¸,ø¤º°`'°º¤ø,¸¸,ø¤º°`°º¤ø,¸¸,ø¤º°`°º¤ø" << endl;
    cout <<   "°º¤ø,¸¸,ø¤º°`°º¤ø,¸	( MAQUINAS DE TURING )	°º¤ø,¸¸,ø¤º°`°º¤ø,¸" << endl;
    cout <<   "°º¤ø,¸¸,ø¤º°`,¸¸,ø¤º°`°º¤ø,¸¸,ø¤º°`'°º¤ø,¸¸,ø¤º°`°º¤ø,¸¸,ø¤º°`°º¤ø\n\n" << endl;

    return 0;
}

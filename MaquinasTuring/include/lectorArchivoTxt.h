#ifndef LECTORARCHIVOTXT_H
#define LECTORARCHIVOTXT_H
#include <iostream>
using namespace std;

class lectorArchivoTxt
{
    // Atributos de la clase
    /*
    ifstream::pos_type size;
    string nombreArchivo;
    char * memoriaArchivo;

    public:
        lectorArchivoTxt(string archivo){
            nombreArchivo = archivo + ".txt";

            ifstream file (archivo, ios::in|ios::binary|ios::ate);
            if (file.is_open())
            {
                size = file.tellg(); 		// Obtener el tamaño del archivo
                memoriaArchivo = new char [size];// Solicita memoria para datos
                file.seekg (0, ios::beg); // Puntero al inicio, lee y cierra
                file.read (memoriaArchivo, size);
                file.close();
                cout << "the complete file content is in memory";
                delete[] memoriaArchivo;
            }
            else cout << "Unable to open file";
        }
        virtual ~lectorArchivoTxt();
        */
};

#endif // LECTORARCHIVOTXT_H

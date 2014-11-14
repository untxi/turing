#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <sstream>
#include <LinkedList.h>
#include <Node.h>
#include <maquinaTuring.h>

//using namespace std;

LinkedList<string> misLineasDeArchivo;

void lectorArchivoTxt(){//,string nombreArchivo){

    string lineaEnArchivo;
    const char* nombreArchivo ="C:\\Users\\Samantha\\Desktop\\Proyecto Turing\\Turing.txt";

    ifstream archivoPorAbrir (nombreArchivo);
    if (archivoPorAbrir.is_open()){
        while ( getline (archivoPorAbrir,lineaEnArchivo) ){
            misLineasDeArchivo.append(lineaEnArchivo);
         }
        archivoPorAbrir.close();
        cout << "Successful UpLoad\n";
    }
    else{cout << "Unable to open file";}
}

maquinaTuring predibujo(){
    /*for(int i = 0; i < misLineasDeArchivo.getSize(); i++){
        misLineasDeArchivo.goToPos(i);
        cout << misLineasDeArchivo.getElement() << endl;
    }*/
    maquinaTuring miMaquinaActual = maquinaTuring(misLineasDeArchivo);
    cout << "Maquina Cargada al Programa, dirijase a Menu > Maquina de Turing\n";
    return miMaquinaActual;
}

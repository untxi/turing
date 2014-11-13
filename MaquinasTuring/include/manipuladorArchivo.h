#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <LinkedList.h>
#include <Node.h>
#include <maquinaTuring.h>

//using namespace std;

LinkedList<string> misLineasDeArchivo;

void lectorArchivoTxt(){//string nombreArchivo){

    string lineaEnArchivo;
    ifstream archivoPorAbrir ("C:\\Users\\Samantha\\Desktop\\TuringEj1.txt");
    if (archivoPorAbrir.is_open()){
        while ( getline (archivoPorAbrir,lineaEnArchivo) ){
            misLineasDeArchivo.append(lineaEnArchivo);
         }
        archivoPorAbrir.close();
        cout << "DONE Successful append :D\n";
    }
    else{cout << "Unable to open file";}
}

void predibujo(){
    /*for(int i = 0; i < misLineasDeArchivo.getSize(); i++){
        misLineasDeArchivo.goToPos(i);
        cout << misLineasDeArchivo.getElement() << endl;
    }*/
    maquinaTuring miMaquinaActual = maquinaTuring(misLineasDeArchivo);
    cout << "creó el objeto\n";
}

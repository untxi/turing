#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <LinkedList.h>
#include <Node.h>
using namespace std;

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

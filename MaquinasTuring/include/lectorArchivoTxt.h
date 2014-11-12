#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int lectorArchivoTxt(){
    string lineaEnArchivo;
    ifstream archivoPorAbrir ("C:\\Users\\Samantha\\Desktop\\TuringEj1.txt");
    if (archivoPorAbrir.is_open()){
        while ( getline (archivoPorAbrir,lineaEnArchivo) ){
            cout << lineaEnArchivo << '\n';
         }
        archivoPorAbrir.close();
      }
      else cout << "Unable to open file";

    return 0;
}

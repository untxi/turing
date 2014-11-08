#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
//http://www.cplusplus.com/doc/tutorial/files/
//http://www.programacionenc.net/index.php?option=com_content&view=article&id=69:manejo-de-archivos-en-c&catid=37:programacion-cc&Itemid=55
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

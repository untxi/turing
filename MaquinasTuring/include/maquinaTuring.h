#ifndef MAQUINATURING_H
#define MAQUINATURING_H

#include <iostream>
#include <string>
#include <sstream>
#include <LinkedList.h>
#include <Node.h>
using namespace std;


/*
 Q para estados
 S para símbolos de entrada LECTURA
 G para símbolos de la máquina ESCRITURA
 T para transición
 I para indicar el estado inicial
 B para el carácter en blanco
 F para estados de aceptación
 R para estados de rechazo
*/

LinkedList<string> split(string miLinea, char putAway){
    LinkedList<string> contenido;// = new contenido;
    string s(miLinea);
    string::size_type prev_pos = 0, pos = 0;
    while( (pos = s.find(putAway, pos)) != string::npos ){
        string substring( s.substr(prev_pos, pos-prev_pos) );
        //cout << substring << '\n';
        contenido.append(substring);
        prev_pos = ++pos;
    }
    string substring( s.substr(prev_pos, pos-prev_pos) ); // Last word
    //cout << substring << '\n';
    contenido.append(substring);

    return contenido;
}

string setEstadoInicial(string miLinea){return miLinea.substr(2);}
string setSimboloBlanco(string miLinea){return miLinea.substr(2);}
LinkedList<string> setEstados(string miLinea){
    LinkedList<string> misEstados = split(miLinea.substr(2) ',');
    return misEstados;
}
LinkedList<string> setSimbolosLectura(string miLinea){
    LinkedList<string> misSimbolos = split(miLinea.substr(2), ',');
    return misSimbolos;
}
LinkedList<string> setSimbolosEscritura(string miLinea){
    LinkedList<string> misSimbolos = split(miLinea.substr(2), ',');
    return misSimbolos;
}
LinkedList<string> setEstadosAceptado(string miLinea){
    LinkedList<string> misSimbolos = split(miLinea.substr(2), ',');
    return misEstados;
}
LinkedList<string> setEstadosRechazo(string miLinea){
    LinkedList<string> misSimbolos = split(miLinea.substr(2), ',');
    return misEstados;
}
LinkedList<LinkedList<string>> transiciones;
void setTransiciones(string miLinea){
    LinkedList<string> misTRansiciones = split(miLinea.substr(2), ',');
    transiciones.append(misTRansiciones);
}


#endif // MAQUINATURING_H

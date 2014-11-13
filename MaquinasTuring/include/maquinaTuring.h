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

/*
Recibe una lista de string con la definicion de la Máquina de Turing
(Recorre todas las líneas provenientes del archivo)
Seleciona las partes y extrae los componente de cada uno
*/
class maquinaTuring{
    private:
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
    public:

        maquinaTuring(LinkedList<string> misLineasEnArchivo){

            for(int linea = 0; linea < misLineasEnArchivo.getSize();linea++){
                misLineasEnArchivo.goToPos(linea);
                if(misLineasEnArchivo.getElement()[0] == 'Q'){getEstados(misLineasEnArchivo.getElement());}
                if(misLineasEnArchivo.getElement()[0] == 'S'){getSimbolosEscritura(misLineasEnArchivo.getElement());}
                if(misLineasEnArchivo.getElement()[0] == 'G'){getSimbolosEscritura(misLineasEnArchivo.getElement());}
                if(misLineasEnArchivo.getElement()[0] == 'I'){getEstadoInicial(misLineasEnArchivo.getElement());}
                if(misLineasEnArchivo.getElement()[0] == 'B'){getSimboloBlanco(misLineasEnArchivo.getElement());}
                if(misLineasEnArchivo.getElement()[0] == 'F'){getEstadoFinal(misLineasEnArchivo.getElement());}
                if(misLineasEnArchivo.getElement()[0] == 'R'){getEstadosRechazo(misLineasEnArchivo.getElement());}
                if(misLineasEnArchivo.getElement()[0] == 'T'){setTransiciones(misLineasEnArchivo.getElement());}
            }
        }

        string getEstadoInicial(string miLinea){return miLinea.substr(2);}
        string getSimboloBlanco(string miLinea){return miLinea.substr(2);}
        LinkedList<string> getEstados(string miLinea){
            LinkedList<string> misEstados = split(miLinea.substr(2), ',');
            return misEstados;
        }
        LinkedList<string> getSimbolosLectura(string miLinea){
            LinkedList<string> misSimbolos = split(miLinea.substr(2), ',');
            return misSimbolos;
        }
        LinkedList<string> getSimbolosEscritura(string miLinea){
            LinkedList<string> misSimbolos = split(miLinea.substr(2), ',');
            return misSimbolos;
        }
        LinkedList<string> getEstadosAceptado(string miLinea){
            LinkedList<string> misSimbolos = split(miLinea.substr(2), ',');
            return misSimbolos;
        }
        LinkedList<string> getEstadosRechazo(string miLinea){
            LinkedList<string> misSimbolos = split(miLinea.substr(2), ',');
            return misSimbolos;
        LinkedList<string> getEstadosFinal(string miLinea){
            LinkedList<string> misSimbolos = split(miLinea.substr(2), ',');
            return misSimbolos;
        }
        // Matriz 2D con transiciones
        LinkedList< LinkedList<string> > transiciones;
        void setTransiciones(string miLinea){
            LinkedList<string> misTRansiciones = split(miLinea.substr(2), ',');
            transiciones.append(misTRansiciones);
        }
        LinkedList< LinkedList<string> > getTransiciones(){return transiciones;}


};
#endif // MAQUINATURING_H

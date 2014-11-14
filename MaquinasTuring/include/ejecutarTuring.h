#ifndef EJECUTARTURING_H
#define EJECUTARTURING_H
#include <maquinaTuring.h>
#include <LinkedList.h>
/*LinkedList<string> estados;
    estados.append("i");
    estados.append("Par");
    estados.append("Impar");
    estados.append("HLT");

    LinkedList<string> simbolosIn;
    simbolosIn.append("*");
    simbolosIn.append("0");
    simbolosIn.append("1");

    LinkedList<string> simbolosOut;
    simbolosOut.append("*");
    simbolosOut.append("0");
    simbolosOut.append("1");

    string Inicio = "i";
    string blanco = "B";
    string finale = "HLT";

    LinkedList< LinkedList<string> > Trancisiones;
    LinkedList<string> t0;
    t0.append("i");
    t0.append("*");
    t0.append("Par");
    t0.append("*");
    t0.append(">");

    LinkedList<string> t1;
    t1.append("Par");
    t1.append("0");
    t1.append("Par");
    t1.append("0");
    t1.append(">");

    LinkedList<string> t2;
    t2.append("Par");
    t2.append("1");
    t2.append("Impar");
    t2.append("1");
    t2.append(">");

    LinkedList<string> t3;
    t3.append("Par");
    t3.append("*");
    t3.append("HLT");
    t3.append("*");
    t3.append(">");

    LinkedList<string> t4;
    t4.append("Impar");
    t4.append("0");
    t4.append("Impar");
    t4.append("0");
    t4.append(">");

    LinkedList<string> t5;
    t5.append("Impar");
    t5.append("1");
    t5.append("Par");
    t5.append("1");
    t5.append(">");

    LinkedList<string> t6;
    t6.append("Impar");
    t6.append("*");
    t6.append("HLT");
    t6.append("*");
    t6.append(">");

    Trancisiones.append(t0);
    Trancisiones.append(t1);
    Trancisiones.append(t2);
    Trancisiones.append(t3);
    Trancisiones.append(t4);
    Trancisiones.append(t5);
    Trancisiones.append(t6);*/

class ejecutarTuring
{


    private:
        string estadoActual;
        string simboloRead;
        string estadoDestino;
        string simboloWrite;
        string movimiento;
        int    cabeza;
        string tiraIngresada;
        LinkedList<string> Trancisiones;

        bool verificarTira(string tira, LinkedList<string> simbolos){
                //static const size_t npos = -1;
                bool bandera = true;
                for(int i = 0; tira.length(); i++){
                    if(tira.find(tira[i])){
                       bandera = true;}
                    if(!tira.find(tira[i])){
                        bandera = false;
                        break;}
                }
                return bandera;
            }

        bool ejecutar(string estadoActual, string simboloRead, string estadoDestino, string simboloWrite, string movimiento){
            for(int i = 0; i < tiraIngresada.size(); i++){
                if(Trancisiones[i][0] == estadoActual && Trancisiones[i] == simboloRead){
                    tiraIngresada[cabeza] = Trancisiones[i][3];
                    if(Trancisiones[i][5] == "<"){cabeza--;}
                    if(Trancisiones[i][5] == ">"){cabeza++;}
                }
                if (Trancisiones[i][0] == estadoFinal){
                        return false;}
            }
            return true;
        }

    public:
        ejecutarTuring(string pTiraIngresada, maquinaTuring miMaquina) {
            tiraIngresada = pTiraIngresada;
            Trancisiones = miMaquina.getTransiciones();
            if(verificarTira(tiraIngresada, simbolosIn)){
                    if(ejecutar(estadoActual, simboloRead, estadoDestino, simboloWrite, movimiento)){
                        cout << "Ejecutando Turing...\n";
                    }
                    else{cout << "Estado final encontrado\n";}
            }
            else {cout << "Se encontrarón simbolos incorrectos en la tira"<<endl;}
        }

        //virtual ~ejecutaTuring() {}


};

#endif // EJECUTATURING_H

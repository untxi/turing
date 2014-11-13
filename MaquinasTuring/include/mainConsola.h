// Librerias
#include <iostream>
#include <cstdlib>
#include <string>
#include <string.h>
#include <strings.h>
#include <winbgim.h>
#include <LinkedList.h>
#include <Node.h>
using namespace std;
// Estructuras
#include <GraficadorTuring.h>
#include <lectorArchivoTxt.h>
// Menu
void misOpciones(){
    cout <<"\n        ______  ______  ______  ______  ______  ______  ______  ______ " << endl;
    cout <<"       ||M   ||||A   ||||Q   ||||U   ||||I   ||||N   ||||A   ||||S   ||" << endl;
    cout <<"       ||____||||____||||____||||____||||____||||____||||____||||____||" << endl;
    cout <<"       |/____\\||/____\\||/____\\||/____\\||/____\\||/____\\||/____\\||/____\\|" << endl;
	cout <<"  ______  ______  ___________  ______  ______  ______  ______  ______  ______ " << endl;
    cout <<" ||D   ||||E   ||||         ||||T   ||||U   ||||R   ||||I   ||||N   ||||G   ||" << endl;
    cout <<" ||____||||____||||_________||||____||||____||||____||||____||||____||||____||" << endl;
    cout <<" |/____\\||/____\\||/_________\\||/____\\||/____\\||/____\\||/____\\||/____\\||/____\\|" << endl;
    cout << endl;
    cout << "Menu:" << endl;
    cout << "   a. Ingresar nombre del archivo de texto\n";
    cout << "   b. ¿Que es una Maquina de Turing?\n";
    cout << "   c. ¿Quien es Turing?\n";
    cout << "   d. Ver imagen de Turing\n";
    cout << "   e. Salir del programa\n\n";
}
//Pausa para el menu
void pausa()
{
    cout << "\n\nPresione enter para volver al menu.";
    getwchar();
    getwchar();
}

void hagaTuring(){
    //string miArchivo;
    cout << "El archivo debe estar ubicado en el escritorio.\n";
    //cout << "Digite el nombre del Archivo :";
    //cin  >> miArchivo;
    LinkedList<string> miMaquina;
    miMaquina = lectorArchivoTxt();//miArchivo);
    cout << "DONE Successful miMaquina assigment :D\n";
    cout << "\nRevision contenido MiMaquina\n" << miMaquina.getSize() << endl;
}

int main()
{
    const char*queEsTuring = "Una Maquina de Turing es un dispositivo que manipula simbolos escritos"\
                              "sobre una tira de cinta de acuerdo a una tabla de reglas.\n"\
                              "A pesar de su simplicidad, puede ser adaptada para simular la lógica\n"\
                              "de cualquier algoritmo de computador.\n";

    const char*quienEsTuring =  "Alan Mathison Turing\n\  *  23 de junio de 1912\n\  t   7 de junio de 1954\n"\
                            "Fue un matematico, logico, cientifico de la computacion, criptografo y \n"\
                            "filosofo britanico.\n"\
                            "Es considerado uno de los padres de la ciencia de la computacion siendo\n"\
                            "el  precursor  de  la  informatica moderna.  Proporciono una influyente\n"\
                            "formalizacion de los conceptos de algoritmo y computacion.\n";
    /*
    const char*imagenTuring =   "                                    - .'+SS*?+''-"\
                                "                              -''-'!!2BB00$6662BB2)'"\
                                "                         '-*?=*B00232060000660#6#06B#*"\
                                "                       -+((*30666B66Q06#60#B6660#6#6006("\
                                "                     -30B#B06##66666####Q####6#6##6####66'"\
                                "                    +###66##Q#####6###6QQ#QQQQQQ#QQ###Q#Q6)"\
                                "                   -#)Q66###Q###QQ#####6###6####2!(($B6#0##="\
                                "                  -0Q%26#6##0$)32322$3S(!(SSS>(3$B066666606#="\
                                "                  +#0%##$(=''----''''''''''''?3660066666#000#?"\
                                "                 .Q06#?--------------'''''''''*B6066#6#6###666>"\
                                "                 B##Q..------------'''''''''''+)B#666##########-"\
                                "                 Q#6'------------''''''''''''=?S66##Q#Q#Q#QQ###'"\
                                "                 3#''-----------'''''''''''=+>?30######QQ#QQQQQ?"\
                                "                 .#'-----------'''''''''====>*S22B####Q#QQQQ###!"\
                                "                 '+----------''''''''='===+>?*!()000#6##QQ#Q#Q#'"\
                                "                 '''''-'--'''''+>!***=?++?>>?!*S33$B60#66######."\
                                "                 **)3?'''''=*33)$)$3$2S!!!?!!!*!)2)3B2$B06####Q-"\
                                "                 '*$$00)?+!)6###Q66#666$$!!?!?!!(*S33))33B6#666-"\
                                "                 ''6B0Q6-'=*#Q#%#Q#2$#BBB$**!!!!!**(((((B))###'"\
                                "                  '(>*>!-'=!S$20(6$2Q#62)))S*!!!*!((SS=''(B$!'."\
                                "                  '''''-'++==+!>'?)S*?>>>?>>?>!!!!**(?+20''?S)."\
                                "                   '''''==+='''=''''='''=++>???>!!(!*((6++=??!."\
                                "                  ''''''=??>='='''=='''=+?+???!!!*(*?>$#B!=>+*."\
                                "                  '''=!**>'+=+=+==''=++??!***((((((!''S=!???("\
                                "                  '''26QQQQ3(!>!+====++!!!*(*((((**>!???!((=-"\
                                "                  '''''3$2*(+++>!!??>!!!*((((*((((*>??+*2!("\
                                "                  '''''''+>+??>>>?((**(**(********!!==+>)."\
                                "                  '''''+'?!**??!!*(*(((((S(((!*(((!*?!*0-"\
                                "                   =)#B2B62)S3$$S((SSS(SSSS(((*(SS()00B)"\
                                "                   =>'''==*(20#Q0))S*SS((((((((()))SB2$("\
                                "                  ''''($0#6B2SS!3B2((SS((((((SS)3333))$2''"\
                                "                   '''''>*?(*!!!S)3))))(((SSS)))$23$SS))6="\
                                "                   '=''''+=+>?*(S333)))))S)))22$BB23*(*S66'"\
                                "                   '>='+>+!??(SS)322233333322B0602)(**+20#6+"\
                                "                    '!*(((S23333$$B0B000B660666B3)***+!6060B2>"\
                                "                     '*0066#0####6###########0$3((*??+6660666$)S+"\
                                "                        ''''3?6#6######Q###602S**!'!(B6066B$6B$B(3)!'"\
                                "                    '''+***'Q'?S6QQQQQ##60B23(*?=??*600#6#666B$200B$6$2"\
                                "                '''!*(()S?3'Q*'?*26#660B$2)(!>+?'?!$00#6#66#6606BB6BB$$"\
                                "          --''>!((S3$3(!*S0+'**'>?200B23SS(=?*'+'!066###0060##0$602$B0$"\
                                "       -''!((S(S))))))*!*)6B'-'0?=?223S!'*+''''+?S06Q06000660#62#0B60#0"\
                                "   ---'>(*S(SSS$)S))S!*(*$##'-'''B+>!='>'=''-='>36Q$0B66B6006#60#60#$Q6"\
                                "  '26)S***))32B0SS)**3(*(0#!'---..'-'''--'''='(S2B20#060#00#066#2B0##6#"\
                                "-(20(S3*2$2B0666)(*?S***B06.---'S3B%-'''='?=??'$3$6000000#660QQ60#BQ%BB"\
                                "!0#S(S(S20B6#B662S>*(*!?)0Q-----2B0#%-''+'='''2BB#0)626BBS63060BQ#%#)$$"\
                                "(06*S))$2B##0$22SS(**?!>)2B---'Q0##QQ=='''.'.33($BB)0$B2Q6B#603Q660$3$6"\
                                "$6633)B666603!32)*()(S!3*2-.-.%%QQQ2B$'--'66(2!326)32$66$S$6B#Q62036+*)"\
                                "0Q0B))B6##332)2(S(+*3>S3$#%%Q0#0##*''-'%6?>'B3S2(**$*0Q32$3QQ$2)>SS)663"\
                                "BQ6((306##3$2S3(S3?+S!$(0QQ##60###'=='+'.-.2B)))22B)$BB6$B(>$0$*S)+)06B"\
                                "0#0*(B6#6$3()()!*(!*?)S6Q03'0#3Q#Q3'>''---)!)*?*32)($2)006(3)#?SBB#6'$S"\
                                "B#SS23B066S(SS!'>=((?326Q!?366#Q#Q#'''---)(2!!2(>$6)$**S#2(2)$3Q$(3(2$0"\
                                "$2*2BB#$$3*((SS3!S(?(360Q??#6##QQQQ(=+'-'!?S*B3$6(636$S0*$*>3#Q2$!>?@B#"\
                                "6!)2600223S(*!S$?*?+?($#Q>(6*QQQQ#QQ>+'-$S))3S#)B226B'*)=3B263S?-$36B6#"\
                                "0S2)3$*3SB3*S33*S??(+S2QQ!0####QQ##Q'+.2($*$63?333((02()S?S#Q)*03()2$QQ"\
                                "33()32*SB0(S2*2S(0?!B20Q%$666##QQ##%'+=3?B$63B)2(0())?*S*(Q6*3)S(2B($66"\
                                "23(3)SB*)$()?>SS(S>220Q%Q02@#QQ#QQ#%'BQ)2$0>2*2?**$2332$$#3$+==(20$S2Q6"\
                                "*?2B$2S*2#(=*!6)*(!)$00%Q####Q##QQQ%#Q0$00#)S('S$)*3*?3#6#S*)B)63(3$B66";
    */
    bool bandera = false;
    do{
        char miOpcion;
        system("cls");
        misOpciones();
        cout << "Seleccione una opcion:  ";
        cin  >> miOpcion;
        if (miOpcion == 'a'){system("cls"); hagaTuring();}
        if (miOpcion == 'b'){system("cls"); cout << queEsTuring;}
        if (miOpcion == 'c'){system("cls"); cout << quienEsTuring;}
        if (miOpcion == 'd'){system("cls"); cout << "Tamaño de Pantalla insuficiente" << endl;}
        if (miOpcion == 'e'){bandera = true;    break;}
        else{pausa();}
        system("cls");
        misOpciones();
    }
    while (bandera != true);
    return 0;
}

// Librerias
#include <iostream>
#include <cstdlib>
#include <string>
#include <string.h>
#include <strings.h>
#include <winbgim.h>
using namespace std;
// Estructuras
#include <GraficadorTuring.h>
#include <lectorArchivoTxt.h>
// Menu
char miMenu(){
    char opcion;
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
    cout << "   d. Salir del programa\n\n";
    cout << "Seleccione una opcion:  ";
    cin  >> opcion;
    return opcion;
}
//Pausa para el menu
void pausa()
{
    cout << "\n\nPresione enter para volver al menu.";
    getwchar();
    getwchar();
}

void hagaTuring(){
    cout << "Hace Turing\n";
}

int main()
{
    //Atributos
    bool bandera = false;
    char tecla;
    const char*queEsTuring = "Una Maquina de Turing es un dispositivo que manipula simbolos escritos"\
                              "sobre una tira de cinta de acuerdo a una tabla de reglas.\n"\
                              "A pesar de su simplicidad, puede ser adaptada para simular la lógica\n"\
                              "de cualquier algoritmo de computador.\n";

    const char*quienEsTuring =  "Alan Mathison Turing\n\  *  23 de junio de 1912\n\  †   7 de junio de 1954\n"\
                            "Fue un matematico, logico, cientifico de la computacion, criptografo y \n"\
                            "filosofo britanico.\n"\
                            "Es considerado uno de los padres de la ciencia de la computacion siendo\n"\
                            "el  precursor  de  la  informatica moderna.  Proporciono una influyente\n"\
                            "formalizacion de los conceptos de algoritmo y computacion.\n";

    const char*imagenTuring =   "                                .->?33(32$2B$223$="\
                                "                            .'!'>!)B02$2$32$B$BB2$2)-"\
                                "                          .S)*SBBB02B0B0000BBB0BBBB0B)"\
                                "                        .20#BB00BB0BB0B$60066060600000B-"\
                                "                        .$#0000B0BB00B00B0$B$3S!)3$BBB00-"\
                                "                       .00*66$)>''=''''--'+(22$$BBBBBBB2$$"\
                                "                      .)0BB'...........----''?$$$$$0BB0BB)."\
                                "                      .0B3............-.----''*2$BB000000B?"\
                                "                      .06...........---'--'''=*0000B060000B"\
                                "                      .6............--'-''"">>*$0B00060606#"\
                                "                      .B..........-''''''""=+??S2$BB0600000"\
                                "                      .==-..-..-''?>?!=>'+==+>!)S3B$$$0000S"\
                                "                       )02)=''+$B666BB$3*>>>+>>***(S3)B0BB'"\
                                "                        B062--!$0B02)6$3$)(>>+>>?*?!!2$BB#"\
                                "                        ''.'.'=?((*3B20$3*!*>+>+>?!=-=B0)"\
                                "                       .---.-""""='.""""=""++=++??>=3>''>!"\
                                "                       .----'='''''''''=>>+++?>+)BS'+=?"\
                                "                        -''>+=""""''''""=+>????!?>')'>=?>"\
                                "                         'S0662*'+='''''+>>?!!!??'>'+>*+"\
                                "                        '''''+==''+>>>>>?!?>?!!?>+'?'+'"\
                                "                        ''''''>>++>+???????>?>>??=''("\
                                "                        '*S>(S*!((*!?!**!*!!!!?!*)$2S"\
                                "                        ''>+'>!!!*B2(?!***!?!**((*SS>"\
                                "                         ''(3002*>!SS*!(?!*!*(SSSS(S2$"\
                                "                        '--'''??(*((((****SS33)(!!!B("\
                                "                         =''>++?!*SSSS)*S)S32$$3(!!'3$B)-"\
                                "                         .*(*SS))22222BBBBBBB$)*??''2$2$2+'"\
                                "                          .-.=06B0000000000B$(!!+'+$B2B$2))*!""-"\
                                "                        .--'+>'6'?B006000$$)*>+''?BB0B02$$)B2)3)!?"\
                                "                      '+?!(?!?S-?'+!$0$3)(!?''>B$0B0$22$2BS3)$))$3"\
                                "                  '+?>!*3!*??*6.'$-+3$3(!?''=-'B$$$$B$$0$$2B)B$$))2"\
                                "              .'?!?!*)S***>??3#..-'!'?!.>'--.-+2B2$)$30$0BBBB$$B3)BB"\
                                "            2S!>?**S32!**>*?!20-... --'-.--.'>*322BB$0BB20B)22$B2222"\
                                "          *B(!S!)3$$$B*(>!?>3$>...+($Q.-=''""-3$2$322!2B0B620(220>23"\
                                "         !2B>**S2B$$)2**??+*!3....S$06='.... *))0)2B3$B)$2$0$3)!6=Q$"\
                                "        (SB$((3B$BB)*)?*(>!*)6...0B6B#6.. =0?32)(*030!62S60332#S!0B#"\
                                "       S(202(*3$0S)*2!*+?(+!366BB206.--=S""02>S*$2S$S)3200(3*+((6260"\
                                "       (BS203(23$B?()S*?+??*226#$S006'-...-(2)S)?S))2*!(2S*33>0)63B$"\
                                "      (!)33B?*)$BB?*!>!S2!!*)$='B0066B'..'((=($2)>3+SB!$3BB$S'QB322*"\
                                "    S$3??3$>3303S?S**S??+!S2#>SBB0060'.-.)+)**32SS2*$?2*S62)>B?2623$"\
                                "   'SS0S(0**S3$S)(!*+!!**S(B#+$0600002-.)!3(?S0SB3=S(>3206S!S=3B2)S+"\
                                "  ´!*!(B22?))!(?B(33>='+)S$06?BB00660#'')>$3)?*)2!>3?!)3!2)!()$02)20"\
                                " -!3>?(36S??)*3*33?+(!*?)(S66$B0000060.#+2)>?!+>)!*((2$S'+?3)B)B26B0"\
                                "?)!(!((B0?>(33**3***)*'0Q3#600060066(0(2!0')?*)'S>(006'(B3S?$BBBB#''"\
                                "!)SS*)226??2!$2>S>S3S(2)$2S6600000B0066SS=)S(+>'!*0262*?*)!2S2S02*BB"\
                                "3(3>$2B2B*(?S*)S$>?*()2()02#6660060660))??*!S(((3>BS)()=2>?((022000("\
                                "!3?*+3$B0!S?!+!$S!>S3'!32$066666606602!233?S?S!)B0)0(>!32S)B3)SBB=3*"\
                                "$!))SBB00)3*(*(S32!?(*?#(0#666666666#>+S(>*?+>(S0$)!!?>3*3*$*)26$>+>"\
                                "$)S$3$B60SB(2?S+$$S$2S3)S06666666600?*33?3??)!S0(2))!)+3332$333B3(S("\
                                ")$*23B06B((*2)(S*3*3320$3#6066666666???+(S??!B0S?633**($*3S32200*S2$"\
                                "2303B$$00S*3$)3()$SS!2(626606606060>(3*?=?+>*$))S22$2*(3BB))230!2$B2"\
                                "$3)2B2B66BS3$*$B2)$)?$(3)66660060063(33+S*?2B3*2S$3!?*SS3$S$2$$+!*S!"\
                                "$B$3BB2062$($3B$)22$2($)B666600666**S)23())0$!!$$$2$)(222$2$3B)*32*!";

    do{
        char miOpcion = miMenu();

        switch(miOpcion){
            case 'a':
                system("cls");
                hagaTuring();
                pausa();
                system("cls");
                miMenu();
            case 'b':
                system("cls");
                cout << queEsTuring;
                pausa();
                system("cls");
                miMenu();
            case 'c':
                system("cls");
                cout << quienEsTuring;
                pausa();
                system("cls");
                miMenu();
            case 'd':
                bandera = true;
                break;
            default:
                system("cls");
                pausa();
                system("cls");
                miMenu();
        }
    } while (bandera != true);
    return 0;
}

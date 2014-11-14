#include <main2.h>
#include <winbgim.h>
#include <stdio.h>
using namespace std;

void presionado(int op);
void boton(int x,int y,int x2,int y2,int c1,int c2);
void clean();
int cordx,cordy;
int c,r,r2,x,y,x2,y2,R,G,B;
char op;
bool bandera = true;

int mainG(){
//inico del programa
    initwindow(810,680);//ancho, alto
    //const char*title = "Máquina de Turing";
    setwindowtitle("Máquina de Turing");

    setcolor(15);
    rectangle(8,7,791,651);
    setcolor(0);
    rectangle(9,8,790,650);
    setfillstyle(1,COLOR(153,0,153));//color de la ventana
    bar(10,9,790,650);//ventana
    setfillstyle(1,COLOR(221,215,210));//color de la segunda
    bar(13,38,787,647);//segunda ventana (dentro de la otra)
    setcolor(0);//color margen
    rectangle(13,38,787,647);//margen
    setfillstyle(1,COLOR(188,143,143));//color fondo
    bar(20,100,780,643);//fondo en donde apareceran las figuras

    setbkcolor(COLOR(153,0,153));//fondo de letra
    settextstyle(10,0,1);//tipo de letra
    setcolor(15);//color de letra
    outtextxy(19,12,"        >-<>-<>-<>-<>-<>-< Máquinas de Turing >-<>-<>-<>-<>-<>-< ");//titulo

    boton(20,42,113,95,15,0);//primer boton
    setbkcolor(COLOR(221,215,210));
    settextstyle(8,0,1);//tipo de letra
    outtextxy(30,60,"Dibujar");///*****nombre boton
    rectangle(30,80,37,81);//indica la letra D
    boton(120,42,218,95,15,0);//segundo boton
    outtextxy(124,60,"Ejecutar");///*****nombre boton
    rectangle(124,80,131,81);//indica letra E
    boton(225,42,318,95,15,0);//tercer boton
    outtextxy(233,60,"Que es?");///****nombre boton
    rectangle(233,80,240,81);//indica la letra e
    boton(325,42,418,95,15,0);//cuarto boton
    outtextxy(326,60,"Quien es?");///****nombre boton
    rectangle(350,80,357,81);//indica la letra e
    boton(425,42,540,95,15,0);//quinto boton
    outtextxy(436,60,"Ver Turing");///****nombre boton
    rectangle(436,80,443,81);//indica letra i
    boton(550,42,670,95,15,0);//sexto boton
    outtextxy(565,60,"Limpiar");///****nombre boton
    rectangle(565,80,572,81);//indica la letra L
    boton(680,42,780,95,15,0);//septimo boton
    outtextxy(705,60,"Salir");
    rectangle(707,80,716,81);

    do{
        do{
            getmouseclick(WM_LBUTTONDOWN,cordx,cordy);
            if(cordx>20&&cordy>42&&cordx<113&&cordy<95) {presionado('D');}//BOTON Dibujar
            if(cordx>120&&cordy>42&&cordx<218&&cordy<95){presionado('E');}//BOTON Ejecutar
            if(cordx>225&&cordy>42&&cordx<318&&cordy<95){presionado('Q');}//BOTON que
            if(cordx>325&&cordy>42&&cordx<418&&cordy<95){presionado('I');}//BOTON quien
            if(cordx>425&&cordy>42&&cordx<540&&cordy<95){presionado('V');}//BOTON ver
            if(cordx>550&&cordy>42&&cordx<670&&cordy<95){presionado('L');}//BOTON limpiar
            //if(cordx>680&&cordy>42&&cordx<780&&cordy<95) {presionado('s'); bandera = false; break;}//BOTON salida
        }
        while(!kbhit());//espera teclado

        op=getch();//si es una opcion entra
        if(op == 'D'||op=='d'){presionado('D');}
        if(op == 'E'||op=='e'){presionado('E');}
        if(op == 'Q'||op=='q'){presionado('Q');}
        if(op == 'I'||op=='i'){presionado('I');}
        if(op == 'V'||op=='v'){presionado('V');}
        if(op == 'L'||op=='l'){presionado('L');}
        if(op == 'S'||op=='s'){presionado('S');  bandera = false;}
	}while(bandera!=false);	//ciclo infinito*/
    closegraph();
	return 0;
}//fin del programa



void presionado(int op) //funcion presionado con un switch
{

    switch(op){
          case 'D':
              //Animación
                for(int i=0;i<1;i++)
                {
                    boton(20,42,113,95,15,0);
                    delay(100);
                    boton(20,42,113,95,0,15);
                    delay(100);
                    boton(20,42,113,95,15,0);
                    delay(100);
                }
                // Función
                setbkcolor(COLOR(153,0,153));//fondo de letra
                settextstyle(10,0,1);//tipo de letra
                setcolor(15);//color de letra
                outtextxy(100,100,"Dibujo la máquina de turing");//titulo
                delay(100);
                cout << "Dibujar" << endl;
                break;
          case 'E'://en caso de presionar C o c se activara CIRCULO
                //Animación
                for(int i=0;i<1;i++){
                    boton(120,42,218,95,15,0);
                    delay(100);
                    boton(120,42,218,95,0,15);
                    delay(100);
                    boton(120,42,218,95,15,0);
                    delay(100);
                }
                //Funcion
                setbkcolor(COLOR(153,0,153));//fondo de letra
                settextstyle(10,0,1);//tipo de letra
                setcolor(15);//color de letra
                outtextxy(100,100,"Ejecuto la máquina de Turing");//titulo
                delay(100);
                cout << "Ejecutar" << endl;
                break;
          case 'Q':
                //Animación
                for(int i=0;i<1;i++){
                    boton(225,42,318,95,15,0);
                    delay(100);
                    boton(225,42,318,95,0,15);
                    delay(100);
                    boton(225,42,318,95,15,0);
                    delay(100);
                }
                // Función
                setbkcolor(COLOR(188,143,143));//fondo de letra
                settextstyle(10,0,1);//tipo de letra
                setcolor(15);//color de letra
                outtextxy(100, 200,"Una Maquina de Turing es un dispositivo que manipula");
                outtextxy(100, 250,"simbolos escritos sobre una tira de cinta de acuerdo");
                outtextxy(100, 300,"a una  tabla de reglas.");
                outtextxy(100, 350,"A pesar de su  simplicidad, puede ser  adaptada para");
                outtextxy(100, 400,"simular  la lógicade cualquier algoritmo de computador.");
                delay(10000);
                clean();
                break;
          case 'I':
                //Animación
                for(int i=0;i<1;i++){
                    boton(325,42,418,95,15,0);
                    delay(100);
                    boton(325,42,418,95,0,15);
                    delay(100);
                    boton(325,42,418,95,15,0);
                    delay(100);
                }
                // Función
                setbkcolor(COLOR(188,143,143));//fondo de letra
                settextstyle(10,0,1);//tipo de letra
                setcolor(15);//color de letra
                outtextxy(100, 150,"                 Alan Mathison Turing");
                outtextxy(100, 200,"    Nació:  23 de junio de 1912.");
                outtextxy(100, 250,"    Falleció: 7 de junio de 1954.");
                outtextxy(100, 300," Fue un matematico, logico, cientifico de la computacion,");
                outtextxy(100, 350,"criptografo y filosofo britanico.");
                outtextxy(100, 400," Es considerado  uno de los padres de la  ciencia de la");
                outtextxy(100, 450,"computacion  siendo  el  precursor  de  la  informatica ");
                outtextxy(100, 500,"moderna.  Proporciono una influyente formalizacion de los");
                outtextxy(100, 550,"conceptos de algoritmo y computacion.");

                delay(10000);
                clean();
                break;
          case 'V':
                //Animación
                for(int i=0;i<1;i++){
                    boton(425,42,540,95,15,0);
                    delay(100);
                    boton(425,42,540,95,0,15);
                    delay(100);
                    boton(425,42,540,95,15,0);
                    delay(100);
                }
                //Función
                setbkcolor(COLOR(188,143,143));
                settextstyle(0,0,1);//tipo de letra
                setcolor(0);//color de letra
                outtextxy(100,100,"                         !7%%(!");
                outtextxy(100,110,"                  , ^!%$2%2$26$22$");
                outtextxy(100,120,"               7|(7$6$$$666$$$6$666$'");
                outtextxy(100,130,"             2$665566$66$55556&5566656");
                outtextxy(100,140,"            =67665666$6$6$$$27!=%$$666(");
                outtextxy(100,150,"            5=5$~.          ,-2222$662$%");
                outtextxy(100,160,"           5$5              . ($$$656666~");
                outtextxy(100,170,"           &6              .,,-$666655565");
                outtextxy(100,180,"           ~             ..'''=2666555566");
                outtextxy(100,190,"           ~         ,'^','^^!!|%2$655565");
                outtextxy(100,200,"           !'' .  '~=|(+=''^'^-||7%226666");
                outtextxy(100,210,"            $+7^'=$6656$%%(--'-~~|=|+266'");
                outtextxy(100,220,"            ' |. '||6525$7=|~''!~!=..'!=");
                outtextxy(100,230,"                '',,' ,''''^'''-!!^~^ ^=");
                outtextxy(100,240,"               ,'^',..'..''^''-!!-'6%'''");
                outtextxy(100,250,"             !||!'^^',.,''--!~!!!^'--'!");
                outtextxy(100,260,"            . '~(^'''-'^-'!~~~~~!-'-(|");
                outtextxy(100,270,"            ..''^--'''~~!!!!!-'!-.'^");
                outtextxy(100,280,"            .+77$(=++~!=====~!!=~62%");
                outtextxy(100,290,"              +%|+|=(%(~=~~~~==(=((7");
                outtextxy(100,300,"             . ,^---~(((==~==((7+|=~$");
                outtextxy(100,310,"             ,.''^-!~|++|=((+72%(!!!%$");
                outtextxy(100,320,"              ~~=|+|%%2%22$66$%(!~^$222='");
                outtextxy(100,330,"                 ^%6666665562+~!,^7$$$727=('");
                outtextxy(100,340,"             .'~!'&.!$5666%|=-'-!72$$2%%7%$272");
                outtextxy(100,350,"         ^!~|+!-=$ 6,^727|=--'^,726622$27$67%+");
                outtextxy(100,360,"     ,~=(!|(~(-!|5  ^'^(= ',,. ^$22676$%2667%%");
                outtextxy(100,370,"  2(~-=(+%|=~~!~%5    .   ,, '!775226$$$$+5$2$");
                outtextxy(100,380,"!$=~=(2$%$7=-~!(2^   76~ ^^'  2$2%$$~%2%2$6$7%");
                outtextxy(100,390,"(6!||+662|==!-'!7   7655     =(+2%++25%2526%=(");
                outtextxy(100,400,"6$|7%$6~+|~!-'-=& '$55  ' &!|!%'=%2=7&2627%|'%");
                outtextxy(100,410,"$$=|%6!||=!~'~+7&&6255',.   (=+77%+~('%7$=|=!2");
                outtextxy(100,420,"$+=+$$~~=(|+~~72!'$665&'   =$(=2|27+%=7%6=2+7|");
                delay(10000);
                clean();
                break;
          case 'L':
                //Animación
                for(int i=0;i<1;i++){
                    boton(550,42,670,95,15,0);
                    delay(100);
                    boton(550,42,670,95,0,15);
                    delay(100);
                    boton(550,42,670,95,15,0);
                    delay(100);
                }
                //Función
                clean();
                cout << "case c" << endl;
                break;
          case 'S':
               //Animación
               for(int cont=0;cont<100000;cont++){
                    x=(rand()%740)+20;
                    y=(rand()%542)+101;
                    x2=(rand()%760)+20;
                    y2=(rand()%542)+101;
                    R=(rand()%250)+5;
                    G=(rand()%255);
                    B=(rand()%230)+25;
                    c=COLOR(R,G,B);
                    r=(rand()%10);//tamaño del circulo
                    setcolor(c);
                    setcolor(c);
                    line(x,y,x2,y2);//lineas de tamaño y ubicacion aleatoria
               }
               for(int ca=0;ca<15;ca++)
               {
               R=(rand()%250)+15;
               G=(rand()%255);
               B=(rand()%230)+300;
               c=COLOR(R,G,B);
               setcolor(c);
               settextstyle(9,0,6);
               //setbkcolor(COLOR(188,143,143));
               outtextxy(220,300,"Hasta pronto!!");//texto de despedida
               delay(100);//duracion del mensaje
               }
               //Función
               clean();//Cierra la ventana
               cout << "case s" << endl;
               break;
          default:
              for(int i=0;i<15;i++){
                  R=(rand()%250)+15;
                  G=(rand()%255);
                  B=(rand()%230)+300;
                  c=COLOR(R,G,B);
                  setcolor(c);
                  settextstyle(4,0,3);
                  setbkcolor(COLOR(0,0,0));
                  outtextxy(150,300,"Opcion invalida. Intente otra vez");//texto de error al no pulsar una opcion
                  delay(100);////duracion al cambio de color del mensaje
              }
              break;
		}
}//fin funcion

void boton(int x,int y,int x2,int y2,int c1,int c2)//funcion para los botones
{
   setcolor(c1);//color de la parte izquierda del boton
   line(x,y,x,y2);
   setcolor(c1);//color de la parte superior del boton
   line(x,y,x2,y);
   setcolor(c2);//color de la parte inferior del boton
   line(x,y2,x2,y2);
   setcolor(c2);//color de la parte derecha del boton
   line(x2,y2,x2,y);
}

void clean()
{
    //COLOR(188,143,143
	setfillstyle(1,COLOR(188,143,143));
	bar(20,100,780,643);
}


#ifndef GRAFO_H
#define GRAFO_H
#include Node.h

class Grafo{
    int Vertice;
    int Arista;
    int a[maxV][maxV];

    void inicializar(){
        int i,x,y,p;
        char v1,v2;

        memset(a,0,sizeof(a));
        for (i=1; i<=Arista; i++){
            scanf("%c %c %d\n",&vertice1,&vertice2,&p);
            x=v1-'A'; y=v2-'A';
            a[x][y]=p; a[y][x]=p;
        }
    }
};
#endif // GRAFO_H

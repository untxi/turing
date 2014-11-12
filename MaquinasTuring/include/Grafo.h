#ifndef GRAFO_H
#define GRAFO_H
/*#include Node.h

class Grafo{
    Grafo(int cantidadVertices, int cantidadAristas){
        int cantidadVertices;
        int cantidadAristas;
        int a[cantidadVertices][cantidadVertices];
    }
    void inicializar(){
        int i,x,y,p;
        char v1,v2;

        memset(a,0,sizeof(a));
        for (i=1; i<=cantidadAristas; i++){
            scanf("%c %c %d\n",&vertice1,&vertice2,&p);
            x=v1-'A'; y=v2-'A';
            a[x][y]=p; a[y][x]=p;
        }
    }
};*/


// Graph abstract class. This ADT assumes that the number
// of vertices is fixed when the graph is created.
class Graph {
    private:
        void operator =(const Graph&) {} // Protect assignment
        Graph(const Graph&) {} // Protect copy constructor
    public:
        Graph() {} // Default constructor
        virtual ˜Graph() {} // Base destructor
        // Initialize a graph of n vertices
        virtual void Init(int vertice) =0;
        // Return: the number of vertices and edges
        virtual int vertice() =0;
        virtual int numEdges() =0;
        // Return v’s first neighbor
        virtual int first(int v) =0;
        // Return v’s next neighbor
        virtual int next(int v, int w) =0;
        // Set the weight for an edge
        // i, j: The vertices
        // wgt: Edge weight
        virtual void setEdge(int v1, int v2, int wght) =0;
        // Delete an edge
        // i, j: The vertices
        virtual void delEdge(int v1, int v2) =0;
        // Determine if an edge is in the graph
        // i, j: The vertices
        // Return: true if edge i,j has non-zero weight
        virtual bool isEdge(int i, int j) =0;
        // Return an edge’s weight
        // i, j: The vertices
        // Return: The weight of edge i,j, or zero
        virtual int weight(int v1, int v2) =0;
        // Get and Set the mark value for a vertex
        // v: The vertex
        // val: The value to set
        virtual int getMark(int v) =0;
        virtual void setMark(int v, int val) =0;
};


#endif // GRAFO_H

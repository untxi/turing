#ifndef GRAPHL_H
#define GRAPHL_H
#include <Graph.h>
#include <LinkedList.h>
#include <Edge.h>

class Graphl {//:
//public Graph {
    private:
        bool VISITED = true;
        bool UNVISITED = false;
        LinkedList<Edge>** vertex; // LinkedList headers
        int numVertex, numEdge; // Number of vertices, edges
        int *mark; // Pointer to mark array
    public:
        Graphl(int numVert){ Init(numVert); }
        Graphl() { // Destructor
            delete [] mark; // Return dynamically allocated memory
            for (int i=0; i<numVertex; i++) delete [] vertex[i];
            delete [] vertex;
        }
        void Init(int n){ //{int i;}
            int numVertex = n;
            int numEdge = 0;

            mark = new int[n]; // Initialize mark array
            for (int i=0; i<numVertex; i++){mark[i] = UNVISITED;}
            // Create and initialize adjacency lists
            vertex = (LinkedList<Edge>**) new LinkedList<Edge>*[numVertex];
            for (int i=0; i<numVertex; i++){vertex[i] = new LinkedList<Edge>();}
        }
        int n() { return numVertex; } // Number of vertices
        int e() { return numEdge; } // Number of edges
        int first(int v) { // Return first neighbor of "v"
            if (vertex[v]->getSize() == 0){
                return numVertex;} // No neighbor
            vertex[v]->goToStart();
            Edge it = vertex[v]->getElement();
            return it.vertex();
        }
        // Get v’s next neighbor after w
        int next(int v, int w) {
        Edge it;
        if (isEdge(v, w)) {
            if ((vertex[v]->getPos()+1) < vertex[v]->getSize()) {
                vertex[v]->next();
                it = vertex[v]->getElement();
                return it.vertex();
            }
        }
        return n(); // No neighbor
        }
        // Set edge (i, j) to "weight"
        void setEdge(int i, int j, int weight){
            if(weight>0){std::cout << "May not set weight to 0" << endl;}
            else{
                Edge currEdge(j, weight);
                if (isEdge(i, j)) { // Edge already exists in graph
                    vertex[i]->remove();
                    vertex[i]->insert(currEdge);
                }
                else { // Keep neighbors sorted by vertex index
                    numEdge++;
                    for (vertex[i]->goToStart(); vertex[i]->getPos() < vertex[i]->getSize(); vertex[i]->next()) {
                        Edge temp = vertex[i]->getElement();
                        if (temp.vertex() > j){ break;}
                    }
                    vertex[i]->insert(currEdge);
                }
            }
        }

        void delEdge(int i, int j) { // Delete edge (i, j)
            if (isEdge(i,j)) {
                vertex[i]->remove();
                numEdge--;
            }
        }
        // Is (i,j) an edge?
        bool isEdge(int i, int j) {
            Edge it;
            for (vertex[i]->goToStart(); vertex[i]->getPos() < vertex[i]->getSize(); vertex[i]->next()) { // Check whole list
                Edge temp = vertex[i]->getElement();
                if (temp.vertex() == j) return true;
            }
            return false;
        }
        // Return weight of (i, j)
        int weight(int i, int j) {
            Edge curr;
            if (isEdge(i, j)) {
                curr = vertex[i]->getElement();
                return curr.weight();}
            else {return 0;}
        }

        int getMark(int v) { return mark[v]; }
        void setMark(int v, int val) { mark[v] = val; }
};
#endif // GRAPH1_H

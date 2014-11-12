#ifndef GRAPHNODE_H
#define GRAPHNODE_H

template <typename E>
class GraphNode
{
    public:
        int dato;
        GraphNode<E> *sigt;
        GraphNode<E> *adyacente;

        GraphNode(int dato, ) {}
        virtual ~GraphNode() {}
    protected:
    private:
};

#endif // GRAPHNODE_H

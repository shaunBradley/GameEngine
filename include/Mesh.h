#ifndef MESH_H
#define MESH_H
#include "Vector3.h"

// x,y,z from -1 to 1
struct Vertex
{
    public:
    Vertex();
    protected:
    private:
    Vector3* m_vertex;
};

class Mesh
{
    public:
        Mesh();
        void Draw();
        virtual ~Mesh();
        Mesh(const Mesh& other);

    protected:

    private:
};

#endif // MESH_H

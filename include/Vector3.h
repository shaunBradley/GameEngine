#ifndef VECTOR3_H
#define VECTOR3_H


class Vector3
{
    public:
        Vector3(int x, int y, int z);
        static Vector3 Cross();
        static Vector3 Dot();
        virtual ~Vector3();
        Vector3(const Vector3& other);

    protected:

    private:
    int x,y,z;
};

#endif // VECTOR3_H

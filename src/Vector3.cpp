#include "Vector3.h"

Vector3::Vector3(int x, int y, int z)
{
    this->x  = x;
    this->y  = y;
    this->z = z;
}

Vector3::~Vector3()
{
    //dtor
}

Vector3 Vector3::Cross()
{
    return new Vector3();
}

Vector3 Vector3::Dot()
{
    // dot product
}


Vector3::Vector3(const Vector3& other)
{
    //copy ctor
}

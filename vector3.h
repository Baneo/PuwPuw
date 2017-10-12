#ifndef VECTOR3_H
#define VECTOR3_H


class Vector3
{
public:
    float x;
    float y;
    float z;
    Vector3();
    Vector3(const float x, const float y, const float z);
    void invert();
    void print();
    void add(Vector3*);
    void sub(Vector3*);
};

#endif // VECTOR3_H

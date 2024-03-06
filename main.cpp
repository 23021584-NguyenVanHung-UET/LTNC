#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Vector {
    double x_, y_;
public:
    Vector(double x, double y)
    {
        x_=x;
        y_=y;
    }
    void print(int precision = 2, bool newLine = true)
    {
        cout << fixed << setprecision(precision) << "(" <<x_<<","<<y_<<")";
        if(newLine) cout << endl;
    }
    void truncate(double length)
    {
        this -> x_ -= length;
        this -> y_ -= length;
    }
    bool isOrtho(const Vector& v) const
    {
        return (v_*v.x_+y_*v.y_==0);
    }
    static float dot(const Vector& v1, const Vector& v2)
    {
        return v1.x_*v2.x_+v1.y_*v2.y_;
    }
    static float cross(const Vector& v1, const Vector& v2)
    {
        return v1.x_*v2.y_-v1.y_*v2.x_;
    }
    friend ostream& operator<<(ostream& os, const Vector& v)
    {
        os << "(" << v.x_<<","<<x.y_<<")";
        return os;
    }
};

int main()
{
    return 0;
}

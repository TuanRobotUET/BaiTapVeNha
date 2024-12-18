#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct triangle
{
    int edge1,edge2,edge3;
    triangle(int initEdge1,int initEdge2, int initEdge3)
    {
        edge1 = initEdge1;
        edge2 = initEdge2; 
        edge3 = initEdge3;
    }

    double getArea()
    {
        if (edge1 + edge2 > edge3 && edge1 + edge3 > edge2 && edge2 + edge3 > edge1)
        {
            double p = (edge1 + edge2 + edge3) / 2.0;
            return sqrt(p * (p - edge1) * (p - edge2) * (p - edge3));
        }
        return -1;
    }
};

int main()
{
    int edge1,edge2,edge3;
    cin >> edge1 >> edge2 >> edge3;
    triangle tri(edge1,edge2,edge3);
    double area = tri.getArea();
    if (area == -1) cout << "invalid" << endl;
    else cout << fixed << setprecision(2) << area << endl;
    return 0;
}

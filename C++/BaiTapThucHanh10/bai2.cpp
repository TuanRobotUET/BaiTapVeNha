#include <iostream>
using namespace std;

struct Vector {
    double x;
    double y;
    
    ///Hàm tạo - Tạo ra một Vector với thành phần dữ liệu đã biết trước
    Vector (double _x, double _y){
        x = _x;
        y = _y;
    }
    
    ///Hàm in ra màn hình một Vector
    void printVector(){
        cout << x << " " << y << endl;
    }
};

///Hàm tính tổng 2 Vector trả về Vector tổng sau khi tính toán
Vector addVector(const Vector &v1, const Vector &v2)
{
    Vector sum;
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    
    Vector v1,v2;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    v1 = Vector(x1, y1);
    v2 = Vector(x2, y2);
    Vector sum = addVector(v1, v2);
    sum.printVector();
    return 0;
}
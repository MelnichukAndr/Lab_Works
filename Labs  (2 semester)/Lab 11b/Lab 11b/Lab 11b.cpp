#include <iostream>
#define pi 3.1415
using namespace std;
class figure {
    int a, b, c;
public:
    figure(int a = 5, int b = 4, int c = 3) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    float CalculateArea() {
        if (b == 0 && c == 0) {
            float CircleArea = pi * pow(this->a, 2);
            return CircleArea;
        }
        else if (a == 0 && c == 0) {
            float CircleArea = pi * pow(this->b, 2);
            return CircleArea;
        }
        else if (a == 0 && b == 0) {
            float CircleArea = pi * pow(this->c, 2);
            return CircleArea;
        }
        else {
            float p = (a + b + c) / 2;
            float TriangleArea = sqrt(p * (p - this->a)*(p - this->b)*(p - this->c));
            return TriangleArea;
        }
    }
};
int main()
{
    figure Figure;
    cout << "Area = " << Figure.CalculateArea() << endl;
    system("pause");
}

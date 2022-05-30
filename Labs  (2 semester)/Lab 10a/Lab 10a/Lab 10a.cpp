#include <iostream>
using namespace std;

class figure{
public:	
    int Inc(int a = 2, int b = 0)
    {
        if (a == 0)
            return b * b;
        if(b == 0)
            return a * a;
    return a * b;
    }
};

int main()
{
    figure area;
    cout << "Figure area = " << area.Inc() << "\n\n\n";
}
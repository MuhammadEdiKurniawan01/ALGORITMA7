#include <iostream>

using namespace std;

class Kuadran
{
public:
    int x;
    int y;

    void Input()
    {
        cout<<"X = ";cin>>x;
        cout<<"Y = ";cin>>y;
        cout<<"Koordinat titik(x,y) = "<<x<<"  "<<y<<endl;
    }

    void Output()
    {
        if(x>0 && y>0)
        {
            cout<<"Kuadran 1"<<endl;
        }
        else if(x<0 && y>0)
        {
            cout<<"Kuadran 2"<<endl;
        }
        else if(x<0 && y<0)
        {
            cout<<"Kuadran 3"<<endl;
        }
        else
        {
            cout<<"Kuadran 4"<<endl;
        }
    }
};

int main()
{
    Kuadran a;
    a.Input();
    a.Output();
}

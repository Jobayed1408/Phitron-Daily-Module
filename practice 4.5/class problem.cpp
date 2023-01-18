#include<bits/stdc++.h>
using namespace std;
class User
{
protected:
    int length;
};

class Cuboid : User
{
private:
    int width;

public:
    int height;
    Cuboid(int l, int w, int height)
    {
        length = l;
        width = w;
        this->height = height;
    }
    Cuboid()
    {

    }
    void getvolume()
    {
        cout<<length*width*height<<"\n";
    }
    int getSurfaceArea ()
    {
        int area = 2*(length *height + height*width+ width*length);
        return area;
    }
    void print()
    {
        cout<<length<< " "<<width<< " " <<height<< " \n";
    }
};

int main()
{
    Cuboid p{3,2,1};
    Cuboid p2{ };
    p.print();
    p.getvolume();
    cout<<p.getSurfaceArea()<< " \n";

}

#include<iostream>
using namespace std;
class box{
    private :
        double length,height,breadth;
    public :
        box(double l=2.0,double b=2.0,double h = 2.0)
            {
                cout<<"Constructor called"<<endl;
                length = l;
                breadth = b;
                height = h;
            }

            double volume()
                {
                    return length*breadth*height;
                }
};
int main()
{
    box box1(3.3,1.2,1.5);
    box box2(8.5,6.0,2.0);
    box *ptrbox;
    ptrbox = &box1;
    cout<<"Volume of box 1 : "<<ptrbox->volume()<<endl;
    ptrbox = &box2;
    cout<<"volume of box 2 : "<<ptrbox->volume()<<endl;
    return 0;
    

}

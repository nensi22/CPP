#include<iostream>
using namespace std;
class Shape
{
    protected:
        int width;
        int height;
    public:
        virtual int getArea()=0; //pure virtual function
        void setwidth(int w)
        {
            width=w;
        }
        void setheight(int h)
        {
            height=h;
        }
};
class Rectangle:public Shape
{
    public:
        int getArea()
        {
            return (width*height);
        }
};
class Traingle:public Shape
{
    public:
        int getArea()
        {
            return (width*height)/2;
        }
};
int main()
{
    Rectangle rect;
    Traingle trngle;

    rect.setwidth(5);
    rect.setheight(7);
    cout<<"\n total Rectangle area="<<rect.getArea()<<endl;

    trngle.setwidth(5);
    trngle.setheight(7);
    cout<<"\n total traingle area="<<trngle.getArea()<<endl;
}
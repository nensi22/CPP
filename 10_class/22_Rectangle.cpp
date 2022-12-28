#include<iostream>
using namespace std;
class Rectangle
{
private:
    float length;
    float width;
    
public:
    void setlength(float);
    void setwidth(float);
    float perimeter();
    float area();
    void show();
    int samearea(Rectangle);
};

void Rectangle::setlength(float len)
{
    length=len;
}
void Rectangle::setwidth(float wid)
{
    width=wid;
}
float Rectangle::perimeter()
{
    return 2*(length+width);
}
float Rectangle::area()
{
    return length*width;
}
void Rectangle::show()
{
    cout<<"\n length is ="<<length<<" and width is ="<<width;
}
int Rectangle::samearea(Rectangle other)
{
    float firstArea,secondArea;
    firstArea=length*width;
    secondArea=other.length*other.width;
    if(firstArea==secondArea)
        return 1;
    else
        return 0;
}
int main()
{
    Rectangle R1,R2;
    R1.setlength(5);
    R1.setwidth(2.5);
    R2.setlength(5);
    R2.setwidth(18.9);
    cout<<"\n first rectangle ";
    cout<<"\n area of rectangle "<<R1.area();
    cout<<"\n perimeter of rectangle "<<R1.perimeter();

    cout<<"\n second rectangle ";
    cout<<"\n are of rectangle "<<R2.area();
    cout<<"\n perimeter of ractangle "<<R2.perimeter();

    if(R1.samearea(R2))
        cout<<"\n area is same";

    else
        cout<<"\n area is not same";
}
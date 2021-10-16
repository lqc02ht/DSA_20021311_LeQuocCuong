#include<iostream>

using namespace std;

class Point{
public:
    double x,y;
    Point(double x1=0, double y1=0){
        x=x1;
        y=y1;
    }
    void Input(){
        cin>>x>>y;
    }
    void displayPoint(){
        cout<<x<<' '<<y;
    }
};

class Line{
public:
    double a1, b1, c1, a2, b2, c2;
    void LineIntersection(Point A, Point B, Point C, Point D){
        a1 = B.y - A.y;
        b1 = A.x - B.x;
        c1 = a1*(A.x) + b1*(A.y);
        a2 = D.y - C.y;
        b2 = C.x - D.x;
        c2 = a2*(C.x)+ b2*(C.y);
        double determin = a1*b2 - a2*b1, determin1 = c1*b2 - c2*b1, determin2 = a1*c2 - a2*c1;
        if (determin != 0){
            Point Inter((b2*c1 - b1*c2)/determin, (a1*c2 - a2*c1)/determin);
            Inter.displayPoint();
        }
        else if(determin1==0 || determin2!=0) cout<<"MANY";
        else if(determin1==0 && determin2==0) cout<<"NO";
    }
};

int main()
{
    Point A, B, C, D;
    A.Input();
    B.Input();
    C.Input();
    D.Input();
    Line T;
    T.LineIntersection(A, B, C, D);
    return 0;
}


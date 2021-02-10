#include <iostream>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;


#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2)
{
    double p1p2[2];
    p1p2[0]=x1-x2;
    p1p2[1]=y1-y2;
    double dis;
    dis=sqrt(p1p2[0]*p1p2[0]+p1p2[1]*p1p2[1]);

    return dis;
}

int main()
{
    int x=1;
    double y=2;
    int a[]={3,2,1,4};
    cout<<x/y;
    double x1, x2, y1, y2;
    cin>> x1 >> y1 >> x2 >> y2;
    cout<< distance(x1, y1, x2, y2);
    return 0;
}
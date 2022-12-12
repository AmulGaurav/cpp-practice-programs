#include <iostream>
#include<cmath>
using namespace std;

class Point {
    int x, y;
    public:
    Point(int v1, int v2) {
        x = v1;
        y = v2;
    }
    friend int distance(Point, Point);
};

 int distance(Point a, Point b) {
    int x_diff = a.x - b.x;
    int y_diff = a.y - b.y;
    int dist = sqrt((x_diff*x_diff)+(y_diff*y_diff));
    return dist;
    }

int main() {

Point a(2,1), b(1,1);

cout<<distance(a, b);
    return 0;
}
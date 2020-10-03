// * To find Area of Polygon
#include<bits/stdc++.h>
using namespace std;

struct Point{
    double x;
    double y;
};

double crossProduct(Point a, Point b){
    return (a.x*b.y - b.x*a.y);
}

double AreaTriangle(Point a, Point b, Point c){
    return abs(crossProduct(a, b) + crossProduct(b, c) + crossProduct(c, a))/2.0;
}

double AreaOfPolygon(vector<Point> &A, int size){
    double area;
    for (int i = 0; i < size; i++){
        area += crossProduct(A[i], A[(i+1)%size]);
    }
    return abs(area/2.0);
}

void AreaOfTriangle(){
    Point a = {0, 1};
    Point b = {0, 0};
    Point c = {1, 0};
    cout << AreaTriangle(a, b, c) << endl;
}

int main(){
    vector<Point> A;
    int sides;
    cin >> sides;
    for (int i = 0; i < sides; i++){
        Point P; 
        cin >> P.x >>P.y;
        A.push_back(P);
    }
    cout << AreaOfPolygon(A, A.size())<< endl;
}
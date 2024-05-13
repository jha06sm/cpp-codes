#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);

int main()
{
    int s,l,b;
    float r,bs,ht;
    cout<<"enter side of square:";
    cin>>s;
    cout<<"enter length and breadth of rectangle:";
    cin>>l>>b;
    cout<<"enter base and height of triangle:";
    cin>>bs>>ht;
    cout<<"enter radius of circle:";
    cin>>r;
    
    cout<<"area of square is:"<<area(s);
    cout<<"\narea of rectangle is:"<<area(l,b);
    cout<<"\narea of triangle is:"<<area(bs,ht);
    cout<<"\narea of circle is:"<<area(r);

}
int area(int s){
    return s*s;
}
int area(int l,int b){
    return l*b;
}
float area(float bs,float ht){
    return(0.5*bs*ht);
}
float area(float r){
    return 3.14*r*r;
}

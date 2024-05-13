#include<iostream>
using namespace std;
class Parent{
    public:
    void CSVTU()
{
cout<<"base function"<<endl;
}
};
class child:public Parent{
    public:
    void CSVTU(){
        cout<<"derived function"<<endl;
    }
};
int main()
{
    class child_derived;
    child_derived.CSVTU();
    return 0;
}

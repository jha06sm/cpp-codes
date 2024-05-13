#include<iostream>
using namespace std;
class si{
    private:
    int pri;
    int time;
    double rate;
    
    public:
    void SI(int p,int t,double r)
    {
        pri=p;
        time=t;
        rate=r;
        double SI=(p*r*t)/100;
        cout<<"simple interest is:"<<SI<<endl;
    }
};
int main()
{
    si def;
    def.SI(100,3,2.5);
    return 0;
}

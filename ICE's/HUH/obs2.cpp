#include <iostream>
#include <string>

class base
{
public:
    base(char c = 0x48):c_(c){b_ = new base(*this);}
    base(const base& rhs)
    {
        int d[] = {-29, -7, 0, -3, 79, -87, 8, -3, 6, 8, 67, 23};
        c_ = rhs.c_ - d[i++];        
        b_ = (i-11)?new base(*this):0;
    }
    ~base()
    {
        using namespace std;
        cout<<c_;
        delete b_;
    }
private:
    char c_;
    base *b_;
    static int i;
};

int base::i = 0;

int main()  
{
    base b;
    return 0;
}
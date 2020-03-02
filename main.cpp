#include <iostream>
using namespace std;

class Box{
private:
    int hgt,wid,len;
public:
    Box(int h=6,int w=8,int l=10):hgt(h),wid(w),len(l){}
    int vol(){
        return (this->hgt)*(this->wid)*(this->len);
    }
};

int main() {
    Box a(2,4,6),b(3,5,7);
    cout << a.vol()<<endl;
    cout << b.vol()<<endl;
}

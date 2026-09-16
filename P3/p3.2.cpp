#include<iostream>
using namespace std;
class Register{
    private:
    unsigned char value;
    public:
    void write(unsigned char v){value=v;}
    unsigned char read()const{return value;}
void reset(){
    
}
};
int main()
{
    Register file[4];
    for(int i=0;i<4;++i) file[i].reset();
    file[0].write(0xAB);
    file[3].write(0x10);
    for(int i=0;i<4;++i) 
    cout<<"R"<<i<<"="<<(int)file[i].read()<<endl;
return 0;
}
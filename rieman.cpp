#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float fx(float x){
    return (pow(x,2)/2);
    }
float fxin(float x){
    return (pow(x,3)/6);
}


int main(){
    float bbwh, batas, x, h;
    float n, L, hsil, L2, er, er2;

    cout << "=====================================================" << endl;
    cout << "\t\t METODE RIEMAN" << endl;
    cout << "=====================================================" << endl;

    cout<<" Batas bawah: ";
    cin>>bbwh;

    cout<<" Batas atas : ";
    cin>>batas;

    cout<<" Pembagi N  : ";
    cin>>n;

    h=(batas-bbwh)/n;

    cout<<endl;
    x=bbwh;

    cout<<" Batas= ["<<bbwh<<","<<batas<<"]"<<endl;
    float jum_luas=0, jum_eksak=0;

    cout<<" Perhitungan L Secara Numerik"<<endl;
    cout<<" _______________________ "<<endl;
    cout<<"|     x     |    f(x)   |"<<endl;
    cout<<"|-----------|-----------|"<<endl;

    while(x<=batas){
        L=fx(x);
		cout<<fixed<<setprecision(3);
		cout<<"| "<<setiosflags(ios::left)<<setw(10)<<x<<"|";
		cout<<"  "<<setiosflags(ios::left)<<setw(10)<<L<<"|"<<endl;
		x=x+h;
        jum_luas=jum_luas+L;
    };

    cout<<" -----------------------"<<endl;
    cout<<" Total f(x) = "<<jum_luas<<endl;
    hsil=h*jum_luas;

    cout<<" L Numerik  = "<<hsil<<endl<<endl;

    cout<<" Perhitungan L Secara Kalkulus"<<endl;
    L2=fxin(batas)-fxin(bbwh);
    cout<<" L Kalkulus = "<<L2<<endl;

    er=hsil-L2;
    cout<<" Error      = "<<er<<endl;
}

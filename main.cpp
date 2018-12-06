#include <iostream>

using namespace std;

int main()
{
    int pin,pina;
    int counter=5;
    cout<<"enter pin: "<<endl;
    cin>>pin;

    do
     {
        cout<<"enter pin again: "<<endl;
        cin>>pina;
        counter--;
     }
    while((pina!=pin) && (counter>0));
    if(pina==pin)
    {
       cout<<"correct pin";
    }
    else{cout<<"5 time wrong pin entered";}

    return 0;
}

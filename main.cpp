#include <iostream>

using namespace std;

int main()
{
    int sum=0, i=1;
    char first;
    cout<<"the cureent sum is: "<<sum<<endl;
    cout<<"do you want to add "<<i<<endl;
    while(cin>>first)
    {
    if(first=='y' || first=='Y')
    {
        sum=sum+1;
        cout<<"current sum is: "<<sum<<endl;
        i++;
    }
    else if(first=='n' || first=='N')
    {
        cout<<"currnet sum is: "<<sum<<endl;
        i++;
    }
    else{
        break;
    }
    cout<<"do you want to add "<<i<<endl;
    }
    return 0;
}

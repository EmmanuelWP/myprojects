#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int dayUntiExpiration = rand() % 12;

    if (dayUntiExpiration==11){
        cout<<"You have an active subscription. "<<endl;
    }else if(dayUntiExpiration >=6 && <=10){
        cout<<"Your subscription will expire soon. Renew now!"<<endl;
    }else if (dayUntiExpiration >=2 && <=5){
            cout<<"Your subscription expires in "<<dayUntiExpiration<< " days"<<endl;
            cout<<"Renew now and save 10%!"<<endl;
    }else if(dayUntiExpiration==1){
            cout<<"Your subscription expires within a day!  "<<endl;
            cout<<"Renew now and save 20%!"<<endl;        
    }else{
        cout<<"Your subscription has expired."<<endl;
    }
}
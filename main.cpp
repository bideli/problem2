#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    const int money500=500;
    const int money200=200;
    const int money100=100;
    const int money50=50;
    const int money20=20;
    const int money10=10;
    int money,pay;
    cout<<"\n Enter the money amount:";
    cin>>money;
    //500 toomans
    pay=money/money500;
    cout<<"\n pay 500 Toomans:"<<pay;
    //200 Toomans
    money=money%money500;
    pay=money/money200;
    cout<<"\n pay 200 Toomans:"<<pay;
    //100 toomans
    money=money%money200;
    pay=money/money100;
    cout<<"\n pay 100 Toomans:"<<pay;
    //50 toomans
    money=money%money100;
    pay=money/money50;
    cout<<"\n pay  50 Toomans:"<<pay;
    //20 toomans
    money=money%money50;
    pay=money/money20;
    cout<<"\n pay  20 Toomans:"<<pay;
    //10 toomans
    money=money%money20;
    pay=money/money10;
    cout<<"\n pay  10 Toomans:"<<pay;
    getch();
    return 0;
}
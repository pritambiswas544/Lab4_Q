#include <iostream>
using namespace std;
int main(){
float centimeter,meter,kilometer;
//getting length in centimeter from user
cout<<"what is the length in centimeter?"<<endl;
cin>>centimeter;

//converting the length in meter=(lenght in centimeter/100);
meter=(centimeter/100);
cout<<"the length in meter is"<<meter<<endl;
//converting lenght into kilometer=(lenght in centimeter/100);
kilometer=(centimeter/100000);
cout<<"the length in kilometer is"<<kilometer<<endl;

return 0;
}



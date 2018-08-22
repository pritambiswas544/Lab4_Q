#include <iostream>
using namespace std;
int main(){
float celcius,f,farenhite;
//getting temparature in celcius
cout << "what is the temparature in celcius?"<<endl;
cin >> celcius;
//converting the celcius temparature to farenhite
f=(9*celcius)+160;
farenhite=(f/5);
cout << "the temparature in farenhite is"<<farenhite<<endl;

return 0;
}

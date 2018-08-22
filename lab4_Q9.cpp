//library
#include <iostream>
using namespace std;
int main(){
float Principal,Time,Rate,Interest;
//getting Principal(P) from user
cout << "what is your Principal?"<<endl;
cin >> Principal;
//getting Time(T in year) from user
cout << "what is the Time?"<<endl;
cin >> Time;
//getting Rate(R) from user
cout << "what is the Rate?"<<endl;
cin >> Rate;
//calculating Interest(I)
Interest=(Principal*Time*Rate)/100;
cout << "The Simple Interest is"<<Interest;

return 0;
}

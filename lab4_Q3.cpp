#include <iostream>
using namespace std;
int main(){
float farenhite,celcius;

//getting tenparature in farenhite

cout << "what is the temparature in farenhite?"<<endl;
cin >> farenhite;
// converting the temparature into celcius

celcius=5*(farenhite-32)/9;
cout << "the temparature in celcius is"<<celcius<<endl;

return 0;
}

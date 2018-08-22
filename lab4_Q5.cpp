#include <iostream>
using namespace std;
int main(){
float angle1,angle2,angle3;
//getting the first angle of the triangle
cout << "what is the first angle?"<<endl;
cin >> angle1;
//getting the second angle of the triangle
cout << "what is the second angle?"<<endl;
cin >> angle2;

//calculating the third angle of the triangle
angle3=180-(angle1+angle2);
cout << "the third angle is"<<angle3<<endl;

return 0;
}

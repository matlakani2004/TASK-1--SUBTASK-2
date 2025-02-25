#include <iostream>
using namespace std;
int main(){
  int temperature1, temperature2, temperature3;

std:: cout << "Enter the first temperature reading: ";
std:: cin >> temperature1;

std:: cout << "Enter the second temperature reading: ";
std:: cin >> temperature2;

// Check if there is an increase on the second reading by more than 50 degrees
if (temperature2 - temperature1 >50 ) {
cout<<"Reduce fryer heat before taking the third reading.\n ";

}
cout <<"Enter the third temperature reading:";
cin >> temperature3;

//Check if there is an increase between the second and the third readings is less than 10 degrees
if (temperature3 - temperature2 < 10){
cout <<"Increase the fryer heat before taking the third reading./n";

}

//Check if the final temperature is within the acceptable range
if (temperature3>= 150 && temperature3 <=190){
cout  <<"Oil is not ready for frying!\n";
}

return 0;
} 






















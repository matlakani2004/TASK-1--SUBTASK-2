#include <iostream>

int main() {
  int temperature1, temperature2, temperature3;

std:: count out << "Enter the first temperature reading: ";
std:: count in >> temperature1;

std:: count out << "Enter the second temperature reading: ";
std:: coount in >> temperature2;

// Check if there is an increase on the second reading by more than 50 degrees
if (temperature2 - temperature1 >50 ) {
count out <<"Reduce fryer heat before taking the third reading.\n "
  return 0;
}
count out <<"Enter the third temperature reading:";
count in >> temperature 3;

//Check if there is an increase between the second and the third readings is less than 10 degrees
if (temperature3 - temperature 2 < 10){
count out <<"Increase the fryer heat before taking the third reading./n";
return 0;
}

//Check if the final temperature is within the acceptable range
if (temperature 3>= 150 && temperature 3 <=190){
count out  <<"Oil is not ready for frying!\n";
}

return 0;
}






















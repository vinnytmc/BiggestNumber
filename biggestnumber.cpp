//Author:
#include<iostream>

int main()
{
int age1;
int age2;
int biggest;
  //declare variables here

  std::cout<<"Please enter a whole number:\n";
  std::cin>>age1;
  //get first input using std::cin>>

  std::cout<<"Please enter another whole number:\n";
  //get second input using std::cin>> again with a second variable
  std::cin>>age2;
  //determine if first or second is bigger and store that in a third variable
  if (age1>age2) 
  {
        biggest = age1;
  }
  else { 
        biggest = age2;
  }

  std::cout<<"Of those two numbers, the biggest is: "<<biggest;
  //print out the variable representing the biggest number
   

  std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}

//Authors: Omar Bojorquez
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string firstname = "";
  string lastname = "";

  //get user input
  std::cout<<"What is your firstname?"<<std::endl;
  std::cin>>firstname;
  std::cout<<"What is your lastname?"<<std::endl;
  std::cin>>lastname;

  
  std::cout<<"Welcome "<<firstname[0]<<lastname[0]<<" here is your fortune"<<endl;

  //tell fortune

  return 0;
}

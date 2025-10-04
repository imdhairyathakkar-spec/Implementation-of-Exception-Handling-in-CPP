//Dhairya Thakkar
//24070123037
//A2
#include <iostream>
#include <string>
int main(){
    int n1;
    std:: cout<<"enter age of person : ";
    std::cin>>n1;
    try{
        if(n1<18){
            throw n1;
        }
    
        else{
            std::cout <<"Age : "<<n1 << "\n APPROVED "<< "\n" ;
        }
    }
    catch(int a){
        std::cout << "\nERROR : UNDERAGE !! ( " << a <<")"<< "\n";
    }
}

/* Output :
enter age of person : 12
ERROR : UNDERAGE !! ( 12)
*/

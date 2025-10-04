// Dhairya Thakkar
// 24070123037
// A2
#include <iostream>
int main(){
    float n1,n2,ans;
    std:: cout<<"enter value of number 1 & 2: ";
    std::cin>>n1>>n2;
    try{
        if(n2==0){
            throw n2;
        }
        else{
            ans=n1/n2;
            std::cout<<"answer = " <<ans<<"\n";
        }
    }
    catch(float num){
        std::cout << "\nERROR : division by " << num << "\n";
    }
}

/* Output:
enter value of number 1 & 2: 12 35
answer = 0.342857
*/

#include<iostream>
using namespace std;
int main() {

    int number,counter = 1,factorial =1;
    cout<<"Enter a Number: "<<endl;
    cin>>number;
    while(counter <= number){
        factorial = factorial * counter;
        ++counter;
    }
    cout<<number<<"!= "<<factorial<<endl;
    return 0;
}

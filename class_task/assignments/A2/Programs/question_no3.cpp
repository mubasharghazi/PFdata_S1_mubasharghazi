#include<iostream>
using namespace std;
int main() {
    int table,number;
    cout<<"Enter  a Number: "<<endl;
    cin>>number;
    for (int counter = 1; counter <= 10; counter++){
        table = counter * number;
        cout<<number<<" x " <<counter<<" = "<<table<<endl;
    }
    return 0;
}

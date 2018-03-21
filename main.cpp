#include <iostream>
using namespace std;

class Bank {
public:
    string name;
    int age;
    float amount;
};

int main() {

    Bank b[3];

    for(int i=0;i<3;i++)
    {
        cout<<"Enter name: ";
        cin>>b[i].name;
        cout<<"Enter age: ";
        cin>>b[i].age;
        cout<<"Enter amount: ";
        cin>>b[i].amount;
    }

    for(int i=0;i<3;i++) {
        cout<<endl<<b[i].name<<" is "<<b[i].age<<" years old and has rupees "<<b[i].amount<<endl;
    }

    return 0;
}

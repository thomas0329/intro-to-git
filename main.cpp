#include <iostream>
#include <string>
using namespace std;

int main(){
    string name = "";
    unsigned int age = 0;
    char gender = '\0';
    cout << "please enter your name?" << endl;
    cin >> name ;

    cout << "hello " << name << endl;
    cout << "how old are you?" << endl;
    cin >> age;
    if(!age > 0)
        age  = 0;
    cout << "You are " << age << " year(s) old." << endl;

    cout << "please enter your gender?(M/F)" << endl;
    cin >> gender;
    if(gender == 'M' || gender == 'm')
        cout << "Hi Mr. " << name << "." << endl;
    else if(gender == 'F' || gender == 'f')
        cout << "Hi Ms. " << name << "." << endl;
    else
        cout << "Hi " << name << "." << endl;
    

    system("pause");
    return 0;
}
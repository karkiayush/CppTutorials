// Hello guys welcome to my channel "Code With Aayush" where you can learn any kind of programming concept which you might be feeling difficult to understand. So today i came up with another new video on the topic of class and the object in c++

// Basically classes can be defined as the collection of similar type of object. The class contain the data member and member functions, where the data member are like the variable of constant that stores the data and the member functions is like the method to perform the special task

// Object are the instances of the class. It is like the blue print. With the help of classes the same data member and member functions can be used by various objects

#include <iostream>
#include <string>
using namespace std;
class base // here we just made the base class
{
private:
    // data member
    int age;
    string Address, Name, parentName;

public:
    // member functions
    void input()
    {
        cout << "Enter your Name : ";
        cin >> Name;
        cout << "Enter your Address : ";
        cin >> Address;
        cout << "Enter parents name : ";
        cin >> parentName;
        cout << "Enter your age : ";
        cin >> age;
    }
    void output();
};

// We can define the member function inside or outside of the class as our choice but if we wanna define outside then it must be declared inside of the class
void base::output()
{
    cout << "The information of the man" << endl;
    cout << "Name : " << Name << endl;
    cout << "Parent Name : " << parentName << endl;
    cout << "Age : " << age << endl;
    cout << "Address : " << Address << endl
         << endl;
}

// Main method(driver method) that contains the objects
int main()
{
    /* Here the B is the object of class base.So the syntax to make the object of the class is :
                 class_name object_name*/
    base B;
    B.input();
    B.output();
    base c;
    c.input();
    c.output();
    return 0;
}

// So all of the source code will be uploaded to the repository which is public from where you guys can download which i'll be linking below in the description. So do check it out
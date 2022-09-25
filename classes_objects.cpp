#include <iostream>
#include <string>
using namespace std;
class first
{
private:
    int price;
    string name;
    string manufacturedBy;

public:
    void getters();
    void setters()
    {
        cout << "Enter the name, price of the product and the company name from where the product is manufacutured ?" << endl;
        cin >> name >> price >> manufacturedBy;
    }
};

void first::getters()
{
    cout << "The information of the product is : " << endl;
    cout << "Name : " << name << endl
         << "price : " << price << endl
         << "Manufactured by : " << manufacturedBy << endl;
}

int main()
{
    // the synatx is : className objName
    system("clear");
    first f;
    f.setters();
    f.getters();
}
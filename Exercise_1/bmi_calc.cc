#include <iostream>

using namespace std;

int main()
{
    string name;
    float bmi, weight, height;
    cout << "Please enter your name:";
    cin >> name;
    cout << "Please enter your weight in kg:";
    cin >> weight;
    cout << "Please enter your height in cm:";
    cin >> height;
    bmi = weight / ((height / 100) * (height / 100));
    if (bmi < 17.5)
    {
        cout << name << " your BMI is: " << bmi << endl;
        cout << "You are critically underweight according to the Techniker Krankenkasse Germany" << endl;
    }
    else if (17.5 < bmi && bmi < 20)
    {
        cout << name << " your BMI is: " << bmi << endl;
        cout << "You are underweight according to the Techniker Krankenkasse Germany" << endl;
    }
    else if (20 < bmi && bmi < 26)
    {
        cout << name << " your BMI is: " << bmi << endl;
        cout << "You have a healthy weight according to the Techniker Krankenkasse Germany" << endl;
    }
    else if (20 < bmi && bmi < 26)
    {
        cout << name << " your BMI is: " << bmi << endl;
        cout << "You have a healthy weight according to the Techniker Krankenkasse Germany" << endl;
    }
    else if (26 < bmi && bmi < 31)
    {
        cout << name << " your BMI is: " << bmi << endl;
        cout << "You are slightly obese according to the Techniker Krankenkasse Germany" << endl;
    }
    else if (31 < bmi)
    {
        cout << name << " your BMI is: " << bmi << endl;
        cout << "You are obese according to the Techniker Krankenkasse Germany" << endl;
    }
}
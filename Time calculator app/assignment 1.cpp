#include <iostream>

using namespace std;

 int main()

{
    cout << "===================================== \n";
    cout << "======= Your Age Application ======== \n";
    cout << "===================================== \n";
    float age;
    cin >> age;
    float age_in_days = age * 365.25;
    int age_in_ours = age_in_days * 24;
    int age_in_min = age_in_ours * 60;
   cout << "Age in Days is = " << age_in_days << " Day\n";
    cout << "Age in Ours is = " << age_in_ours << " Ours\n";
    cout << "Age in Minute is = " << age_in_min << " Minute\n";
    return 0;
}
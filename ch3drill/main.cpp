#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the first name of the person you want to write to." << endl;

    string first_name;
    cin >> first_name;

    cout << "Dear " << first_name << ",\n\t How are you? I'm fine. I miss you.\n[Please type the name of a friend]\n";

    string friend_name;
    cin >> friend_name;

    cout << "Have you seen " << friend_name << " lately?\n";

    char friend_sex = 0;
    cout << "[Please declare if the friend is male or female (m/f)]\n";

    cin >> friend_sex;
    if (friend_sex == 'm')
        cout << "If you see " << friend_name << ", please ask him to call me.\n";
        else if (friend_sex == 'f')
            cout << "If you see " << friend_name << ", please ask her to call me.\n";
            else
                cout << "If you see " << friend_name << ", please ask them to call me.\n";

    cout << "[Please enter the age of the person you're writing to.]\n";
    int age = 0;
    cin >> age;

    while (age <= 0 || age >= 110)
        {cout << "You're kidding!\n[Please enter a number between 1 and 109]\n";
        cin >> age;}

    cout << "I hear you just had a birthday and turned " << age << " years old.\n";

    if (age < 12)
        cout << "Next year you'll be " << age+1 << " years old\n";
        else if (age == 17)
            cout << "Next year you'll be able to vote.\n";
            else if (age > 70)
                cout << "I hope you are enjoying retirement.\n";
    cout << "Yours sincerely,\n\n\nBalint\n";

    return 0;
}

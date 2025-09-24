#include <iostream>
using namespace std;

class UserInfo {
public:
    void show(string name) {
        cout << "Name: " << name << endl;
    }

    void show(string name, int age) {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    void show(string name, string city) {
        cout << "Name: " << name << ", City: " << city << endl;
    }

    void show(string name, int age, string city) {
        cout << "Name: " << name << ", Age: " << age << ", City: " << city << endl;
    }
};

int main() {
    UserInfo u;

    u.show("Antarleen");
    u.show("Antarleen", 20);
    u.show("Antarleen", "Pune");
    u.show("Antarleen", 20, "Pune");

    return 0;
}

// OUTPUT
// Name: Antarleen
// Name: Antarleen, Age: 20
// Name: Antarleen, City: Pune
// Name: Antarleen, Age: 20, City: Pune

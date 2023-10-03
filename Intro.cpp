#include <iostream>
#include <string>

using namespace std;

class BioData {
public:
    string name;
    int age;
    string gender;
    string program;
    int semester;

    void setname() {
        cout << "Enter Your Name: ";
        cin >> name;
    }

    void setage() {
        cout << "Enter Your Age: ";
        cin >> age;
    }

    void setgender() {
        cout << "How do you describe yourself? ";
        cin >> gender;
    }

    void setprogram() {
        cout << "In which program are you enrolled in: ";
        cin >> program;
    }

    void setsemester() {
        cout << "What is your current semester? ";
        cin >> semester;
    }

    string getname() {
        return name;
    }

    int getage() {
        return age;
    }

    string getgender() {
        return gender;
    }

    string getprogram() {
        return program;
    }

    int getsemester() {
        return semester;
    }
};

int main() {
	
    BioData b;

    b.setname();
    b.setage();
    b.setgender();
    b.setprogram();
    b.setsemester();

    cout << "Name: " << b.getname() << endl;
    cout << "Age: " << b.getage() << endl;
    cout << "Gender: " << b.getgender() << endl;
    cout << "Program: " << b.getprogram() << endl;
    cout << "Semester: " << b.getsemester() << endl;

    return 0;
}


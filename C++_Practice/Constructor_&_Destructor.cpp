// Constructor :- Jb bhi hum apne class kaa koi object bnaate h toh constructor apne aap call ho jaata h.

// Destructor :- Yeh automatically call ho jaate h jb hamara object destroy hota h.

#include <iostream>
using namespace std;

class student
{
    string name;

public:
    int age;
    bool gender;

    // Default Constructor :- Jb bhi hum object bnaayenge without passing any parameter, tb default constructor call ho jaayegaa.
    student()
    {
        cout << "Default Construtor" << endl;
    }

    //Constructor :- Parameterized Constructor
    student(string s)
    {
        name = s;
    }

    //Constructor :- Parameterized Constructor
    student(string s, int a, int g)
    {
        name = s;
        age = a;
        gender = g;
    }

    // Copy Constructor :-
    student(student &b
    )
    {
        cout << "Copy Constructor" << endl;
        name = b.name;
        age = b.age;
        gender = b.gender;
    }

    //Destructor
    ~student(){
        cout<<"Destructor Call"<<endl;
    }

    //Setter function:-
    void setName(string s)
    {
        name = s;
    }

    //Getter function :-
    void getName()
    {
        cout << name << endl;
    }

    void printInfo()
    {
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }
};

int main()
{
    student a("Nikhil");
    a.getName(); //For Parameterized Constructor

    student b("Thakur", 20, 1);
    b.printInfo(); //For Parameterized Constructor

    student c; //For Default Constructor

    // student d(a); //For Copy Constructor

    // Or

    student d = b; //For Copy Constructor
    return 0;
} // Destructor Call here :- It Call four times becoz, here we make four objects.


// Shallow Copy :- Isme pointers toh copy ho jaate h but jis location pe yeh point krte h woh copy nahi hote. This is done by Default Copy Constructor. 

// Deep Copy :- Isme pointers bhi copy hote h aur jis location pe woh point krte h woh bhi copy ho jaate h. This is done by Copy Constructor. That's why we make our own Copy Constructor rather than Default one.
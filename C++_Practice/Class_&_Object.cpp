// Data_Members :-
// class student{
//     string name;
//     int age;
//     bool gender;
// };   
// By default all data members are Private.

// Instance Of a Class :- student a;
// a.name = 'Tim';
// a.age = 20;
// a.gender = 0;




#include<iostream>
using namespace std;

class student{
    string name1;
    public:
    //string name;
    int age;
    bool gender;

    // Toh main jis bhi object ke liye yeh function call krungaa, setName1 usme ek string pass krungaa, uskaa jo attribute h name usme yeh s daal degaa.
    
    
    //Setter function:-
    void setName1(string s){
        name1 = s;
    }

    //Getter function :-
    void getName1(){
        cout<<name1<<endl;
    }

    void printInfo()
    {
       // cout<<name1<<endl;
         cout<<name1<<endl;
         cout<<age<<endl;
         cout<<gender<<endl;
    }
};

int main(){
    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        string s;
         cin>>s;
         arr[i].setName1(s);
        // cin>>arr[i].name;
        cin>>arr[i].age;
        cin>>arr[i].gender;
    }

    for (int i = 0; i < 3; i++)
    {
     arr[i].printInfo();
    }
    
    
}
 

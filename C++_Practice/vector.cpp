#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
   
    vector<int>v;

  int size=v.size();
  for(int i=0;i<size;i++)  
    cin>>v.push_back(i);
     
  
    for(int i=0;i<size;i++)
    {
        cout<<v[i];
    }
   
   
    return 0;
}

// User Input In Vector:-

// To print Vector:- void display(vector<int> &v){ 
//   for(int i=0;i<v.size();i++){
//   cout<<v[i]<<" ";}
// cout<<endl;}


// int main(){
//   vector<int> vec1;
//   int element;
//   for(int i=0;i<4;i++)
//   {
//     cout<<"Enter an element to add to this vector";
//     cin>>element;
//     vec1.push_back(element);
//   }
//   display(vec1);
//   return 0;
// } 


// int main(){
//     vector<int>v;
//     v.push_back(1);//for input of elelments in array
//     v.push_back(2);
//     v.push_back(3);

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<endl;
//     }//1 2 3

// //ANother way to iterate through the vector is iterator:-

// vector<int>::iterator it;
// for(it=v.begin();it!=v.end();it++)
// {
//     cout<<*it<<endl;
// }//1 2 3

// //Another way is to iterate through the vector is by using auto keyword(auto keyword me hum compiler ko khud hi bolte h ki tu khud hi decide kr le ki kaun saa datatype h by the help of intializing element)

// for(auto element:v){
//     cout<<element<<endl;  //here element signifies the element of vector
// }//1 2 3
// v.pop_back();//1 2
    
// vector<int> v2 (3,50);// Means 50 three(3) times//50 50 50
// swap(v,v2);

// for(auto element:v){
//     cout<<element<<endl;}

// for(auto element:v2){
//     cout<<element<<endl;}

// sort(v2.begin(),v2.end());
// for(auto element:v2){
//     cout<<element<<endl;}


//     return 0;
// }
#include <iostream>
#include <string>
using namespace std;
int main(){
    string prompt("Enter a line:"); //
    string line(50,'*'); // **************
    string message="Hello World";
    string text;
    cout << line <<endl;
    cout << prompt << endl;
    //getline(cin, text); // it reads line of input from user and copies to text variable
    //cout << "You have entered: "<< text <<endl;
    //cout<< "You have entered "<< text.size()<< "characters!" <<endl;
    string newstr=prompt + message;
    cout<<"Combined string is :"<<newstr<<endl;
    string a="ABC";
    string b="CDE";
    bool c=(a==b);
    cout << "a=b: " ;
    if(a==b){
            cout<<"True";
    }
    else{
        cout<<"False";
    }
    cout<<endl;
    
    string name="Mr. Patel";
    name.insert(4,"Tushar ");
    cout<<name<<endl;
    name.erase(0,4);
    cout<<name<<endl;    
    
    string s1="Here they go again!";
    char abc=s1[4];
    cout<<abc<<endl;
    string s2="Bob and Bill";
    s1.replace(5,4,s2);
    int pos=s1.find("ABC");
    cout<<s1<<endl;
    cout<<"Position of Bill within s1 is: "<<pos<<endl;
    cin.get();
    return 0;
}

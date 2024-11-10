#include <iostream>
using namespace std;
class std_address{    // Base class& Parent
    private:
        int code;
        char name[15],phone[15];         // Variable to store information
    public:
        void input_addr(void);         // input method
        void print_addr(void);        // print method
};
class std_result:public std_address{     // Second class & Child
    private:
        float sub1,sub2,sub3,average,total;           // variables to store inforamtion
    public:
        void input_marks(void);        // input method
        void result_card(void);       // display method of result card
};
main(){
    std_result res;    // create an object of derived class
    res.input_addr();  
    res.input_marks();   //  call functions
    res.print_addr();
    res.result_card();
}
void std_address::input_addr(){    //scope resolution operator :: to access members outside of class
    cout<<"Enter Code of Student"<<endl;
    cin>>code;
    cout<<"Enter name of Student"<<endl;
    cin>>name;
    cout<<"Enter phone no. of Student"<<endl;
    cin>>phone;
}
void std_address::print_addr(){   //scope resolution operator :: to access members outside of class
    cout<<endl;
    cout<<"Code : "<<code<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Phone : "<<phone<<endl;
}
void std_result::input_marks(){ //scope resolution operator :: to access members outside of class
    cout<<"Enter Marks of first Subject:"<<endl;
    cin>>sub1;
    cout<<"Enter Marks of Second Subject:"<<endl;
    cin>>sub2;
    cout<<"Enter Marks of Third Subject:"<<endl;
    cin>>sub3;
    total= sub1+sub2+sub3;
    average= total/3;
}
void std_result::result_card(){ //scope resolution operator :: to access members outside of class
    cout<<"Marks in Subject 1 : "<<sub1<<endl;
    cout<<"Marks in Subject 2 : "<<sub2<<endl;
    cout<<"Marks in Subject 3 : "<<sub3<<endl;
    cout<<"Total MARKS : "<<total<<endl;
    cout<<"Average MARKS : "<<average<<endl;
}

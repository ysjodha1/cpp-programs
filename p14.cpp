#include <iostream>
#include <cstring>
 
using namespace std;
 
class person{
    private:
        string name;
        int age;
       
    public:
        person(){
            name = "";
            age = 0;
        }
        person(string n,int a){
            this->name=n;
            this->age=a;
        }
        void get_data(){
            string n;
            int a;
 
            cout<<"\nEnter name: ";
            cin >> n;
            cout<<"Enter age: ";
            cin>>a;
            cout<<endl;
           
            this->name=n;
            this->age=a;
           
        }
        void display_data(){
            cout<<endl;
            cout << "*** PERSON DETAILS ***" << endl;
            cout<<"name = "<<name<<endl;
            cout<<"age = "<<age<<endl;
        }
        ~person(){
            name = "";
            age = 0;
        }
};
 
class teacher : public person{
    private:
        string department, specialization = "";
        int salary;
   
    public:
        void get_data(){
            person :: get_data();
            string d;
            int s;
            cout<<"Enter the department: ";
            getchar();
            cin >> d;
            cout<<"Enter the salary: ";
            cin>>s;
            cout<<endl;
            this->department=d;
            this->salary=s;
        }
        void get_specialization() {
            string special;
            cout << "Enter specialization: ";
            cin >> special;
            specialization = special;
        }
        void display_data(){
            cout << "\n----------------------\n";
            person :: display_data();
            cout << "*** TEACHER DETAILS ***" << endl;
            cout<<"department: "<<department<<endl;
            cout<<"salary: "<<salary<<endl;
            if (specialization != "") {
                cout << "specialization: " << specialization;
            }
            cout<<endl;
            cout << "\n----------------------\n";
        }
       
       
       
};
class student : public person{
    private :
        int marks[5], class_ = 0;
    public:
    void get_data(){
        int m;
        person :: get_data();
        for (int i=1;i<=3;i++){
            cout<<"enter the marks in subject "<<i<<": ";
            cin>>marks[i];
        }
    }
    void get_class() {
        cout << "Enter class of the student: ";
        cin >> class_;
    }
    void display_data(){
        cout << "\n----------------------\n";
        person :: display_data();
        cout << "*** STUDENT DETAILS ***" << endl;
        for (int i=1;i<=5;i++){
            cout<<endl;
            cout<<"Marks in subject"<<i<<" = "<<marks[i];
            cout<<endl;
        }
        if (class_ != 0) {
            cout << "class: " << class_;
        }
        cout << "\n----------------------\n";
    }
};
int main(){
   
    teacher t1;
    cout << "Enter details of teacher ";
    t1.get_data();
    t1.get_specialization();
 
    student s1;
    cout<<"Enter details of student";
    s1.get_data();
    s1.get_class();
 
    cout << "ENTERED DETAILS: " << endl;
    t1.display_data();
    s1.display_data();
}

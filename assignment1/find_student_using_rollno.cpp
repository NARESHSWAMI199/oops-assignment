#include <iostream>
#include <iterator>
#include <map>
using namespace std;


class Student{
    public:
        map<int,string> student_db;
        void insert_data(int roll_no,string name){
            student_db.insert(pair<int,string>(roll_no,name));
        }

        void dislay_student(int roll_no ){
            auto iter  = student_db.find(roll_no);
            cout<<"Roll No : "<<iter->first << " : "<< "Name : " <<iter->second<<endl;
        }   

};

int main(){

    Student student_obj;

    int size;
    cout <<"How many student's data you want store : "<<endl;
    cin>>size;
    for (int i = 0; i < size; i++){
        int roll_no;
        char name[20];
        cout<<"Enter student's roll_no : ";
        cin>> roll_no;
        cout<<"Enter student's name : ";
        cin>> name;
        student_obj.insert_data(roll_no,name);
    }
    int get_size;
    cout <<"How many student's data you want get : ";
    cin>>get_size;

    if (get_size <= size){
        for(int i =0; i< get_size; i++){
            int roll_no;
            cout<<"Enter student's roll_no : ";
            cin>> roll_no;
            student_obj.dislay_student(roll_no);
        }
    }
    else{
        cout<<"sorry you can't get more then : "<<size <<"student 's data "<<endl;
    }

}
#include<iostream>
#include <string>
#include <vector>
using namespace std;
struct STUDENT
{   string name;
    int age;
    float grade;
};
vector<STUDENT> students;

void addStudent();
void showMenu();
void displayStudents();
void searchStudent();
void calculateAverage();
void deleteStudent();

int main (){
    int menu =0;
    cout << "===============================\nSCHOOL MANAGEMENT SYSTEM (CLI)\n===============================";
    
    while(menu != 6){
        showMenu();
        cin >>menu;
        switch (menu)
    {
    case 1:
        addStudent();break;
    case 2:
        displayStudents();break;
    case 3:
        searchStudent();break;
    case 4:
        calculateAverage();break;
    case 5:
        deleteStudent();break;
    case 6:
        cout << "Exiting program...\n"; break;
    default: 
        cout << "invalid option message";
    }
}    return 0;
    
}
void addStudent(){

    STUDENT temp;
    cout <<"enter the name of the student: "<< endl;
    cin >>temp.name;
    cout <<"enter the age of the student: "<< endl;
    cin >>temp.age;
    cout <<"enter the grade of the student: "<< endl;
    cin >>temp.grade;
    students.push_back(temp);
    cout << "Student was added!\n";
}
void showMenu(){
    cout << "\n1. Add Student\n";
    cout << "2. Display Students\n";
    cout << "3. Search Student\n";
    cout << "4. Calculate Average Grade\n";
    cout << "5. Delete Student\n";
    cout << "6. Exit\n";
    cout << "Choose an option: ";
}
void displayStudents(){
    if (students.empty()) {
        cout << "No students available.\n";
        return;
    }
    for (int i =0;i<students.size();i++){
        cout << "Name: " << students[i].name
             << " | Age: " << students[i].age
             << " | Grade: " << students[i].grade << endl;
    }}
void searchStudent(){string searchName;
    bool found = false;

    cout << "Enter name to search: ";
    cin >> searchName;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].name == searchName) {
            cout << "Student found:\n";
            cout << "Name: " << students[i].name
                 << " | Age: " << students[i].age
                 << " | Grade: " << students[i].grade << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student not found.\n";
    }
}
void calculateAverage(){
    if (students.empty()) {
        cout << "No students available.\n";
        return;
    }
    float sum = 0;
    float highest = students[0].grade;
    float lowest = students[0].grade;

    for (int i = 0; i < students.size(); i++) {
        sum += students[i].grade;
        if(students[i].grade > highest){
            highest = students[i].grade;
        }
        if(students[i].grade < lowest){
            lowest = students[i].grade;
        }
    }

    float average = sum / students.size();

    cout << "Average grade: " << average << endl;
    cout << "Highest grade: " << highest << endl;
    cout << "lowest grade: " << lowest << endl;


}

void deleteStudent(){
    if (students.empty()) {
        cout << "No students available.\n";
        return;
    }

    cout << "enter the name you want to delete: ";
    string del_name;
    cin >> del_name;
    bool found = false;
    for (int i = 0; i < students.size(); i++) {
        if (students[i].name == del_name) {
            students.erase(students.begin() + i);
            found = true;
            break;
        }}
        
    if (found) 
        cout << del_name << "was deleted";
    else
        cout <<del_name << "was not found";
    


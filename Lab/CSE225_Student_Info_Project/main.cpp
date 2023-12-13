#include<bits/stdc++.h>
#include<windows.h>
#include<dos.h>
#include"SortedList.h"
#include"Queue.h"
using namespace std;
void printMsg()
{
   cout<<"---------------------------------------Assalamualaikum--------------------------------------------";
}

struct Student{
       int id,semester;
       string name,department,email;
       double cgpa,credit;
}stud;

int menu();
void Insertion(SortedList &ob);
void SearchStudentByID(SortedList &ob);
void DeleteStudentByID(SortedList &ob);
void Print(SortedList &ob);
void GenerateReportByID(SortedList &ob,Queue &ob1);
void GenerateReportBySemester(SortedList &ob);
void OutputManipulation(Queue &ob);

int main(){
  printMsg();
 //Student stud;
 SortedList ob;
 Queue ob1;
 int n;
 bool loop = true;
 while(loop){
    n = menu();
    switch(n){

       case 1 : Insertion(ob);
       break;

       case 2 : SearchStudentByID(ob);
       break;

       case 3 : DeleteStudentByID(ob);
       break;

       case 4 : Print(ob);
       break;

       case 5 : GenerateReportByID(ob, ob1);
       break;
       case 6 : GenerateReportBySemester(ob);
       break;
       //case 7 : loop = true;

       default :
             loop = false;


    }
 }

}

int menu(){
    cout<<"\n\nEnter your choice from below: \n";
    cout<<"1. Insert new Student\n"<<"2. Search Student by ID\n"<<"3. Delete Student by ID\n"<<"4. Print Student Information\n"<<"5. Generate report by ID\n"<<"6. Generate report by credits\n"<<"7. To return menu\n";
    int n;
    cout<<"--------------------------------------------\n";
    cin>>n;
switch(n){
  case 1 :
       return 1;
  case 2 :
       return 2;
  case 3 :
       return 3;
  case 4 :
       return 4;
  case 5 :
       return 5;
  case 6 :
       return 6;
  case 7 :
       return 7;
  default :
         return -1;

    }


}

void Insertion(SortedList &ob){
  cout<<"How many student you want to add ?: \n";
  int n;
  cin>>n;
  for(int i=1; i<=n ; i++){
    cout<<"Enter the information of "<<i<<"th student\n"<<"Enter the ID:  ";
    cin>>stud.id;
    cout<<"Enter the Semester no:  ";
    cin>>stud.semester;
    cin.ignore();
    cout<<"Enter the name:  ";
    //cin>>stud.name;
    getline(cin,stud.name);
    cout<<"Enter the department:  ";
    getline(cin,stud.department);
    cout<<"Enter the email:  ";
    cin>>stud.email;
    cout<<"Enter the cgpa:  ";
    cin>>stud.cgpa;
    cin.ignore();
    cout<<"Enter the completed credit: ";
    cin>>stud.credit;
    cin.ignore();
    ob.sets(stud.id,stud.semester,stud.name,stud.department,stud.email,stud.cgpa,stud.credit);
  }
  system("CLS");
  cout<<"Inserted Successfully\n";
}

void SearchStudentByID(SortedList &ob){
   int id;
   cout<<"Enter the ID: "; cin>>id;
   bool found = true;

   SortedList:: NodeType node;
   ob.ResetList();
   ob.RetrieveItem(node,found,id);
   system("CLS");
   if(found){
    cout<<"Information of the id "<<id<<"is: \nSemester: ";
    cout<<node.semester<<"\nName: "<<node.name<<"\nDepartment: "<<node.department<<"\nEmail: "<<node.email<<"\nCGPA: "<<fixed<<setprecision(2)<<node.cgpa<<"\nCredit: "<<node.credit;
   }
   else{
    cout<<id<<" is not found\n";
   }

}

void DeleteStudentByID(SortedList &ob){

 int id;
 bool found=false;
 ob.ResetList();
 system("CLS");
 cout<<"Enter the id: \n";
 cin>>id;
 ob.DeleteItem(id,found);
 if(found){
    cout<<"Deleted Successfully\n";
 }
 else{
    cout<<id<<" not found\n";
 }

 cout<<ob.LengthIs()<<endl;


}

void Print(SortedList &ob){
  ob.ResetList();
  int n;
  n = ob.LengthIs();
  SortedList::NodeType node;
  system("CLS");
  for(int i=0; i<n; i++){
    ob.GetNextItem(node);
    cout<<"ID is: "<<node.id<<"\nSemester: "<<node.semester<<"\nName: "<<node.name<<"\nDepartment: "<<node.department<<"\nEmail: "<<node.email<<"\nCGPA: "<<node.cgpa<<"\nCredit: "<<node.credit<<endl<<endl;
  }

}

void GenerateReportByID(SortedList &ob, Queue &ob1){

   ob.ResetList();
   SortedList::NodeType node;
   int n = ob.LengthIs();
   while(n--){

    ob.GetNextItem(node);
    ob1.sets(node.id,node.semester,node.name,node.department,node.email,node.cgpa);
        cout<<"Queue is loaded\n";
    }
    cout<<n<<endl;

    OutputManipulation(ob1);

}

void OutputManipulation(Queue &ob){
    fstream newFile;
    newFile.open("Report_By_Admission.txt",ios::out);
    if(newFile.is_open()){
     int n = ob.LengthIs();
     //newFile.imbue(std::locale("C"));
     newFile << std::fixed <<std::setprecision(2);
     while(n--){
        Queue::Node nd;
        ob.Dequeue(nd);
        string str_id = to_string(nd.id);
        newFile << str_id <<endl;
        string str_semester = to_string(nd.semester);
        newFile << str_semester<<endl;
        newFile << nd.name << endl;
        newFile << nd.department << endl;
        newFile << nd.email << endl;
        //string str_cgpa = to_string(nd.cgpa);
        newFile << nd.cgpa << endl;
        newFile <<nd.credit<<endl;

     }
     cout<<"\nUpdated\n";
    }
    //newFile.close();
}

void GenerateReportBySemester(SortedList& ob){


}





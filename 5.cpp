/*Create a class which stores employee name,id and salary Derive two classes from ‘Employee’ class: 
‘Regular’ and ‘Part-Time’. The ‘Regular’ class stores DA, HRA and basic salary. 
The ‘Part-Time’ class stores the number of hours and pay per hour. 
Calculate the salary of a regular employee and a par-time employee*/
#include<iostream>
#include<string.h>
using namespace std;

class employee{
    protected:
        char *name;
        int id;
        float salary;
    public:
        void set(char *c,int i){
            name = new char[strlen(c)];
            strcpy(name,c);
            id=i;
            salary=0.0;
        }
        void get(){
            cout<<"----------------------------------------------------------"<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Employee ID: "<<id<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
};

class regular:protected employee{
    protected:
        float da;
        float hra;
        float BasicSalary;
    public:
        void set(char *c,int i,float d,float h,float b){
            employee::set(c,i);
            da=d;
            hra=h;
            BasicSalary=b;
        }
        void cal(){
            salary=BasicSalary+da+hra;
        }
        void get(){
            employee::get();
        }

};

class Part_Time:protected employee{
    protected:
        int num;
        float pay;
    public:
        void set(char *c,int i,int n,float p){
            employee::set(c,i);
            num=n;
            pay=p;
        }
        void cal(){
            salary=pay*num;
        }
        void get(){
            employee::get();
        }

};

int main(){
    regular r;
    Part_Time p;
    r.set("XYZ",20158964,2056,6548,200000);
    r.cal();
    r.get();
    p.set("ABC",201654,20,2000);
    p.cal();
    p.get();
    return 0;
}
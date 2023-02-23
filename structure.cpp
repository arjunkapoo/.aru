//Structure Activity//
//Write  a program to process the dtudent data(i.e. name,rollno,dob,branch, and marks) using structures)
#include<iostream>
#include<string>>
using namespace std;

struct student
{
    char name[20];
    int rollno;
    int d,m,y;
    char branch[30];
    float marks;
};

int main()
{
 int n;
cout<<"enter the number of students you want to enter";
cin>>n;
student s[n];
for (int i=0; i<n; i++)
{
    cout<< "Enter the name of the student :" << endl;
    cin>>s[i].name;
    cout<< "Enter the roll no of the student : " << endl;
    cin>>s[i].rollno;
    cout<< "Enter the date of birth : " << endl;
    cin>> s[i].d >> s[i].m >> s[i].y;
    cout<< "Enter the name of the branch : " << endl;
    cin>>s[i].branch;2

    cout<< " Enter the marks of the students : " <<endl;
    cin>>s[i].marks;
}
for (int i=0; i<n; i++)
{
    cout<<"Name of the student : " << s[i].name << endl;
    cout<< "Roll no. of the student : " << s[i].rollno << endl;
    cout << " Date of birth :" << s[i].d << "-" << s[i].m << "-" << s[i].y << endl;
    cout <<  " Name of the branch : " <<s[i].branch << endl;
    cout <<"Marks of the student : " << s[i].marks << endl;
}
    return 0;

}
//Write a program that allows the user to enter the information for three employees(i.e. emp_Id no.,//
//name,house no.,area , city ,state)and then enter the employee id to retrieve and display the information// 
//for the employees with the given Id number//

#include<iostream>
#include<string>
using namespace std;

struct employee
{
int emp_id;
int house_no;
char name[20];
char area[20];
char city[20];
char state[20];
};

int main()
{
    int n;
cout<<"Enter the number of employees you want to enter";
cin>>n;
employee emp[n];
for(int i=0;i<n;i++)
{
    cout<<" Enter the Name of the employee id no."<<endl;
    cin>>emp[i].emp_id;
    cout<<"Enter the house no"<<endl;
    cin>>emp[i].house_no;
    cout<<"Enter the name of the employee"<<endl;
    cin>>emp[i].name;
    cout<<"Enter the name of the area "<<endl;
    cin>>emp[i].area;
    cout<<"Enter the name of the city"<<endl;
     cin>>emp[i].city;
     cout<<"Enter the name of the state"<<endl;
     cin>>emp[i].state;
}
for(int i=0;i<n;i++)
{


    cout<<"Enter the employee id no."<<emp[i].emp_id<<endl;
    cout<<" House no of the employee"<<emp[i].house_no<<endl;
    cout<<"Enter the name of the employee"<<emp[i].name<<endl;
    cout<<"Area of the employee "<<emp[i].area<<endl;
    cout<<"Name of the city"<<emp[i].city<<endl;
     cout<<" Name of the state"<<emp[i].state<<endl;
}
return 0;
}


//Write a program to perform arithmetic operations on numbers using structure//
#include<iostream>
using namespace std;
struct operation
{
    int a,b;
    void input()
    {
        cout<<"Enter the value of a and b"<<endl;
        cin>>a>>b;
    }
    void sum()
    {
        cout<<"Addition "<<a+b<<endl;
    }
    void diff()
    {
        cout<<"Difference "<<a-b<<endl;
    }
    void prod()
    {
        cout<<"Product "<<a*b<<endl;
    }
    void div()
    {
        cout<<"Division "<<a/b<<endl;
    }
    void mod()
    {
        cout<<"Modulus "<<a%b<<endl;
    }
}s;
int main()
{
    int choice;
    cout<<"Enter the choice"<<endl;
    cin>>choice;
    cout<<"1:Sum\t2:Differece\t3.Product\t4.Division\t5.Modulus"<<endl;
    switch (choice)
    {
    case 1:{
        s.input();
        s.sum();
        break;
    }
     case 2:{
        s.input();
        s.diff();
        break;
    }
     case 3:{
        s.input();
        s.prod();
        break;
    }
     case 4:{
        s.input();
        s.div();
        break;
    }
     case 5:{
        s.input();
        s.mod();
        break;
     }
    }
}

//Arithmetic operation by complex numbers //
#include<iostream>
#include<stdio.h>
using namespace std;
class complex
{
        int real;
        float image;
        public:
        void getdata()
        {
                cout<<"\n enter the real part of the complex :: ";
                cin>>real;
                cout<<"\n enter the imaginary part of the complex :: ";
                cin>>image;
        }
        void operator + (complex);
        void operator - (complex);
};

void complex :: operator +  (complex c1)
{
        complex temp;
        temp.real=real+c1.real;
        temp.image=image+c1.image;
        if (temp.image>=0)
        {
                cout<<"\n complex no. after addition :: ";
                cout<<temp.real<<"+"<<temp.image<<"i\n";
        }
        else
        {
                cout<<"\n complex no. after addition :: ";
                cout<<temp.real<<temp.image<<"i\n";
        }
}
void complex ::operator-(complex c1)
{
        complex temp;
        temp.real = real-c1.image;
        temp.image= image-c1.image;
        if (temp.image>=0)
        {
                cout<<"\n complex no. after subtraction :: ";
                cout<<"\n temp.real"<<"+"<<temp.image<<"i\n";
        }
        else
        {
                cout<<"\n complex no. after subtraction :: ";
                cout<<temp.real<<temp.image<<"i\n";
    }
}
int main()
{

        complex c1, c2;
        int n;
        do
        {
                cout<<"\n 1. Input data for complex no. ";
                cout<<"\n 2. Addition of complex no. ";
                cout<<"\n 3. Subtraction of complex no. ";
                cout<<"\n 4. Quit";
                cout<<"\n Enter your choice :: ";
                cin>>n;
                switch(n)

                {
                         case 1:
                         cout<<endl<<"\n Enter the data for First Complex No......";
                         c1.getdata();
                         cout<<endl<<"\n Enter the data for seconds Complex No.....";
                         c2.getdata();

                         break;

                         case 2:
                         c1+c2;

                         break;

                         case 3:
                         c1-c2;

                         break;

                         case 4:
                         exit(1);
                         break;
                        }
                } while (n!=4);
     return 0;
}
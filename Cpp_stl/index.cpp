#include<iostream>
using namespace std;

class employee{
    private:
    int emp_no,SAL,HRA,TA,DA,PF,gross_sal;
    public:
    
    void accept(){
        cout<<"Enter the value:";
        cin>>emp_no>>SAL>>endl;
    }
    void calc(){
        HRA = SAL*40/100;
        TA = SAL*10/100;
        DA = SAL*20/100;
        PF = SAL*10/100;
        gross_sal= HRA + TA + DA -PF;
    }
    void display(){
        cout<<"The gross salary will be:"<<gross_sal<<endl;
    }
    
};


int main()
{
    employee e1,e2;
    e1.accept();
    e1.calc();
    e1.display();
    e2.accept();
    e2.calc();
    e2.display();


}



// write a class vector with one int arr accept the array elements then find the max and min arr element and display 

#include<iostream>
using namespace std;

class student {
    int roll_no,m1,m2,m3,tot_marks,prmarks;
    public:
    void accept();
    void calc();
    void display();
};
void student :: accept()
{
    cout<<"Enter the values :";
    cin>>roll_no>>m1>>m2>>m3;
}
void student:: calc()
{   tot_marks = m1+m2+m3;
    prmarks = tot_marks*100/300;
    
}
void student::display()
{
    cout<<"Total percentage is "<<prmarks<<endl;
    cout<<"Total marks is :" <<tot_marks<<endl;
}

int main(){
    student s1,s2;
    s1.accept();
    s1.calc();
    s1.display();
    s2.accept();
    s2.calc();
    s2.display();
}


// array of objects similar to normal array we can create array of objects 

#include<iostream>
using namespace std;

class student {
    int roll_no,m1,m2,m3,tot_marks,prmarks;
    public:
    void accept();
    void calc();
    void display();
};
void student::accept()
{
    cout<<"Enter the values :";
    cin>>roll_no>>m1>>m2>>m3;
}
void student::display()
{
    cout<<"Total percentage is "<<prmarks<<endl;
    cout<<"Total marks is :" <<tot_marks<<endl;
}

int main(){
   student s[5];
   for(int i=0;i<5;i++)
   {
       s[i].accepte();
   }
   for(int i=0;i<5;i++)
   {
       s[i].display();
   }
   return 0;
  
}


// write a class employee emp_no,sal accept the data of 50 employess and find the avg sal of employee 



#include<iostream>
using namespace std;

class employee {
    int emp_no,sal;
    public:
    void accept();
    void calc();
    void display();
    int getmarks();
};
void employee :: accept()
{
    cout<<"Enter the values :";
    cin>>emp_no>>sal;
}
int employee::getmarks()
{
    return marks;
}

int main(){
    

}
















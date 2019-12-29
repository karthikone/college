#include<iostream>
using namespace std;
class employee
    {
        int num;
        char name[20];
        float basic;
        float salary;
        float da;
        float netsal;
        float it;

        public:
            void getdata();
            void findnet();
            void showdata();
    };
    void employee::getdata()
        {
            cout<<"\nEnter employee number : ";
            cin>>num;
            cout<<"\nEnter employee name   : ";
            cin>>name;
            cout<<"\nEnter employee basic  : ";
            cin>>basic;
        }
    void employee::findnet()
        {
            da = 0.50*basic;
            it=0.20*(basic+da);
            netsal=(basic+da)-it;
        }
    void employee::showdata()
        {
            cout<<"\n\n\nDetails of        : " <<name;
            cout<<"\n\nEmployee number   : "<<num;
            cout<<"\nBasic salary      : "<<basic;
            cout<<"\nEmployee DA       : "<<da;
            cout<<"\nIncome Tax        : "<<it;
            cout<<"\nNet Salary        : "<<netsal;
        }
int main()
{
    employee emp[10];
    int i,num;
    cout<<"\nEnter number of employee details : ";
    cin>>num;
    for(i=0;i<num;i++)
            emp[i].getdata();
                for(i=0;i<num;i++)
                    emp[i].findnet();
                        for(i=0;i<num;i++)
                            emp[i].showdata();
    return 0;

}

#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n,i=1;
    float student_num[100];
    char name[100][50];
    cout << "Enter the number of students: ";
    cin >> n;
    while(i<=n)
    {
        cout << "Enter student name: ";
        cin >> name[i];
        cout << "Enter marks: ";
        cin >> student_num[i];
        i++;

    }
    i = 1;
    while(i<=n)
    {
        cout << "Name            Roll number"<<endl;
        cout << name[i]<< "           ";
        cout << student_num[i] << endl;
        i++;
    }
    return 0;
}

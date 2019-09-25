#include<iostream>
#include<fstream>

using namespace std;

class Book
{
    string bookNumber, bookName, bookAuthor;
    int bookQTY;

public:
    void findBook();
    void newBook();
};

void Book::findBook()
{
    ifstream findB;
    findB.open("Library Database.txt");
    findB>>bookNumber>>bookName>>bookAuthor>>bookQTY;
    cout<<"  "<<bookNumber<<"\n"<<"  "<<bookName<<"\n"<<"  "<<bookAuthor<<"\n"<<"  "<<bookQTY;
    findB.close();
}

void Book::newBook()
{
    ofstream newB("Library Database.txt");
    cout<<"\n  Running New Book Entry Process...\n\n";
    cout<<"\n  Type The Following Details Of The Book Without\n";
    cout<<"  Keeping Spaces And Press Enter!\n";
    cout<<"\n  Book Number: ";
    cin>>bookNumber;
    cout<<"\n  Book Name: ";
    cin>>bookName;
    cout<<"\n  Book Author: ";
    cin>>bookAuthor;
    cout<<"\n  Book Quantity: ";
    cin>>bookQTY;
    cout<<"\n\n  The Book Has Been Saved To The Database...";
    newB<<bookNumber<<bookName<<bookAuthor<<bookQTY;
}

class Library : public Book
{
    string studentFName, studentLName, studentDOB ,studentNICNumber, studentPassword, employeeIDNumber, employeePassword;
    int option1, option2, option3;
    public:
        void programInterface()
        {
            cout<<"\n\n";
            cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
            cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
            cout<<"               Welcome To theShelf Library Database\n";
            cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
            cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
        }
        void getToKnowTheUser()
        {
            cout<<"  Who Are You To This Library?\n";
            cout<<"  [1] Student\n";
            cout<<"  [2] Employee\n\n";
            cout<<"  Enter The Option (1 Or 2): ";
            cin>>option1;
            cout<<"\n\n";

            switch(option1)
            {
                case 1:
                {
                    cout<<"  |     About Us [1]     |  Search For A Book [2] |\n\n";
                    cout<<"  Enter The Option (1 Or 2): ";
                    cin>>option2;

                    cout<<"\n\n";

                    if(option2==1)
                    {
                        cout<<"  About Us\n";
                        cout<<"  -----------------------------------------------------------------\n";
                        cout<<"  We have the largest collection of educational materials in Sri\n";
                        cout<<"  Lanka, and our collection includes over 50,000 latest books and\n";
                        cout<<"  many digital resources you can access online. Join our exciting\n";
                        cout<<"  community and get access to:\n\n\n";
                        cout<<"  * A huge collection of books, CDs, and DVDs.\n\n";
                        cout<<"  * An ever-expanding collection of over 75,000 online resources,\n";
                        cout<<"    including e-journals, e-books, magazines and newspapers that\n";
                        cout<<"    you can download.\n\n";
                        cout<<"  * Events including talks, readings, activities and workshops.\n\n";
                        cout<<"  * Free online public access terminals and exam preparation\n";
                        cout<<"    including listening materials for IELTS.\n";
                    }
                    else if(option2==2)
                    {
                        cout<<"  Are You An Existing Member?\n";
                        cout<<"  [1] Yes\n";
                        cout<<"  [2] No\n\n";
                        cout<<"  Enter The Option (1 Or 2): ";
                        cin>>option3;

                        cout<<"\n\n";

                        if(option3==1)
                        {
                            cout<<"  Enter Your NIC Number: ";
                            cin>>studentNICNumber;
                            cout<<"  Enter Your Password: ";
                            cin>>studentPassword;

                            cout<<"\n\n";

                            cout<<"  --------------------[?] Search For A Book [?]--------------------\n\n";
                        }
                        else if(option3==2)
                        {
                            cout<<"  -----------------------[?] Register Now[?]-----------------------\n\n";
                        }
                    }
                }
                case 2:
                {
                    cout<<"  |     About Us [1]     |  Search For A Book [2] |\n\n";
                    cout<<"  Enter The Option (1 Or 2): ";
                    cin>>option2;

                    cout<<"\n\n";
                }
                default:
                {

                }
            }
        }
};

main()
{
    Library L; Book B;
    L.programInterface(); L.getToKnowTheUser();
    return 0;
}

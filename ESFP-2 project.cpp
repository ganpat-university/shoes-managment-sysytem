#include <fstream>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
using namespace std;
 
static int cstatus;
class custdetail
{
public:
    int cust_id;
    string cus_name;
    char cus_contactno[20];
    int t, i;
 
    string cust_address;
 
    //polymorphism
    //enter a details of customer.
    custdetail();
    void custout();
};
 
custdetail::custdetail()
{
 
    ofstream outfile;
    outfile.open("D:\\project.txt", ios::out | ios::app);
    cout << "---------------" << endl;
    cout << "customer status:1.new  or   2.existing: \n";
    cin >> cstatus;
    outfile << cstatus << endl;
 
    if (cstatus == 1)
    {
 
        cout << "Enter customer's name:" << endl;
        cin.ignore();
        getline(cin, cus_name);
        outfile << cus_name << endl;
        cout << "Enter customer's address:" << endl;
        cin.ignore();
        getline(cin, cust_address);
        outfile << cust_address << endl;
        cout << "What is your contact no?:" << endl;
    tt:
        cin >> cus_contactno;
        outfile << cus_contactno << endl;
        cout << "---------------------------------------";
    }
    else
    {
        cout << "What is your customer id:" << endl;
        cin >> cust_id;
        outfile << cust_id << endl;
        cout << "Enter customer's name:" << endl;
        cin.ignore();
        getline(cin, cus_name);
        outfile << cus_name << endl;
        cout << "Enter customer's address:" << endl;
        cin.ignore();
        getline(cin, cust_address);
        outfile << cust_address << endl;
        cout << "What is your contact no?:" << endl;
        cin >> cus_contactno;
        outfile << cus_contactno << endl;
        cout << "---------------------------------------";
    }
    outfile.close();
}
void custdetail::custout()
{ //print a  all customer details
    cout << "\n";
    cout << "\n\nEntered details are:\n\n";
    cout << "--------------------------------------------" << endl;
    cout << "Name: " << cus_name << endl;
    cout << "Address: " << cust_address << endl;
    cout << "contact no:" << cus_contactno << endl;
    if (cstatus == 2)
    {
        cout << "Customer's ID:  " << cust_id << endl;
    }
}
//
class shoedetail
{
public:
    string s_id, shoe_color, shoe_status, shoe_category;
    float shoe_price;
    int c, shoe_type /*(formal / casual)*/, shoe_size, shoe_company /*,shoe_category*/;
    void shoevalue();
    void shoeout();
    void display();
};
//
void shoedetail::shoevalue()
{
    ofstream outfile;
    outfile.open("D:\\project.txt", ios::out | ios::app);
    cout << "\n";
    cout << "shoe shop management" << endl;
    cout << "Enter a  shoe id:" << endl;
    cin.ignore();
    getline(cin, s_id);
    outfile << s_id << endl;
    cout << "List of a  shoe companies:";
    cout << "1.Nike\n\t\t\t  2.adidas\n\t\t\t  3.ASICS\n\t\t\t  4.Kering(PUMA)\n\t\t\t  5.Skechers\n\t\t\t  6.Fila\n\t\t\t  7.Bata" << endl;
    cout << "choice shoe company:" << endl;
    cin >> shoe_company;
    if (shoe_company > 0 && shoe_company < 8)
    {
        outfile << shoe_company << ".";
        switch (shoe_company)
        {
        case 1:
 
            cout << "nike" << endl;
            outfile << "nike" << endl;
            break;
        case 2:
            outfile << "adidas" << endl;
            break;
        case 3:
            outfile << "asics" << endl;
            break;
        case 4:
            outfile << "Kering(PUMA)" << endl;
            break;
        case 5:
            outfile << "Skechers" << endl;
            break;
        case 6:
            outfile << "Fila" << endl;
            break;
        case 7:
            outfile << "Bata" << endl;
            break;
        }
    }
    else
    {
        outfile << "INVALID INPUT IN SHOE COMPANY" << endl;
    }
 
    cout << "List of  shoe type:";
    cout << "1.Formal\n\t\t   2.Casual" << endl;
    cout << "Enter a type of shoe type:" << endl;
    cin >> shoe_type;
    if (shoe_type >= 1 && shoe_type < 3)
    {
        outfile << shoe_type << ".";
        switch (shoe_type)
        {
        case 1:
            outfile << "Formal" << endl;
            break;
        case 2:
            outfile << "Casual" << endl;
            break;
        }
    }
    if (shoe_type < 3 && shoe_type > 0)
    {
        cout << " Enter 1 for sandal." << endl;
        cout << " Enter 2 for mojris." << endl;
        cout << " Enter choice:" << endl;
        cin >> c; //Reading shoes category
        if (c == 1)
        {
            shoe_category = "sandal";
        }
        else if (c == 2)
        {
            shoe_category = "mojris";
        }
        cout << "List of a shoe color:";
        cout << "1.White\n\t\t     2.red\n\t\t     3.Multi-color\n\t\t     4.kircom Parrot\n\t\t     5.gray" << endl;
        cout << "Enter a  shoe color:" << endl;
        cin.ignore();
        getline(cin, shoe_color);
        outfile << shoe_color << endl;
        cout << "Enter a size of a shoe size:" << endl;
        cin >> shoe_size;
        outfile << shoe_size << endl;
    }
    else
    {
        outfile << "invalid shoe type." << endl;
        cout << "invalid shoe type." << endl;
    }
    // totrec = totrec + 1;
    outfile.close();
}
void shoedetail::shoeout()
{
    ofstream outfile;
    outfile.open("D:\\project.txt", ios::out | ios::app);
    cout << "\n";
    cout << " Entered shoe details:" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "shoe id:" << s_id << endl;
    //shoe company
    cout << "shoe company:";
    switch (shoe_company)
    {
    case 1:
        cout << "nike" << endl;
        break;
    case 2:
        cout << "adidas" << endl;
        break;
    case 3:
        cout << "asics" << endl;
        break;
    case 4:
        cout << "Kering(PUMA)" << endl;
        break;
    case 5:
        cout << "Skechers" << endl;
        break;
    case 6:
        cout << "Fila" << endl;
        break;
    case 7:
        cout << "Bata" << endl;
        break;
 
    default:
        cout << "INVALID INPUT IN SHOE COMPANY" << endl;
        break;
    }
    //shoe type
    cout << "shoe type:";
    switch (shoe_type)
    {
    case 1:
        cout << "Formal" << endl;
        break;
    case 2:
        cout << "Casual" << endl;
        break;
    default:
        cout << "invalid shoe type." << endl;
        break;
    }
    cout << "shoe category:" << shoe_category << endl;
    outfile << shoe_category << endl;
    cout << "Shoe color:" << shoe_color << endl;
 
    if (shoe_size >= 6 && shoe_size <= 13)
    {
        cout << "shoe size:" << shoe_size << endl;
    }
    else
    {
        cout << "shoe size:NOT AVAILABLE" << endl;
    }
    outfile.close();
}
 
class shoeprice : public shoedetail
{
public:
    void price()
    {
        ofstream outfile;
        outfile.open("D:\\project.txt", ios::out | ios::app);
        if (shoe_size >= 6 && shoe_size <= 13)
        {
            if (shoe_company % 2 == 0)
            {
                if (shoe_company == 2)
                {
                    cout << "shoe status:AVAILABLE" << endl;
                    outfile << "AVAILABLE" << endl;
                    cout << "shoe price is :1000RS" << endl;
                    outfile << "1000RS" << endl;
                }
                else if (shoe_company == 4)
                {
                    cout << "shoe status:AVAILABLE" << endl;
                    outfile << "AVAILABLE" << endl;
                    cout << "shoe price is :2000RS" << endl;
                    outfile << "2000RS" << endl;
                }
                else if (shoe_company == 6)
                {
                    cout << "shoe status:AVAILABLE" << endl;
                    outfile << " AVAILABLE" << endl;
                    cout << "shoe price is :3000RS" << endl;
                    outfile << "3000RS" << endl;
                }
            }
            else
            {
                if (shoe_company == 1)
                {
                    cout << "Shoe status:PENDING" << endl;
                    outfile << "PENDING" << endl;
                    cout << "shoe price is :4000RS" << endl;
                    outfile << "4000RS" << endl;
                }
                else if (shoe_company == 3)
                {
                    cout << "Shoe status:PENDING" << endl;
                    outfile << "PENDING" << endl;
                    cout << "shoe price is :5000RS" << endl;
                    outfile << "5000RS" << endl;
                }
                else if (shoe_company == 5)
                {
                    cout << "Shoe status:PENDING" << endl;
                    outfile << "PENDING" << endl;
                    cout << "shoe price is :6000RS" << endl;
                    outfile << "6000RS" << endl;
                }
                else if (shoe_company == 7)
                {
                    cout << "Shoe status:PENDING" << endl;
                    outfile << "PENDING" << endl;
                    cout << "shoe price is :7000RS" << endl;
                    outfile << "7000RS" << endl;
                }
            }
        }
        outfile.close();
    }
};
void shoedetail::display()
{
    string line;
    ifstream ifile;
    ifile.open("D:\\project.txt");
    if (!ifile)
    {
        cout << "\nError in opening file..!!\n";
        exit(0);
    }
    else if (!ifile.eof())
    {
        const int size = 80;
        char line[size];
        while (!ifile.eof())
        {
            ifile.getline(line, size);
            cout << "\n\ncustomer status: " << line << endl;
            ifile.getline(line, size);
            if (cstatus == 2)
            {
                cout << "customer ID: " << line << endl;
                ifile.getline(line, size);
            }
            cout << "Customer name : " << line << endl;
            ifile.getline(line, size);
            cout << "Customer Address : " << line << endl;
            ifile.getline(line, size);
            cout << "Contact no:" << line << endl;
            ifile.getline(line, size);
            cout << "Shoe ID:" << line << endl;
            ifile.getline(line, size);
            cout << "Shoe Company:" << line << endl;
            ifile.getline(line, size);
            cout << "Shoe Type:" << line << endl;
            ifile.getline(line, size);
            cout << "Shoe Color:" << line << endl;
            ifile.getline(line, size);
            cout << "shoe Size:" << line << endl;
            ifile.getline(line, size);
            cout << "Shoe category:" << line << endl;
            ifile.getline(line, size);
            cout << "Shoe Status:" << line << endl;
            ifile.getline(line, size);
            cout << "Shoe Price:" << line << endl;
        }
        ifile.close();
    }
 
    cout << "\n";
}
int main()
{
    cout << "\n \t\t\t=========================\n";
    cout << "\n\t\t\t WELCOME TO SHOE SHOP." << endl;
    cout << "\n \t\t\t=========================\n\n";
    cout << "HELLO!!!Welcome" << endl;
    custdetail obj;
    shoeprice obj1;
    obj1.shoevalue();
    obj.custout();
    obj1.shoeout();
    obj1.price();
    shoedetail obj2;
    cout << "\nDO you want to display file content(y or n):" << endl;
    char ans;
    cin >> ans;
    if (ans == 'y' || ans == 'Y')
    {
        obj2.display();
    }
    else
    {
        exit(0);
    }
}
 
 



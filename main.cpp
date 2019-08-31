#include<iostream>
#include<vector>
using namespace std;


struct Date
{
    int date, month, year;
};


// Class for employee
class Employee{
    public:
        string name;
        string employee_ID;
        string employee_address;
        string mobile_no;
        string position;
        double salary;
        struct Date date_of_join;
        string qualification;
        

        // Member functions
        // Display the contents of a particular employee
        int Input(){
            cout << "Enter Employee ID: ";
            cin.getline(employee_ID, 20);

            cout << "Enter Employee name: ";
            getline(cin, name);

            cout << "Enter Employee salary: ";
            cin >> salary;

            cout << "Enter Employee contact number: ";
            getline(cin, mobile_no);

            cout << "Enter Employee position: ";
            getline(cin, position);

            cout << "Enter Employee Date of join:(DD/MM/YYYY) ";
            scanf("%d'/'%d'/'%d", date_of_join.date, date_of_join.month, date_of_join.year);

            cout << "Enter Employee Qualification: ";
            getline(cin, qualification);

            cout << "Enter Employee Address: ";
            getline(cin, employee_address);

            
        }
        int Display(){
        	cout << "Employee ID: " << employee_ID;
            
            cout << "Employee name: " << name;
      
            cout << "Employee salary: " << salary;

            cout << "Employee contact number: " << mobile_no;

            cout << "Employee position: " << position;

            cout << "Employee Date of join:(DD/MM/YYYY) " << date_of_join.date << "/" << date_of_join.month << "/" << date_of_join.year;

            cout << "Employee Qualification: " << qualification;

            cout << "Employee Address: " << employee_address;

            return 0;
        }

};



int main(){
    // array of objects of the class 'Employee'
    int end = 0;
    string employee_ID = "";
    Employee employee_record[100];
    while (1)
    {
    	  
        cout << "*********WELCOME*********";
        cout << "1: Add an Employee " << endl;
        cout << "2: Search for an existing Employee based on Employee ID" << endl;
        cout << "3: Display all Employees " << endl;
        cout << "4: Update the record of an Employee " << endl;
        cout << "5: Delete the record of an Employee " << endl;
        cout << "6: Exit " << endl;
        cout << "\n\n\n\nEnter an option (1 to 6): " ;
        int option;
        cin >> option;
        switch (option){
            case 1:
                employee_record[end].Input();
                end++;
                break;
            case 2:
            	cout << "Enter the employee_ID whose details you want to be displayed: ";
            	cin >> employee_ID;
            	for(int i=0; i<end; i++)
            		if (employee_record[i].employee_ID == employee_ID)
            			employee_record[i].Display();
    
                break;
            case 3:
            	for(int i = 0; i<end; i++)
            		employee_record[i].Display();
    
                break;
            case 4:
                cout << "Enter the employee_ID whose details you want to update: ";
                cin >> employee_ID;
                for (int i = 0; i < end; i++)
                    if (employee_record[i].employee_ID == employee_ID)
                        employee_record[i].Input();
                        break;
            case 5:
                cout << "Enter the employee_ID whose details you want to delete: ";
                cin >> employee_ID;
                for (int i = 0; i < end; i++)
                    if (employee_record[i].employee_ID == employee_ID)
                        delete &employee_record[i];
                end--;
                break;
            case 6:
                exit(0);
            default:
                cout << "Enter a valid option :" << endl;
        }
    }
}


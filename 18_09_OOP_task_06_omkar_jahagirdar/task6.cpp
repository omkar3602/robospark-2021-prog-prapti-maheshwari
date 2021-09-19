/***************************
 * Name: Omkar Jahagirdar
 * PRN: 12011016
 * 
Task 06- 18/09/2021
I want my Personal data, Professional data, & Academic data to be separated in different classes and 4th class called biodata.
If I create object of biodata class then using that object I can get all my professional, personal and academic data.
Take data members in classes as follows:
personal class - Name, Surname, address, mobile_no, dob.
professional class - name_of_organization, job_profile, project.
Academic - year_of_passing, cgpa, college_name, branch
member functions
All class includes default constructor(if data members are present), and one function to get data from user for its data member.
Note :- define all data members as protected so that you can access this members in its derived class directly
*/
#include<iostream>
using namespace std;

class personalData
{
    protected:
        string name, surname, address;
        long long int mobile_no;
        string dob;

        personalData()
        {
            name = "", surname = "", address = "";
            mobile_no = 0;
            dob = "";
        }
        personalData(string n, string sur, string add, long long int mob, string d)
        {
            name = n, surname = sur, address = add;
            mobile_no = mob;
            dob = d;
        }

        void set_name()
        {
            cout << "\nEnter your name: ";
            cin >> name;
        }
        void set_surname()
        {
            cout << "Enter your surname: ";
            cin >> surname;
        }
        void set_address()
        {
            cout << "Enter your address: ";
            cin >> address;
        }
        void set_mobile_no()
        {
            cout << "Enter your mobile number: ";
            cin >> mobile_no;
        }
        void set_dob()
        {
            cout << "Enter your date of birth: ";
            cin >> dob;
        }

        void get_name()
        {
            cout << "\n\nName: " << name << endl;
        }
        void get_surname()
        {
            cout << "Surname: " << surname << endl;
        }
        void get_address()
        {
            cout << "Address: " << address << endl;
        }
        void get_mobile_no()
        {
            cout << "Mobile number: " << mobile_no << endl;
        }
        void get_dob()
        {
            cout << "Date of birth: " << dob << endl;
        }
};

class professionalData
{
    protected:
        string name_of_organization, job_profile, project;

        professionalData()
        {
            name_of_organization = "", job_profile = "", project = "";
        }
        professionalData(string org, string job, string proj)
        {
            name_of_organization = org, job_profile = job, project = proj;
        }

        void set_name_of_organization()
        {
            cout << "Enter your organisation's name: ";
            cin >> name_of_organization;
        }
        void set_job_profile()
        {
            cout << "Enter your job profile: ";
            cin >> job_profile;
        }
        void set_project()
        {
            cout << "Enter your project name: ";
            cin >> project;
        }

        void get_name_of_organization()
        {
            cout << "Organisation's name: " << name_of_organization << endl;
        }
        void get_job_profile()
        {
            cout << "Job profile: " << job_profile << endl;
        }
        void get_project()
        {
            cout << "Project name: " << project << endl;
        }
};

class academicData
{
    protected:
        string year_of_passing, college_name, branch;
        double cgpa;

        academicData()
        {
            year_of_passing = "", college_name = "", branch = "";
            cgpa = 0;
        }
        academicData(string y, string clg, string b, double c)
        {
            year_of_passing = y, college_name = clg, branch = b;
            cgpa = c;
        }

        void set_year_of_passing()
        {
            cout << "Enter your passing year: ";
            cin >> year_of_passing;
        }
        void set_college_name()
        {
            cout << "Enter your college name: ";
            cin >> college_name;
        }
        void set_branch()
        {
            cout << "Enter your branch: ";
            cin >> branch;
        }
        void set_cgpa()
        {
            cout << "Enter your CGPA: ";
            cin >> cgpa;
        }

        void get_year_of_passing()
        {
            cout << "Passing year: " << year_of_passing << endl;
        }
        void get_college_name()
        {
            cout << "College name: " << college_name << endl;
        }
        void get_branch()
        {
            cout << "Branch: " << branch << endl;
        }
        void get_cgpa()
        {
            cout << "CGPA: " << cgpa << endl;
        }
};

class bioData : protected personalData, protected professionalData, protected academicData
{
    public:
        void set_data()
        {
            set_name();
            set_surname();
            set_address();
            set_mobile_no();
            set_dob();

            set_name_of_organization();
            set_job_profile();
            set_project();

            set_year_of_passing();
            set_cgpa();
            set_college_name();
            set_branch();

        }
        void get_data()
        {
            get_name();
            get_surname();
            get_address();
            get_mobile_no();
            get_dob();

            get_name_of_organization();
            get_job_profile();
            get_project();

            get_year_of_passing();
            get_cgpa();
            get_college_name();
            get_branch();

        }

};

int main()
{
    bioData b;
    b.set_data();
    b.get_data();

    return 0;
}
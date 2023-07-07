#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
using namespace std;


struct student{
string fst_name;
string lst_name;
string Adm_No ;
string Study_year;
string Branch;

}studentData;
struct professor{
string fst_name;
string lst_name;
string qualification;
string experience;
  //on
string pay;
string subj;
string lec;
string add;
string cel_no;
string blood_grp;
string serves;
} prof[50];
int main(){
int i=0,j;
char choice;
string find;
string srch;

while(1){
	system("cls");
	
	 
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n";
	cout<<"\n\n\t\t\tIIT(ISM) MANAGEMENT SYSTEM\n\n";
	cout<<"\n\n\t\t\tMAIN SCREEN\n\n";
	cout<<"Enter your choice: \n";
	cout<<"1. Students information \n";
	cout<<"2. Professors information \n";
	cout<<"3. Exit Program \n";
	cin>>choice	;
	system("cls");
	switch(choice){
		case '1':{
			while(1){
				system("cls");
				
				cout<<"\t\t\tSTUDENTS INFORMATION AND BIO DATA SECTION \n\n\n";
				cout<<"ENTER YOUR CHOICE \n";
				cout<<"1. Create new entry \n";
				cout<<"2. Find and display entry \n";
				cout<<"3. Jump to main \n";
				cin>>choice;
				switch(choice){
					case '1':
					{ofstream f1("student.txt",ios::app);
					for(i=0;choice!='n';i++){
					if((choice=='y')||(choice=='Y')||(choice=='1')){
						cout<<"Enter First Name:  ";
						cin>>studentData.fst_name; 
						cout<<"Enter Last name:";
						cin>>studentData.lst_name ;
						cout<<"Enter Admission number:";
						cin>>studentData.Adm_No;
						cout<<"Enter Study Year:";
						cin>>studentData.Study_year;
						cout<<"Enter Branch of student: ";
						cin>>studentData.Branch;
						
						f1<<studentData.fst_name<< endl<<studentData.lst_name<<endl<<studentData.Adm_No<<endl<<studentData.Study_year<<endl<<studentData.Branch<<endl;
						cout<<"Do YOU Want To Enter Data: ";
						cout<<"Press Y for continue and N to finish: ";
						cin>>choice;
					}	
					}
					f1.close(); 
					}	
					continue;
					case '2':
						{
							ifstream f2("student.txt");
							cout<<"Enter First Name to be displayed: ";
							cin>>find;
							cout<<endl;
							int notFound=0;
							for(j=0;(j<i)||(!f2.eof());j++){
								getline(f2,studentData.fst_name);
								if(studentData.fst_name==find){
									notFound=1;
									cout<<"First Name: "<<studentData.fst_name<<endl;
									getline(f2,studentData.lst_name);
									cout<<"Last Name: "<<studentData.lst_name<<endl;
									getline(f2,studentData.Adm_No);
									cout<<"Admission Number: "<<studentData.Adm_No<<endl;
									getline(f2,studentData.Study_year);
									cout<<"Year of Study: "<<studentData.Study_year<<endl;
									getline(f2,studentData.Branch);
									cout<<"Branch of student: "<<studentData.Branch<<endl;
									
								}
							}
							if(notFound==0){
								cout<<"No Record Found"<<endl;
								
							}
							f2.close();
							cout<<"Press any Key two times to proceed";
							getch();
							getch();
						}
				     continue;
				     
				     case '3':
				     {
				     	break;
					 }
				}
				break;
			}
			continue;	
		}
case '2':
{
	while(1){
		system("cls");
		cout<<"\t\t\tPROFESSORS INFORMATION AND BIODATA SECTION\n\n\n";
		cout<<"Enter your choice: "<<endl;
		cout<<"1. Create new entry\n";
		cout<<"2. Find and Display\n";
		cout<<"3. jump to main\n";
		cin>>choice;
		
		switch(choice){
			case '1':
				{
					ofstream p1("professor.txt",ios::app);
					
					for(i=0;choice!='n'&& choice!='N';i++){
						if((choice=='y')||(choice=='Y')||(choice=='1')){
							cout<<"Enter first name : ";
							cin>>prof[i].fst_name;
							cout<<"Enter last name: ";
							cin>>prof[i].lst_name;
							cout<<"Enter qualification: ";
							cin>>prof[i].qualification;
							cout<<"Enter Experience Year: ";
							cin>>prof[i].experience;
							cout<<"No. of Year in this college: ";
							cin>>prof[i].serves;
							cout<<"Name of subject: ";
							cin>>prof[i].subj;
							cout<<"Enter Lecture per week: ";
							cin>>prof[i].lec;
							cout<<"Enter pay: ";
							cin>>prof[i].pay;
							cout<<"Enter phone number: ";
							cin>>prof[i].cel_no;
							cout<<"Enter address: ";
							cin>>prof[i].add;
							cout<<"Enter blood group: ";
							cin>>prof[i].blood_grp;
							
							p1<<prof[i].fst_name<<endl<<prof[i].lst_name<<endl
							<<prof[i].qualification<<endl
							<<prof[i].experience<<endl
							<<prof[i].serves<<endl
							<<prof[i].subj<<endl
							<<prof[i].lec<<endl
							<<prof[i].pay<<endl
							<<prof[i].cel_no<<endl
							<<prof[i].add<<endl
							<<prof[i].blood_grp<<endl;
							cout<<"Do you want to enter data: ";
							cin>>choice;
							
						}
					}
					system("cls");
					
					
					p1.close();
					
				}
				continue;
				
		case '2':{
			ifstream p2("professor.txt");
			
			cout<<"Enter name to be displayed: ";
			cin>>find;
			cout<<endl;
			int notFound=0;
			for(j=0;((j<i)||(!p2.eof()));j++){
				getline(p2,prof[j].fst_name);
				if(prof[j].fst_name==find){
					notFound=1;
					cout<<"First name: "<<prof[j].fst_name<<endl;
					getline(p2,prof[j].lst_name);
					cout<<"Last name: "<<prof[j].lst_name<<endl;
						getline(p2,prof[j].qualification);
					cout<<"Qualification:  "<<prof[j].qualification<<endl;
						getline(p2,prof[j].experience);
					cout<<"Experience of teaching:  "<<prof[j].experience<<endl;
						getline(p2,prof[j].serves);
					cout<<"Number of year in this college: "<<prof[j].serves<<endl;
						getline(p2,prof[j].subj);
					cout<<"Subject name which teach: "<<prof[j].subj<<endl;
						getline(p2,prof[j].lec);
					cout<<"Lecture per week: "<<prof[j].lec<<endl;
						getline(p2,prof[j].pay);
					cout<<"Salary pay: "<<prof[j].pay<<endl;
						getline(p2,prof[j].cel_no);
					cout<<"Mobile Number: "<<prof[j].cel_no<<endl;
						getline(p2,prof[j].add);
					cout<<"Address: "<<prof[j].add<<endl;
						getline(p2,prof[j].blood_grp);
					cout<<"Blood group: "<<prof[j].blood_grp<<endl;
					
					
					
				}
				
			}
			
		p2.close();	
		if(notFound==0){
			cout<<"No Record Found"<<endl;
			
		}
		cout<<"Press any Key two times to proceed";
		getch();
		getch();
		}
		continue;
		case '3':
		{
			break;
			
				}		
			
		}
	}
}
	}
}


 





}

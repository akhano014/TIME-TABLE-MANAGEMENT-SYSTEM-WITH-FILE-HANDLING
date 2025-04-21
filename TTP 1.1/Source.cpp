#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Teacher {
private:
	int Teacher_ID;
	string Name;
	string sectionName;
	string Roomnum;
	string Department;
public:
	Teacher() :Teacher_ID(0), Name("akhano"), Department("BSE") {

	}
	Teacher(int id, string na,string dep) {
		Teacher_ID = id;
		Name = na;
		Department = dep;
	}
	void TeacherwiseTT();
	void TeacherwiseTV();
	void SectionwiseTT();
	void SectionwiseTV();
	void RoomWiseTT();
	void RoomWiseTV();
};
void Teacher::TeacherwiseTT() {
	cout << "Enter Teacher Department ID: " << endl;
	cin >> Teacher_ID;
	cout << "Enter Teacher Name: " << endl;
	cin.ignore();
	getline(cin, Name);
	cout << "Enter Teacher Department: " << endl;
	cin >> Department;
	fstream ttfile;
	ttfile.open(Name+ "file.txt", ios::out);
	if (ttfile.is_open()) {
		ttfile << "Teacher ID: " << Teacher_ID << endl;
		ttfile <<"Name: "<< Name << endl;
		ttfile <<"Department: "<< Department << endl;
		ttfile << "\t\t**TIME TABLE FOR BSE-2B DEPARTMENT**" << endl;
		ttfile << "Day\tTiming\t\tTeacher Name\tTeacher Course\t\tRoom NO" << endl;
		ttfile << "Friday\t11:30-01:30\tFaiqaa Ahmad\tECS\t\t\t4-19" << endl;
		/*ttfile << "Thursday\t12:30-01:30\tFaisal Zia\t\tOOP LAB\t\t4-18" << endl;*/
		ttfile.close();
		cout << "Teacher Time Table is Now Stored" << endl;
	}
}

void Teacher::TeacherwiseTV() {
	int id;
	cout << "Enter Teacher Name: ";
	cin.ignore();
	getline(cin, Name);
	cout << "Enter Teacher Department ID: ";
	cin >> Teacher_ID;
	cout << endl;
	cout << endl;
	fstream ttfile;
	ttfile.open(Name + "file.txt", ios::in);
	if (ttfile.is_open()) {
		ttfile >> id;
		if(id== Teacher_ID)
		{
			string line;
			while (getline(ttfile, line)) {
				cout << line << endl;
			}
		}
		else {
			cout << "Please Enter Valid Teacher ID Thank YOU!!" << endl;
		}
		ttfile.close();
		cout << endl;
	}
	else {
		cout << "Please Enter Valid Value!!" << endl;
	}
	cout << endl;
}
void Teacher::SectionwiseTT() {
	cout << endl;
	cout << "Enter Your Section Name (E.G:BSE-2A - BSE-2D): " << endl;
	cin >> sectionName;
	fstream sectionfile;
	sectionfile.open(sectionName + "file.txt", ios::out);
	if (sectionfile.is_open()) {
		sectionfile << sectionName << endl;
		sectionfile << "\t**TIME TABLE OF SECTION BSE-2D DEPARTMENT**" << endl;
		sectionfile << "DAY       TIMING       TEACHER NAME   COURSE TITLE   ROOM-NO" << endl;
		sectionfile << "MONDAY    10:30-12:30  AHMAD AFAQ     OOP            4-17" << endl;
		sectionfile << "MONDAY    02:30-04:30  UMAIR HASSAN   QURAN-1        4-18" << endl;
		sectionfile << "TUESDAY   08:30-09:30  AHMAD AFAQ     OOP            4-19" << endl;
		sectionfile << "TUESDAY   11:30-12:30  UMAIR HASSAN   LA             4-19" << endl;
		sectionfile << "THURSDAY  10:30-12:30  RAFIA AHMAD    ISE            4-03" << endl;
		sectionfile << "THURSDAY  12:30-01:30  SADAF KHALID   DS             4-18" << endl;
		sectionfile << "FRIDAY    08:30-11:30  BABAR AZAM     OOP LAB        4-01" << endl;
		sectionfile << "FRIDAY    11:30-01:30  ANSAR AHMAD    ECS            4-19" << endl;
		sectionfile << endl;
		sectionfile.close();
		cout << "File has been created" << endl;
	}
}
void Teacher::SectionwiseTV() {
	cout << endl;
	string sectioname;
	cout << "Enter Your Section Name (E.G:BSE-2A - BSE-2D): ";
	cin >> sectionName;
	fstream sectionfile;
	sectionfile.open(sectionName + "file.txt", ios::in);
	if (sectionfile.is_open()) {
		sectionfile >> sectioname;
		if(sectioname==sectionName)
		{
			string line;
			while (getline(sectionfile, line)) {
				cout << line << endl;
			}
		}
		else {
			cout << "Please Enter Valid Section Name Thank YOU!!" << endl;
		}
		sectionfile.close();
		cout << endl;
	}
	else {
		cout << "Please Enter Valid Name!!" << endl;
	}
}
void Teacher::RoomWiseTT() {
	cout << "Enter the Room Number (E.G: 4-19,4-03): " << endl;
	cin >> Roomnum;
	fstream roomfile;
	roomfile.open(Roomnum + "file.txt", ios::out);
	if (roomfile.is_open()) {
		roomfile << Roomnum << endl;
		roomfile << endl;
		roomfile << "\t\t**ROOM WISE TIME TABLE BSE-2A DEPARTMENT**" << endl;
		roomfile << endl;
		roomfile <<" DAY        TIMING          TEACHER NAME   COURSE TITLE   LAB NO" << endl;
		roomfile << "WEDNESDAY  08:30-11:30     FAISAL  ZIA    OOP LAB        4-01" << endl;
		roomfile.close();
		cout << "file has been created" << endl;
	}
	else {
		cout << "Please Enter Valid Name!!" << endl;
	}


}
void Teacher::RoomWiseTV() {
	cout << "Enter the Room Number (E.G: 4-19,4-03): ";
	cin >> Roomnum;
	fstream roomfile;
	roomfile.open(Roomnum + "file.txt", ios::in);
	if (roomfile.is_open()) {
		string line;
		while (getline(roomfile, line)) {
			cout << line << endl;
		}
		roomfile.close();
		cout << endl;
	}
	else {
		cout << "Please Enter Valid Name!!" << endl;
	}
}
int main() {

Teacher t1;
int choice;
	do
	{
		cout << "\t***Teacher ID's*** " << endl;
		cout << "ID 1:Aleem Ahmad" << endl;
		cout << "ID 2:Sabair Khan" << endl;
		cout << "ID 3:Zubair Abbasi" << endl;
		cout << "ID 4:Rafia Hassan" << endl;
		cout << "ID 5:Sadaf Khalid" << endl;
		cout << "ID 6:Faisal Zia" << endl;
		cout << "ID 7:Faiqa Ahmad" << endl;
		cout << endl;
		cout << endl;
		cout << "\t*************************************" << endl;
		cout << "\t*\t\t\t\t    *" << endl;
		cout << "\t* 1.VIEW BSE-2B TEACHER TIME TABLE  *" << endl;
		cout << "\t* 2.STUDENT WISE TIMETABLE\t    *" << endl;
		cout << "\t* 3.SECTION WISE TIMETABLE\t    *" << endl;
		cout << "\t* 4.ROOM WISE TIMETABLE\t\t    *" << endl;
		cout << "\t* 5.Exit\t\t\t    *" << endl;
		cout << "\t*\t\t\t\t    *" << endl;
		cout << "\t*************************************" << endl;
		cout << endl;
		cout << "Enter your choice:";
		cin >> choice;
		switch (choice) {
		 case 1:
		 {
			t1.TeacherwiseTV();
			break;
		 }
		 case 2:
		 {
			 t1.TeacherwiseTV();
			 break;
		 }
		 case 3:
		 {
			 t1.SectionwiseTV();
			 break;
		 }
		 case 4:
		 {
			 t1.RoomWiseTV();
			 break;
		 }
		 case 5:
		 {
			 cout << "\t\t**THANK YOU FOR USING BAHRIA UNIVERISTY TIMETALBE**" << endl;
			 break;
		 }
		 default:
		 {
			 cout << "Error in the system!!" << endl;
		 }
		}

	} while (choice == 1 || choice==2|| choice==3 || choice==4);
}
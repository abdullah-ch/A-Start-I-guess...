// ConsoleApplication59.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
using namespace std;
#include <iostream>

class Subject
{
private :
	string Name;
	int MidMarks;
	int FinalMarks;
	int QuizMarks;

public:

	Subject()
	{

		MidMarks = 0;
		QuizMarks = 0;
		FinalMarks = 0;
	}






	void Set_Name(string name)
	{
		Name = name;
	}
	string Get_Name()
	{
		return Name;
	}

	void Set_MidMArks(int Mid_Marks)
	{
		MidMarks = Mid_Marks;
	}

	int Get_MidMarks()
	{
		return MidMarks;
	}

	
	void Set_Final_Marks(int Final_MArks)
	{
		FinalMarks = Final_MArks;
	}

	int Get_FinalMarks()
	{
		return FinalMarks;
	}

	void Set_Quiz_Marks(int Quiz_Marks)
	{
		QuizMarks = Quiz_Marks;
	}

	int Get_Quiz_Marks()
	{
		return QuizMarks;
	}


};

class Students
{

private:

	string name;
	string Batch;
	int age;
	int Roll_Number;
	Subject OOP , BasicElectronics , English ;
	float X[3], Y[3], Z[3];
	float  AggreGate[3];
public:

	Students()
	{
		Batch = "BSCS-18";
		Roll_Number = 0;

	}

	void Set_Name(string name)
	{
		this->name = name;
	}

	string Get_Name()
	{
		return name;
	}

	void Set_BAtch(string BAtch)
	{
		Batch = BAtch;
	}

	string Get_Batch()
	{
		return Batch;
	}

	void Set_Age(int age)
	{
		this->age = age;

	}
	int Get_Age()
	{
		return age;
	}

	void Set_Roll_Number(int RollNumber)
	{
		Roll_Number = RollNumber;
	}

	int Get_Roll_Number()
	{
		return Roll_Number;
	}


	void Set_OOP(string OOP_Name, int OOP_Mid_Marks, int OOP_FinalM, int OOP_QUIZ)

	{
		OOP.Set_Name(OOP_Name);
		OOP.Set_MidMArks(OOP_Mid_Marks);
		OOP.Set_Final_Marks(OOP_FinalM);
		OOP.Set_Quiz_Marks(OOP_QUIZ);
	}

	void Set_Basic_Electronics(string Basic_Electronics_Name, int Basic_Electronic_Mid_Marks, int Basic_Electronic_FinalM, int Basic_Electronic_QUIZ)
	{
		BasicElectronics.Set_Name(Basic_Electronics_Name);
		BasicElectronics.Set_MidMArks(Basic_Electronic_Mid_Marks);
		BasicElectronics.Set_Final_Marks(Basic_Electronic_FinalM);
		BasicElectronics.Set_Quiz_Marks(Basic_Electronic_QUIZ);
	}
	void Set_English(string English_Name, int English_Mid_Marks, int English_FinalM, int English_QUIZ)
	{
		English.Set_Name(English_Name);
		English.Set_MidMArks(English_Mid_Marks);
		English.Set_Final_Marks(English_FinalM);
		English.Set_Quiz_Marks(English_QUIZ);
	}

	void WhatsMyGrade()
	{
		X[0] = OOP.Get_Quiz_Marks();
		Y[0] = OOP.Get_MidMarks();
		Z[0] = OOP.Get_FinalMarks();
		AggreGate[0] = (X[0] / 10) * 30 + (Y[0] / 50) * 30 + (Z[0] / 100) * 40;

		if (AggreGate[0] > 80)
		{
			cout << " Your Grade is A "  << endl;
		}

		else if (AggreGate[0] > 70 && AggreGate[0] <= 80 )
		{
			cout << " Your Grade is B " << endl;
		}

		else if (AggreGate[0] > 50 && AggreGate[0] <= 70)
		{
			cout << " Your Grade is C " << endl;


		}

		else
		{
			cout << " Your Grade is F " << endl; 
		}
		

		

		X[1] = BasicElectronics.Get_Quiz_Marks();
		Y[1] = BasicElectronics.Get_MidMarks();
		Z[1] = BasicElectronics.Get_FinalMarks();
		AggreGate[1] = (X[1] / 10) * 30 + (Y[1] / 50) * 30 + (Z[1] / 100) * 40;

		if (AggreGate[1] > 80)
		{
			cout << " Your Grade is A " << endl;
		}

		else if (AggreGate[1] > 70 && AggreGate[1] <= 80)
		{
			cout << " Your Grade is B " << endl;
		}

		else if (AggreGate[1] > 50 && AggreGate[1] <= 70)
		{
			cout << " Your Grade is C " << endl;


		}

		else
		{
			cout << " Your Grade is F " << endl;
		}

		X[2] = English.Get_Quiz_Marks();
		Y[2] = English.Get_MidMarks();
		Z[2] = English.Get_FinalMarks();
		AggreGate[2] = (X[2] / 10) * 30 + (Y[2] / 50) * 30 + (Z[2] / 100) * 40;

		if (AggreGate[2] > 80)
		{
			cout << " Your Grade is A " << endl;
		}

		else if (AggreGate[2] > 70 && AggreGate[2] <= 80)
		{
			cout << " Your Grade is B " << endl;
		}

		else if (AggreGate[2] > 50 && AggreGate[2] <= 70)
		{
			cout << " Your Grade is C " << endl;


		}

		else
		{
			cout << " Your Grade is F " << endl;
		}

	}
};

int main()
{
	Students STUDENT1;
	string Name;
	cout << "Enter the student's NAme" << endl;
	getline(cin, Name);
	int age;
	cout << "Enter the student's age" << endl;
	cin >> age;
	string Batch;
	cout << "Enter your Batch " << endl;
	cin >> Batch;
	int Roll_Number;
	cout << "Enter your Roll Number" << endl;
	cin >> Roll_Number;
	STUDENT1.Set_Name(Name);
	STUDENT1.Set_Age(age);
	STUDENT1.Set_BAtch(Batch);
	STUDENT1.Set_Roll_Number(Roll_Number);
	string SubjectName[3];
	
	int Mid_MArks[3], Final_MArks[3], Quiz_Marks[3];
	SubjectName[0] = "OOP";
	SubjectName[1] = "Basic_Electronics";
	SubjectName[2] = " English "; 
	for (int i = 0; i < 3; i++)
	{
		cout << SubjectName[i] << endl; 
		cout << "Enter your Mid Marks for Subject number " << 1 + i << endl;
		cin >> Mid_MArks[i];
		cout << "Enter your Final Marks for Subject number " << 1 + i << endl;
		cin >> Final_MArks[i];
		cout << "Enter your Quiz Marks for Subject number " << 1 + i << endl;
		cin >> Quiz_Marks[i];
	}

	STUDENT1.Set_OOP(SubjectName[0], Mid_MArks[0], Final_MArks[0], Quiz_Marks[0]);
	STUDENT1.Set_Basic_Electronics(SubjectName[1], Mid_MArks[1], Final_MArks[1], Quiz_Marks[1]);
	STUDENT1.Set_English(SubjectName[2], Mid_MArks[2], Final_MArks[2], Quiz_Marks[2]);
	
	STUDENT1.WhatsMyGrade();
	
	


}

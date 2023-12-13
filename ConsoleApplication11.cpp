//Задание 1
//#include<iostream>
//using namespace std;
//
//class Fraction 
//{
//	int Num, Denom;
//
//public:
//    Fraction() 
//	{
//		Num = 1;
//		Denom = 1;
//	}
//
//	Fraction(int X,int Y) 
//	{
//		Num = X;
//		Denom = Y;
//	}
//
//	void Sum(Fraction Fr) 
//	{
//		Num = Num * Fr.Denom + Fr.Num * Denom;
//		Denom = Denom * Fr.Denom;
//		cout << "Sum:" << Num << "/" << Denom << "\n\n";
//    }
//	void Dif(Fraction Fr) 
//	{
//		Num = Num * Fr.Denom - Fr.Num * Denom;
//		Denom = Denom * Fr.Denom;
//		cout << "Difference:" << Num << "/" << Denom << "\n\n";
//	}
//
//	void Mult(Fraction Fr) 
//	{
//		Num *= Fr.Num;
//		Denom *= Fr.Denom;
//		cout << "Multiply:" << Num << "/" << Denom << "\n\n";
//	}
//
//	void Div(Fraction Fr) 
//	{
//		if (Fr.Num != 0) 
//		{
//			Num *= Fr.Denom;
//			Denom *= Fr.Num;
//			cout << "Dived:" << Num << "/" << Denom << "\n\n";
//		}
//		else 
//		{
//		  cout << "Error." << "\n";
//		}
//	}
//};
//
//
//int main() 
//{
//	Fraction first_frac0(2,4);
//	Fraction second_frac0(5,10);
//    first_frac0.Sum(second_frac0);
//
//	Fraction first_frac1(2, 4);
//	Fraction second_frac1(5, 10);
//	first_frac1.Dif(second_frac1);
//
//	Fraction first_frac2(2, 4);
//	Fraction second_frac2(5, 10);
//	first_frac2.Mult(second_frac2);
//
//	Fraction first_frac3(2, 4);
//	Fraction second_frac3(5, 10);
//	first_frac3.Div(second_frac3);
//}








//Задание 2
//class Contact
//{
//    char* FullName;
//    int HomePhone,WorkPhone,MobilePhone;
//    int age;
//    char* sex;
//
//public:
//    Contact()
//    {
//        FullName = nullptr;
//        sex = nullptr;
//        age = 0;
//        HomePhone = 0;
//        WorkPhone = 0;
//        MobilePhone = 0;
//    }
//
//    Contact(const char* Fl_Name,const char* Sex, int Age,int HmPhone,int WrPhone,int MbPhone) 
//    {
//        FullName = new char[strlen(Fl_Name) + 1];
//        sex = new char[strlen(Sex) + 1];
//        strcpy_s(FullName, strlen(Fl_Name) + 1, Fl_Name);
//        strcpy_s(sex, strlen(Sex) + 1, Sex);
//        
//        age = Age;
//        HomePhone = HmPhone;
//        WorkPhone = WrPhone;
//        MobilePhone = MbPhone;
//    }
//
//    void Set_FullName(const char* Fl_Name)
//    {
//        if (FullName != nullptr)
//            delete[] FullName;
//        FullName = new char[strlen(Fl_Name) + 1];
//        strcpy_s(FullName, strlen(Fl_Name) + 1, Fl_Name);
//    }
//    void Set_AdditInfo(const char* Sex, int Age)
//    {
//        if (sex != nullptr)
//            delete[] sex;
//        sex = new char[strlen(Sex) + 1];
//        strcpy_s(sex, strlen(Sex) + 1, Sex);
//        age = Age;
//    }
//    void Set_FhoneNumber(int HmPhone, int WrPhone, int MbPhone) 
//    {
//        HomePhone = HmPhone;
//        WorkPhone = WrPhone;
//        MobilePhone = MbPhone;
//    }
//
//    
//    void Output()
//    {
//        if (FullName == nullptr)
//        {
//            cout << "Empty object!\n";
//            return;
//        }
//        cout << "Full Name: " << FullName << "\n";
//        cout << "Sex: " << sex << "\n";
//        cout << "Age: " << age << "\n\n";
//        cout << "Home Phone: " << HomePhone << "\n";
//        cout << "Work Phone: " << WorkPhone << "\n";
//        cout << "Mobile Phone: " << MobilePhone << "\n\n\n";
//    }
//    ///*~Contact()
//    //{
//    //    cout << "Destruct\n";
//    //    delete[] FullName;
//    //    delete[] sex;
//    //}*/ Если деструктор не будет в комментарии,будет ошибка.
//};
//void iteration(Contact *arr,int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//       arr[i].Output();
//    }
//    cout << "\n\n";
//}
//
//void AddContact(Contact *&arr, int size, Contact &NewArr) 
//{
//    Contact* temp = new Contact[size + 1];
//
//    for (int i = 0; i < size; i++) 
//    {
//        temp[i] = arr[i];
//    }
//
//    temp[size] = NewArr;
//    delete[] arr;
//    arr = temp;
//
//    iteration(arr, size + 1);
//}
//
//void RemoveContact(Contact *&arr, int size, int index) 
//{
//    size--;
//    Contact* temp = new Contact[size];
//
//    for (int i = 0; i < size; i++) 
//    {
//        if (i != index) 
//        {
//            temp[i] = arr[i];
//            continue;
//            
//        }
//    }
//    delete[] arr;
//    arr = temp;
//    iteration(arr, size);
//}
//
//int main() {
//    int size = 3;
//    Contact* mas = new Contact[size]
//    {
//        {"Konstantin Ghenadii Dmitrievich ", "Male", 34, 350055019, 907100905, 660690345},
//        {"Arsen Sevastianov Ruslanovich", "Male", 16, 340069590, 340010090, 690325859},
//        {"Anastasia Maksimenko Alekseevna", "Female", 56, 551010452, 677641356, 760400561}
//    };
//
//    iteration(mas, size);
//
//    Contact newContact("Alexhsander Bondari Nickolaevich", "Male", 44, 67893123, 67894020, 700862121);
//    AddContact(mas, size, newContact);
//    RemoveContact(mas, size, 3);
//}
}

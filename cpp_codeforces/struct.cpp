#include <iostream>
#include <vector>
using namespace std;

struct student
{
  string id_number;
  string name;
  string surname;
  int age;
  int grade;
  vector<string> classes;
};

struct classroom
{
  string class_name;
  string teacher;
  string student_number;
};

struct school
{
  string school_name;
  string principle;
  int student_number;
  int teachers_number;
  int classes_number;
  vector<string> all_classes;
};

void find_similar(student student_1, student student_2)
{
  for (int i = 0; i < student_1.classes.size(); i++)
  {
    for (int j = 0; j < student_2.classes.size(); j++)
    {
      if (student_1.classes.at(i) == student_2.classes.at(j))
      {
        cout << student_1.classes.at(i) << " at " << student_1.name << " is similar to " << student_2.classes.at(j) << " at " << student_2.name << endl;
      }
    }
  }
}

int main()
{

  school mahrosa;

  mahrosa.school_name = "Mahrosa international school";
  mahrosa.principle = "Mohamed Mahros";
  mahrosa.student_number = 1500;
  mahrosa.teachers_number = 50;
  mahrosa.classes_number = 44;

  classroom computer_science;

  computer_science.class_name = "Computer_science with Sohad";
  computer_science.student_number = 32;
  computer_science.teacher = "Sohad";

  student mahmood;

  mahmood.name = "Mahmood";
  mahmood.surname = "Magdy";
  mahmood.age = 15;
  mahmood.id_number = 4;
  mahmood.grade = 9;
  mahmood.classes = {"computer_science", "maths", "english"};

  student aser;

  aser.name = "Aser";
  aser.surname = "";
  aser.age = 15;
  aser.id_number = 4;
  aser.grade = 9;
  aser.classes = {"arabic", "computer_science", "french"};

  find_similar(mahmood, aser);
  return 0;
}

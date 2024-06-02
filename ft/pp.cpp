#include<iostream>
#include<string.h>

using namespace  std;





struct CourseRegistration {
  string courseCode;
  string courseTitle;
  int CreditHours;
  char Section;
};

struct SemesterRegistration {
  string semesterCode;
  CourseRegistration course_reg[5];
};


int SemesterRegistration::GetCreditHoursCount() {
  int count = 0;
  for (int i = 0; i < 5; i++) {
    count += course_reg[i].CreditHours;
  }
  return count;
}


bool SemesterRegistration::FindCourseInSemesterRegistration(string courseCode) {
  for (int i = 0; i < 5; i++) {
    if (course_reg[i].courseCode == courseCode) {
      return true;
    }
  }
  return false;
}
#include <string>

struct Student {
    std::string name;
    std::string roll_no;
    int age;
};

B. Implementation of the function "getNames":

c++

#include <string>

std::string* getNames(Student* std, int s) {
    int count = 0;
    for (int i = 0; i < s; i++) {
        if (std[i].age == 18) {
            count++;
        }
    }

    std::string* names = new std::string[count];
    int j = 0;
    for (int i = 0; i < s; i++) {
        if (std[i].age == 18) {
            names[j] = std[i].name;
            j++;
        }
    }

    return names;
}

C. Implementation of the function "getEvenRollno":

c++

#include <string>

Student* getEvenRollno(Student* std, int s) {
    int count = 0;
    for (int i = 0; i < s; i++) {
        int last_digit = std[i].roll_no[std[i].roll_no.length() - 1] - '0';
        if (last_digit % 2 == 0) {
            count++;
        }
    }

    Student* even_rollno_students = new Student[count];
    int j = 0;
    for (int i = 0; i < s; i++) {
        int last_digit = std[i].roll_no[std[i].roll_no.length() - 1] - '0';
        if (last_digit % 2 == 0) {
            even_rollno_students[j] = std[i];
            j++;
        }
    }

    return even_rollno_students;
}
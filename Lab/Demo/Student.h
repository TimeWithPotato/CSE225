#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

struct Student {
    int id;
    int semester;
    std::string name;
    std::string department;
    std::string email;
    double cgpa;
    int credit;

    Student(int _id, int _semester, const std::string& _name, const std::string& _dept,
            const std::string& _email, double _cgpa, int _credit)
        : id(_id), semester(_semester), name(_name), department(_dept), email(_email),
          cgpa(_cgpa), credit(_credit) {}

    // Define operator overloading to compare by ID.
    bool operator<(const Student& other) const {
        return id < other.id;
    }

    bool operator==(const Student& other) const {
        return id == other.id;
    }
};

std::ostream& operator<<(std::ostream& os, const Student& student) {
    os << "ID: " << student.id << " | Name: " << student.name
       << " | Semester: " << student.semester
       << " | Department: " << student.department
       << " | Email: " << student.email
       << " | CGPA: " << student.cgpa
       << " | Credit Hours: " << student.credit;
    return os;
}

#endif

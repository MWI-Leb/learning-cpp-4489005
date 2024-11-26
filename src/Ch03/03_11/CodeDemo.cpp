// Learning C++ 
// Challenge 03_11
// Create some classes, by Eduardo Corpeño 

#include <iostream>
#include "records.h"


class student{
public:
    student(std::string name_i, int id_i){
        name = name_i;
        id = id_i;
    }
    std:: string get_name()const{
        return name;
    }
    int get_id()const{
        return id;
    }

private:
    std::string name;
    int id;
    

};

class course{
 course(std::string name_i, int id_i, int credits_i){
        name = name_i;
        id = id_i;
        credits = credits_i;
    }
    std:: string get_name()const{
        return name;
    }
    int get_id()const{
        return id;
    }
    int get_credits()const{
        return credits;
    }

private:
    std::string name;
    int id;
    int credits;

};

class grades{
   grades(int student_id_i, int course_id_i, char grade_i){
        student_id = student_id_i;
        course_id = course_id_i;
        grade = grade_i;
    }
    int get_student_id()const{
        return student_id;
    }
    int get_course_id()const{
        return course_id;
    }
    char get_grade()const{
        return grade;
    }

private:
    int student_id;
    int course_id;
    char grade;

};


int main(){
    Student my_student(1, "Hilda Jones");
    Course my_course(7, "Physics 101", 4);
    Grade my_grade(1, 7, 'B');

    std::cout << "Student: " << my_student.get_name() << std::endl;
    std::cout << "Course: " << my_course.get_name() << std::endl;
    std::cout << "Credits: " << my_course.get_credits() << std::endl;
    std::cout << "Grade: " << my_grade.get_grade() << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}

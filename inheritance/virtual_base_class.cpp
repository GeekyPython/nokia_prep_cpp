#include<iostream>
using namespace std;

class Student
{
    protected:
        int roll_number;
    
    public:
        void get_number(int a)
        {
            roll_number = a;
        }

        void put_number()
        {
            cout<<"Roll No: "<<roll_number<<endl;
        }
};

class Test : public virtual Student
{
    protected:
        float part1, part2;
    
    public:
        void get_marks(float x, float y)
        {
            part1 = x;
            part2 = y;
        }

        void put_marks()
        {
            cout<<"Marks Obtained:\nPart 1: "<<part1<<endl<<"Part 2: "<<part2<<endl;
        }
};

class Sports : public virtual Student
{
    protected:
        float score;
    
    public:
        void get_score(float s)
        {
            score = s;
        }

        void put_score()
        {
            cout<<"Score: "<<score<<endl;
        }
};

class Result : public Test, public Sports
{
    float total;

    public:
        void display();
};

void Result::display()
{
    total = part1+part2+score;
    put_number();
    put_marks();
    put_score();

    cout<<"Total Score: "<<total<<endl;
}

int main()
{
    Result student;
    student.get_number(122);
    student.get_marks(75.3, 82.5);
    student.get_score(96.6);
    student.display();

    return 0;
}
#include <iostream>
using std::string;

class Employee
{
    private:
    string Name;
    string Company;
    int Age;
    public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        if(age>=18)
        Age = age;       
    }
    int getAge()
    {
        return Age;
    }
    void IntroduceYourself()
    {
        std::cout <<"Name:- " << Name << std::ends;
        std::cout <<"Company:- " << Company << std::ends;
        std::cout <<"Age:- " << Age << std::ends; 
    }
    Employee(string name,string company,int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};
int main()
{
    Employee employee1 = Employee("Bhabesh","Microsoft",25);
    employee1.IntroduceYourself();
    Employee employee2 = Employee("Ritesh","IBM",24);
    employee2.IntroduceYourself();

    employee1.setAge(15);
    std::cout << employee1.getName() << "is" << employee1.getAge() << "years old" <<std::ends;
}
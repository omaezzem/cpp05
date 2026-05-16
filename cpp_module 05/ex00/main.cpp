#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("omar", 151);
        b.incrementgrade();
        b.incrementgrade();
        std::cout << b.get_grade() << std::endl;
    }
    catch(Bureaucrat::GradeTooHightException &b)
    {
        std::cout << "Exception : grade is too hight \n";
    }
    catch(Bureaucrat::GradeTooLowException &b)
    {
        std::cout << "Exception : grade is too low \n";
    }
}

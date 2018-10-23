#include <iostream>
#include <string>
#include <vector>
#include <sstream>

std::vector<std::string> explode(const std::string& string, char delimiter)
{
    std::vector<std::string> result;
    std::istringstream iss(string);

    std::string token;
    while (std::getline(iss, token, delimiter))
    {
        result.push_back(token);
    }
    
    return std::move(result);
}

std::string initials(const std::vector<std::string>& vector)
{
    std::string result;

    for (auto& element : vector)
    {
        result += element[0];
        result += ". ";
    }

    return std::move(result);
}

std::string nameInitials(const std::string& name)
{
    return initials(explode(name, ' '));
}

int main()
{
    std::cout << "Podaj imię (imiona) i nazwisko: ";
    std::string name;
    std::getline(std::cin, name);
    
    std::cout << "Twoje inicjały to " << nameInitials(name) << '\n';
}

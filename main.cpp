#include <iostream>
#include <vector>
//www.codewars.com/kata/5266876b8f4bf2da9b000362/cpp

std::string likes(const std::vector<std::string> &names)
{
  switch(names.size()){
      case 0: return "no one likes this";
      case 1: return names[0] + "likes this";
      case 2: return names[0] + "and" + names[1] + "like this";
      case 3: return names[0] + ", " + names[1] + "and" + names[2] + "like this";
      default: return names[0] + ", " + names[1] + "and" + std::to_string(names.size() - 2) + "others like this";
  }
}

int main() {
    std::vector<std::string> name0;
    std::vector<std::string> name1 = {"Peter", "Alex"};
    std::vector<std::string> name2 = {"Mark", "Taylor", "Sasha"};
    std::vector<std::string> name3 = {"William", "Karen", "Toby"};
    std::vector<std::string> name4 = {"Peter", "Miriam", "Jacob", "Kristen"};

    likes(name0);
    likes(name1);
    likes(name2);
    likes(name3);
    likes(name4);

    return 0;
}

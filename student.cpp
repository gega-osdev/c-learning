#include <iostream>
#include <string>

int main(void)
{
	class student {
		public:
		 int age;
		std:: string name;
		 float gpa;
		 float height;
	};

	student stObj;

	stObj.age = 20;
	stObj.name = "beka";
	stObj.gpa = 3.96;
	stObj.height = 185;

    std::cout << stObj.age << std::endl;
    std::cout << stObj.name << std::endl;
    std::cout << stObj.gpa << std::endl;
    std::cout << stObj.height << std::endl;

    return 0;
	
}

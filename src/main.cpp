#include <iostream>
#include <cpr/cpr.h>

int main()
{
	std::string command;
	cpr::Response r;
	while (true)
	{
		std::cout << "Commands: \nGet\nPost\nDelete\nPatch\nExit\n Enter the command:  " << std::endl;
		std::cin >> command;
		if (command == "Get" || command == "get")
		{
			r = cpr::Get(cpr::Url("http://httpbin.org/get"));
			std::cout << r.text << std::endl;
		}
		else if (command == "Post" || command == "post")
		{
			r = cpr::Post(cpr::Url("http://httpbin.org/post"));
			std::cout << r.text << std::endl;
		}
		else if (command == "Delete" || command == "delete")
		{
			r = cpr::Post(cpr::Url("http://httpbin.org/delete"));
			std::cout << r.text << std::endl;
		}
		else if (command == "Patch" || command == "patch")
		{
			r = cpr::Post(cpr::Url("http://httpbin.org/patch"));
			std::cout << r.text << std::endl;
		}
		else if (command == "Exit" || command == "exit") return 0;
		else
			std::cerr << "Error! Incorrect input command. Try again. " << std::endl;
	}

	return 0;
}
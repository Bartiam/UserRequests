#include <iostream>
#include <cpr/cpr.h>

int main()
{
	std::string command;
	std::string site = "http://httpbin.org";
	while (true)
	{
		std::cout << "Commands: \nGet\nPost\nPut\nDelete\nPatch\nExit\n Enter the command:  " << std::endl;
		std::cin >> command;
		if (command == "Get" || command == "get")
			std::cout << cpr::Get(cpr::Url(site + "/get")).text << std::endl;
		else if (command == "Post" || command == "post")
			std::cout << cpr::Post(cpr::Url(site + "/post")).text << std::endl;
		else if (command == "Put" || command == "put")
			std::cout << cpr::Put(cpr::Url(site + "/put")).text << std::endl;
		else if (command == "Delete" || command == "delete")
			std::cout << cpr::Delete(cpr::Url(site + "/delete")).text << std::endl;
		else if (command == "Patch" || command == "patch")
			std::cout << cpr::Patch(cpr::Url(site + "/patch")).text << std::endl;
		else if (command == "Exit" || command == "exit") return 0;
		else
			std::cerr << "Error! Incorrect input command. Try again. " << std::endl;
	}

	return 0;
}
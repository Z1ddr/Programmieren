#include <iostream>
#include <string>

void func(std::string& s) // modifiable L-Value-Reference
{
	std::cout << "mlvRef" << '\n';
}

void func(const std::string& s) // non-modifiable L-Value-Reference
{
	std::cout << "nmlvRef" << '\n';
}

void func(std::string&& s) // R-Value-Reference
{
	std::cout << "rvRef" << '\n';
}

int main()
{
	std::string s1 { "Hallo" };
	const std::string s2 { "Kempten" };
	const char* s3 { "Amogus" };

	func(s1);
	func(s2);
	func(s1 + s2);
	func(s3);
	func(std::string("Bla"));
	func("Blub");
}
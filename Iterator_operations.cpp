#include <iostream>
#include <iterator>
#include <vector>

int main()
{
	std::vector<int> v{ 3, 1, 4 };

	auto vi = v.begin();
	std::advance(vi, 2);//vi增加两个步长
	std::cout << *vi << ' ';//4

	vi = v.end();
	//std::cout << *vi << '\n';
	std::advance(vi, -2);//迭代器自减1,最后一位在4后面，无返回值，改变迭代器vi的值
	std::cout << *vi << '\n';


	std::cout << "distance(first, last) = "
		<< std::distance(v.begin(), v.end()) << '\n'
		<< "distance(last, first) = "
		<< std::distance(v.end(), v.begin()) << '\n';//返回从 first 到 last 的路程


	auto it = v.begin();
	auto nx = std::next(it, 2);//有返回值，不改变迭代器it的值
	std::cout << *it << ' ' << *nx << '\n';

	it = v.end();
	nx = std::next(it, -2);
	std::cout << ' ' << *nx << '\n';


}

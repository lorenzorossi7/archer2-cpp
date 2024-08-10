#include "map_ex.hpp"

bool AddWord(std::map<std::string,int> a_map, const std::string & str){
	auto ind=a_map.find(str);

	if (ind==a_map.end()) {
		a_map[str]=str.size();
		return true;
	}
	else {
		return false;
	}
}

#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include <algorithm>

int main(int argc, char** argv){
	if (argc == 4){
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		int pos = s2.find(s1, 0);
		if (pos >= 0){
			std::cout << "Error: \"" << s2 <<"\" consists \"" << s1 << "\"" << std::endl;
			return (0);
		}
		std::ifstream file;
  		file.open(argv[1]);
		if (file == 0){
			std::cout << "Error: file \"" << argv[1] << "\" doesn't exist" << std::endl;
			return (0);
		}
		std::string s = argv[1];
		s += ".replace";
		std::ofstream replica;
		replica.open(s);
		std::string sfile;
		while (!file.eof()){
			std::getline(file, s);
			sfile.append(s);
			if (!file.eof()){
				sfile.append("\n");
			}
		}
		file.close();
		pos = sfile.find(s1, 0);
		int end = sfile.rfind(s1);
		if (pos >= 0){
			sfile.erase(pos, s1.length());
			sfile.insert(pos, s2);
			end += s2.length();
			end -= s1.length();
			while (true){
				if (pos == end)
					break ;
				pos = sfile.find(s1, pos+1);
				if (pos < 0)
					break ;
				sfile.erase(pos, s1.length());
				sfile.insert(pos, s2);
				end += s2.length();
				end -= s1.length();
			}
		}
		replica << sfile;
		replica.close();
	}
	else
		std::cout << "Error: Wrong number of arguments" << std::endl;
	return (0);
}

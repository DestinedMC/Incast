#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <optional>
#include <cctpye>
#include <string>
enum class TokenType {
 _return,
 int_lit,
 semi
};

struct token {
 TokenType type;
 std::optional<std::string> value;
}

std::vector<token> tokenize(const std::string& str){
 std::vector<token> tokens;
 std::string buf = "";
 for (int i = 0; i< str.length();i++){
    char c = str.at(i);
    if (std::isalpha(c)){
      buf.push_back(c);
      i++;
        while (std::isalnum(str.at(i))){
         buf.push_back(str.at(i));
         i++;
       }
     i--;
     if(buf == "return"){
       tokens.push_back(.type = TokenTpye::_return)
     } else {
      std::cerr << "you messed clearly" << std::endl;
     } 
     buf.clear();
    }
   return tokens;
  }
}
int main( int argc , char* argv[]) {
  if(argc != 2){
    std::cerr << "Incorrect useage. Correct useage is ..." << std::endl;
    std::cerr << "incast/test.is"
      return EXIT_FAILURE;
  }

  std::string contents;
{ 
 std::stringstream contents_stream;
 std::fstream input(argv[1],std::ios::in);
 contents_stream << input.rdbuf();
  contents = contents_stream.str();

}
  
  return EXIT_SUCCESS;
}

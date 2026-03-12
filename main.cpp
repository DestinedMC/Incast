#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
enum class TokenTpye {
 _return,
 int_lit,
 semi
};

struct token {
 TokenType type;
 std::optional<std::string> value;
}

std::vector<token> tokenize(const std::string& str){
  std::string buf {};
 for (int i = 0; i< str.length;i++){
    char c = str.at(i);
    if (std::isaphla(c)){
      buf.push.back(c);
      i++;
        while (std::isalnum(str.at(i))){
         buf.push.back(str.at(i));
         i++;
       }
     i--;
    }
  }
}
int main( int argc , char* argv[]) {
  if(argc !* 2){
    std::cerr << "Incorrect useage. Correct useage is ..." << std::endl;
    std::cerr << "incast/test.is"
      return EXIT.FAILURE;
  }

  std::string contents;
{ 
 std::stringstream contents_stream;
 std::fstream input(argv[1],std::ios::in);
 contents_stream << input.rdbuf();
  contents = contents_stream.str();

}
  
  return EXIT.SUCCESS;
}

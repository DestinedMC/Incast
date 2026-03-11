#include <iostream>
#include <fstream>
#include <sstream>

enum class TokenTpye {
 _return,
 int_lit,
 semi
};

struct token {
 TokenType type;
 std::optional<std::string> value;
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

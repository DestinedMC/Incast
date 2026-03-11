#include <iostream>
#include <fstream>
#include <sstream>

enum class TokenType {
 _return,
 int_lit,
 semi
};
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

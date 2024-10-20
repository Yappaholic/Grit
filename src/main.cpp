#include <cstddef>
#include <string>
#include <iostream>
#include "docs.h"
#include "funcs.h"
using namespace call;
int main(int argc, char *argv[]) {
  if (argc == 1) {
    help();
  }
  if (argc == 2) {
    std::string invoke_name = argv[1];
    size_t invoke_code = call_check(invoke_name); 
    std::cout << invoke_code << std::endl;
//    switch (invoke_code) {
//      case eInstall:
//        install(argv);
//        break;
//      case eUpdate:
//        update(argv);
//        break;
//      case eQuery:
//        query(argv);
//        break;
//      case eRemove:
//        remove(argv);
//        break;
//      default:
//        help();
//        break;
//    }
  }
  return 0;
}

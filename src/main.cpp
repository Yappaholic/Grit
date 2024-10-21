#include <cstddef>
#include <string>
#include "docs.h"
#include "funcs.h"
using namespace call;
int main(int argc, char *argv[]) {
  if (argc == 1) {
    help();
  }
  if (argc > 1) {
    std::string invoke_name = argv[1];
    int invoke_code = call_check(invoke_name); 
    switch (invoke_code) {
      case eInstall:
        install(argc, argv);
        break;
//      case eUpdate:
//        update(argv);
//        break;
//      case eQuery:
//        query(argv);
//        break;
//      case eRemove:
//        remove(argv);
//        break;
      default:
        help();
        break;
    }
  }
  return 0;
}

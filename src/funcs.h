#include <string>
#ifndef FUNCS_H
#define FUNCS_H
namespace call {
  // call codes for the switch statement
  enum call_code {
    eInstall,
    eUpdate,
    eQuery,
    eRemove,
    eDefault
  };
}
// Check the invoking call and return the call code
call::call_code call_check (std::string const& call);
int install(int argc, char *argv[]);
int read_config(char *name);
#endif

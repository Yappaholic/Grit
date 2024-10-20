#include <string>
#include "funcs.h"
using namespace call;
call_code call_check (std::string const& call) {
  if (call == "i") return eInstall;
  if (call == "u") return eUpdate;
  if (call == "q") return eQuery;
  if (call == "r") return eRemove;
  else return eDefault;
};

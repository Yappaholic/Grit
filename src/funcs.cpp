#include <string>
#include <iostream>
#include <regex>
#include <format>
#include <stdlib.h>
#include <fstream>
#include "funcs.h"
#include "docs.h"
using namespace call;
call_code call_check (std::string const& call) {
  if (call == "i") return eInstall;
  if (call == "u") return eUpdate;
  if (call == "q") return eQuery;
  if (call == "r") return eRemove;
  else return eDefault;
};

int read_config(char *name) {
  putenv((char *) "GRIT_PATH=/home/savvy/db");
  std::string path = getenv("GRIT_PATH");
  std::string package_path = std::format("{}/{}/{}.grit", path, name, name);
  std::printf("Reading file: %s\n", package_path.c_str());
  std::ifstream config;
  config.open(package_path);
  if (config.is_open()) {
    char config_string;
    while(config) {
      config_string = config.get();

      std::cout << config_string;
    }
  }
  config.close();
  return 0;
}

int install (int argc, char *argv[]) {
  if (argc == 2) {
    help_install();
  } else {
    read_config(argv[2]);
  };
  return 0;
}

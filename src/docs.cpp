#include <cstdio>
#include "docs.h"
void help() {
    std:printf(
    " Grit: Cave linux package manager\n"
    "----------------------------------- \n"
    " Usage:\n"
    "\n"
    " i - Install a package\n"
    " u - Update a package\n"
    " q - Search a package\n"
    " r - Remove a package\n");
}

void help_install() {
  std::printf(
  " grit i: Install a package in the available grit repository\n" 
  );
}

#include "util.h"

#include <string>
#include <vector>

using std::string;
using std::vector;

namespace {
struct metadata_internal {
  string name;
};

// Check in C++ that does the "real" work.
int Check(vector<string> v, metadata_internal m) {
  for (auto& i : v) {
    printf("str: %s\n", i.c_str());
  }
  printf("name: %s\n", m.name.c_str());
  return 0;
}
}  // namespace

int go_Check(char* s, metadata m) {
  vector<string> v = {s};
  metadata_internal mi;
  mi.name = string(m.name);
  return Check(v, mi);
}

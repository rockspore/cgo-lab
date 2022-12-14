#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char* name;
} metadata;

#ifdef __cplusplus
extern "C" {
#endif
// Wrapper function in C to perform checks.
int go_Check(char*, metadata);
#ifdef __cplusplus
}
#endif
#include <cstdarg>
#include <cstdint>
#include <cstdlib>
#include <ostream>
#include <new>

extern "C" {

intptr_t add(intptr_t left, intptr_t right);

void hello_from_rust();

} // extern "C"

// RAM --- Random Access Memory
// HDD, SSD

// main.cpp -> ... -> main.s -> ... -> a.out

// - Static - consists of assembler sections (named blocks of memory):
//   - .text - compiled machine instructions for functions
//   - .data - global and static variables with nonzero constant initial values
//   - .rodata - string literals and some global constants
//   - .bss - global and static variables initially containing zeros
//   - ...others...
// - Stack (automatic memory) - ordinary 8 MB
//   - local variables
//   - local arrays
//   - function arguments
//   - return addresses
// - Dynamic (heap) - all memory allocated with 'new'

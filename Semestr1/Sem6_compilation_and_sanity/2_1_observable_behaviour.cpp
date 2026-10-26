// clang-format off

// https://en.cppreference.com/w/cpp/language/ub.html

// Types of observable behavior of every C++ program:

// - Ill-formed
//       The program has syntax errors or diagnosable semantic errors (CE).
// - Ill-formed, no diagnostic required (IFNDR)
//       The program has semantic errors, but compiler is not responsible to show and even check them.
// - Implementation-defined behavior
//       Each implementation must document its effects.
//       e.g. the number of bits in a byte.
// - Unspecified Behavior
//       Implementation may not document its effects.
//       e.g. order of evaluation, whether identical string literals are distinct, the amount of array allocation overhead.
// - Undefined Behaviour (UB)
//       No restrictions on the behavior of the program.

// clang-format on

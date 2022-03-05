# program-analysis

playground for static analysis and dynamic analysis: valgrind, sanitizer, profiling.

# description

This project explores how to use the dynamic analysis tools.

There are two dynamic analysis tools considered in this
project: [(Google) Sanitizers](https://github.com/google/sanitizers) and [Valgrind](https://valgrind.org/).

## Sanitizers
[Sanitizer](https://github.com/google/sanitizers.git) is a tool used to perform dynamic analysis of cpp code. It can be used to detect problems including illegal memory read or write, use of uninitialized values, thread race etc. It is designed by google.

There are four types of sanitizers:
- `AddressSanitizer` (ASan)
- `MemorySanitizer` (MSan)
- `ThreadSanitizer` (TSan)
- `UndefinedBehaviorSanitizer` (UBSan)

Difference between `ASan` and `MSan`: `ASan` detects *memory errors*, while `MSan` detects memory leaks.
`ASan` is not available on MacOS. Run `valgrind` instead.

## Valgrind

[Valgrind](https://valgrind.org/).

Important: 
- first line name, 
- second line type, `memcheck:cond` or `memcheck:value8`, 
- remaining line: `fun:mangled names`
- stop when do not match. So, head must be contained. Can use `...` to skip lines. Tail can be dropped for wild match.

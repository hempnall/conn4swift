# Connect 4 Swift Wrapper

This repository is a swift wrapper around a previously written Connect 4 Library

# Testing

The test suite is mainly testing whether the Board can be marshaled to the C++ code and a sensible move is chosen.

```
$ swift test
Compile Swift Module 'conn4' (1 sources)
Compile Swift Module 'conn4Tests' (2 sources)
Linking ./.build/x86_64-apple-macosx10.10/debug/conn4PackageTests.xctest/Contents/MacOS/conn4PackageTests
Test Suite 'All tests' started at 2018-09-17 19:09:56.489
Test Suite 'conn4PackageTests.xctest' started at 2018-09-17 19:09:56.489
Test Suite 'conn4Tests' started at 2018-09-17 19:09:56.489
...
Test Suite 'All tests' passed at 2018-09-17 19:09:56.664.
         Executed 1 test, with 0 failures (0 unexpected) in 0.175 (0.176) seconds
```

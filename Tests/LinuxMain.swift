import XCTest

import conn4Tests

var tests = [XCTestCaseEntry]()
tests += conn4Tests.allTests()
XCTMain(tests)
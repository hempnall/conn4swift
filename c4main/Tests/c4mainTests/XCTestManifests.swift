import XCTest

#if !os(macOS)
public func allTests() -> [XCTestCaseEntry] {
    return [
        testCase(c4mainTests.allTests),
    ]
}
#endif
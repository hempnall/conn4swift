import XCTest
@testable import conn4

final class conn4Tests: XCTestCase {
    func testExample() {
        // This is an example of a functional test case.
        // Use XCTAssert and related functions to verify your tests produce the correct
        // results.
        // XCTAssertEqual(conn4().text, "Hello, World!")

    }

    func testAdd() {
      //  conn4().add( x: 123 , y : 132)
      //  XCTAssertEqual( conn4().add( x:67 , y:33 ) , 33)
    }

    static var allTests = [
        ("testExample", testExample),
        ("testAdd", testAdd)
    ]
}

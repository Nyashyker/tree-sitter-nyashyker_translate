import XCTest
import SwiftTreeSitter
import TreeSitterNyashykerTranslate

final class TreeSitterNyashykerTranslateTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_nyashyker_translate())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading NyashykerTranslate grammar")
    }
}

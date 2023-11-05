#include <iostream>
#include <exception>

#include "frontend/calcLexer.h"
#include "frontend/calcParser.h"


using namespace antlr4;
using namespace std;

// struct ErrorListener : public antlr4::BaseErrorListener {
//   virtual void syntaxError(antlr4::Recognizer *, antlr4::Token *, size_t line,
//                            size_t pos, const string &err_msg,
//                            std::exception_ptr) override {
//     auto msg = "line " + to_string(line) + ":" + to_string(pos) + " " + err_msg;
//     throw antlr4::ParseCancellationException(msg);
//   }
// };

// std::istream& gen_input(int argc, char* argv[]) {
//   for(int i = 1; i < argc; ) {
//     auto const arg = std::string_view{argv[i]};
//     if (arg == "-o") {
//       i += 2;
//     } else if (!arg.empty() && arg.front() == '-') {
//       ++i;
//     } else {
//       static std::ifstream ifs;
//       ifs.open(argv[i]);
//       return ifs;
//     }
//   }
//   return std::cin;
// }

int main(int argc, char* argv[]) {
    //auto &inp = gen_input(argc, argv);
    //ErrorListener error_listener;
    //ANTLRInputStream input(inp);
    string input("1919 * 810\n123.456 - 654.321\n4. * .6\n1 + 1 * 4\n(5 - 1) * 4\n");
    try
    {
        ANTLRInputStream inputStream(input);
        calcLexer lexer(&inputStream);
        // lexer.removeErrorListeners();
        // lexer.addErrorListener(&error_listener);

        CommonTokenStream tokens(&lexer);
        calcParser parser(&tokens);
        // parser.removeErrorListeners();
        // parser.addErrorListener(&error_listener);

        tree::ParseTree* tree = parser.calculator();

        cout << tree->toStringTree(&parser) << endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
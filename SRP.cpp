#include <iostream>
#include <string>

using string = std::string;

class Book final {
    
    string title;
    string author;

public:
    
    Book(string title, string author) 
        : title{ title }, author{ author }
    {}

    string get_title() {
        return title;
    }

    string get_author() {
        return author;
    }

    string get_current_page_content() {
        return "Hoy murio mi madre...";
    }

};

class Printer {
public:
    virtual ~Printer() = default;
    virtual void print(string) = 0;
};

class StandardOutputPrinter final : public Printer {
public:
    void print(string content) override {
        std::cout << content;
    }
};

class StandardOutputHtmlPrinter final : public Printer {
public:
    void print(string content) override {
        std::cout << "<div>" << content << "</div>";
    }
};

class Client final {
public:
    Client(Book& book, Printer& printer) {
        string content = book.get_current_page_content();
        printer.print(content);
    }
};

int main() {
    Book libro{"El Extranjero", "Albert Camus"};
    StandardOutputPrinter printer{};
    Client client{ libro, printer };
}

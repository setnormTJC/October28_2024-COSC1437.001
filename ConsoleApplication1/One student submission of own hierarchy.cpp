//
//  main.cpp
//  Coming up with own class hierachy
//
//  Created by Yomarth Rios on 10/27/24.
//

#include <iostream>
#include <vector>
#include <string>

class book
{
protected:
    std::string title;
    std::string author;

public:
    book(const std::string& title, const std::string& author)
        :title(title), author(author) {}
    virtual std::string getDescription()
    {
        return "Title: " + title + "Author: " + author;
    }
    virtual ~book() {}
};

class eBook : public book
{
private:
    double fileSize;
    std::string format;

public:
    eBook(const std::string& title, const std::string& author, double fileSize, const std::string& format)
        :book(title, author), fileSize(fileSize), format(format) {}

    std::string getDescription() override
    {
        return "E-Book - " + book::getDescription() + ", File Size: " + std::to_string(fileSize) + "MB, Format: " + format;
    }
};

class printedBook : public book
{
private:
    int pageCount;
    double weight;

public:
    printedBook(const std::string& title, const std::string& author, int pageCount, double weight)
        :book(title, author), pageCount(pageCount), weight(weight) {}

    std::string getDescription() override
    {
        return "Printed book - " + book::getDescription() + ", Page count: " + std::to_string(pageCount) + ", Weight: " + std::to_string(weight) + " kg";
    }
};

class library
{
private:
    std::string name;
    std::vector<book*> books;

public:
    library(const std::string& name) : name(name) {}
    void addBook(book* book)
    {
        books.push_back(book);
    }

    void showBooks()
    {
        std::cout << "Books in " << name;
        for (book* book : books)
        {
            std::cout << book->getDescription();
            std::cout << std::endl;
        }
    }

    ~library()
    {
        for (book* book : books)
        {
            delete book;
        }
    }
};

int main()
{
    library myLibrary("City Library");

    book* eBook1 = new eBook("The great Gatsby", "F.Scott Fitzgerald", 1.5, "PDF");
    book* printedBook1 = new printedBook("Moby dick", "Herman Melville", 635, 0.8);
    book* eBook2 = new eBook("Holly", "Stephen King", 1.5, "PDF");
    book* printedBook2 = new printedBook("To kill a mockingbird", "Harper lee", 281, 0.5);

    myLibrary.addBook(eBook1);

    myLibrary.addBook(printedBook1);

    myLibrary.addBook(eBook2);

    myLibrary.addBook(printedBook2);

    myLibrary.showBooks();

    return 0;
}

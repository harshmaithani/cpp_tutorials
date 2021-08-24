#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

class Books
{
private:

public:
    Books();
    Books(std::string a, std::string b, int c): name(a),author(b),price(c){};
    ~Books();

    std::string name;
    std::string author;
    int price;
    int id;

    int getPrice();
    void setPrice(float x);
    void printPrice();
    void printAuthor();
};

Books::Books()      // Default constructor
{   std::cout << "Object constructed" << std::endl; }

Books::~Books()        
{   std::cout << "Object destructed" << std::endl;  }

int Books::getPrice()
{   return price;   }

void Books::printPrice()
{   std::cout << "Price of the book is " << price << std::endl;     }

void Books::setPrice(float x)
{   price = x;  }

void Books::printAuthor()
{   std::cout <<"Name of the author is " << author << std::endl;    }

void printBookDetails(Books book)               // Pass book class as argument
{
    std::cout << "Name:   " << book.name;
    std::cout << "Author: " << book.author;
}

void printBookDetail(Books* book)               // Pass book class as pointer
{
    std::cout << "Name:   " << book->name;
    std::cout << "Author: " << book->author;
}

Books addBooks(Books book)                      // Return book class
{
    Books book2;
    book2.name      = book.name;
    book2.author    = book.author;
    book2.price     = book.price;
    return book2;
}

class FictionBooks  :   public Books
{
    public:
        FictionBooks();
        ~FictionBooks();
        std::string genre;
};


class Shape
{
    public:
        double  area1();                            // Normal function
        virtual double area();                      // Virtual function.        Can exist in derived class.
        virtual double perimeter() = 0 ;            // Pure virtual function.   Must exist in derived class.
        virtual double perimeter2() const = 0 ;     // Pure virtual function.   Must exist in derived class.
        int friendofA();
};

class Circle: public Shape
{
    public:
        Circle(float r) : radius(r){};
        double area1();                             // Normal function. Base-class function will be used
        double area();                              // Derived class function will be used. Ok, if this does not exist here.
        double perimeter();                         // Must exist in derived class.
        double perimeter2() const override ;        // Must exist in derived class. Override word is helpful for communication.
    private:
        float radius;
};

class A                                             // Demonstrating inheritance
{
    public:
        int x;
    protected:
        int y;
    private:
        int z;
    friend class Shape;                             // Shape is a friend class of A
    friend int friendofA();                         // friendofA() is a friend function 
};

class B : public A                                  // Base class inherits full object, access gets changed
{   // x is public
    // y is protected
    // z is not accessible
};

class C : protected A
{   // x is protected
    // y is protected
    // z is not accessible
};

class D : private A
{   // x is private
    // y is private
    // z is not accessible
};

int main()
{
    std::cout << "Classes" << std::endl;

    Books book1;

}
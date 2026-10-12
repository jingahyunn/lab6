#pragma once
#include "book.h"

namespace jingahyun2693303
{
    class bookStore
    {
        //private
        book b;
        bool availabe;
        
        public:
            bookStore(book b0 = book{1,0}, bool a0 = false)
                :b{b0},availabe{a0}{}
            //bookStore{int d = 1, int p = 0, bool a = false}
                //:b{d,p},availabe{a}{}
            void print() const //bookStore::print()
            {
                b.print(); //book::print() - id, price
                if (availabe) std::cout << "availabe\n";
                else std::cout << "NOT availabe\n";
            }
            const book& getBook() const { return b; }
            void setBook(const book& b0) { b = b0; }

    };
}
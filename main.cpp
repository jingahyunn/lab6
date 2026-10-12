#include "book.h"
#include <array>

namespace jingahyun2693303
{
    void printBookArray(const book a[], const int n)
    {
        //for구문 이용하여 배열원소를 하나씩 표준 스트림으로
        for (int i = 0; i < n; ++i)
            std::cout << a[i];
        std::cout << std::ends;
        //출력연산자를 이용해 출력하세요
    }
}
int main()
{
    const int n{4};
    using namespace jingahyun2693303;
    book a[n];
    a[0] = book{"C++ programming", 1, 30000}; //a[0].print();
    a[1].setTitle("C programming");a[1].setID(2); a[1].setPrice(20000);
    a[2].input();
    std::cin >> a[3];
    printBookArray(a, n);

    std::array<book, n> arr;
    for (int i=0; i<arr.size(); ++i)
        arr.at(i) = a[i];//arr[i] = a[i];
    for (const auto& arri : arr)
        arri.print();

    return 0;
}
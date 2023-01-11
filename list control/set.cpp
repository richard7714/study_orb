#define SET // 이 줄을 지우고 사용
#ifndef SET

#include <iostream>
#include <set>
#include <vector>

template <typename T>
void print_set(std::set<T>& s) {
    // 셋의 모든 원소들을 출력하기
    std::cout <<"[ ";
    for (typename std::set<T>::iterator itr = s.begin(); itr != s.end(); ++itr) {
        std::cout << *itr << " ";
    }
    std::cout << " ] " << std::endl;
}

int main() {
    std::set<int *> s;
    int *a = new int;
    int *b = new int;
    int *c = new int;
    *a = 10;
    *b = 20;
    *c = 30;
    s.insert(a);
    s.insert(b);
    s.insert(c);
//    s.insert(10);
//    s.insert(50);
//    s.insert(20);
//    s.insert(40);
//    s.insert(30);

    std::vector<int *> t(s.begin(), s.end());

    std::cout << "a" << std::endl;
}
//    std::cout << "순서대로 정렬되서 나온다" << std::endl;
//    print_set(s);
//
//    std::cout << "20 이 s 의 원소인가요? :: ";
//    auto itr = s.find(20);
//    if (itr != s.end()) {
//        std::cout << "Yes" << std::endl;
//    } else {
//        std::cout << "No" << std::endl;
//    }
//
//    std::cout << "25 가 s 의 원소인가요? :: ";
//    itr = s.find(25);
//    if (itr != s.end()) {
//        std::cout << "Yes" << std::endl;
//    } else {
//        std::cout << "No" << std::endl;
//    }
//}
#endif
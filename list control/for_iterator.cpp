
#define for_it
#ifndef for_it

// https://blockdmask.tistory.com/76

#include <iostream>
#include <list>

using namespace std;

// 100과 200 사이이면 true
bool predicate(int num) {
    return num>=100&& num<=200;
}

int main(void)
{
    list<int> lt;

    lt.push_back(10);
    lt.push_back(20);
    lt.push_back(108);
    lt.push_back(60);
    lt.push_back(10);
    lt.push_back(100);
    lt.push_back(40);
    lt.push_back(50);
    lt.push_back(10);
    lt.push_back(109);
    lt.push_back(30);
    lt.push_back(220);
    lt.push_back(10);

    list<int>::iterator iter;

    cout << "orign) ";

    for(list<int>::iterator iter = lt.begin(); iter!= lt.end(); iter++){
        cout << *iter << " ";
    }
    cout << endl << endl;

    //predicate 함수가 참이면 remove 한다.
    //100~200 사이 원소 제거
    lt.remove_if(predicate);

    cout << "test1) " ;
    for(iter = lt.begin(); iter!= lt.end(); iter++){
        cout << *iter << " ";
    }
    cout << endl << endl;

    //원소가 10 인 원소 제거
    lt.remove(10);

    cout << "test2) ";
    for(iter = lt.begin(); iter!= lt.end(); iter++){
        cout << *iter << " ";
    }
    cout << endl << endl;

    return 0;
}

#endif
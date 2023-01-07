//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
//#include <fstream>
//#include <iomanip>
//#include <filesystem>
//#include <unistd.h>
//
//using namespace std;
//
//int main(void){
//
//    vector<double> vTimestamps;
//    vector<string> vstrImageLeft;
//    vector<string> vstrImageRight;
//
//    char tmp[256];
//    getcwd(tmp, 256);
//    cout << "Current working directory: " << tmp << endl;
//
//    ifstream fTimes;
//    // sequence 파일 경로
//    string strPathTimeFile = "../times.txt";
//    // open은 char*를 매개변수로 받기 때문에, c_str를 통해 string을 char*로 변환해준다.
//    fTimes.open(strPathTimeFile.c_str());
//
//    // fTimes가 끝날때 까지
//    while(!fTimes.eof())
//    {
//        string s;
//        // fTimes내 '\n'을 만날때 까지의 한 줄을 s에 담는다.
//        getline(fTimes,s);
//        // s내 값이 존재하면 vTimestamps에 해당 값을 담는다
//        if(!s.empty())
//        {
//            /**
//             * ! stringstream : 주어진 문자열에서 필요한 자료형에 맞는 정보를 꺼낼 때 유용하게 사용
//             *
//             */
//            stringstream ss;
//            ss << s;
//            double t;
//            ss >> t;
//            vTimestamps.push_back(t);
//        }
//    }
//
//    string strPrefixLeft = "../image_0/";
//    string strPrefixRight = "../image_1/";
//
//    const int nTimes = vTimestamps.size();
//    vstrImageLeft.resize(nTimes);
//    vstrImageRight.resize(nTimes);
//
//    for(int i=0; i<nTimes; i++)
//    {
//        stringstream ss;
//        ss << setfill('0') << setw(6) << i;
//        vstrImageLeft[i] = strPrefixLeft + ss.str() + ".png";
//        vstrImageRight[i] = strPrefixRight + ss.str() + ".png";
//    }
//}
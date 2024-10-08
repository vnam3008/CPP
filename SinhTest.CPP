/*
    author: Tran Van Nam
    Nguyen Trai High School - Quang Binh
*/
#include <bits/stdc++.h>
using namespace std;

mt19937_64 rd(chrono::steady_clock::now().time_since_epoch().count());

long long rand(long long l, long long r) { 
    return uniform_int_distribution<long long>(l, r)(rd);
}

long long randAm(long long l, long long r) { 
    int ok = rand(0, 1); // Bằng 1 in ra số dương ngược lại bằng 0 in ra số âm
    if (ok) return rand(l, r); else return -rand(l, r);
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    for (int TestCase = 1; TestCase <= 100; TestCase++){
        string test = "test" + to_string(TestCase);
        string folderName = test;
        string fileNameInp = test + ".inp";
        string fileNameOut = test + ".out";

        // Kiểm tra và tạo thư mục nếu chưa tồn tại
        if (!filesystem::exists(folderName)) {
            if (filesystem::create_directory(folderName)) {
                cerr << "Thư mục đã được tạo thành công: " << folderName << "\n";
            } else {
                cerr << "Không thể tạo thư mục: " << folderName << "\n";
                return 1;
            }
        } else {
            cerr << "Thư mục đã tồn tại: " << folderName << "\n";
        }

        // Đường dẫn đầy đủ của tệp cần tạo
        string fileInp = test + '/' + test + ".inp";
        string fileOut = test + '/' + test + ".out";

        // Tạo và ghi vào tệp
        ofstream cout(fileInp);
        if (cout) {
            // Code sinh test
            $0

            cerr << "Tệp đã được tạo và ghi thành công: " << fileInp << "\n";
        } else {
            cerr << "Không thể tạo tệp: " << fileInp << "\n";
            return 1;
        }
        cout.close();

        // Code chạy kết quả
        string command = "solution.exe < " + fileInp + " > " + fileOut;
        system(command.c_str());
    }
    
    return 0^0;
}

#include <cstdlib> // for system function
#include <iostream>
#include <string>

int main() {
    // バッチファイルのパスを指定
    std::string batchFilePath = "webui-user.bat";
    std::string UpdateCommand = "git pull";

    // アップデートを実行
    int result = system(UpdateCommand.c_str());

    if (result == 0) {
        std::cout << "アップデート( git pull )が正常に実行されました。" << std::endl;
    }
    else {
        std::cout << "アップデート( git pull )の実行中にエラーが発生しました。エラーコード: " << result << std::endl;
    }

    // バッチファイルを実行
    int result2 = system(batchFilePath.c_str());
    return 0;
}
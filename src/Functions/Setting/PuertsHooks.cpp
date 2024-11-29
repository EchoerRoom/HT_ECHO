#include "PuertsHooks.h"

namespace Cheat {
    static char Load_Hook(__int64 a1, UC::FString* a2, UC::JS_TArray<uint8_t>* a3);

    PuertsHooks::PuertsHooks() : Function() {

        HookManager::install(Hooks::JSLoad, Load_Hook);
    }



    std::string PuertsHooks::getModule() {
        return tr("MODULE_SETTING");
    }

    PuertsHooks& PuertsHooks::getInstance() {
        static PuertsHooks instance;
        return instance;
    }

     char Load_Hook(__int64 a1, UC::FString* a2, UC::JS_TArray<uint8_t>* a3) {
        auto res = CALL_ORIGIN(Load_Hook, a1, a2,a3);
        //printf("a1:%p a2:%s a3:%d index:%d\n", a1, a2->ToString().c_str(), a3->Count, Index);
        if (a2->ToString().find("../../../Client/Content/Aki/JavaScript/Game/Module/UidShow/UidView.js") != std::string::npos)
        {
            std::ifstream file("这里改为js文件路径", std::ios::binary);
            if (!file.is_open()) {
                std::cerr << "Failed to open JS file!" << std::endl;
                return res;
            }
            std::string fileContent((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
            int newDataSize = fileContent.size(); // 新数据的大小(新js文件的大小)
            int offset = a3->Max - a3->Count;
            //if (true) // 数据要比a3->Max这个最大值小，要不然强行替换会崩溃(试了一下强制修改max的大小，好像可以通过改max的大小实现替换更大的js文件---这里不确定，没仔细弄清楚)
            //{
            //    a3->Max = newDataSize + offset; // 更新 Max

            //    std::memcpy(a3->Data, fileContent.c_str(), newDataSize);
            //    a3->Count = newDataSize;  // 更新 Count
            //    printf("文件 Max: %d %d %s\n", a3->Max, a3->Count, a2->ToString().c_str());
            //}
            if (newDataSize <= a3->Max) // 数据要比a3->Max这个最大值小，要不然强行替换会崩溃
            {
                //a3->Max = newDataSize + offset; // 更新 Max

                std::memcpy(a3->Data, fileContent.c_str(), newDataSize);
                a3->Count = newDataSize;  // 更新 Count
                printf("文件 Max: %d %d %s\n", a3->Max, a3->Count, a2->ToString().c_str());
            }
        }
        return res;
    }



}

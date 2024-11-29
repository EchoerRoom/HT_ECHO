#include "ConfigManager.h"

namespace config {
    void save(json config) {
        std::ofstream configFile("wuwaecho.json");

        configFile << config.dump(4) << "\n";
        configFile.close();
    }
}

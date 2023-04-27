#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>

typedef struct {
    std::unordered_map<int64_t, int64_t> servers;
    int64_t resets;
    int64_t state;
} DataCenter;

int main(void) {
    int64_t n, m, q;
    std::cin >> n >> m >> q;
    std::cin.ignore();
    std::vector<std::string> arr(q);
    std::vector<DataCenter> allDataCenters(n);

    for (DataCenter& dc: allDataCenters) {
        dc.resets = 0;
        dc.state = m;
    }

    for (std::string& s: arr) {
        std::getline(std::cin, s);
        std::istringstream iss(s);
        std::string tmp;
        iss >> tmp;
        if (tmp == "DISABLE") {
            size_t dataCenterNumber;
            size_t serverNumber;
            iss >> dataCenterNumber >> serverNumber;
            if (allDataCenters[dataCenterNumber - 1].servers[serverNumber] != 1) {
                allDataCenters[dataCenterNumber - 1].servers[serverNumber] = 1;
                allDataCenters[dataCenterNumber - 1].state--;
                continue;
            }
        }

        else if (tmp == "RESET") {
            std::istringstream iss(s);
            size_t resetDataCenterNumber;
            iss >> tmp >> resetDataCenterNumber;
            allDataCenters[resetDataCenterNumber - 1].resets++;
            allDataCenters[resetDataCenterNumber - 1].state = m;
            allDataCenters[resetDataCenterNumber - 1].servers.clear();
            continue;
            
        }
        else if ("GETMIN" == s) {
            int64_t min = allDataCenters[0].resets * allDataCenters[0].state;
            int64_t minDataCenterNumber = 1;
            for (size_t g = 1; g < n; ++g) {
                int64_t current = allDataCenters[g].resets * allDataCenters[g].state;
                if (current < min) {
                    min = current;
                    minDataCenterNumber = g + 1;
                }
            }
            std::cout << minDataCenterNumber << '\n';
            continue;
        }
        else if ("GETMAX" == s) {
            int64_t max = allDataCenters[0].resets * allDataCenters[0].state;
            int64_t maxDataCenterNumber = 1;
            for (size_t g = 1; g < n; ++g) {
                int64_t current = allDataCenters[g].resets * allDataCenters[g].state;
                if (current > max) {
                    max = current;
                    maxDataCenterNumber = g + 1;
                }
            }
            std::cout << maxDataCenterNumber << '\n';
            continue;
        }
    }

    return 0;
}
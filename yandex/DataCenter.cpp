#include "DataCenter.h"

void Server::disableServer() {
    this->serverNumber = 0;
}

int64_t DataCenter::getMul() {
    return this->state * this->resetCount;
}

void DataCenter::reset() {
    this->resetCount--;
    for (size_t i = 0; i < this->serversCount; ++i) {
        this->servers[i] = 1;
    }
}

void DataCenter::disable(size_t serverNumber) {
    this->servers[serverNumber - 1].disableServer();
}

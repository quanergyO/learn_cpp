#include <iostream>

class Server {
public:
    Server() {}
    Server(size_t serverNumber) { this->serverNumber = serverNumber; }
    ~Server() {}

void disableServer();

private:
    size_t serverNumber;
};

class DataCenter : Server {
    DataCenter() {}
    DataCenter(size_t serversCount) {
        this->state = serversCount;
        this->serversCount = serversCount;
        this->resetCount = 0;
        this->servers = new Server[serversCount];
        if (this->servers == nullptr) {
            throw std::invalid_argument("Error memory allocate\n");
        }
        for (size_t i = 0; i < serversCount; ++i) {
            this->servers[i] = 1;
        }
    }
    ~DataCenter() {
        delete[] this->servers;
    }

    int64_t getMul();
    void reset();
    void disable(size_t serverNumber);

private:
    size_t state;
    size_t resetCount;
    size_t serversCount;
    Server *servers;
};


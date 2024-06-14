#pragma once

#include <iostream>
#include "interfaces/IServer.hpp"

class Server : public IServer {
public:
  Server();
  ~Server();
  
  void start() override;
  void stop() override;
};
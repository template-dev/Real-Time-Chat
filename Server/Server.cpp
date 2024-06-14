#include "headers/Server.hpp"

Server::Server() {
  start();
}

Server::~Server() {
  stop();
}

void Server::start() {
  std::cout << "The server is running..." << std::endl;
}

void Server::stop() {
  std::cout << "The server is stopped..." << std::endl;
}
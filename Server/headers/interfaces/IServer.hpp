#pragma once

class IServer {
public:
  ~IServer() = default;
  virtual void start() = 0;
  virtual void stop() = 0;
};
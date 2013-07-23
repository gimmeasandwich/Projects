#include <boost/thread.hpp>
#include <boost/date_time.hpp>
#include <boost/bind.hpp>

void ping() {
  printf("%s\n", "Ping!");
}

void pong() {
  printf("%s\n", "Pong!");
}

int main(int argc, char* argv[]) {
  printf("%s\n", "Ready... Set.. Go!");
  boost::thread pingt(ping);
  boost::thread pongt(pong);
  
  pingt.join();
  pongt.join();

  printf("%s\n", "Done!");
  return 0;
}


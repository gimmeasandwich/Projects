#include <boost/thread.hpp>
#include <boost/date_time.hpp>
#include <boost/bind.hpp>

//class Ball {
//  boost::mutex mutex_;

//public:
  //void ping() {
    //mutex_.lock();
    //printf("%s\n", "Ping!");
    //mutex_.unlock();
    //return 0;
  //}

  //void pong() {
   // mutex_.lock();
    //printf("%s\n", "Pong!");
    //mutex_.unlock();
    //return 0;
  //}
//};

void ping() {
  printf("%s\n", "Ping!");
}

void pong() {
  printf("%s\n", "Pong!");
}

int main(int argc, char* argv[]) {
  //boost::thread_group tgroup;
  //Ball ball();
  //tgroup.create_thread(boost::bind(&Ball::ping, &ball));
  //tgroup.create_thread(boost::bind(&Ball::pong, &ball));

  printf("%s\n", "Ready... Set.. Go!");
  boost::thread pingt(ping);
  boost::thread pongt(pong);
  
  pingt.join();
  pongt.join();
  //tgroup.join_all();

  printf("%s\n", "Done!");
  return 0;
}


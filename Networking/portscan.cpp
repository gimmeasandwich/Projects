#include <boost/thread/thread.hpp>
#include <boost/bind.hpp>
#include <boost/thread/mutex.hpp>
#include <iostream>
#include <arpa/inet.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctime>
#include <cmath>
#include <fstream>

boost::mutex mutex;
using namespace std;
struct sockaddr_in addr;

int scan(int port, sockaddr_in addr) {
  int s,r;
  s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
  if (s < 0) {
    printf("ERROR: socket() failed\n");
    exit(0);
  }
  
  addr.sin_family = AF_INET;
  addr.sin_port = htons(port);
  addr.sin_addr.s_addr = inet_addr( // SUP);
  
  r = connect(s,(struct sockaddr *) &addr, sizeof(addr)));
  
  close(s);
  
  if (r == -1) {
    return (1 == 0);
  }

  return (1 == 1);
}



int scanportrange(sockaddr_in addr,int start, int end) {
  boost::mutex::scoped_lock lock(mutex);
  while(start <= end) {
    
  }
}

int main(int argc, char *argv[]) {
  if(argc != 4) {
    printf("Correct usage is: %s <ip_addr> <start_port> <end_port>\n", argv[0]);
    return 0; 
  }
  int start = atoi(argv[2]);
  int end = atoi(argv[3]);

  if(start < 0 || end < 0) {
    printf("%s\n", "Error: Can't have negative port numbers!");
    return 0;
  }

  if(start >= end) {
    printf("%s\n", "Error: Starting port is greater than the ending port!");
    return 0; 
  }

  if(end > 65535) {
    end = 65535;
    printf("%s\n", "Truncating ending port to 65535!");  
  }

  struct sockaddr_in address;
  char str[INET_ADDRSTRLEN];
  inet_pton(AF_INET, argv[1], &(address.sin_addr));

  

  //inet_ntop(AF_INET, &(address.sin_addr), str, INET_ADDRSTRLEN);
  //printf("%s\n", str);
  
  return 0;
}

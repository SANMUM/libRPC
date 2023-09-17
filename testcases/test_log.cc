
#include <pthread.h>
#include "src/common/log.h"
#include "src/common/config.h"


void* fun(void*) {
  
  int i = 2;
  while (i--) {
    DEBUGLOG("debug this is thread in %s", "fun");
    INFOLOG("info this is thread in %s", "fun");
  }

  return NULL;
}

int main() {

  rocket::Config::SetGlobalConfig("../conf/rocket.xml");

  rocket::Logger::InitGlobalLogger();


  pthread_t thread;
  pthread_create(&thread, NULL, &fun, NULL);

  int i = 2;
  while (i--) {
    DEBUGLOG("test debug log %s", "11");
    INFOLOG("test info log %s", "11");
  }

  pthread_join(thread, NULL);
  return 0;
}
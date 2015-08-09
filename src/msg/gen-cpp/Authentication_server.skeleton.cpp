// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "Authentication.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using boost::shared_ptr;

using namespace  ::authentication;

class AuthenticationHandler : virtual public AuthenticationIf {
 public:
  AuthenticationHandler() {
    // Your initialization goes here
  }

  bool pingActive(const int32_t genNum) {
    // Your implementation goes here
    printf("pingActive\n");
  }

  bool login(const User& user) {
    // Your implementation goes here
    printf("login\n");
  }

  bool logout(const User& user) {
    // Your implementation goes here
    printf("logout\n");
  }

<<<<<<< HEAD
  void getMailboxTTMAT(MailboxTTMAT& _return, const User& user, const std::string& date) {
    // Your implementation goes here
    printf("getMailboxTTMAT\n");
  }

=======
>>>>>>> dev_win32
};

int main(int argc, char **argv) {
  int port = 9090;
  shared_ptr<AuthenticationHandler> handler(new AuthenticationHandler());
  shared_ptr<TProcessor> processor(new AuthenticationProcessor(handler));
  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}


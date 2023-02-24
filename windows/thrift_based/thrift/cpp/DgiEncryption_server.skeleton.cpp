// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "DgiEncryption.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using namespace  ::dgi;

class DgiEncryptionHandler : virtual public DgiEncryptionIf {
 public:
  DgiEncryptionHandler() {
    // Your initialization goes here
  }

  void isFileEncoded( ::dgi::BoolResponse& _return, const std::string& _filepath) {
    // Your implementation goes here
    printf("isFileEncoded\n");
  }

  void getFileInfo( ::dgi::ResponseFileInfo& _return, const std::string& _filepath) {
    // Your implementation goes here
    printf("getFileInfo\n");
  }

  void encryptFileAsync( ::dgi::AsyncResponse& _return, const  ::dgi::RequestEncryptFile& _file) {
    // Your implementation goes here
    printf("encryptFileAsync\n");
  }

  void encryptFile( ::dgi::DgiResult& _return, const  ::dgi::RequestEncryptFile& _file) {
    // Your implementation goes here
    printf("encryptFile\n");
  }

  void getState( ::dgi::DgiResult& _return, const  ::dgi::AsyncId _asyncId) {
    // Your implementation goes here
    printf("getState\n");
  }

  void decodeFile( ::dgi::ResponseDecodeFile& _return, const  ::dgi::RequestDecodeFile& _file) {
    // Your implementation goes here
    printf("decodeFile\n");
  }

  void decodeFileAsync( ::dgi::AsyncResponse& _return, const  ::dgi::RequestDecodeFile& _file) {
    // Your implementation goes here
    printf("decodeFileAsync\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  ::apache::thrift::stdcxx::shared_ptr<DgiEncryptionHandler> handler(new DgiEncryptionHandler());
  ::apache::thrift::stdcxx::shared_ptr<TProcessor> processor(new DgiEncryptionProcessor(handler));
  ::apache::thrift::stdcxx::shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  ::apache::thrift::stdcxx::shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  ::apache::thrift::stdcxx::shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}


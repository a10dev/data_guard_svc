//
//	Author: 
//			burluckij@gmail.com
//			Burlutsky Stanislav
//
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/transport/TBufferTransports.h>
#include <thrift/transport/TSocket.h>

#include "ThriftClientShredder.h"

///// #include "../../DgiService/helpers/internal/helpers.h"
#include "../../../service/DgiService/helpers/internal/helpers.h"

namespace thrift_client
{
	using namespace ::apache::thrift;
	using namespace ::apache::thrift::protocol;
	using namespace ::apache::thrift::transport;

//	bool ClientShredder::EraseFile(std::wstring _path)
	void ClientShredder::EraseFile(std::wstring& _path, bool& res)
	{
		std::shared_ptr<TTransport> socket(new TSocket(m_host, m_port));
		std::shared_ptr<TTransport> transport(new TBufferedTransport(socket));
		std::shared_ptr<TProtocol> protocol(new TBinaryProtocol(transport));

		dgi::DgiResult result;
		dgi::DgiSecureEraseClient client(protocol);

		try
		{
			std::string utf8FilePath = strings::ws_s(_path, CP_UTF8);

			transport->open();
			client.eraseFile(result, utf8FilePath);
			transport->close();
		}
		catch (TTransportException& e)
		{
			std::cout << std::endl << __FUNCTION__ << " caught TTransportException: " << e.what() << std::endl;
			res = false;
			return; // false;
		}

		res = (result.status == dgi::DgiStatus::Success);
		return; //(result.status == dgi::DgiStatus::Success);
	}

//	bool ClientShredder::EraseDirectory(std::wstring _path, dgi::AsyncResponse& _response)
	void ClientShredder::EraseDirectory(std::wstring& _path, dgi::AsyncResponse& _response , bool& res)
	{
		std::shared_ptr<TTransport> socket(new TSocket(m_host, m_port));
		std::shared_ptr<TTransport> transport(new TBufferedTransport(socket));
		std::shared_ptr<TProtocol> protocol(new TBinaryProtocol(transport));

		//dgi::AsyncResponse response;
		dgi::EraseList eraseList;
		dgi::EraseObject eraseobject;
		dgi::DgiSecureEraseClient client(protocol);

		eraseobject.path = strings::ws_s(_path, CP_UTF8);
		eraseobject.type = dgi::EraseObjectType::Erase_Directory;

		eraseList.push_back(eraseobject);

		try
		{
			transport->open();
			client.eraseFiles(_response, eraseList);
			transport->close();
		}
		catch (TTransportException& e)
		{
			std::cout << std::endl << __FUNCTION__ << " caught TTransportException: " << e.what() << std::endl;
			res = false;
			return; //false;
		}

		res = (_response.result.status == dgi::DgiStatus::Success);
		return; //(_response.result.status == dgi::DgiStatus::Success);
	}

//	bool ClientShredder::GetAsyncState(dgi::AsyncId _id, dgi::DgiResult& _result)
	void ClientShredder::GetAsyncState(dgi::AsyncId& _id, dgi::DgiResult& _result , bool& res)
	{
		std::shared_ptr<TTransport> socket(new TSocket(m_host, m_port));
		std::shared_ptr<TTransport> transport(new TBufferedTransport(socket));
		std::shared_ptr<TProtocol> protocol(new TBinaryProtocol(transport));

		dgi::DgiSecureEraseClient client(protocol);

		try
		{
			transport->open();
			client.getState(_result, _id);
			transport->close();
		}
		catch (TTransportException& e)
		{
			std::cout << std::endl << __FUNCTION__ << " caught TTransportException: " << e.what() << std::endl;
			res = false;
			return; //false;
		}

		res = true;
		return; // true;
	}
//*/
}

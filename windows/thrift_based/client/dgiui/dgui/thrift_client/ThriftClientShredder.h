//
//	Author: 
//			burluckij@gmail.com
//			Burlutsky Stanislav
//

//#include <iostream>
//#include "..\ServiceClient.h"
//#include "..\..\..\thrift\cpp\DgiSecureErase.h"

#include <QStyle>
#include <QDesktopWidget>
#include <QCoreApplication>
#include <QApplication>
#include <iostream>
#include "ThriftCommon.h"
#include "..\..\..\thrift\cpp\DgiSecureErase.h"

namespace thrift_client
{
	class ClientShredder
	{
	public:

		ClientShredder(std::string _host, int _port) : m_host(_host), m_port(_port) {

		}

//		bool EraseFile(std::wstring& _path, bool& res );
		void EraseFile(std::wstring& _path, bool& res );

//		bool EraseDirectory(std::wstring _path, dgi::AsyncResponse& _response);
		void EraseDirectory(std::wstring& _path, dgi::AsyncResponse& _response, bool& res);

//		bool GetAsyncState(dgi::AsyncId _id, dgi::DgiResult& _result);
		void GetAsyncState(dgi::AsyncId& _id, dgi::DgiResult& _result, bool& res);

	private:
		std::string m_host;
		int m_port;
	};
}


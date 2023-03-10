/**
 * Autogenerated by Thrift Compiler (0.12.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "dgiCommonTypes_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace dgi {

int _kDgiStatusValues[] = {
  DgiStatus::Success,
  DgiStatus::UnknownError,
  DgiStatus::NotFound,
  DgiStatus::CriticalError,
  DgiStatus::AccessDenied,
  DgiStatus::InvalidFormat,
  DgiStatus::InProcess,
  DgiStatus::Completed,
  DgiStatus::LimitAchieved,
  DgiStatus::PresentAlready,
  DgiStatus::DriverNotConnected,
  DgiStatus::UnknownType,
  DgiStatus::HaveNoResponse,
  DgiStatus::NoMasterPassword,
  DgiStatus::LicenseExpired,
  DgiStatus::LicenseExpireSoon,
  DgiStatus::NotEncoded,
  DgiStatus::EncodedAlready,
  DgiStatus::WrongEncryptionKey,
  DgiStatus::DecodedButIntegrityCompromised,
  DgiStatus::TypeConvertionError,
  DgiStatus::NotLoaded,
  DgiStatus::FLockWasNotSigned
};
const char* _kDgiStatusNames[] = {
  "Success",
  "UnknownError",
  "NotFound",
  "CriticalError",
  "AccessDenied",
  "InvalidFormat",
  "InProcess",
  "Completed",
  "LimitAchieved",
  "PresentAlready",
  "DriverNotConnected",
  "UnknownType",
  "HaveNoResponse",
  "NoMasterPassword",
  "LicenseExpired",
  "LicenseExpireSoon",
  "NotEncoded",
  "EncodedAlready",
  "WrongEncryptionKey",
  "DecodedButIntegrityCompromised",
  "TypeConvertionError",
  "NotLoaded",
  "FLockWasNotSigned"
};
const std::map<int, const char*> _DgiStatus_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(23, _kDgiStatusValues, _kDgiStatusNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const DgiStatus::type& val) {
  std::map<int, const char*>::const_iterator it = _DgiStatus_VALUES_TO_NAMES.find(val);
  if (it != _DgiStatus_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}


DgiResult::~DgiResult() throw() {
}


void DgiResult::__set_status(const DgiStatus::type val) {
  this->status = val;
}

void DgiResult::__set_description(const std::string& val) {
  this->description = val;
}
std::ostream& operator<<(std::ostream& out, const DgiResult& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t DgiResult::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->status = (DgiStatus::type)ecast0;
          this->__isset.status = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->description);
          this->__isset.description = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t DgiResult::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("DgiResult");

  xfer += oprot->writeFieldBegin("status", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->status);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("description", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->description);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(DgiResult &a, DgiResult &b) {
  using ::std::swap;
  swap(a.status, b.status);
  swap(a.description, b.description);
  swap(a.__isset, b.__isset);
}

DgiResult::DgiResult(const DgiResult& other1) {
  status = other1.status;
  description = other1.description;
  __isset = other1.__isset;
}
DgiResult& DgiResult::operator=(const DgiResult& other2) {
  status = other2.status;
  description = other2.description;
  __isset = other2.__isset;
  return *this;
}
void DgiResult::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "DgiResult(";
  out << "status=" << to_string(status);
  out << ", " << "description=" << to_string(description);
  out << ")";
}


AsyncResponse::~AsyncResponse() throw() {
}


void AsyncResponse::__set_result(const DgiResult& val) {
  this->result = val;
}

void AsyncResponse::__set_asyncId(const AsyncId val) {
  this->asyncId = val;
}
std::ostream& operator<<(std::ostream& out, const AsyncResponse& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t AsyncResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->result.read(iprot);
          this->__isset.result = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->asyncId);
          this->__isset.asyncId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t AsyncResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("AsyncResponse");

  xfer += oprot->writeFieldBegin("result", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->result.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("asyncId", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->asyncId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(AsyncResponse &a, AsyncResponse &b) {
  using ::std::swap;
  swap(a.result, b.result);
  swap(a.asyncId, b.asyncId);
  swap(a.__isset, b.__isset);
}

AsyncResponse::AsyncResponse(const AsyncResponse& other3) {
  result = other3.result;
  asyncId = other3.asyncId;
  __isset = other3.__isset;
}
AsyncResponse& AsyncResponse::operator=(const AsyncResponse& other4) {
  result = other4.result;
  asyncId = other4.asyncId;
  __isset = other4.__isset;
  return *this;
}
void AsyncResponse::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "AsyncResponse(";
  out << "result=" << to_string(result);
  out << ", " << "asyncId=" << to_string(asyncId);
  out << ")";
}


BoolResponse::~BoolResponse() throw() {
}


void BoolResponse::__set_errorResult(const DgiResult& val) {
  this->errorResult = val;
}

void BoolResponse::__set_bool_result(const bool val) {
  this->bool_result = val;
}
std::ostream& operator<<(std::ostream& out, const BoolResponse& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t BoolResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->errorResult.read(iprot);
          this->__isset.errorResult = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->bool_result);
          this->__isset.bool_result = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t BoolResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("BoolResponse");

  xfer += oprot->writeFieldBegin("errorResult", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->errorResult.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("bool_result", ::apache::thrift::protocol::T_BOOL, 2);
  xfer += oprot->writeBool(this->bool_result);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(BoolResponse &a, BoolResponse &b) {
  using ::std::swap;
  swap(a.errorResult, b.errorResult);
  swap(a.bool_result, b.bool_result);
  swap(a.__isset, b.__isset);
}

BoolResponse::BoolResponse(const BoolResponse& other5) {
  errorResult = other5.errorResult;
  bool_result = other5.bool_result;
  __isset = other5.__isset;
}
BoolResponse& BoolResponse::operator=(const BoolResponse& other6) {
  errorResult = other6.errorResult;
  bool_result = other6.bool_result;
  __isset = other6.__isset;
  return *this;
}
void BoolResponse::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "BoolResponse(";
  out << "errorResult=" << to_string(errorResult);
  out << ", " << "bool_result=" << to_string(bool_result);
  out << ")";
}


AuthResponse::~AuthResponse() throw() {
}


void AuthResponse::__set_result(const DgiResult& val) {
  this->result = val;
}

void AuthResponse::__set_sessionId(const DgiSid& val) {
  this->sessionId = val;
}
std::ostream& operator<<(std::ostream& out, const AuthResponse& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t AuthResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->result.read(iprot);
          this->__isset.result = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->sessionId);
          this->__isset.sessionId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t AuthResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("AuthResponse");

  xfer += oprot->writeFieldBegin("result", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->result.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("sessionId", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->sessionId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(AuthResponse &a, AuthResponse &b) {
  using ::std::swap;
  swap(a.result, b.result);
  swap(a.sessionId, b.sessionId);
  swap(a.__isset, b.__isset);
}

AuthResponse::AuthResponse(const AuthResponse& other7) {
  result = other7.result;
  sessionId = other7.sessionId;
  __isset = other7.__isset;
}
AuthResponse& AuthResponse::operator=(const AuthResponse& other8) {
  result = other8.result;
  sessionId = other8.sessionId;
  __isset = other8.__isset;
  return *this;
}
void AuthResponse::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "AuthResponse(";
  out << "result=" << to_string(result);
  out << ", " << "sessionId=" << to_string(sessionId);
  out << ")";
}


SubSystemStateResponse::~SubSystemStateResponse() throw() {
}


void SubSystemStateResponse::__set_result(const DgiResult& val) {
  this->result = val;
}

void SubSystemStateResponse::__set_hasProblems(const bool val) {
  this->hasProblems = val;
}

void SubSystemStateResponse::__set_report(const std::vector<DgiResult> & val) {
  this->report = val;
}
std::ostream& operator<<(std::ostream& out, const SubSystemStateResponse& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t SubSystemStateResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->result.read(iprot);
          this->__isset.result = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->hasProblems);
          this->__isset.hasProblems = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->report.clear();
            uint32_t _size9;
            ::apache::thrift::protocol::TType _etype12;
            xfer += iprot->readListBegin(_etype12, _size9);
            this->report.resize(_size9);
            uint32_t _i13;
            for (_i13 = 0; _i13 < _size9; ++_i13)
            {
              xfer += this->report[_i13].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.report = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t SubSystemStateResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("SubSystemStateResponse");

  xfer += oprot->writeFieldBegin("result", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->result.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("hasProblems", ::apache::thrift::protocol::T_BOOL, 2);
  xfer += oprot->writeBool(this->hasProblems);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("report", ::apache::thrift::protocol::T_LIST, 3);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->report.size()));
    std::vector<DgiResult> ::const_iterator _iter14;
    for (_iter14 = this->report.begin(); _iter14 != this->report.end(); ++_iter14)
    {
      xfer += (*_iter14).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(SubSystemStateResponse &a, SubSystemStateResponse &b) {
  using ::std::swap;
  swap(a.result, b.result);
  swap(a.hasProblems, b.hasProblems);
  swap(a.report, b.report);
  swap(a.__isset, b.__isset);
}

SubSystemStateResponse::SubSystemStateResponse(const SubSystemStateResponse& other15) {
  result = other15.result;
  hasProblems = other15.hasProblems;
  report = other15.report;
  __isset = other15.__isset;
}
SubSystemStateResponse& SubSystemStateResponse::operator=(const SubSystemStateResponse& other16) {
  result = other16.result;
  hasProblems = other16.hasProblems;
  report = other16.report;
  __isset = other16.__isset;
  return *this;
}
void SubSystemStateResponse::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "SubSystemStateResponse(";
  out << "result=" << to_string(result);
  out << ", " << "hasProblems=" << to_string(hasProblems);
  out << ", " << "report=" << to_string(report);
  out << ")";
}

} // namespace

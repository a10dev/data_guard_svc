/**
 * Autogenerated by Thrift Compiler (0.12.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "dgiSecureEraseTypes_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace dgi {

int _kEraseObjectTypeValues[] = {
  EraseObjectType::Erase_Unknown,
  EraseObjectType::Erase_File,
  EraseObjectType::Erase_Directory,
  EraseObjectType::Erase_HardDisk
};
const char* _kEraseObjectTypeNames[] = {
  "Erase_Unknown",
  "Erase_File",
  "Erase_Directory",
  "Erase_HardDisk"
};
const std::map<int, const char*> _EraseObjectType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(4, _kEraseObjectTypeValues, _kEraseObjectTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const EraseObjectType::type& val) {
  std::map<int, const char*>::const_iterator it = _EraseObjectType_VALUES_TO_NAMES.find(val);
  if (it != _EraseObjectType_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}


EraseObject::~EraseObject() throw() {
}


void EraseObject::__set_type(const EraseObjectType::type val) {
  this->type = val;
}

void EraseObject::__set_path(const std::string& val) {
  this->path = val;
}
std::ostream& operator<<(std::ostream& out, const EraseObject& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t EraseObject::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          this->type = (EraseObjectType::type)ecast0;
          this->__isset.type = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->path);
          this->__isset.path = true;
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

uint32_t EraseObject::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("EraseObject");

  xfer += oprot->writeFieldBegin("type", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->type);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("path", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->path);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(EraseObject &a, EraseObject &b) {
  using ::std::swap;
  swap(a.type, b.type);
  swap(a.path, b.path);
  swap(a.__isset, b.__isset);
}

EraseObject::EraseObject(const EraseObject& other1) {
  type = other1.type;
  path = other1.path;
  __isset = other1.__isset;
}
EraseObject& EraseObject::operator=(const EraseObject& other2) {
  type = other2.type;
  path = other2.path;
  __isset = other2.__isset;
  return *this;
}
void EraseObject::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "EraseObject(";
  out << "type=" << to_string(type);
  out << ", " << "path=" << to_string(path);
  out << ")";
}


EraseObjectError::~EraseObjectError() throw() {
}


void EraseObjectError::__set_erObject(const EraseObject& val) {
  this->erObject = val;
}

void EraseObjectError::__set_status(const  ::dgi::DgiStatus::type val) {
  this->status = val;
}

void EraseObjectError::__set_description(const std::string& val) {
  this->description = val;
}
std::ostream& operator<<(std::ostream& out, const EraseObjectError& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t EraseObjectError::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += this->erObject.read(iprot);
          this->__isset.erObject = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast3;
          xfer += iprot->readI32(ecast3);
          this->status = ( ::dgi::DgiStatus::type)ecast3;
          this->__isset.status = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
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

uint32_t EraseObjectError::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("EraseObjectError");

  xfer += oprot->writeFieldBegin("erObject", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->erObject.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("status", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32((int32_t)this->status);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("description", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->description);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(EraseObjectError &a, EraseObjectError &b) {
  using ::std::swap;
  swap(a.erObject, b.erObject);
  swap(a.status, b.status);
  swap(a.description, b.description);
  swap(a.__isset, b.__isset);
}

EraseObjectError::EraseObjectError(const EraseObjectError& other4) {
  erObject = other4.erObject;
  status = other4.status;
  description = other4.description;
  __isset = other4.__isset;
}
EraseObjectError& EraseObjectError::operator=(const EraseObjectError& other5) {
  erObject = other5.erObject;
  status = other5.status;
  description = other5.description;
  __isset = other5.__isset;
  return *this;
}
void EraseObjectError::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "EraseObjectError(";
  out << "erObject=" << to_string(erObject);
  out << ", " << "status=" << to_string(status);
  out << ", " << "description=" << to_string(description);
  out << ")";
}


EraseResponse::~EraseResponse() throw() {
}


void EraseResponse::__set_result(const  ::dgi::DgiResult& val) {
  this->result = val;
}

void EraseResponse::__set_notErased(const EraseErrorList& val) {
  this->notErased = val;
}
std::ostream& operator<<(std::ostream& out, const EraseResponse& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t EraseResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

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
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->notErased.clear();
            uint32_t _size6;
            ::apache::thrift::protocol::TType _etype9;
            xfer += iprot->readListBegin(_etype9, _size6);
            this->notErased.resize(_size6);
            uint32_t _i10;
            for (_i10 = 0; _i10 < _size6; ++_i10)
            {
              xfer += this->notErased[_i10].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.notErased = true;
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

uint32_t EraseResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("EraseResponse");

  xfer += oprot->writeFieldBegin("result", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->result.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("notErased", ::apache::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->notErased.size()));
    std::vector<EraseObjectError> ::const_iterator _iter11;
    for (_iter11 = this->notErased.begin(); _iter11 != this->notErased.end(); ++_iter11)
    {
      xfer += (*_iter11).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(EraseResponse &a, EraseResponse &b) {
  using ::std::swap;
  swap(a.result, b.result);
  swap(a.notErased, b.notErased);
  swap(a.__isset, b.__isset);
}

EraseResponse::EraseResponse(const EraseResponse& other12) {
  result = other12.result;
  notErased = other12.notErased;
  __isset = other12.__isset;
}
EraseResponse& EraseResponse::operator=(const EraseResponse& other13) {
  result = other13.result;
  notErased = other13.notErased;
  __isset = other13.__isset;
  return *this;
}
void EraseResponse::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "EraseResponse(";
  out << "result=" << to_string(result);
  out << ", " << "notErased=" << to_string(notErased);
  out << ")";
}

} // namespace
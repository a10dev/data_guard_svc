/**
 * Autogenerated by Thrift Compiler (0.12.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "dgiBankingTypes_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace dgi {


ValidDate::~ValidDate() throw() {
}


void ValidDate::__set_vd_month(const int32_t val) {
  this->vd_month = val;
}

void ValidDate::__set_vd_year(const int32_t val) {
  this->vd_year = val;
}
std::ostream& operator<<(std::ostream& out, const ValidDate& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t ValidDate::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readI32(this->vd_month);
          this->__isset.vd_month = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->vd_year);
          this->__isset.vd_year = true;
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

uint32_t ValidDate::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("ValidDate");

  xfer += oprot->writeFieldBegin("vd_month", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->vd_month);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("vd_year", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->vd_year);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ValidDate &a, ValidDate &b) {
  using ::std::swap;
  swap(a.vd_month, b.vd_month);
  swap(a.vd_year, b.vd_year);
  swap(a.__isset, b.__isset);
}

ValidDate::ValidDate(const ValidDate& other0) {
  vd_month = other0.vd_month;
  vd_year = other0.vd_year;
  __isset = other0.__isset;
}
ValidDate& ValidDate::operator=(const ValidDate& other1) {
  vd_month = other1.vd_month;
  vd_year = other1.vd_year;
  __isset = other1.__isset;
  return *this;
}
void ValidDate::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "ValidDate(";
  out << "vd_month=" << to_string(vd_month);
  out << ", " << "vd_year=" << to_string(vd_year);
  out << ")";
}


BankCard::~BankCard() throw() {
}


void BankCard::__set_shortDescription(const std::string& val) {
  this->shortDescription = val;
}

void BankCard::__set_bankOwner(const std::string& val) {
  this->bankOwner = val;
}

void BankCard::__set_paySystem(const std::string& val) {
  this->paySystem = val;
}

void BankCard::__set_number(const CardNumber& val) {
  this->number = val;
}

void BankCard::__set_vd(const ValidDate& val) {
  this->vd = val;
}

void BankCard::__set_pinCode(const std::string& val) {
  this->pinCode = val;
}

void BankCard::__set_cvvCode(const std::string& val) {
  this->cvvCode = val;
}

void BankCard::__set_holder(const std::string& val) {
  this->holder = val;
}

void BankCard::__set_name(const std::string& val) {
  this->name = val;
}
std::ostream& operator<<(std::ostream& out, const BankCard& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t BankCard::read(::apache::thrift::protocol::TProtocol* iprot) {

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
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->shortDescription);
          this->__isset.shortDescription = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->bankOwner);
          this->__isset.bankOwner = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->paySystem);
          this->__isset.paySystem = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->number);
          this->__isset.number = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->vd.read(iprot);
          this->__isset.vd = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->pinCode);
          this->__isset.pinCode = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->cvvCode);
          this->__isset.cvvCode = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->holder);
          this->__isset.holder = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
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

uint32_t BankCard::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("BankCard");

  xfer += oprot->writeFieldBegin("shortDescription", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->shortDescription);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("bankOwner", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->bankOwner);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("paySystem", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->paySystem);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("number", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->number);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("vd", ::apache::thrift::protocol::T_STRUCT, 5);
  xfer += this->vd.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("pinCode", ::apache::thrift::protocol::T_STRING, 6);
  xfer += oprot->writeString(this->pinCode);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("cvvCode", ::apache::thrift::protocol::T_STRING, 7);
  xfer += oprot->writeString(this->cvvCode);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("holder", ::apache::thrift::protocol::T_STRING, 8);
  xfer += oprot->writeString(this->holder);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 9);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(BankCard &a, BankCard &b) {
  using ::std::swap;
  swap(a.shortDescription, b.shortDescription);
  swap(a.bankOwner, b.bankOwner);
  swap(a.paySystem, b.paySystem);
  swap(a.number, b.number);
  swap(a.vd, b.vd);
  swap(a.pinCode, b.pinCode);
  swap(a.cvvCode, b.cvvCode);
  swap(a.holder, b.holder);
  swap(a.name, b.name);
  swap(a.__isset, b.__isset);
}

BankCard::BankCard(const BankCard& other2) {
  shortDescription = other2.shortDescription;
  bankOwner = other2.bankOwner;
  paySystem = other2.paySystem;
  number = other2.number;
  vd = other2.vd;
  pinCode = other2.pinCode;
  cvvCode = other2.cvvCode;
  holder = other2.holder;
  name = other2.name;
  __isset = other2.__isset;
}
BankCard& BankCard::operator=(const BankCard& other3) {
  shortDescription = other3.shortDescription;
  bankOwner = other3.bankOwner;
  paySystem = other3.paySystem;
  number = other3.number;
  vd = other3.vd;
  pinCode = other3.pinCode;
  cvvCode = other3.cvvCode;
  holder = other3.holder;
  name = other3.name;
  __isset = other3.__isset;
  return *this;
}
void BankCard::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "BankCard(";
  out << "shortDescription=" << to_string(shortDescription);
  out << ", " << "bankOwner=" << to_string(bankOwner);
  out << ", " << "paySystem=" << to_string(paySystem);
  out << ", " << "number=" << to_string(number);
  out << ", " << "vd=" << to_string(vd);
  out << ", " << "pinCode=" << to_string(pinCode);
  out << ", " << "cvvCode=" << to_string(cvvCode);
  out << ", " << "holder=" << to_string(holder);
  out << ", " << "name=" << to_string(name);
  out << ")";
}


Resp_BankCard::~Resp_BankCard() throw() {
}


void Resp_BankCard::__set_result(const  ::dgi::DgiResult& val) {
  this->result = val;
}

void Resp_BankCard::__set_cardInfo(const BankCard& val) {
  this->cardInfo = val;
}
std::ostream& operator<<(std::ostream& out, const Resp_BankCard& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t Resp_BankCard::read(::apache::thrift::protocol::TProtocol* iprot) {

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
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->cardInfo.read(iprot);
          this->__isset.cardInfo = true;
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

uint32_t Resp_BankCard::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Resp_BankCard");

  xfer += oprot->writeFieldBegin("result", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->result.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("cardInfo", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += this->cardInfo.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Resp_BankCard &a, Resp_BankCard &b) {
  using ::std::swap;
  swap(a.result, b.result);
  swap(a.cardInfo, b.cardInfo);
  swap(a.__isset, b.__isset);
}

Resp_BankCard::Resp_BankCard(const Resp_BankCard& other4) {
  result = other4.result;
  cardInfo = other4.cardInfo;
  __isset = other4.__isset;
}
Resp_BankCard& Resp_BankCard::operator=(const Resp_BankCard& other5) {
  result = other5.result;
  cardInfo = other5.cardInfo;
  __isset = other5.__isset;
  return *this;
}
void Resp_BankCard::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Resp_BankCard(";
  out << "result=" << to_string(result);
  out << ", " << "cardInfo=" << to_string(cardInfo);
  out << ")";
}

} // namespace

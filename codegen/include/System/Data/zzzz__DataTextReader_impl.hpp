#pragma once
// IWYU pragma private; include "System/Data/DataTextReader.hpp"
#include "System/Xml/zzzz__XmlReader_impl.hpp"
#include "System/Data/zzzz__DataTextReader_def.hpp"
#include "System/Xml/zzzz__ReadState_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlReaderSettings_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
//  Writing Method size for method: ::System::Data::DataTextReader.CreateReader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlReader* (*)(::System::Xml::XmlReader*)>(&::System::Data::DataTextReader::CreateReader)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181bc5d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataTextReader*>(),
                        {"CreateReader", {}, {::i2c::type_of<::System::Xml::XmlReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextReader::*)(::System::Xml::XmlReader*)>(&::System::Data::DataTextReader::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataTextReader*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Xml::XmlReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.get_Settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlReaderSettings* (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::get_Settings)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ade720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.get_NodeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::get_NodeType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181bc5fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::get_Name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181bc5fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.get_LocalName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::get_LocalName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181bc5f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.get_NamespaceURI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::get_NamespaceURI)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18165ba10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.get_Prefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::get_Prefix)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18165bab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.get_HasValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::get_HasValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18165ba90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::get_Value)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181bc6010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.get_Depth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::get_Depth)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181bc5f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.get_BaseURI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::get_BaseURI)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181bc5ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.get_IsEmptyElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::get_IsEmptyElement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18165ba70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.get_IsDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::get_IsDefault)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18165b9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.get_QuoteChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::get_QuoteChar)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18165ba50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.get_XmlSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlSpace (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::get_XmlSpace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181bc6050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.get_XmlLang
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::get_XmlLang)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181bc6030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.get_AttributeCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::get_AttributeCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816c5d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.GetAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataTextReader::*)(::StringW)>(&::System::Data::DataTextReader::GetAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181bc5d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.GetAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataTextReader::*)(::StringW, ::StringW)>(&::System::Data::DataTextReader::GetAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181bc5d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.GetAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataTextReader::*)(int32_t)>(&::System::Data::DataTextReader::GetAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181bc5db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.MoveToAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTextReader::*)(::StringW)>(&::System::Data::DataTextReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181bc5df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.MoveToAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextReader::*)(int32_t)>(&::System::Data::DataTextReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181bc5e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.MoveToFirstAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::MoveToFirstAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816caee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.MoveToNextAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::MoveToNextAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181bc5e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.MoveToElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::MoveToElement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181bc5e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.ReadAttributeValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::ReadAttributeValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181bc5e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::Read)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181bc5eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.get_EOF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::get_EOF)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181bc5f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::Close)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816cacc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.get_ReadState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::ReadState (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::get_ReadState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181bc5ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.Skip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::Skip)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816c57e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.get_NameTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNameTable* (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::get_NameTable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181bc5f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.LookupNamespace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataTextReader::*)(::StringW)>(&::System::Data::DataTextReader::LookupNamespace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181bc5dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.get_CanResolveEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::get_CanResolveEntity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816cace0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.ResolveEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::ResolveEntity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181bc5ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.get_CanReadValueChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::get_CanReadValueChunk)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181bc5f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextReader.ReadString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataTextReader::*)()>(&::System::Data::DataTextReader::ReadString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181bc5e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataTextReader*>(),
                    {::i2c::class_of<::System::Data::DataTextReader*>(), 44}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlReader*& System::Data::DataTextReader::__cordl_internal_get__xmlreader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xmlreader;
}
constexpr ::System::Xml::XmlReader* const& System::Data::DataTextReader::__cordl_internal_get__xmlreader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xmlreader;
}
constexpr void System::Data::DataTextReader::__cordl_internal_set__xmlreader(::System::Xml::XmlReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____xmlreader = value;
}
inline ::System::Xml::XmlReader* System::Data::DataTextReader::CreateReader(::System::Xml::XmlReader*  xr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataTextReader*>(),
                        {"CreateReader", {}, {::i2c::type_of<::System::Xml::XmlReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReader*>(nullptr, ___internal_method, xr);
}
inline void System::Data::DataTextReader::_ctor(::System::Xml::XmlReader*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataTextReader*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Xml::XmlReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline ::System::Xml::XmlReaderSettings* System::Data::DataTextReader::get_Settings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReaderSettings*>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Data::DataTextReader::get_NodeType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline ::StringW System::Data::DataTextReader::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Data::DataTextReader::get_LocalName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Data::DataTextReader::get_NamespaceURI()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Data::DataTextReader::get_Prefix()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Data::DataTextReader::get_HasValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Data::DataTextReader::get_Value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Data::DataTextReader::get_Depth()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Data::DataTextReader::get_BaseURI()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Data::DataTextReader::get_IsEmptyElement()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataTextReader::get_IsDefault()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline char16_t System::Data::DataTextReader::get_QuoteChar()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline ::System::Xml::XmlSpace System::Data::DataTextReader::get_XmlSpace()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace>(this, ___internal_method);
}
inline ::StringW System::Data::DataTextReader::get_XmlLang()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Data::DataTextReader::get_AttributeCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Data::DataTextReader::GetAttribute(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline ::StringW System::Data::DataTextReader::GetAttribute(::StringW  localName, ::StringW  namespaceURI)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, localName, namespaceURI);
}
inline ::StringW System::Data::DataTextReader::GetAttribute(int32_t  i)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, i);
}
inline bool System::Data::DataTextReader::MoveToAttribute(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline void System::Data::DataTextReader::MoveToAttribute(int32_t  i)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline bool System::Data::DataTextReader::MoveToFirstAttribute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataTextReader::MoveToNextAttribute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataTextReader::MoveToElement()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataTextReader::ReadAttributeValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataTextReader::Read()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataTextReader::get_EOF()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::DataTextReader::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::ReadState System::Data::DataTextReader::get_ReadState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::ReadState>(this, ___internal_method);
}
inline void System::Data::DataTextReader::Skip()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlNameTable* System::Data::DataTextReader::get_NameTable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*>(this, ___internal_method);
}
inline ::StringW System::Data::DataTextReader::LookupNamespace(::StringW  prefix)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, prefix);
}
inline bool System::Data::DataTextReader::get_CanResolveEntity()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::DataTextReader::ResolveEntity()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Data::DataTextReader::get_CanReadValueChunk()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Data::DataTextReader::ReadString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataTextReader*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Data::DataTextReader* System::Data::DataTextReader::New_ctor(::System::Xml::XmlReader*  input)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataTextReader*>(input));
}
// Ctor Parameters []
constexpr ::System::Data::DataTextReader::DataTextReader()   {
}

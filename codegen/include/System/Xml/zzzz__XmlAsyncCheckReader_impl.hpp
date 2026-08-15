#pragma once
// IWYU pragma private; include "System/Xml/XmlAsyncCheckReader.hpp"
#include "System/Xml/zzzz__XmlReader_impl.hpp"
#include "System/Xml/zzzz__XmlAsyncCheckReader_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Xml/Schema/zzzz__IXmlSchemaInfo_def.hpp"
#include "System/Xml/zzzz__IDtdInfo_def.hpp"
#include "System/Xml/zzzz__ReadState_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlReaderSettings_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_CoreReader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlReader* (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_CoreReader)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                        {"get_CoreReader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.CreateAsyncCheckWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlAsyncCheckReader* (*)(::System::Xml::XmlReader*)>(&::System::Xml::XmlAsyncCheckReader::CreateAsyncCheckWrapper)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x181cdd040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                        {"CreateAsyncCheckWrapper", {}, {::i2c::type_of<::System::Xml::XmlReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckReader::*)(::System::Xml::XmlReader*)>(&::System::Xml::XmlAsyncCheckReader::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cddd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Xml::XmlReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.CheckAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::CheckAsync)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181cdcfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                        {"CheckAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_Settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlReaderSettings* (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_Settings)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181cde540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_NodeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_NodeType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cde360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_Name)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cde240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_LocalName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_LocalName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cde180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_NamespaceURI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_NamespaceURI)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cde300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_Prefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_Prefix)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cde3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_HasValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_HasValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cde060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_Value)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cde630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_Depth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_Depth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cddee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_BaseURI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_BaseURI)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cdddc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_IsEmptyElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_IsEmptyElement)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cde120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_IsDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_IsDefault)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cde0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_QuoteChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_QuoteChar)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cde420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_XmlSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlSpace (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_XmlSpace)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cde6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_XmlLang
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_XmlLang)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cde690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_SchemaInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::IXmlSchemaInfo* (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_SchemaInfo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cde4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_ValueType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_ValueType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cde5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.ReadContentAsString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::ReadContentAsString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cdd8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_AttributeCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_AttributeCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cddd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.GetAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAsyncCheckReader::*)(::StringW)>(&::System::Xml::XmlAsyncCheckReader::GetAttribute)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cdd3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.GetAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAsyncCheckReader::*)(::StringW, ::StringW)>(&::System::Xml::XmlAsyncCheckReader::GetAttribute)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181cdd410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.GetAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAsyncCheckReader::*)(int32_t)>(&::System::Xml::XmlAsyncCheckReader::GetAttribute)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cdd330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.MoveToAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlAsyncCheckReader::*)(::StringW)>(&::System::Xml::XmlAsyncCheckReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cdd650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.MoveToAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckReader::*)(int32_t)>(&::System::Xml::XmlAsyncCheckReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cdd5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.MoveToFirstAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::MoveToFirstAttribute)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cdd780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.MoveToNextAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::MoveToNextAttribute)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cdd7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.MoveToElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::MoveToElement)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cdd720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.ReadAttributeValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::ReadAttributeValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cdd840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::Read)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cddbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_EOF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_EOF)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cddfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::Close)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cdcfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_ReadState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::ReadState (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_ReadState)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cde480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.Skip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::Skip)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cddca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_NameTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_NameTable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cde1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.LookupNamespace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAsyncCheckReader::*)(::StringW)>(&::System::Xml::XmlAsyncCheckReader::LookupNamespace)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cdd570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_CanResolveEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_CanResolveEntity)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cdde80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.ResolveEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::ResolveEntity)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cddc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_CanReadValueChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_CanReadValueChunk)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cdde20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.ReadValueChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlAsyncCheckReader::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::XmlAsyncCheckReader::ReadValueChunk)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181cddb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.ReadString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::ReadString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cddaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.MoveToContent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::MoveToContent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cdd6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.ReadStartElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::ReadStartElement)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cdda90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.ReadStartElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckReader::*)(::StringW)>(&::System::Xml::XmlAsyncCheckReader::ReadStartElement)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cdda20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.ReadElementString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::ReadElementString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cdd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.ReadEndElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::ReadEndElement)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cdd960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.IsStartElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::IsStartElement)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cdd490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.IsStartElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlAsyncCheckReader::*)(::StringW, ::StringW)>(&::System::Xml::XmlAsyncCheckReader::IsStartElement)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181cdd4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.ReadInnerXml
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::ReadInnerXml)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cdd9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_HasAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_HasAttributes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cde000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckReader::*)(bool)>(&::System::Xml::XmlAsyncCheckReader::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cdd2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_NamespaceManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNamespaceManager* (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_NamespaceManager)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cde2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckReader.get_DtdInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::IDtdInfo* (::System::Xml::XmlAsyncCheckReader::*)()>(&::System::Xml::XmlAsyncCheckReader::get_DtdInfo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cddf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 56}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlReader*& System::Xml::XmlAsyncCheckReader::__cordl_internal_get_coreReader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coreReader;
}
constexpr ::System::Xml::XmlReader* const& System::Xml::XmlAsyncCheckReader::__cordl_internal_get_coreReader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coreReader;
}
constexpr void System::Xml::XmlAsyncCheckReader::__cordl_internal_set_coreReader(::System::Xml::XmlReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coreReader = value;
}
constexpr ::System::Threading::Tasks::Task*& System::Xml::XmlAsyncCheckReader::__cordl_internal_get_lastTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTask;
}
constexpr ::System::Threading::Tasks::Task* const& System::Xml::XmlAsyncCheckReader::__cordl_internal_get_lastTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTask;
}
constexpr void System::Xml::XmlAsyncCheckReader::__cordl_internal_set_lastTask(::System::Threading::Tasks::Task*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTask = value;
}
inline ::System::Xml::XmlReader* System::Xml::XmlAsyncCheckReader::get_CoreReader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                        {"get_CoreReader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReader*>(this, ___internal_method);
}
inline ::System::Xml::XmlAsyncCheckReader* System::Xml::XmlAsyncCheckReader::CreateAsyncCheckWrapper(::System::Xml::XmlReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                        {"CreateAsyncCheckWrapper", {}, {::i2c::type_of<::System::Xml::XmlReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAsyncCheckReader*>(nullptr, ___internal_method, reader);
}
inline void System::Xml::XmlAsyncCheckReader::_ctor(::System::Xml::XmlReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Xml::XmlReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void System::Xml::XmlAsyncCheckReader::CheckAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(),
                        {"CheckAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlReaderSettings* System::Xml::XmlAsyncCheckReader::get_Settings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReaderSettings*>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlAsyncCheckReader::get_NodeType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlAsyncCheckReader::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlAsyncCheckReader::get_LocalName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlAsyncCheckReader::get_NamespaceURI()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlAsyncCheckReader::get_Prefix()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Xml::XmlAsyncCheckReader::get_HasValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlAsyncCheckReader::get_Value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Xml::XmlAsyncCheckReader::get_Depth()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlAsyncCheckReader::get_BaseURI()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Xml::XmlAsyncCheckReader::get_IsEmptyElement()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlAsyncCheckReader::get_IsDefault()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline char16_t System::Xml::XmlAsyncCheckReader::get_QuoteChar()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline ::System::Xml::XmlSpace System::Xml::XmlAsyncCheckReader::get_XmlSpace()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlAsyncCheckReader::get_XmlLang()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::Schema::IXmlSchemaInfo* System::Xml::XmlAsyncCheckReader::get_SchemaInfo()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::IXmlSchemaInfo*>(this, ___internal_method);
}
inline ::System::Type* System::Xml::XmlAsyncCheckReader::get_ValueType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlAsyncCheckReader::ReadContentAsString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Xml::XmlAsyncCheckReader::get_AttributeCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlAsyncCheckReader::GetAttribute(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline ::StringW System::Xml::XmlAsyncCheckReader::GetAttribute(::StringW  name, ::StringW  namespaceURI)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name, namespaceURI);
}
inline ::StringW System::Xml::XmlAsyncCheckReader::GetAttribute(int32_t  i)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, i);
}
inline bool System::Xml::XmlAsyncCheckReader::MoveToAttribute(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline void System::Xml::XmlAsyncCheckReader::MoveToAttribute(int32_t  i)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline bool System::Xml::XmlAsyncCheckReader::MoveToFirstAttribute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlAsyncCheckReader::MoveToNextAttribute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlAsyncCheckReader::MoveToElement()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlAsyncCheckReader::ReadAttributeValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlAsyncCheckReader::Read()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlAsyncCheckReader::get_EOF()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlAsyncCheckReader::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::ReadState System::Xml::XmlAsyncCheckReader::get_ReadState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::ReadState>(this, ___internal_method);
}
inline void System::Xml::XmlAsyncCheckReader::Skip()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlNameTable* System::Xml::XmlAsyncCheckReader::get_NameTable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlAsyncCheckReader::LookupNamespace(::StringW  prefix)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, prefix);
}
inline bool System::Xml::XmlAsyncCheckReader::get_CanResolveEntity()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlAsyncCheckReader::ResolveEntity()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::XmlAsyncCheckReader::get_CanReadValueChunk()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Xml::XmlAsyncCheckReader::ReadValueChunk(::ArrayW<char16_t>  buffer, int32_t  index, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, index, count);
}
inline ::StringW System::Xml::XmlAsyncCheckReader::ReadString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlAsyncCheckReader::MoveToContent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline void System::Xml::XmlAsyncCheckReader::ReadStartElement()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlAsyncCheckReader::ReadStartElement(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::StringW System::Xml::XmlAsyncCheckReader::ReadElementString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::XmlAsyncCheckReader::ReadEndElement()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::XmlAsyncCheckReader::IsStartElement()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlAsyncCheckReader::IsStartElement(::StringW  localname, ::StringW  ns)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localname, ns);
}
inline ::StringW System::Xml::XmlAsyncCheckReader::ReadInnerXml()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Xml::XmlAsyncCheckReader::get_HasAttributes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlAsyncCheckReader::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Xml::XmlNamespaceManager* System::Xml::XmlAsyncCheckReader::get_NamespaceManager()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNamespaceManager*>(this, ___internal_method);
}
inline ::System::Xml::IDtdInfo* System::Xml::XmlAsyncCheckReader::get_DtdInfo()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckReader*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::IDtdInfo*>(this, ___internal_method);
}
inline ::System::Xml::XmlAsyncCheckReader* System::Xml::XmlAsyncCheckReader::New_ctor(::System::Xml::XmlReader*  reader)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlAsyncCheckReader*>(reader));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlAsyncCheckReader::XmlAsyncCheckReader()   {
}

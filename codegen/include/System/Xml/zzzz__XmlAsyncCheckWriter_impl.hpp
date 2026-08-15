#pragma once
// IWYU pragma private; include "System/Xml/XmlAsyncCheckWriter.hpp"
#include "System/Xml/zzzz__XmlWriter_impl.hpp"
#include "System/Xml/zzzz__XmlAsyncCheckWriter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Xml/zzzz__WriteState_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(::System::Xml::XmlWriter*)>(&::System::Xml::XmlAsyncCheckWriter::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cdf860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Xml::XmlWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.CheckAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)()>(&::System::Xml::XmlAsyncCheckWriter::CheckAsync)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181cde750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                        {"CheckAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteStartDocument
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)()>(&::System::Xml::XmlAsyncCheckWriter::WriteStartDocument)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cdf210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteStartDocument
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(bool)>(&::System::Xml::XmlAsyncCheckWriter::WriteStartDocument)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cdf1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteEndDocument
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)()>(&::System::Xml::XmlAsyncCheckWriter::WriteEndDocument)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cded80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteDocType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::System::Xml::XmlAsyncCheckWriter::WriteDocType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181cdec90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteStartElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::XmlAsyncCheckWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181cdf270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteEndElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)()>(&::System::Xml::XmlAsyncCheckWriter::WriteEndElement)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cdede0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteFullEndElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)()>(&::System::Xml::XmlAsyncCheckWriter::WriteFullEndElement)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cdeeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteStartAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::XmlAsyncCheckWriter::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181cdf110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteEndAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)()>(&::System::Xml::XmlAsyncCheckWriter::WriteEndAttribute)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cded20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteCData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(::StringW)>(&::System::Xml::XmlAsyncCheckWriter::WriteCData)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cdeab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteComment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(::StringW)>(&::System::Xml::XmlAsyncCheckWriter::WriteComment)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cdec20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteProcessingInstruction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(::StringW, ::StringW)>(&::System::Xml::XmlAsyncCheckWriter::WriteProcessingInstruction)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181cdef90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteEntityRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(::StringW)>(&::System::Xml::XmlAsyncCheckWriter::WriteEntityRef)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cdee40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteCharEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(char16_t)>(&::System::Xml::XmlAsyncCheckWriter::WriteCharEntity)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cdeb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteWhitespace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(::StringW)>(&::System::Xml::XmlAsyncCheckWriter::WriteWhitespace)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cdf7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(::StringW)>(&::System::Xml::XmlAsyncCheckWriter::WriteString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cdf300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteSurrogateCharEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(char16_t, char16_t)>(&::System::Xml::XmlAsyncCheckWriter::WriteSurrogateCharEntity)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181cdf370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteChars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::XmlAsyncCheckWriter::WriteChars)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181cdeb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::XmlAsyncCheckWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181cdf010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(::StringW)>(&::System::Xml::XmlAsyncCheckWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cdf0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteBase64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlAsyncCheckWriter::WriteBase64)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181cde990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteBinHex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlAsyncCheckWriter::WriteBinHex)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181cdea20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.get_WriteState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::WriteState (::System::Xml::XmlAsyncCheckWriter::*)()>(&::System::Xml::XmlAsyncCheckWriter::get_WriteState)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cdf8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)()>(&::System::Xml::XmlAsyncCheckWriter::Close)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cde790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)()>(&::System::Xml::XmlAsyncCheckWriter::Flush)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cde840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.LookupPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAsyncCheckWriter::*)(::StringW)>(&::System::Xml::XmlAsyncCheckWriter::LookupPrefix)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cde8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(::System::Object*)>(&::System::Xml::XmlAsyncCheckWriter::WriteValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cdf780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(::StringW)>(&::System::Xml::XmlAsyncCheckWriter::WriteValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cdf6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(bool)>(&::System::Xml::XmlAsyncCheckWriter::WriteValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cdf470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(::System::DateTime)>(&::System::Xml::XmlAsyncCheckWriter::WriteValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cdf550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(double_t)>(&::System::Xml::XmlAsyncCheckWriter::WriteValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cdf630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(float_t)>(&::System::Xml::XmlAsyncCheckWriter::WriteValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cdf4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(::System::Decimal)>(&::System::Xml::XmlAsyncCheckWriter::WriteValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181cdf3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(int32_t)>(&::System::Xml::XmlAsyncCheckWriter::WriteValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cdf5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(int64_t)>(&::System::Xml::XmlAsyncCheckWriter::WriteValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cdf710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(::System::Xml::XmlReader*, bool)>(&::System::Xml::XmlAsyncCheckWriter::WriteAttributes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181cde910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.WriteNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(::System::Xml::XmlReader*, bool)>(&::System::Xml::XmlAsyncCheckWriter::WriteNode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181cdef10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAsyncCheckWriter.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAsyncCheckWriter::*)(bool)>(&::System::Xml::XmlAsyncCheckWriter::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181cde7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                    {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 42}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlWriter*& System::Xml::XmlAsyncCheckWriter::__cordl_internal_get_coreWriter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coreWriter;
}
constexpr ::System::Xml::XmlWriter* const& System::Xml::XmlAsyncCheckWriter::__cordl_internal_get_coreWriter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coreWriter;
}
constexpr void System::Xml::XmlAsyncCheckWriter::__cordl_internal_set_coreWriter(::System::Xml::XmlWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coreWriter = value;
}
constexpr ::System::Threading::Tasks::Task*& System::Xml::XmlAsyncCheckWriter::__cordl_internal_get_lastTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTask;
}
constexpr ::System::Threading::Tasks::Task* const& System::Xml::XmlAsyncCheckWriter::__cordl_internal_get_lastTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTask;
}
constexpr void System::Xml::XmlAsyncCheckWriter::__cordl_internal_set_lastTask(::System::Threading::Tasks::Task*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTask = value;
}
inline void System::Xml::XmlAsyncCheckWriter::_ctor(::System::Xml::XmlWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Xml::XmlWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void System::Xml::XmlAsyncCheckWriter::CheckAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(),
                        {"CheckAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteStartDocument()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteStartDocument(bool  standalone)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, standalone);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteEndDocument()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteDocType(::StringW  name, ::StringW  pubid, ::StringW  sysid, ::StringW  subset)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, pubid, sysid, subset);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteStartElement(::StringW  prefix, ::StringW  localName, ::StringW  ns)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteEndElement()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteFullEndElement()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteStartAttribute(::StringW  prefix, ::StringW  localName, ::StringW  ns)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteEndAttribute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteCData(::StringW  text)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteComment(::StringW  text)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteProcessingInstruction(::StringW  name, ::StringW  text)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, text);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteEntityRef(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteCharEntity(char16_t  ch)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteWhitespace(::StringW  ws)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ws);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteString(::StringW  text)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteSurrogateCharEntity(char16_t  lowChar, char16_t  highChar)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lowChar, highChar);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteChars(::ArrayW<char16_t>  buffer, int32_t  index, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteRaw(::ArrayW<char16_t>  buffer, int32_t  index, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteRaw(::StringW  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteBase64(::ArrayW<uint8_t>  buffer, int32_t  index, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteBinHex(::ArrayW<uint8_t>  buffer, int32_t  index, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline ::System::Xml::WriteState System::Xml::XmlAsyncCheckWriter::get_WriteState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::WriteState>(this, ___internal_method);
}
inline void System::Xml::XmlAsyncCheckWriter::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlAsyncCheckWriter::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlAsyncCheckWriter::LookupPrefix(::StringW  ns)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, ns);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteValue(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteValue(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteValue(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteValue(::System::DateTime  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteValue(double_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteValue(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteValue(::System::Decimal  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteValue(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteValue(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteAttributes(::System::Xml::XmlReader*  reader, bool  defattr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, defattr);
}
inline void System::Xml::XmlAsyncCheckWriter::WriteNode(::System::Xml::XmlReader*  reader, bool  defattr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, defattr);
}
inline void System::Xml::XmlAsyncCheckWriter::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAsyncCheckWriter*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Xml::XmlAsyncCheckWriter* System::Xml::XmlAsyncCheckWriter::New_ctor(::System::Xml::XmlWriter*  writer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlAsyncCheckWriter*>(writer));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlAsyncCheckWriter::XmlAsyncCheckWriter()   {
}

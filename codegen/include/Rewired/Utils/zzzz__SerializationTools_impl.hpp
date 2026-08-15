#pragma once
// IWYU pragma private; include "Rewired/Utils/SerializationTools.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/zzzz__SerializationTools_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::SerializationTools.WriteXmlElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::XmlWriter*, ::StringW, ::System::Object*)>(&::Rewired::Utils::SerializationTools::WriteXmlElement)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18190d650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SerializationTools*>(),
                        {"WriteXmlElement", {}, {::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::SerializationTools.bHnNZqWctQQXidmEGahldChuyKHO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::XmlWriter*, ::System::Object*)>(&::Rewired::Utils::SerializationTools::bHnNZqWctQQXidmEGahldChuyKHO)> {
  constexpr static std::size_t size = 0x1600;
  constexpr static std::size_t addrs = 0x18190d760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SerializationTools*>(),
                        {"bHnNZqWctQQXidmEGahldChuyKHO", {}, {::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::SerializationTools.ReadXmlElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Xml::XmlReader*, ::StringW)>(&::Rewired::Utils::SerializationTools::ReadXmlElement)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18190d400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SerializationTools*>(),
                        {"ReadXmlElement", {}, {::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::SerializationTools.TryReadXmlElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::XmlReader*, ::StringW, ::by_ref<::StringW>)>(&::Rewired::Utils::SerializationTools::TryReadXmlElement)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18190d4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SerializationTools*>(),
                        {"TryReadXmlElement", {}, {::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::SerializationTools.TryReadXmlStartElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::XmlReader*, ::StringW, ::by_ref<bool>)>(&::Rewired::Utils::SerializationTools::TryReadXmlStartElement)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18190d5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SerializationTools*>(),
                        {"TryReadXmlStartElement", {}, {::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::SerializationTools.TryReadXmlEndElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::XmlReader*)>(&::Rewired::Utils::SerializationTools::TryReadXmlEndElement)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18190d5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SerializationTools*>(),
                        {"TryReadXmlEndElement", {}, {::i2c::type_of<::System::Xml::XmlReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::SerializationTools.CleanInvalidXmlChars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Rewired::Utils::SerializationTools::CleanInvalidXmlChars)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18190d370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SerializationTools*>(),
                        {"CleanInvalidXmlChars", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
inline ::StringW Rewired::Utils::SerializationTools::SerializeObjectToXmlString(T  obj)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::SerializationTools*>(),
                    {"SerializeObjectToXmlString", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, obj);
}
inline void Rewired::Utils::SerializationTools::WriteXmlElement(::System::Xml::XmlWriter*  writer, ::StringW  name, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SerializationTools*>(),
                        {"WriteXmlElement", {}, {::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, name, value);
}
template<typename T>
inline void Rewired::Utils::SerializationTools::WriteXmlElement(::System::Xml::XmlWriter*  writer, ::StringW  name, T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::SerializationTools*>(),
                    {"WriteXmlElement", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, name, value);
}
inline void Rewired::Utils::SerializationTools::bHnNZqWctQQXidmEGahldChuyKHO(::System::Xml::XmlWriter*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SerializationTools*>(),
                        {"bHnNZqWctQQXidmEGahldChuyKHO", {}, {::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::StringW Rewired::Utils::SerializationTools::ReadXmlElement(::System::Xml::XmlReader*  reader, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SerializationTools*>(),
                        {"ReadXmlElement", {}, {::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, reader, name);
}
template<typename T>
inline T Rewired::Utils::SerializationTools::ReadXmlElement(::System::Xml::XmlReader*  reader, ::StringW  name)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::SerializationTools*>(),
                    {"ReadXmlElement", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, reader, name);
}
inline bool Rewired::Utils::SerializationTools::TryReadXmlElement(::System::Xml::XmlReader*  reader, ::StringW  name, ::by_ref<::StringW>  outValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SerializationTools*>(),
                        {"TryReadXmlElement", {}, {::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, reader, name, outValue);
}
template<typename T>
inline bool Rewired::Utils::SerializationTools::TryReadXmlElement(::System::Xml::XmlReader*  reader, ::StringW  name, ::by_ref<T>  outValue)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::SerializationTools*>(),
                    {"TryReadXmlElement", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, reader, name, outValue);
}
template<typename T>
inline bool Rewired::Utils::SerializationTools::TryReadXmlElement(::System::Xml::XmlReader*  reader, ::StringW  name, ::by_ref<T>  outValue, T  defaultValue)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::SerializationTools*>(),
                    {"TryReadXmlElement", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, reader, name, outValue, defaultValue);
}
inline bool Rewired::Utils::SerializationTools::TryReadXmlStartElement(::System::Xml::XmlReader*  reader, ::StringW  name, ::by_ref<bool>  isEmpty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SerializationTools*>(),
                        {"TryReadXmlStartElement", {}, {::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, reader, name, isEmpty);
}
inline bool Rewired::Utils::SerializationTools::TryReadXmlEndElement(::System::Xml::XmlReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SerializationTools*>(),
                        {"TryReadXmlEndElement", {}, {::i2c::type_of<::System::Xml::XmlReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, reader);
}
inline ::StringW Rewired::Utils::SerializationTools::CleanInvalidXmlChars(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SerializationTools*>(),
                        {"CleanInvalidXmlChars", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, text);
}
// Ctor Parameters []
constexpr ::Rewired::Utils::SerializationTools::SerializationTools()   {
}

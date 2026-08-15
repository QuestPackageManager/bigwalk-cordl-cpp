#pragma once
// IWYU pragma private; include "System/Xml/XmlCDataSection.hpp"
#include "System/Xml/zzzz__XmlCharacterData_impl.hpp"
#include "System/Xml/zzzz__XmlCDataSection_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlCDataSection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlCDataSection::*)(::StringW, ::System::Xml::XmlDocument*)>(&::System::Xml::XmlCDataSection::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181cff740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlCDataSection*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDocument*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCDataSection.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlCDataSection::*)()>(&::System::Xml::XmlCDataSection::get_Name)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181cff790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlCDataSection*>(),
                    {::i2c::class_of<::System::Xml::XmlCDataSection*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCDataSection.get_LocalName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlCDataSection::*)()>(&::System::Xml::XmlCDataSection::get_LocalName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181cff790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlCDataSection*>(),
                    {::i2c::class_of<::System::Xml::XmlCDataSection*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCDataSection.get_NodeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlCDataSection::*)()>(&::System::Xml::XmlCDataSection::get_NodeType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180309580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlCDataSection*>(),
                    {::i2c::class_of<::System::Xml::XmlCDataSection*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCDataSection.get_ParentNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlCDataSection::*)()>(&::System::Xml::XmlCDataSection::get_ParentNode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181cff7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlCDataSection*>(),
                    {::i2c::class_of<::System::Xml::XmlCDataSection*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCDataSection.CloneNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlCDataSection::*)(bool)>(&::System::Xml::XmlCDataSection::CloneNode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cff6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlCDataSection*>(),
                    {::i2c::class_of<::System::Xml::XmlCDataSection*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCDataSection.WriteTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlCDataSection::*)(::System::Xml::XmlWriter*)>(&::System::Xml::XmlCDataSection::WriteTo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181cff700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlCDataSection*>(),
                    {::i2c::class_of<::System::Xml::XmlCDataSection*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCDataSection.WriteContentTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlCDataSection::*)(::System::Xml::XmlWriter*)>(&::System::Xml::XmlCDataSection::WriteContentTo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlCDataSection*>(),
                    {::i2c::class_of<::System::Xml::XmlCDataSection*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCDataSection.get_IsText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlCDataSection::*)()>(&::System::Xml::XmlCDataSection::get_IsText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlCDataSection*>(),
                    {::i2c::class_of<::System::Xml::XmlCDataSection*>(), 55}
                ));
    return ___internal_method;
  }
};
inline void System::Xml::XmlCDataSection::_ctor(::StringW  data, ::System::Xml::XmlDocument*  doc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlCDataSection*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDocument*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, doc);
}
inline ::StringW System::Xml::XmlCDataSection::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlCDataSection*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlCDataSection::get_LocalName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlCDataSection*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlCDataSection::get_NodeType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlCDataSection*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline ::System::Xml::XmlNode* System::Xml::XmlCDataSection::get_ParentNode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlCDataSection*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method);
}
inline ::System::Xml::XmlNode* System::Xml::XmlCDataSection::CloneNode(bool  deep)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlCDataSection*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, deep);
}
inline void System::Xml::XmlCDataSection::WriteTo(::System::Xml::XmlWriter*  w)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlCDataSection*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, w);
}
inline void System::Xml::XmlCDataSection::WriteContentTo(::System::Xml::XmlWriter*  w)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlCDataSection*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, w);
}
inline bool System::Xml::XmlCDataSection::get_IsText()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlCDataSection*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlCDataSection* System::Xml::XmlCDataSection::New_ctor(::StringW  data, ::System::Xml::XmlDocument*  doc)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlCDataSection*>(data, doc));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlCDataSection::XmlCDataSection()   {
}

#pragma once
// IWYU pragma private; include "System/Xml/XmlText.hpp"
#include "System/Xml/zzzz__XmlCharacterData_impl.hpp"
#include "System/Xml/zzzz__XmlText_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlText._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlText::*)(::StringW)>(&::System::Xml::XmlText::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181d25740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlText*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlText._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlText::*)(::StringW, ::System::Xml::XmlDocument*)>(&::System::Xml::XmlText::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181d25730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlText*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDocument*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlText.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlText::*)()>(&::System::Xml::XmlText::get_Name)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181d25750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlText*>(),
                    {::i2c::class_of<::System::Xml::XmlText*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlText.get_LocalName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlText::*)()>(&::System::Xml::XmlText::get_LocalName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181d25750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlText*>(),
                    {::i2c::class_of<::System::Xml::XmlText*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlText.get_NodeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlText::*)()>(&::System::Xml::XmlText::get_NodeType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ee400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlText*>(),
                    {::i2c::class_of<::System::Xml::XmlText*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlText.get_ParentNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlText::*)()>(&::System::Xml::XmlText::get_ParentNode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181cff7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlText*>(),
                    {::i2c::class_of<::System::Xml::XmlText*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlText.CloneNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlText::*)(bool)>(&::System::Xml::XmlText::CloneNode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181d256d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlText*>(),
                    {::i2c::class_of<::System::Xml::XmlText*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlText.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlText::*)()>(&::System::Xml::XmlText::get_Value)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181cff8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlText*>(),
                    {::i2c::class_of<::System::Xml::XmlText*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlText.set_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlText::*)(::StringW)>(&::System::Xml::XmlText::set_Value)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181d25780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlText*>(),
                    {::i2c::class_of<::System::Xml::XmlText*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlText.WriteTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlText::*)(::System::Xml::XmlWriter*)>(&::System::Xml::XmlText::WriteTo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181d254e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlText*>(),
                    {::i2c::class_of<::System::Xml::XmlText*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlText.WriteContentTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlText::*)(::System::Xml::XmlWriter*)>(&::System::Xml::XmlText::WriteContentTo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlText*>(),
                    {::i2c::class_of<::System::Xml::XmlText*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlText.get_IsText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlText::*)()>(&::System::Xml::XmlText::get_IsText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlText*>(),
                    {::i2c::class_of<::System::Xml::XmlText*>(), 55}
                ));
    return ___internal_method;
  }
};
inline void System::Xml::XmlText::_ctor(::StringW  strData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlText*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strData);
}
inline void System::Xml::XmlText::_ctor(::StringW  strData, ::System::Xml::XmlDocument*  doc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlText*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDocument*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strData, doc);
}
inline ::StringW System::Xml::XmlText::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlText*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlText::get_LocalName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlText*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlText::get_NodeType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlText*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline ::System::Xml::XmlNode* System::Xml::XmlText::get_ParentNode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlText*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method);
}
inline ::System::Xml::XmlNode* System::Xml::XmlText::CloneNode(bool  deep)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlText*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, deep);
}
inline ::StringW System::Xml::XmlText::get_Value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlText*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::XmlText::set_Value(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlText*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlText::WriteTo(::System::Xml::XmlWriter*  w)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlText*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, w);
}
inline void System::Xml::XmlText::WriteContentTo(::System::Xml::XmlWriter*  w)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlText*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, w);
}
inline bool System::Xml::XmlText::get_IsText()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlText*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlText* System::Xml::XmlText::New_ctor(::StringW  strData)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlText*>(strData));
}
inline ::System::Xml::XmlText* System::Xml::XmlText::New_ctor(::StringW  strData, ::System::Xml::XmlDocument*  doc)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlText*>(strData, doc));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlText::XmlText()   {
}

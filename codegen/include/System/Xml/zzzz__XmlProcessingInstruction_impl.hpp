#pragma once
// IWYU pragma private; include "System/Xml/XmlProcessingInstruction.hpp"
#include "System/Xml/zzzz__XmlLinkedNode_impl.hpp"
#include "System/Xml/zzzz__XmlProcessingInstruction_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlProcessingInstruction._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlProcessingInstruction::*)(::StringW, ::StringW, ::System::Xml::XmlDocument*)>(&::System::Xml::XmlProcessingInstruction::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181d25330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDocument*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlProcessingInstruction.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlProcessingInstruction::*)()>(&::System::Xml::XmlProcessingInstruction::get_Name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181cff8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(),
                    {::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlProcessingInstruction.get_LocalName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlProcessingInstruction::*)()>(&::System::Xml::XmlProcessingInstruction::get_LocalName)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181163b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(),
                    {::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlProcessingInstruction.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlProcessingInstruction::*)()>(&::System::Xml::XmlProcessingInstruction::get_Value)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(),
                    {::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlProcessingInstruction.set_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlProcessingInstruction::*)(::StringW)>(&::System::Xml::XmlProcessingInstruction::set_Value)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181d25470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(),
                    {::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlProcessingInstruction.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlProcessingInstruction::*)(::StringW)>(&::System::Xml::XmlProcessingInstruction::set_Data)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181d25390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(),
                        {"set_Data", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlProcessingInstruction.get_InnerText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlProcessingInstruction::*)()>(&::System::Xml::XmlProcessingInstruction::get_InnerText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(),
                    {::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlProcessingInstruction.set_InnerText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlProcessingInstruction::*)(::StringW)>(&::System::Xml::XmlProcessingInstruction::set_InnerText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181d25470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(),
                    {::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlProcessingInstruction.get_NodeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlProcessingInstruction::*)()>(&::System::Xml::XmlProcessingInstruction::get_NodeType)> {
  constexpr static std::size_t size = 0x28d50;
  constexpr static std::size_t addrs = 0x180feb5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(),
                    {::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlProcessingInstruction.CloneNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlProcessingInstruction::*)(bool)>(&::System::Xml::XmlProcessingInstruction::CloneNode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181d252c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(),
                    {::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlProcessingInstruction.WriteTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlProcessingInstruction::*)(::System::Xml::XmlWriter*)>(&::System::Xml::XmlProcessingInstruction::WriteTo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181d25300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(),
                    {::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlProcessingInstruction.WriteContentTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlProcessingInstruction::*)(::System::Xml::XmlWriter*)>(&::System::Xml::XmlProcessingInstruction::WriteContentTo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(),
                    {::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(), 44}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::XmlProcessingInstruction::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::StringW const& System::Xml::XmlProcessingInstruction::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void System::Xml::XmlProcessingInstruction::__cordl_internal_set_target(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::StringW& System::Xml::XmlProcessingInstruction::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::StringW const& System::Xml::XmlProcessingInstruction::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void System::Xml::XmlProcessingInstruction::__cordl_internal_set_data(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
inline void System::Xml::XmlProcessingInstruction::_ctor(::StringW  target, ::StringW  data, ::System::Xml::XmlDocument*  doc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDocument*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, data, doc);
}
inline ::StringW System::Xml::XmlProcessingInstruction::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlProcessingInstruction::get_LocalName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlProcessingInstruction::get_Value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::XmlProcessingInstruction::set_Value(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlProcessingInstruction::set_Data(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(),
                        {"set_Data", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Xml::XmlProcessingInstruction::get_InnerText()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::XmlProcessingInstruction::set_InnerText(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlProcessingInstruction::get_NodeType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline ::System::Xml::XmlNode* System::Xml::XmlProcessingInstruction::CloneNode(bool  deep)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, deep);
}
inline void System::Xml::XmlProcessingInstruction::WriteTo(::System::Xml::XmlWriter*  w)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, w);
}
inline void System::Xml::XmlProcessingInstruction::WriteContentTo(::System::Xml::XmlWriter*  w)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlProcessingInstruction*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, w);
}
inline ::System::Xml::XmlProcessingInstruction* System::Xml::XmlProcessingInstruction::New_ctor(::StringW  target, ::StringW  data, ::System::Xml::XmlDocument*  doc)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlProcessingInstruction*>(target, data, doc));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlProcessingInstruction::XmlProcessingInstruction()   {
}

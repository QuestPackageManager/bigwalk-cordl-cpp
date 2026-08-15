#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JPropertyDescriptor.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JPropertyDescriptor_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyDescriptor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JPropertyDescriptor::*)(::StringW)>(&::Newtonsoft::Json::Linq::JPropertyDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818061f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyDescriptor.CastInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JObject* (*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JPropertyDescriptor::CastInstance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181806020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(),
                        {"CastInstance", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyDescriptor.CanResetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JPropertyDescriptor::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JPropertyDescriptor::CanResetValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyDescriptor.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Linq::JPropertyDescriptor::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JPropertyDescriptor::GetValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181806070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyDescriptor.ResetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JPropertyDescriptor::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JPropertyDescriptor::ResetValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyDescriptor.SetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JPropertyDescriptor::*)(::System::Object*, ::System::Object*)>(&::Newtonsoft::Json::Linq::JPropertyDescriptor::SetValue)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1818060e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyDescriptor.ShouldSerializeValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JPropertyDescriptor::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JPropertyDescriptor::ShouldSerializeValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyDescriptor.get_ComponentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Newtonsoft::Json::Linq::JPropertyDescriptor::*)()>(&::Newtonsoft::Json::Linq::JPropertyDescriptor::get_ComponentType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181806200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyDescriptor.get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JPropertyDescriptor::*)()>(&::Newtonsoft::Json::Linq::JPropertyDescriptor::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyDescriptor.get_PropertyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Newtonsoft::Json::Linq::JPropertyDescriptor::*)()>(&::Newtonsoft::Json::Linq::JPropertyDescriptor::get_PropertyType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181806210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyDescriptor.get_NameHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Linq::JPropertyDescriptor::*)()>(&::Newtonsoft::Json::Linq::JPropertyDescriptor::get_NameHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(), 8}
                ));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Linq::JPropertyDescriptor::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::Newtonsoft::Json::Linq::JObject* Newtonsoft::Json::Linq::JPropertyDescriptor::CastInstance(::System::Object*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(),
                        {"CastInstance", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JObject*>(nullptr, ___internal_method, instance);
}
inline bool Newtonsoft::Json::Linq::JPropertyDescriptor::CanResetValue(::System::Object*  component)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline ::System::Object* Newtonsoft::Json::Linq::JPropertyDescriptor::GetValue(::System::Object*  component)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, component);
}
inline void Newtonsoft::Json::Linq::JPropertyDescriptor::ResetValue(::System::Object*  component)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline void Newtonsoft::Json::Linq::JPropertyDescriptor::SetValue(::System::Object*  component, ::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, value);
}
inline bool Newtonsoft::Json::Linq::JPropertyDescriptor::ShouldSerializeValue(::System::Object*  component)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline ::System::Type* Newtonsoft::Json::Linq::JPropertyDescriptor::get_ComponentType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JPropertyDescriptor::get_IsReadOnly()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* Newtonsoft::Json::Linq::JPropertyDescriptor::get_PropertyType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::Linq::JPropertyDescriptor::get_NameHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JPropertyDescriptor* Newtonsoft::Json::Linq::JPropertyDescriptor::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JPropertyDescriptor*>(name));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JPropertyDescriptor::JPropertyDescriptor()   {
}

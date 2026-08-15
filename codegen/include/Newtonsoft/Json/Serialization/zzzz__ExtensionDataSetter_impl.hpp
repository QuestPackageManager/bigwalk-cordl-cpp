#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/ExtensionDataSetter.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ExtensionDataSetter_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ExtensionDataSetter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::ExtensionDataSetter::*)(::System::Object*, ::System::IntPtr)>(&::Newtonsoft::Json::Serialization::ExtensionDataSetter::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180382c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ExtensionDataSetter.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::ExtensionDataSetter::*)(::System::Object*, ::StringW, ::System::Object*)>(&::Newtonsoft::Json::Serialization::ExtensionDataSetter::Invoke)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ExtensionDataSetter.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Newtonsoft::Json::Serialization::ExtensionDataSetter::*)(::System::Object*, ::StringW, ::System::Object*, ::System::AsyncCallback*, ::System::Object*)>(&::Newtonsoft::Json::Serialization::ExtensionDataSetter::BeginInvoke)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180382860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ExtensionDataSetter.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::ExtensionDataSetter::*)(::System::IAsyncResult*)>(&::Newtonsoft::Json::Serialization::ExtensionDataSetter::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Serialization::ExtensionDataSetter::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Newtonsoft::Json::Serialization::ExtensionDataSetter::Invoke(::System::Object*  o, ::StringW  key, ::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o, key, value);
}
inline ::System::IAsyncResult* Newtonsoft::Json::Serialization::ExtensionDataSetter::BeginInvoke(::System::Object*  o, ::StringW  key, ::System::Object*  value, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, o, key, value, callback, object);
}
inline void Newtonsoft::Json::Serialization::ExtensionDataSetter::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Newtonsoft::Json::Serialization::ExtensionDataSetter* Newtonsoft::Json::Serialization::ExtensionDataSetter::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>(object, method));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::ExtensionDataSetter::ExtensionDataSetter()   {
}

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Logging/LogMessageFunc.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/Logging/zzzz__LogMessageFunc_def.hpp"
#include "Epic/OnlineServices/Logging/zzzz__LogMessage_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Logging::LogMessageFunc._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Logging::LogMessageFunc::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::Logging::LogMessageFunc::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Logging::LogMessageFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Logging::LogMessageFunc.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Logging::LogMessageFunc::*)(::by_ref<::Epic::OnlineServices::Logging::LogMessage>)>(&::Epic::OnlineServices::Logging::LogMessageFunc::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Logging::LogMessageFunc*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Logging::LogMessageFunc*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Logging::LogMessageFunc.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::Logging::LogMessageFunc::*)(::by_ref<::Epic::OnlineServices::Logging::LogMessage>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::Logging::LogMessageFunc::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18050bfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Logging::LogMessageFunc*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Logging::LogMessageFunc*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Logging::LogMessageFunc.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Logging::LogMessageFunc::*)(::by_ref<::Epic::OnlineServices::Logging::LogMessage>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::Logging::LogMessageFunc::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Logging::LogMessageFunc*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Logging::LogMessageFunc*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Logging::LogMessageFunc::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Logging::LogMessageFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::Logging::LogMessageFunc::Invoke(::by_ref<::Epic::OnlineServices::Logging::LogMessage>  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Logging::LogMessageFunc*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::System::IAsyncResult* Epic::OnlineServices::Logging::LogMessageFunc::BeginInvoke(::by_ref<::Epic::OnlineServices::Logging::LogMessage>  message, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Logging::LogMessageFunc*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, message, callback, object);
}
inline void Epic::OnlineServices::Logging::LogMessageFunc::EndInvoke(::by_ref<::Epic::OnlineServices::Logging::LogMessage>  message, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Logging::LogMessageFunc*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, result);
}
inline ::Epic::OnlineServices::Logging::LogMessageFunc* Epic::OnlineServices::Logging::LogMessageFunc::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Logging::LogMessageFunc*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Logging::LogMessageFunc::LogMessageFunc()   {
}

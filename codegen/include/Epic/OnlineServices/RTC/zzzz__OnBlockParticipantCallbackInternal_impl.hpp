#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/OnBlockParticipantCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/RTC/zzzz__OnBlockParticipantCallbackInternal_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__BlockParticipantCallbackInfoInternal_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal::*)(::by_ref<::Epic::OnlineServices::RTC::BlockParticipantCallbackInfoInternal>)>(&::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal::*)(::by_ref<::Epic::OnlineServices::RTC::BlockParticipantCallbackInfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804f84e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal::*)(::by_ref<::Epic::OnlineServices::RTC::BlockParticipantCallbackInfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::RTC::BlockParticipantCallbackInfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::RTC::BlockParticipantCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::RTC::BlockParticipantCallbackInfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal* Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal::OnBlockParticipantCallbackInternal()   {
}

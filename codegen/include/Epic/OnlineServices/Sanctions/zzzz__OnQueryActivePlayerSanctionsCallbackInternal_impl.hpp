#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sanctions/OnQueryActivePlayerSanctionsCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__OnQueryActivePlayerSanctionsCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__QueryActivePlayerSanctionsCallbackInfoInternal_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsCallbackInfoInternal>)>(&::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsCallbackInfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804e9bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsCallbackInfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsCallbackInfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsCallbackInfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal* Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal::OnQueryActivePlayerSanctionsCallbackInternal()   {
}

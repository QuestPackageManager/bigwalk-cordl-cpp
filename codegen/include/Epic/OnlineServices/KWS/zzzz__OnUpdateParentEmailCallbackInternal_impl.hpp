#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/OnUpdateParentEmailCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/KWS/zzzz__OnUpdateParentEmailCallbackInternal_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__UpdateParentEmailCallbackInfoInternal_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal::*)(::by_ref<::Epic::OnlineServices::KWS::UpdateParentEmailCallbackInfoInternal>)>(&::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal::*)(::by_ref<::Epic::OnlineServices::KWS::UpdateParentEmailCallbackInfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18051c980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal::*)(::by_ref<::Epic::OnlineServices::KWS::UpdateParentEmailCallbackInfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::KWS::UpdateParentEmailCallbackInfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::KWS::UpdateParentEmailCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::KWS::UpdateParentEmailCallbackInfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal* Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal::OnUpdateParentEmailCallbackInternal()   {
}

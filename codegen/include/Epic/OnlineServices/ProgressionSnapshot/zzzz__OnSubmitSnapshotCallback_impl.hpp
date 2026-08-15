#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ProgressionSnapshot/OnSubmitSnapshotCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__OnSubmitSnapshotCallback_def.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__SubmitSnapshotCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback::*)(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfo>)>(&::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback::*)(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804fb710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback::*)(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback::Invoke(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback::EndInvoke(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback* Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback::OnSubmitSnapshotCallback()   {
}

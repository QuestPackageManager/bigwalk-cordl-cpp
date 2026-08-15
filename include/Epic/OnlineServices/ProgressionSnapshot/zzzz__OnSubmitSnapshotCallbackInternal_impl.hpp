#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ProgressionSnapshot/OnSubmitSnapshotCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__OnSubmitSnapshotCallbackInternal_def.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__SubmitSnapshotCallbackInfoInternal_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal::*)(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal>)>(&::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal::*)(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804fb6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal::*)(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal* Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal::OnSubmitSnapshotCallbackInternal()   {
}

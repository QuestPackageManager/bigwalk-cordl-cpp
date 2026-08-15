#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/OnScreenKeyboardRequestedCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnScreenKeyboardRequestedCallback_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnScreenKeyboardRequestedCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback::*)(::by_ref<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>)>(&::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback::*)(::by_ref<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804ded80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback::*)(::by_ref<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback::Invoke(::by_ref<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback::EndInvoke(::by_ref<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback* Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback::OnScreenKeyboardRequestedCallback()   {
}

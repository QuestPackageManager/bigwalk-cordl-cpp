#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/OnQueryLeaderboardDefinitionsCompleteCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__OnQueryLeaderboardDefinitionsCompleteCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__OnQueryLeaderboardDefinitionsCompleteCallbackInfoInternal_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInfoInternal>)>(&::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18050ffb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal* Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal::OnQueryLeaderboardDefinitionsCompleteCallbackInternal()   {
}

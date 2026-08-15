#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/OnQueryLeaderboardRanksCompleteCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__OnQueryLeaderboardRanksCompleteCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__OnQueryLeaderboardRanksCompleteCallbackInfoInternal_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInfoInternal>)>(&::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18051ada0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal* Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal::OnQueryLeaderboardRanksCompleteCallbackInternal()   {
}

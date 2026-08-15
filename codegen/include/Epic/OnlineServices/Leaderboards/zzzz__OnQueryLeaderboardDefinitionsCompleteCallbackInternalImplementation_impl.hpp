#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/OnQueryLeaderboardDefinitionsCompleteCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__OnQueryLeaderboardDefinitionsCompleteCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__OnQueryLeaderboardDefinitionsCompleteCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__OnQueryLeaderboardDefinitionsCompleteCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal* (*)()>(&::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18051ab60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInfoInternal>)>(&::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18051ab00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal* Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal* Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternalImplementation::OnQueryLeaderboardDefinitionsCompleteCallbackInternalImplementation()   {
}

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/OnQueryLeaderboardUserScoresCompleteCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__OnQueryLeaderboardUserScoresCompleteCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__OnQueryLeaderboardUserScoresCompleteCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__OnQueryLeaderboardUserScoresCompleteCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInternal* (*)()>(&::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18051aec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInfoInternal>)>(&::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18051ae60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInternal* Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInternal* Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInternalImplementation::OnQueryLeaderboardUserScoresCompleteCallbackInternalImplementation()   {
}

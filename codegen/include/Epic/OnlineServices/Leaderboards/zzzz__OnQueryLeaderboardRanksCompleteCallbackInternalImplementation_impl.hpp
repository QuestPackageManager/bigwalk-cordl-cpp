#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/OnQueryLeaderboardRanksCompleteCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__OnQueryLeaderboardRanksCompleteCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__OnQueryLeaderboardRanksCompleteCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__OnQueryLeaderboardRanksCompleteCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal* (*)()>(&::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18051ac80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInfoInternal>)>(&::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18051ac20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal* Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal* Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternalImplementation::OnQueryLeaderboardRanksCompleteCallbackInternalImplementation()   {
}

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/OnQueryPlayerAchievementsCompleteCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__OnQueryPlayerAchievementsCompleteCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__OnQueryPlayerAchievementsCompleteCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__OnQueryPlayerAchievementsCompleteCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInternal* (*)()>(&::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180530ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInfoInternal>)>(&::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180530f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInternal* Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInternal* Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInternalImplementation::OnQueryPlayerAchievementsCompleteCallbackInternalImplementation()   {
}

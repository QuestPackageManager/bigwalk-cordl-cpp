#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/OnUnlockAchievementsCompleteCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__OnUnlockAchievementsCompleteCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__OnUnlockAchievementsCompleteCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__OnUnlockAchievementsCompleteCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInternal* (*)()>(&::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180531600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInfoInternal>)>(&::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805315a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInternal* Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInternal* Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInternalImplementation::OnUnlockAchievementsCompleteCallbackInternalImplementation()   {
}

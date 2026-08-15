#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/OnAchievementsUnlockedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__OnAchievementsUnlockedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__OnAchievementsUnlockedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__OnAchievementsUnlockedCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternal* (*)()>(&::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18052ec60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInfoInternal>)>(&::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18052ec00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternal* Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternal* Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternalImplementation::OnAchievementsUnlockedCallbackInternalImplementation()   {
}

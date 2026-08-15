#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/OnAchievementsUnlockedCallbackV2InternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__OnAchievementsUnlockedCallbackV2InternalImplementation_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__OnAchievementsUnlockedCallbackV2InfoInternal_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__OnAchievementsUnlockedCallbackV2Internal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal* (*)()>(&::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18052ef70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal>)>(&::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18052ef00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal*, "s_Delegate", ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InternalImplementation*>(std::forward<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal*>(value));
}
inline ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal* Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal*, "s_Delegate", ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InternalImplementation*>();
}
inline ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal* Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InternalImplementation::OnAchievementsUnlockedCallbackV2InternalImplementation()   {
}

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/AddNotifyAchievementsUnlockedV2OptionsInternal.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__AddNotifyAchievementsUnlockedV2OptionsInternal_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__AddNotifyAchievementsUnlockedV2Options_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2OptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2OptionsInternal::*)(::by_ref<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2Options>)>(&::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2OptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804f68e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2OptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2Options>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2OptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2OptionsInternal::*)()>(&::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2OptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2OptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2OptionsInternal::Set(::by_ref<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2Options>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2OptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2Options>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2OptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2OptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2Options>"
constexpr  Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2OptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2Options>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2Options>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2Options>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2Options>* Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2OptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Achievements__AddNotifyAchievementsUnlockedV2Options_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2Options>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2OptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2OptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2OptionsInternal::AddNotifyAchievementsUnlockedV2OptionsInternal(int32_t  m_ApiVersion) noexcept  {
this->m_ApiVersion = m_ApiVersion;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2OptionsInternal::AddNotifyAchievementsUnlockedV2OptionsInternal()   {
}

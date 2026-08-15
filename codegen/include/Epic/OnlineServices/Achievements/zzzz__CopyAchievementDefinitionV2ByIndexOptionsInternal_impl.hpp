#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/CopyAchievementDefinitionV2ByIndexOptionsInternal.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__CopyAchievementDefinitionV2ByIndexOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__CopyAchievementDefinitionV2ByIndexOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions>)>(&::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805046f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptionsInternal::*)()>(&::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions>"
constexpr  Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions>* Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Achievements__CopyAchievementDefinitionV2ByIndexOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AchievementIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptionsInternal::CopyAchievementDefinitionV2ByIndexOptionsInternal(int32_t  m_ApiVersion, uint32_t  m_AchievementIndex) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_AchievementIndex = m_AchievementIndex;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptionsInternal::CopyAchievementDefinitionV2ByIndexOptionsInternal()   {
}

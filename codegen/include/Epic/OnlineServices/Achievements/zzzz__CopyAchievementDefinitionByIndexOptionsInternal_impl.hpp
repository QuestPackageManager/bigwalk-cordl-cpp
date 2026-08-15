#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/CopyAchievementDefinitionByIndexOptionsInternal.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__CopyAchievementDefinitionByIndexOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__CopyAchievementDefinitionByIndexOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions>)>(&::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bdbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptionsInternal::*)()>(&::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions>"
constexpr  Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions>* Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Achievements__CopyAchievementDefinitionByIndexOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AchievementIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptionsInternal::CopyAchievementDefinitionByIndexOptionsInternal(int32_t  m_ApiVersion, uint32_t  m_AchievementIndex) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_AchievementIndex = m_AchievementIndex;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptionsInternal::CopyAchievementDefinitionByIndexOptionsInternal()   {
}

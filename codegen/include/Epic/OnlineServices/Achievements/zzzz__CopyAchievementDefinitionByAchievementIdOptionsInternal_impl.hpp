#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/CopyAchievementDefinitionByAchievementIdOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__CopyAchievementDefinitionByAchievementIdOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__CopyAchievementDefinitionByAchievementIdOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptions>)>(&::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804f0f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptionsInternal::*)()>(&::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptions>"
constexpr  Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptions>* Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Achievements__CopyAchievementDefinitionByAchievementIdOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AchievementId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptionsInternal::CopyAchievementDefinitionByAchievementIdOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_AchievementId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_AchievementId = m_AchievementId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptionsInternal::CopyAchievementDefinitionByAchievementIdOptionsInternal()   {
}

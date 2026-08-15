#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/QueryDefinitionsOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__QueryDefinitionsOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__QueryDefinitionsOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Achievements::QueryDefinitionsOptions>)>(&::Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180533310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::QueryDefinitionsOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal::*)()>(&::Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804f1b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Achievements::QueryDefinitionsOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::QueryDefinitionsOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::QueryDefinitionsOptions>"
constexpr  Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::QueryDefinitionsOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::QueryDefinitionsOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::QueryDefinitionsOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::QueryDefinitionsOptions>* Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Achievements__QueryDefinitionsOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::QueryDefinitionsOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EpicUserId_DEPRECATED", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_HiddenAchievementIds_DEPRECATED", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_HiddenAchievementsCount_DEPRECATED", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal::QueryDefinitionsOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_EpicUserId_DEPRECATED, ::System::IntPtr  m_HiddenAchievementIds_DEPRECATED, uint32_t  m_HiddenAchievementsCount_DEPRECATED) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_EpicUserId_DEPRECATED = m_EpicUserId_DEPRECATED;
this->m_HiddenAchievementIds_DEPRECATED = m_HiddenAchievementIds_DEPRECATED;
this->m_HiddenAchievementsCount_DEPRECATED = m_HiddenAchievementsCount_DEPRECATED;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal::QueryDefinitionsOptionsInternal()   {
}

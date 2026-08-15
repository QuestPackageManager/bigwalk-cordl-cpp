#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogGameRoundStartOptionsInternal.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonGameRoundCompetitionType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogGameRoundStartOptionsInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogGameRoundStartOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptionsInternal::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions>)>(&::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180525670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptionsInternal::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804f1b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptionsInternal::Set(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions>"
constexpr  Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions>* Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatCommon__LogGameRoundStartOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SessionIdentifier", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LevelName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ModeName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RoundTimeSeconds", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CompetitionType", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonGameRoundCompetitionType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptionsInternal::LogGameRoundStartOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_SessionIdentifier, ::System::IntPtr  m_LevelName, ::System::IntPtr  m_ModeName, uint32_t  m_RoundTimeSeconds, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonGameRoundCompetitionType  m_CompetitionType) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_SessionIdentifier = m_SessionIdentifier;
this->m_LevelName = m_LevelName;
this->m_ModeName = m_ModeName;
this->m_RoundTimeSeconds = m_RoundTimeSeconds;
this->m_CompetitionType = m_CompetitionType;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptionsInternal::LogGameRoundStartOptionsInternal()   {
}

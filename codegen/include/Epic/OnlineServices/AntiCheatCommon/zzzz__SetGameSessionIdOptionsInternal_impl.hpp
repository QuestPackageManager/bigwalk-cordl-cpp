#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/SetGameSessionIdOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__SetGameSessionIdOptionsInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__SetGameSessionIdOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptionsInternal::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptions>)>(&::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804f0f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptionsInternal::*)()>(&::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptionsInternal::Set(::by_ref<::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptions>"
constexpr  Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptions>* Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatCommon__SetGameSessionIdOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_GameSessionId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptionsInternal::SetGameSessionIdOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_GameSessionId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_GameSessionId = m_GameSessionId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptionsInternal::SetGameSessionIdOptionsInternal()   {
}

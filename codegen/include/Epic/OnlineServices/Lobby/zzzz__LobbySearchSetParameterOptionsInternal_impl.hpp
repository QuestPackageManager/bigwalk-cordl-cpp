#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbySearchSetParameterOptionsInternal.hpp"
#include "Epic/OnlineServices/zzzz__ComparisonOp_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbySearchSetParameterOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbySearchSetParameterOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions>)>(&::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18050b600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptionsInternal::*)()>(&::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::LobbySearchSetParameterOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Lobby::LobbySearchSetParameterOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions>"
constexpr  Epic::OnlineServices::Lobby::LobbySearchSetParameterOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions>* Epic::OnlineServices::Lobby::LobbySearchSetParameterOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__LobbySearchSetParameterOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Lobby::LobbySearchSetParameterOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Lobby::LobbySearchSetParameterOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Parameter", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ComparisonOp", ty: "::Epic::OnlineServices::ComparisonOp", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptionsInternal::LobbySearchSetParameterOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Parameter, ::Epic::OnlineServices::ComparisonOp  m_ComparisonOp) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Parameter = m_Parameter;
this->m_ComparisonOp = m_ComparisonOp;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptionsInternal::LobbySearchSetParameterOptionsInternal()   {
}

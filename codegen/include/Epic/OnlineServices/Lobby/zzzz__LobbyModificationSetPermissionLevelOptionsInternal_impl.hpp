#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyModificationSetPermissionLevelOptionsInternal.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyPermissionLevel_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyModificationSetPermissionLevelOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyModificationSetPermissionLevelOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions>)>(&::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bdbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptionsInternal::*)()>(&::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions>"
constexpr  Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions>* Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__LobbyModificationSetPermissionLevelOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PermissionLevel", ty: "::Epic::OnlineServices::Lobby::LobbyPermissionLevel", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptionsInternal::LobbyModificationSetPermissionLevelOptionsInternal(int32_t  m_ApiVersion, ::Epic::OnlineServices::Lobby::LobbyPermissionLevel  m_PermissionLevel) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_PermissionLevel = m_PermissionLevel;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptionsInternal::LobbyModificationSetPermissionLevelOptionsInternal()   {
}

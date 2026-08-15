#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/IsRTCRoomConnectedOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__IsRTCRoomConnectedOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__IsRTCRoomConnectedOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptions>)>(&::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1804f8250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptionsInternal::*)()>(&::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptions>"
constexpr  Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptions>* Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__IsRTCRoomConnectedOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LobbyId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptionsInternal::IsRTCRoomConnectedOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LobbyId, ::System::IntPtr  m_LocalUserId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LobbyId = m_LobbyId;
this->m_LocalUserId = m_LocalUserId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptionsInternal::IsRTCRoomConnectedOptionsInternal()   {
}

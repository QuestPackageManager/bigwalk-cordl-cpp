#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyDetailsMemberInfoInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetailsMemberInfoInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetailsMemberInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfoInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfo>)>(&::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfoInternal::Get)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805066c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::LobbyDetailsMemberInfoInternal::Get(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfo>"
constexpr  Epic::OnlineServices::Lobby::LobbyDetailsMemberInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfo>* Epic::OnlineServices::Lobby::LobbyDetailsMemberInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Lobby__LobbyDetailsMemberInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Platform", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllowsCrossplay", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfoInternal::LobbyDetailsMemberInfoInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_UserId, uint32_t  m_Platform, int32_t  m_AllowsCrossplay) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_UserId = m_UserId;
this->m_Platform = m_Platform;
this->m_AllowsCrossplay = m_AllowsCrossplay;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfoInternal::LobbyDetailsMemberInfoInternal()   {
}

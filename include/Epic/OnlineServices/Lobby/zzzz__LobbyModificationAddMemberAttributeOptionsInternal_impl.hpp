#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyModificationAddMemberAttributeOptionsInternal.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyAttributeVisibility_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyModificationAddMemberAttributeOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyModificationAddMemberAttributeOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptions>)>(&::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18050ad70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptionsInternal::*)()>(&::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptions>"
constexpr  Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptions>* Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__LobbyModificationAddMemberAttributeOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Attribute", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Visibility", ty: "::Epic::OnlineServices::Lobby::LobbyAttributeVisibility", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptionsInternal::LobbyModificationAddMemberAttributeOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Attribute, ::Epic::OnlineServices::Lobby::LobbyAttributeVisibility  m_Visibility) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Attribute = m_Attribute;
this->m_Visibility = m_Visibility;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptionsInternal::LobbyModificationAddMemberAttributeOptionsInternal()   {
}

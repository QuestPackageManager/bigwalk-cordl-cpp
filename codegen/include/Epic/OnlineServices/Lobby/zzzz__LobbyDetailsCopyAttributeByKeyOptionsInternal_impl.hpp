#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyDetailsCopyAttributeByKeyOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetailsCopyAttributeByKeyOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetailsCopyAttributeByKeyOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptions>)>(&::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804f0f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptionsInternal::*)()>(&::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptions>"
constexpr  Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptions>* Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__LobbyDetailsCopyAttributeByKeyOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AttrKey", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptionsInternal::LobbyDetailsCopyAttributeByKeyOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_AttrKey) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_AttrKey = m_AttrKey;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptionsInternal::LobbyDetailsCopyAttributeByKeyOptionsInternal()   {
}

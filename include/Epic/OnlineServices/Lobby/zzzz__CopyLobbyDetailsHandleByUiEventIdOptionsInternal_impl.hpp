#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/CopyLobbyDetailsHandleByUiEventIdOptionsInternal.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__CopyLobbyDetailsHandleByUiEventIdOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__CopyLobbyDetailsHandleByUiEventIdOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions>)>(&::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804d7a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptionsInternal::*)()>(&::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions>"
constexpr  Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions>* Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__CopyLobbyDetailsHandleByUiEventIdOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UiEventId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptionsInternal::CopyLobbyDetailsHandleByUiEventIdOptionsInternal(int32_t  m_ApiVersion, uint64_t  m_UiEventId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_UiEventId = m_UiEventId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptionsInternal::CopyLobbyDetailsHandleByUiEventIdOptionsInternal()   {
}

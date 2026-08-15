#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/CopyLobbyDetailsHandleByUiEventIdOptions.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__CopyLobbyDetailsHandleByUiEventIdOptions_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions.get_UiEventId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions::*)()>(&::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions::get_UiEventId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions>(),
                        {"get_UiEventId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions.set_UiEventId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions::*)(uint64_t)>(&::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions::set_UiEventId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions>(),
                        {"set_UiEventId", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint64_t Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions::get_UiEventId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions>(),
                        {"get_UiEventId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions::set_UiEventId(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions>(),
                        {"set_UiEventId", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_UiEventId_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions::CopyLobbyDetailsHandleByUiEventIdOptions(uint64_t  _UiEventId_k__BackingField) noexcept  {
this->_UiEventId_k__BackingField = _UiEventId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions::CopyLobbyDetailsHandleByUiEventIdOptions()   {
}

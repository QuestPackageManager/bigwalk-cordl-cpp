#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/CreateLobbySearchOptions.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__CreateLobbySearchOptions_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbySearchOptions.get_MaxResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Lobby::CreateLobbySearchOptions::*)()>(&::Epic::OnlineServices::Lobby::CreateLobbySearchOptions::get_MaxResults)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbySearchOptions>(),
                        {"get_MaxResults", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbySearchOptions.set_MaxResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::CreateLobbySearchOptions::*)(uint32_t)>(&::Epic::OnlineServices::Lobby::CreateLobbySearchOptions::set_MaxResults)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbySearchOptions>(),
                        {"set_MaxResults", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Epic::OnlineServices::Lobby::CreateLobbySearchOptions::get_MaxResults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbySearchOptions>(),
                        {"get_MaxResults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::CreateLobbySearchOptions::set_MaxResults(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbySearchOptions>(),
                        {"set_MaxResults", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_MaxResults_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::CreateLobbySearchOptions::CreateLobbySearchOptions(uint32_t  _MaxResults_k__BackingField) noexcept  {
this->_MaxResults_k__BackingField = _MaxResults_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::CreateLobbySearchOptions::CreateLobbySearchOptions()   {
}

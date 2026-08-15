#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyDetailsCopyAttributeByIndexOptions.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetailsCopyAttributeByIndexOptions_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByIndexOptions.get_AttrIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByIndexOptions::*)()>(&::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByIndexOptions::get_AttrIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByIndexOptions>(),
                        {"get_AttrIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByIndexOptions.set_AttrIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByIndexOptions::*)(uint32_t)>(&::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByIndexOptions::set_AttrIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByIndexOptions>(),
                        {"set_AttrIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByIndexOptions::get_AttrIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByIndexOptions>(),
                        {"get_AttrIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByIndexOptions::set_AttrIndex(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByIndexOptions>(),
                        {"set_AttrIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_AttrIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByIndexOptions::LobbyDetailsCopyAttributeByIndexOptions(uint32_t  _AttrIndex_k__BackingField) noexcept  {
this->_AttrIndex_k__BackingField = _AttrIndex_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByIndexOptions::LobbyDetailsCopyAttributeByIndexOptions()   {
}

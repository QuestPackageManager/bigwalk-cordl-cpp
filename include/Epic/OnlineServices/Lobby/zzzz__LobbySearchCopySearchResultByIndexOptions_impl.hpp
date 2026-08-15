#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbySearchCopySearchResultByIndexOptions.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbySearchCopySearchResultByIndexOptions_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions.get_LobbyIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions::*)()>(&::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions::get_LobbyIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions>(),
                        {"get_LobbyIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions.set_LobbyIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions::*)(uint32_t)>(&::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions::set_LobbyIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions>(),
                        {"set_LobbyIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions::get_LobbyIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions>(),
                        {"get_LobbyIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions::set_LobbyIndex(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions>(),
                        {"set_LobbyIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_LobbyIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions::LobbySearchCopySearchResultByIndexOptions(uint32_t  _LobbyIndex_k__BackingField) noexcept  {
this->_LobbyIndex_k__BackingField = _LobbyIndex_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions::LobbySearchCopySearchResultByIndexOptions()   {
}

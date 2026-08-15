#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyDetailsCopyMemberAttributeByIndexOptions.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetailsCopyMemberAttributeByIndexOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions.get_TargetUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions::*)()>(&::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions::get_TargetUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions>(),
                        {"get_TargetUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions.set_TargetUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions::set_TargetUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions>(),
                        {"set_TargetUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions.get_AttrIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions::*)()>(&::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions::get_AttrIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions>(),
                        {"get_AttrIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions.set_AttrIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions::*)(uint32_t)>(&::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions::set_AttrIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions>(),
                        {"set_AttrIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions::get_TargetUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions>(),
                        {"get_TargetUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions::set_TargetUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions>(),
                        {"set_TargetUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions::get_AttrIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions>(),
                        {"get_AttrIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions::set_AttrIndex(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions>(),
                        {"set_AttrIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_TargetUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AttrIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions::LobbyDetailsCopyMemberAttributeByIndexOptions(::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField, uint32_t  _AttrIndex_k__BackingField) noexcept  {
this->_TargetUserId_k__BackingField = _TargetUserId_k__BackingField;
this->_AttrIndex_k__BackingField = _AttrIndex_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions::LobbyDetailsCopyMemberAttributeByIndexOptions()   {
}

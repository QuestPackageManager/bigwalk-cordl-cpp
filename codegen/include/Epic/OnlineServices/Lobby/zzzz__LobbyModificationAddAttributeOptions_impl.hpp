#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyModificationAddAttributeOptions.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__AttributeData_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyAttributeVisibility_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyModificationAddAttributeOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__AttributeData_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyAttributeVisibility_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions.get_Attribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeData> (::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions::*)()>(&::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions::get_Attribute)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions>(),
                        {"get_Attribute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions.set_Attribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions::*)(::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeData>)>(&::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions::set_Attribute)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804e6750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions>(),
                        {"set_Attribute", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions.get_Visibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::LobbyAttributeVisibility (::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions::*)()>(&::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions::get_Visibility)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d4dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions>(),
                        {"get_Visibility", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions.set_Visibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions::*)(::Epic::OnlineServices::Lobby::LobbyAttributeVisibility)>(&::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions::set_Visibility)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d4ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions>(),
                        {"set_Visibility", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyAttributeVisibility>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeData> Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions::get_Attribute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions>(),
                        {"get_Attribute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeData>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions::set_Attribute(::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeData>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions>(),
                        {"set_Attribute", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Lobby::LobbyAttributeVisibility Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions::get_Visibility()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions>(),
                        {"get_Visibility", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::LobbyAttributeVisibility>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions::set_Visibility(::Epic::OnlineServices::Lobby::LobbyAttributeVisibility  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions>(),
                        {"set_Visibility", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyAttributeVisibility>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Attribute_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Visibility_k__BackingField", ty: "::Epic::OnlineServices::Lobby::LobbyAttributeVisibility", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions::LobbyModificationAddAttributeOptions(::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeData>  _Attribute_k__BackingField, ::Epic::OnlineServices::Lobby::LobbyAttributeVisibility  _Visibility_k__BackingField) noexcept  {
this->_Attribute_k__BackingField = _Attribute_k__BackingField;
this->_Visibility_k__BackingField = _Visibility_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions::LobbyModificationAddAttributeOptions()   {
}

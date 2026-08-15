#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/Attribute.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__AttributeData_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyAttributeVisibility_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__Attribute_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__AttributeData_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyAttributeVisibility_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::Attribute.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeData> (::Epic::OnlineServices::Lobby::Attribute::*)()>(&::Epic::OnlineServices::Lobby::Attribute::get_Data)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::Attribute>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::Attribute.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::Attribute::*)(::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeData>)>(&::Epic::OnlineServices::Lobby::Attribute::set_Data)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804e6750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::Attribute>(),
                        {"set_Data", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::Attribute.get_Visibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::LobbyAttributeVisibility (::Epic::OnlineServices::Lobby::Attribute::*)()>(&::Epic::OnlineServices::Lobby::Attribute::get_Visibility)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d4dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::Attribute>(),
                        {"get_Visibility", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::Attribute.set_Visibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::Attribute::*)(::Epic::OnlineServices::Lobby::LobbyAttributeVisibility)>(&::Epic::OnlineServices::Lobby::Attribute::set_Visibility)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d4ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::Attribute>(),
                        {"set_Visibility", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyAttributeVisibility>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeData> Epic::OnlineServices::Lobby::Attribute::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::Attribute>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeData>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::Attribute::set_Data(::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeData>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::Attribute>(),
                        {"set_Data", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Lobby::LobbyAttributeVisibility Epic::OnlineServices::Lobby::Attribute::get_Visibility()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::Attribute>(),
                        {"get_Visibility", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::LobbyAttributeVisibility>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::Attribute::set_Visibility(::Epic::OnlineServices::Lobby::LobbyAttributeVisibility  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::Attribute>(),
                        {"set_Visibility", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyAttributeVisibility>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Data_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Visibility_k__BackingField", ty: "::Epic::OnlineServices::Lobby::LobbyAttributeVisibility", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::Attribute::Attribute(::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeData>  _Data_k__BackingField, ::Epic::OnlineServices::Lobby::LobbyAttributeVisibility  _Visibility_k__BackingField) noexcept  {
this->_Data_k__BackingField = _Data_k__BackingField;
this->_Visibility_k__BackingField = _Visibility_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::Attribute::Attribute()   {
}

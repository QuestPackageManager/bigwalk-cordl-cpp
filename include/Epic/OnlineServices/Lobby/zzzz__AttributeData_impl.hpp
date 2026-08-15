#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/AttributeData.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__AttributeDataValue_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__AttributeData_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__AttributeDataValue_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AttributeData.get_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Lobby::AttributeData::*)()>(&::Epic::OnlineServices::Lobby::AttributeData::get_Key)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeData>(),
                        {"get_Key", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AttributeData.set_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::AttributeData::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Lobby::AttributeData::set_Key)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeData>(),
                        {"set_Key", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AttributeData.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::AttributeDataValue (::Epic::OnlineServices::Lobby::AttributeData::*)()>(&::Epic::OnlineServices::Lobby::AttributeData::get_Value)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804bd9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeData>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AttributeData.set_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::AttributeData::*)(::Epic::OnlineServices::Lobby::AttributeDataValue)>(&::Epic::OnlineServices::Lobby::AttributeData::set_Value)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804bd9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeData>(),
                        {"set_Value", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::AttributeDataValue>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Lobby::AttributeData::get_Key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeData>(),
                        {"get_Key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::AttributeData::set_Key(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeData>(),
                        {"set_Key", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Lobby::AttributeDataValue Epic::OnlineServices::Lobby::AttributeData::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeData>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::AttributeDataValue>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::AttributeData::set_Value(::Epic::OnlineServices::Lobby::AttributeDataValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeData>(),
                        {"set_Value", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::AttributeDataValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Key_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Value_k__BackingField", ty: "::Epic::OnlineServices::Lobby::AttributeDataValue", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::AttributeData::AttributeData(::Epic::OnlineServices::Utf8String*  _Key_k__BackingField, ::Epic::OnlineServices::Lobby::AttributeDataValue  _Value_k__BackingField) noexcept  {
this->_Key_k__BackingField = _Key_k__BackingField;
this->_Value_k__BackingField = _Value_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::AttributeData::AttributeData()   {
}

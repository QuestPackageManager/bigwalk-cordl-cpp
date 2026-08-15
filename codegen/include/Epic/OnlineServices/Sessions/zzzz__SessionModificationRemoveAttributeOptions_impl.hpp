#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionModificationRemoveAttributeOptions.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModificationRemoveAttributeOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions.get_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions::*)()>(&::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions::get_Key)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions>(),
                        {"get_Key", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions.set_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions::set_Key)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions>(),
                        {"set_Key", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions::get_Key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions>(),
                        {"get_Key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions::set_Key(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions>(),
                        {"set_Key", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Key_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions::SessionModificationRemoveAttributeOptions(::Epic::OnlineServices::Utf8String*  _Key_k__BackingField) noexcept  {
this->_Key_k__BackingField = _Key_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions::SessionModificationRemoveAttributeOptions()   {
}

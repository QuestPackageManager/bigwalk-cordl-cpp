#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionSearchRemoveParameterOptions.hpp"
#include "Epic/OnlineServices/zzzz__ComparisonOp_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionSearchRemoveParameterOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ComparisonOp_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions.get_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions::*)()>(&::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions::get_Key)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions>(),
                        {"get_Key", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions.set_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions::set_Key)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions>(),
                        {"set_Key", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions.get_ComparisonOp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ComparisonOp (::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions::*)()>(&::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions::get_ComparisonOp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions>(),
                        {"get_ComparisonOp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions.set_ComparisonOp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions::*)(::Epic::OnlineServices::ComparisonOp)>(&::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions::set_ComparisonOp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions>(),
                        {"set_ComparisonOp", {}, {::i2c::type_of<::Epic::OnlineServices::ComparisonOp>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions::get_Key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions>(),
                        {"get_Key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions::set_Key(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions>(),
                        {"set_Key", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ComparisonOp Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions::get_ComparisonOp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions>(),
                        {"get_ComparisonOp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ComparisonOp>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions::set_ComparisonOp(::Epic::OnlineServices::ComparisonOp  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions>(),
                        {"set_ComparisonOp", {}, {::i2c::type_of<::Epic::OnlineServices::ComparisonOp>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Key_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ComparisonOp_k__BackingField", ty: "::Epic::OnlineServices::ComparisonOp", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions::SessionSearchRemoveParameterOptions(::Epic::OnlineServices::Utf8String*  _Key_k__BackingField, ::Epic::OnlineServices::ComparisonOp  _ComparisonOp_k__BackingField) noexcept  {
this->_Key_k__BackingField = _Key_k__BackingField;
this->_ComparisonOp_k__BackingField = _ComparisonOp_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions::SessionSearchRemoveParameterOptions()   {
}

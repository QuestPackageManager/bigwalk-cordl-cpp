#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionModificationSetJoinInProgressAllowedOptions.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModificationSetJoinInProgressAllowedOptions_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions.get_AllowJoinInProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions::*)()>(&::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions::get_AllowJoinInProgress)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180311f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions>(),
                        {"get_AllowJoinInProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions.set_AllowJoinInProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions::*)(bool)>(&::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions::set_AllowJoinInProgress)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions>(),
                        {"set_AllowJoinInProgress", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions::get_AllowJoinInProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions>(),
                        {"get_AllowJoinInProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions::set_AllowJoinInProgress(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions>(),
                        {"set_AllowJoinInProgress", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_AllowJoinInProgress_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions::SessionModificationSetJoinInProgressAllowedOptions(bool  _AllowJoinInProgress_k__BackingField) noexcept  {
this->_AllowJoinInProgress_k__BackingField = _AllowJoinInProgress_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions::SessionModificationSetJoinInProgressAllowedOptions()   {
}

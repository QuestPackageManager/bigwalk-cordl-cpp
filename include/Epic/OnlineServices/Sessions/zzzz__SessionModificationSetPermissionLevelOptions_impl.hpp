#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionModificationSetPermissionLevelOptions.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnlineSessionPermissionLevel_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModificationSetPermissionLevelOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnlineSessionPermissionLevel_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions.get_PermissionLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel (::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions::*)()>(&::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions::get_PermissionLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions>(),
                        {"get_PermissionLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions.set_PermissionLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions::*)(::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel)>(&::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions::set_PermissionLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions>(),
                        {"set_PermissionLevel", {}, {::i2c::type_of<::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions::get_PermissionLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions>(),
                        {"get_PermissionLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions::set_PermissionLevel(::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions>(),
                        {"set_PermissionLevel", {}, {::i2c::type_of<::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_PermissionLevel_k__BackingField", ty: "::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions::SessionModificationSetPermissionLevelOptions(::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel  _PermissionLevel_k__BackingField) noexcept  {
this->_PermissionLevel_k__BackingField = _PermissionLevel_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions::SessionModificationSetPermissionLevelOptions()   {
}

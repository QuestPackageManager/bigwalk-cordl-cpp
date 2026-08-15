#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/SetToggleFriendsKeyOptions.hpp"
#include "Epic/OnlineServices/UI/zzzz__KeyCombination_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__SetToggleFriendsKeyOptions_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__KeyCombination_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions.get_KeyCombination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::UI::KeyCombination (::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions::*)()>(&::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions::get_KeyCombination)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions>(),
                        {"get_KeyCombination", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions.set_KeyCombination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions::*)(::Epic::OnlineServices::UI::KeyCombination)>(&::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions::set_KeyCombination)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions>(),
                        {"set_KeyCombination", {}, {::i2c::type_of<::Epic::OnlineServices::UI::KeyCombination>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::UI::KeyCombination Epic::OnlineServices::UI::SetToggleFriendsKeyOptions::get_KeyCombination()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions>(),
                        {"get_KeyCombination", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::UI::KeyCombination>(*this, ___internal_method);
}
inline void Epic::OnlineServices::UI::SetToggleFriendsKeyOptions::set_KeyCombination(::Epic::OnlineServices::UI::KeyCombination  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions>(),
                        {"set_KeyCombination", {}, {::i2c::type_of<::Epic::OnlineServices::UI::KeyCombination>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_KeyCombination_k__BackingField", ty: "::Epic::OnlineServices::UI::KeyCombination", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions::SetToggleFriendsKeyOptions(::Epic::OnlineServices::UI::KeyCombination  _KeyCombination_k__BackingField) noexcept  {
this->_KeyCombination_k__BackingField = _KeyCombination_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions::SetToggleFriendsKeyOptions()   {
}

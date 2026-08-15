#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/SetToggleFriendsButtonOptions.hpp"
#include "Epic/OnlineServices/UI/zzzz__InputStateButtonFlags_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__SetToggleFriendsButtonOptions_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__InputStateButtonFlags_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions.get_ButtonCombination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::UI::InputStateButtonFlags (::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions::*)()>(&::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions::get_ButtonCombination)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions>(),
                        {"get_ButtonCombination", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions.set_ButtonCombination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions::*)(::Epic::OnlineServices::UI::InputStateButtonFlags)>(&::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions::set_ButtonCombination)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions>(),
                        {"set_ButtonCombination", {}, {::i2c::type_of<::Epic::OnlineServices::UI::InputStateButtonFlags>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::UI::InputStateButtonFlags Epic::OnlineServices::UI::SetToggleFriendsButtonOptions::get_ButtonCombination()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions>(),
                        {"get_ButtonCombination", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::UI::InputStateButtonFlags>(*this, ___internal_method);
}
inline void Epic::OnlineServices::UI::SetToggleFriendsButtonOptions::set_ButtonCombination(::Epic::OnlineServices::UI::InputStateButtonFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions>(),
                        {"set_ButtonCombination", {}, {::i2c::type_of<::Epic::OnlineServices::UI::InputStateButtonFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_ButtonCombination_k__BackingField", ty: "::Epic::OnlineServices::UI::InputStateButtonFlags", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions::SetToggleFriendsButtonOptions(::Epic::OnlineServices::UI::InputStateButtonFlags  _ButtonCombination_k__BackingField) noexcept  {
this->_ButtonCombination_k__BackingField = _ButtonCombination_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions::SetToggleFriendsButtonOptions()   {
}

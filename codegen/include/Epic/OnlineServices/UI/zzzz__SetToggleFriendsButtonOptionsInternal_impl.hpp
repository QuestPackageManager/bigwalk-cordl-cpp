#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/SetToggleFriendsButtonOptionsInternal.hpp"
#include "Epic/OnlineServices/UI/zzzz__InputStateButtonFlags_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__SetToggleFriendsButtonOptionsInternal_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__SetToggleFriendsButtonOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::SetToggleFriendsButtonOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::SetToggleFriendsButtonOptionsInternal::*)(::by_ref<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions>)>(&::Epic::OnlineServices::UI::SetToggleFriendsButtonOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bdbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::SetToggleFriendsButtonOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::SetToggleFriendsButtonOptionsInternal::*)()>(&::Epic::OnlineServices::UI::SetToggleFriendsButtonOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UI::SetToggleFriendsButtonOptionsInternal::Set(::by_ref<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::UI::SetToggleFriendsButtonOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions>"
constexpr  Epic::OnlineServices::UI::SetToggleFriendsButtonOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions>* Epic::OnlineServices::UI::SetToggleFriendsButtonOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__UI__SetToggleFriendsButtonOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::UI::SetToggleFriendsButtonOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::UI::SetToggleFriendsButtonOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ButtonCombination", ty: "::Epic::OnlineServices::UI::InputStateButtonFlags", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UI::SetToggleFriendsButtonOptionsInternal::SetToggleFriendsButtonOptionsInternal(int32_t  m_ApiVersion, ::Epic::OnlineServices::UI::InputStateButtonFlags  m_ButtonCombination) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_ButtonCombination = m_ButtonCombination;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::SetToggleFriendsButtonOptionsInternal::SetToggleFriendsButtonOptionsInternal()   {
}

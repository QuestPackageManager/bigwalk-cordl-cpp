#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/SetToggleFriendsKeyOptionsInternal.hpp"
#include "Epic/OnlineServices/UI/zzzz__KeyCombination_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__SetToggleFriendsKeyOptionsInternal_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__SetToggleFriendsKeyOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::SetToggleFriendsKeyOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::SetToggleFriendsKeyOptionsInternal::*)(::by_ref<::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions>)>(&::Epic::OnlineServices::UI::SetToggleFriendsKeyOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bdbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::SetToggleFriendsKeyOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::SetToggleFriendsKeyOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::SetToggleFriendsKeyOptionsInternal::*)()>(&::Epic::OnlineServices::UI::SetToggleFriendsKeyOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::SetToggleFriendsKeyOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UI::SetToggleFriendsKeyOptionsInternal::Set(::by_ref<::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::SetToggleFriendsKeyOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::UI::SetToggleFriendsKeyOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::SetToggleFriendsKeyOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions>"
constexpr  Epic::OnlineServices::UI::SetToggleFriendsKeyOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions>* Epic::OnlineServices::UI::SetToggleFriendsKeyOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__UI__SetToggleFriendsKeyOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::UI::SetToggleFriendsKeyOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::UI::SetToggleFriendsKeyOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_KeyCombination", ty: "::Epic::OnlineServices::UI::KeyCombination", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UI::SetToggleFriendsKeyOptionsInternal::SetToggleFriendsKeyOptionsInternal(int32_t  m_ApiVersion, ::Epic::OnlineServices::UI::KeyCombination  m_KeyCombination) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_KeyCombination = m_KeyCombination;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::SetToggleFriendsKeyOptionsInternal::SetToggleFriendsKeyOptionsInternal()   {
}

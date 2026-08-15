#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/RectInternal.hpp"
#include "Epic/OnlineServices/UI/zzzz__RectInternal_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__Rect_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::RectInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::RectInternal::*)(::by_ref<::Epic::OnlineServices::UI::Rect>)>(&::Epic::OnlineServices::UI::RectInternal::Set)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804e0b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::RectInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::Rect>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::RectInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::RectInternal::*)()>(&::Epic::OnlineServices::UI::RectInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::RectInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UI::RectInternal::Set(::by_ref<::Epic::OnlineServices::UI::Rect>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::RectInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::Rect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::UI::RectInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::RectInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::Rect>"
constexpr  Epic::OnlineServices::UI::RectInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::Rect>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::Rect>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::Rect>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::Rect>* Epic::OnlineServices::UI::RectInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__UI__Rect_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::Rect>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::UI::RectInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::UI::RectInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_X", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Y", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Width", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Height", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UI::RectInternal::RectInternal(int32_t  m_ApiVersion, int32_t  m_X, int32_t  m_Y, uint32_t  m_Width, uint32_t  m_Height) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_X = m_X;
this->m_Y = m_Y;
this->m_Width = m_Width;
this->m_Height = m_Height;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::RectInternal::RectInternal()   {
}

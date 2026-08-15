#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/OptionsInternal.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__IntegratedPlatformManagementFlags_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__OptionsInternal_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__Options_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::OptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::OptionsInternal::*)(::by_ref<::Epic::OnlineServices::IntegratedPlatform::Options>)>(&::Epic::OnlineServices::IntegratedPlatform::OptionsInternal::Set)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18051cee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::OptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::Options>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::OptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::OptionsInternal::*)()>(&::Epic::OnlineServices::IntegratedPlatform::OptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e7630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::OptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::IntegratedPlatform::OptionsInternal::Set(::by_ref<::Epic::OnlineServices::IntegratedPlatform::Options>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::OptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::Options>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::IntegratedPlatform::OptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::OptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::Options>"
constexpr  Epic::OnlineServices::IntegratedPlatform::OptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::Options>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::Options>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::Options>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::Options>* Epic::OnlineServices::IntegratedPlatform::OptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__IntegratedPlatform__Options_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::Options>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::IntegratedPlatform::OptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::IntegratedPlatform::OptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Type", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InitOptions", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::IntegratedPlatform::OptionsInternal::OptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Type, ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  m_Flags, ::System::IntPtr  m_InitOptions) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Type = m_Type;
this->m_Flags = m_Flags;
this->m_InitOptions = m_InitOptions;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::IntegratedPlatform::OptionsInternal::OptionsInternal()   {
}

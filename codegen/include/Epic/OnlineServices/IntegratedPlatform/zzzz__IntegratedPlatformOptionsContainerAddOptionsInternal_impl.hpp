#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/IntegratedPlatformOptionsContainerAddOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__IntegratedPlatformOptionsContainerAddOptionsInternal_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__IntegratedPlatformOptionsContainerAddOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptionsInternal::*)(::by_ref<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions>)>(&::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805176f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptionsInternal::*)()>(&::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptionsInternal::Set(::by_ref<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions>"
constexpr  Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions>* Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__IntegratedPlatform__IntegratedPlatformOptionsContainerAddOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Options", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptionsInternal::IntegratedPlatformOptionsContainerAddOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Options) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Options = m_Options;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptionsInternal::IntegratedPlatformOptionsContainerAddOptionsInternal()   {
}

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/ClearUserPreLogoutCallbackOptionsInternal.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__ClearUserPreLogoutCallbackOptionsInternal_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__ClearUserPreLogoutCallbackOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptionsInternal::*)(::by_ref<::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptions>)>(&::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bdbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptionsInternal::*)()>(&::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptionsInternal::Set(::by_ref<::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptions>"
constexpr  Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptions>* Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__IntegratedPlatform__ClearUserPreLogoutCallbackOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptionsInternal::ClearUserPreLogoutCallbackOptionsInternal(int32_t  m_ApiVersion) noexcept  {
this->m_ApiVersion = m_ApiVersion;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptionsInternal::ClearUserPreLogoutCallbackOptionsInternal()   {
}

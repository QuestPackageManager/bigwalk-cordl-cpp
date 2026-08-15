#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/ClientCredentialsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Platform/zzzz__ClientCredentialsInternal_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__ClientCredentials_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Platform::ClientCredentialsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::ClientCredentialsInternal::*)(::by_ref<::Epic::OnlineServices::Platform::ClientCredentials>)>(&::Epic::OnlineServices::Platform::ClientCredentialsInternal::Set)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804f6d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::ClientCredentialsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::ClientCredentials>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::ClientCredentialsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::ClientCredentialsInternal::*)()>(&::Epic::OnlineServices::Platform::ClientCredentialsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804f6ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::ClientCredentialsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Platform::ClientCredentialsInternal::Set(::by_ref<::Epic::OnlineServices::Platform::ClientCredentials>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::ClientCredentialsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::ClientCredentials>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Platform::ClientCredentialsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::ClientCredentialsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::ClientCredentials>"
constexpr  Epic::OnlineServices::Platform::ClientCredentialsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::ClientCredentials>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::ClientCredentials>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::ClientCredentials>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::ClientCredentials>* Epic::OnlineServices::Platform::ClientCredentialsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Platform__ClientCredentials_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::ClientCredentials>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Platform::ClientCredentialsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Platform::ClientCredentialsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClientSecret", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Platform::ClientCredentialsInternal::ClientCredentialsInternal(::System::IntPtr  m_ClientId, ::System::IntPtr  m_ClientSecret) noexcept  {
this->m_ClientId = m_ClientId;
this->m_ClientSecret = m_ClientSecret;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Platform::ClientCredentialsInternal::ClientCredentialsInternal()   {
}

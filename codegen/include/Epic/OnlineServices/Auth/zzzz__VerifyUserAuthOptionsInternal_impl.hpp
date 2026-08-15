#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/VerifyUserAuthOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__VerifyUserAuthOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__VerifyUserAuthOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::VerifyUserAuthOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::VerifyUserAuthOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Auth::VerifyUserAuthOptions>)>(&::Epic::OnlineServices::Auth::VerifyUserAuthOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18052c7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::VerifyUserAuthOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::VerifyUserAuthOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::VerifyUserAuthOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::VerifyUserAuthOptionsInternal::*)()>(&::Epic::OnlineServices::Auth::VerifyUserAuthOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::VerifyUserAuthOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Auth::VerifyUserAuthOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Auth::VerifyUserAuthOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::VerifyUserAuthOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::VerifyUserAuthOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Auth::VerifyUserAuthOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::VerifyUserAuthOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::VerifyUserAuthOptions>"
constexpr  Epic::OnlineServices::Auth::VerifyUserAuthOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::VerifyUserAuthOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::VerifyUserAuthOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::VerifyUserAuthOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::VerifyUserAuthOptions>* Epic::OnlineServices::Auth::VerifyUserAuthOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Auth__VerifyUserAuthOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::VerifyUserAuthOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Auth::VerifyUserAuthOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Auth::VerifyUserAuthOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AuthToken", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Auth::VerifyUserAuthOptionsInternal::VerifyUserAuthOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_AuthToken) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_AuthToken = m_AuthToken;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::VerifyUserAuthOptionsInternal::VerifyUserAuthOptionsInternal()   {
}

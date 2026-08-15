#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/VerifyIdTokenOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__VerifyIdTokenOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__VerifyIdTokenOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::VerifyIdTokenOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::VerifyIdTokenOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Auth::VerifyIdTokenOptions>)>(&::Epic::OnlineServices::Auth::VerifyIdTokenOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18052c6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::VerifyIdTokenOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::VerifyIdTokenOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::VerifyIdTokenOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::VerifyIdTokenOptionsInternal::*)()>(&::Epic::OnlineServices::Auth::VerifyIdTokenOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::VerifyIdTokenOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Auth::VerifyIdTokenOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Auth::VerifyIdTokenOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::VerifyIdTokenOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::VerifyIdTokenOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Auth::VerifyIdTokenOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::VerifyIdTokenOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::VerifyIdTokenOptions>"
constexpr  Epic::OnlineServices::Auth::VerifyIdTokenOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::VerifyIdTokenOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::VerifyIdTokenOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::VerifyIdTokenOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::VerifyIdTokenOptions>* Epic::OnlineServices::Auth::VerifyIdTokenOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Auth__VerifyIdTokenOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::VerifyIdTokenOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Auth::VerifyIdTokenOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Auth::VerifyIdTokenOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IdToken", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Auth::VerifyIdTokenOptionsInternal::VerifyIdTokenOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_IdToken) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_IdToken = m_IdToken;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::VerifyIdTokenOptionsInternal::VerifyIdTokenOptionsInternal()   {
}

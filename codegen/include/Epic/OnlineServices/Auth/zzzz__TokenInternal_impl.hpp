#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/TokenInternal.hpp"
#include "Epic/OnlineServices/Auth/zzzz__AuthTokenType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__TokenInternal_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__Token_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::TokenInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::TokenInternal::*)(::by_ref<::Epic::OnlineServices::Auth::Token>)>(&::Epic::OnlineServices::Auth::TokenInternal::Get)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18052bd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::TokenInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::Token>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::TokenInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::TokenInternal::*)(::by_ref<::Epic::OnlineServices::Auth::Token>)>(&::Epic::OnlineServices::Auth::TokenInternal::Set)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18052bf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::TokenInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::Token>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::TokenInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::TokenInternal::*)()>(&::Epic::OnlineServices::Auth::TokenInternal::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18052bd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::TokenInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Auth::TokenInternal::Get(::by_ref<::Epic::OnlineServices::Auth::Token>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::TokenInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::Token>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Auth::TokenInternal::Set(::by_ref<::Epic::OnlineServices::Auth::Token>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::TokenInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::Token>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Auth::TokenInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::TokenInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::Token>"
constexpr  Epic::OnlineServices::Auth::TokenInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::Token>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::Token>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::Token>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::Token>* Epic::OnlineServices::Auth::TokenInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Auth__Token_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::Token>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::Token>"
constexpr  Epic::OnlineServices::Auth::TokenInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::Token>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::Token>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::Token>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::Token>* Epic::OnlineServices::Auth::TokenInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Auth__Token_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::Token>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Auth::TokenInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Auth::TokenInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_App", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClientId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AccountId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AccessToken", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ExpiresIn", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ExpiresAt", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AuthType", ty: "::Epic::OnlineServices::Auth::AuthTokenType", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RefreshToken", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RefreshExpiresIn", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RefreshExpiresAt", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Auth::TokenInternal::TokenInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_App, ::System::IntPtr  m_ClientId, ::System::IntPtr  m_AccountId, ::System::IntPtr  m_AccessToken, double_t  m_ExpiresIn, ::System::IntPtr  m_ExpiresAt, ::Epic::OnlineServices::Auth::AuthTokenType  m_AuthType, ::System::IntPtr  m_RefreshToken, double_t  m_RefreshExpiresIn, ::System::IntPtr  m_RefreshExpiresAt) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_App = m_App;
this->m_ClientId = m_ClientId;
this->m_AccountId = m_AccountId;
this->m_AccessToken = m_AccessToken;
this->m_ExpiresIn = m_ExpiresIn;
this->m_ExpiresAt = m_ExpiresAt;
this->m_AuthType = m_AuthType;
this->m_RefreshToken = m_RefreshToken;
this->m_RefreshExpiresIn = m_RefreshExpiresIn;
this->m_RefreshExpiresAt = m_RefreshExpiresAt;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::TokenInternal::TokenInternal()   {
}

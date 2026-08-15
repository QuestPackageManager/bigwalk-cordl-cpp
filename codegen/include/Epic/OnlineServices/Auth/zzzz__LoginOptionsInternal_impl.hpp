#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/LoginOptionsInternal.hpp"
#include "Epic/OnlineServices/Auth/zzzz__AuthScopeFlags_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginFlags_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LoginOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::LoginOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Auth::LoginOptions>)>(&::Epic::OnlineServices::Auth::LoginOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805263c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LoginOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LoginOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::LoginOptionsInternal::*)()>(&::Epic::OnlineServices::Auth::LoginOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Auth::LoginOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Auth::LoginOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LoginOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Auth::LoginOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::LoginOptions>"
constexpr  Epic::OnlineServices::Auth::LoginOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::LoginOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::LoginOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::LoginOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::LoginOptions>* Epic::OnlineServices::Auth::LoginOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Auth__LoginOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::LoginOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Auth::LoginOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Auth::LoginOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Credentials", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ScopeFlags", ty: "::Epic::OnlineServices::Auth::AuthScopeFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LoginFlags", ty: "::Epic::OnlineServices::Auth::LoginFlags", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Auth::LoginOptionsInternal::LoginOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Credentials, ::Epic::OnlineServices::Auth::AuthScopeFlags  m_ScopeFlags, ::Epic::OnlineServices::Auth::LoginFlags  m_LoginFlags) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Credentials = m_Credentials;
this->m_ScopeFlags = m_ScopeFlags;
this->m_LoginFlags = m_LoginFlags;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::LoginOptionsInternal::LoginOptionsInternal()   {
}

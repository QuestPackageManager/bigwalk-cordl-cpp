#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/IdTokenInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__IdTokenInternal_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__IdToken_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::IdTokenInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::IdTokenInternal::*)(::by_ref<::Epic::OnlineServices::Auth::IdToken>)>(&::Epic::OnlineServices::Auth::IdTokenInternal::Get)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805247e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::IdTokenInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::IdToken>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::IdTokenInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::IdTokenInternal::*)(::by_ref<::Epic::OnlineServices::Auth::IdToken>)>(&::Epic::OnlineServices::Auth::IdTokenInternal::Set)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1804e6900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::IdTokenInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::IdToken>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::IdTokenInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::IdTokenInternal::*)()>(&::Epic::OnlineServices::Auth::IdTokenInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::IdTokenInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Auth::IdTokenInternal::Get(::by_ref<::Epic::OnlineServices::Auth::IdToken>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::IdTokenInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::IdToken>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Auth::IdTokenInternal::Set(::by_ref<::Epic::OnlineServices::Auth::IdToken>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::IdTokenInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::IdToken>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Auth::IdTokenInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::IdTokenInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::IdToken>"
constexpr  Epic::OnlineServices::Auth::IdTokenInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::IdToken>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::IdToken>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::IdToken>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::IdToken>* Epic::OnlineServices::Auth::IdTokenInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Auth__IdToken_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::IdToken>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::IdToken>"
constexpr  Epic::OnlineServices::Auth::IdTokenInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::IdToken>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::IdToken>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::IdToken>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::IdToken>* Epic::OnlineServices::Auth::IdTokenInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Auth__IdToken_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::IdToken>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Auth::IdTokenInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Auth::IdTokenInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AccountId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_JsonWebToken", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Auth::IdTokenInternal::IdTokenInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_AccountId, ::System::IntPtr  m_JsonWebToken) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_AccountId = m_AccountId;
this->m_JsonWebToken = m_JsonWebToken;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::IdTokenInternal::IdTokenInternal()   {
}

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/CopyIdTokenOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__CopyIdTokenOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__CopyIdTokenOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::CopyIdTokenOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::CopyIdTokenOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Auth::CopyIdTokenOptions>)>(&::Epic::OnlineServices::Auth::CopyIdTokenOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804e7b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::CopyIdTokenOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::CopyIdTokenOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::CopyIdTokenOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::CopyIdTokenOptionsInternal::*)()>(&::Epic::OnlineServices::Auth::CopyIdTokenOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::CopyIdTokenOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Auth::CopyIdTokenOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Auth::CopyIdTokenOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::CopyIdTokenOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::CopyIdTokenOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Auth::CopyIdTokenOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::CopyIdTokenOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::CopyIdTokenOptions>"
constexpr  Epic::OnlineServices::Auth::CopyIdTokenOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::CopyIdTokenOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::CopyIdTokenOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::CopyIdTokenOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::CopyIdTokenOptions>* Epic::OnlineServices::Auth::CopyIdTokenOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Auth__CopyIdTokenOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::CopyIdTokenOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Auth::CopyIdTokenOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Auth::CopyIdTokenOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AccountId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Auth::CopyIdTokenOptionsInternal::CopyIdTokenOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_AccountId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_AccountId = m_AccountId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::CopyIdTokenOptionsInternal::CopyIdTokenOptionsInternal()   {
}

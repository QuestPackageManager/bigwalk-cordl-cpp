#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/UserLoginInfoInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__UserLoginInfoInternal_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__UserLoginInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::UserLoginInfoInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::UserLoginInfoInternal::*)(::by_ref<::Epic::OnlineServices::Connect::UserLoginInfo>)>(&::Epic::OnlineServices::Connect::UserLoginInfoInternal::Set)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18052c1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::UserLoginInfoInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::UserLoginInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::UserLoginInfoInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::UserLoginInfoInternal::*)()>(&::Epic::OnlineServices::Connect::UserLoginInfoInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::UserLoginInfoInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Connect::UserLoginInfoInternal::Set(::by_ref<::Epic::OnlineServices::Connect::UserLoginInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::UserLoginInfoInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::UserLoginInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Connect::UserLoginInfoInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::UserLoginInfoInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::UserLoginInfo>"
constexpr  Epic::OnlineServices::Connect::UserLoginInfoInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::UserLoginInfo>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::UserLoginInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::UserLoginInfo>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::UserLoginInfo>* Epic::OnlineServices::Connect::UserLoginInfoInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Connect__UserLoginInfo_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::UserLoginInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Connect::UserLoginInfoInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Connect::UserLoginInfoInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DisplayName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NsaIdToken", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Connect::UserLoginInfoInternal::UserLoginInfoInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_DisplayName, ::System::IntPtr  m_NsaIdToken) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_DisplayName = m_DisplayName;
this->m_NsaIdToken = m_NsaIdToken;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::UserLoginInfoInternal::UserLoginInfoInternal()   {
}

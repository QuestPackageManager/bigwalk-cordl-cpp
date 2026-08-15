#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/GetPermissionByKeyOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/KWS/zzzz__GetPermissionByKeyOptionsInternal_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__GetPermissionByKeyOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::KWS::GetPermissionByKeyOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::KWS::GetPermissionByKeyOptionsInternal::*)(::by_ref<::Epic::OnlineServices::KWS::GetPermissionByKeyOptions>)>(&::Epic::OnlineServices::KWS::GetPermissionByKeyOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1804e6900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::GetPermissionByKeyOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::GetPermissionByKeyOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::GetPermissionByKeyOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::KWS::GetPermissionByKeyOptionsInternal::*)()>(&::Epic::OnlineServices::KWS::GetPermissionByKeyOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::GetPermissionByKeyOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::KWS::GetPermissionByKeyOptionsInternal::Set(::by_ref<::Epic::OnlineServices::KWS::GetPermissionByKeyOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::GetPermissionByKeyOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::GetPermissionByKeyOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::KWS::GetPermissionByKeyOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::GetPermissionByKeyOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::KWS::GetPermissionByKeyOptions>"
constexpr  Epic::OnlineServices::KWS::GetPermissionByKeyOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::KWS::GetPermissionByKeyOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::KWS::GetPermissionByKeyOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::KWS::GetPermissionByKeyOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::KWS::GetPermissionByKeyOptions>* Epic::OnlineServices::KWS::GetPermissionByKeyOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__KWS__GetPermissionByKeyOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::KWS::GetPermissionByKeyOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::KWS::GetPermissionByKeyOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::KWS::GetPermissionByKeyOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Key", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::KWS::GetPermissionByKeyOptionsInternal::GetPermissionByKeyOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_Key) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_Key = m_Key;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::KWS::GetPermissionByKeyOptionsInternal::GetPermissionByKeyOptionsInternal()   {
}

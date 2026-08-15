#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/CopyPermissionByIndexOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/KWS/zzzz__CopyPermissionByIndexOptionsInternal_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__CopyPermissionByIndexOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::KWS::CopyPermissionByIndexOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::KWS::CopyPermissionByIndexOptionsInternal::*)(::by_ref<::Epic::OnlineServices::KWS::CopyPermissionByIndexOptions>)>(&::Epic::OnlineServices::KWS::CopyPermissionByIndexOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804e72b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::CopyPermissionByIndexOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::CopyPermissionByIndexOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::CopyPermissionByIndexOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::KWS::CopyPermissionByIndexOptionsInternal::*)()>(&::Epic::OnlineServices::KWS::CopyPermissionByIndexOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::CopyPermissionByIndexOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::KWS::CopyPermissionByIndexOptionsInternal::Set(::by_ref<::Epic::OnlineServices::KWS::CopyPermissionByIndexOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::CopyPermissionByIndexOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::CopyPermissionByIndexOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::KWS::CopyPermissionByIndexOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::CopyPermissionByIndexOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::KWS::CopyPermissionByIndexOptions>"
constexpr  Epic::OnlineServices::KWS::CopyPermissionByIndexOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::KWS::CopyPermissionByIndexOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::KWS::CopyPermissionByIndexOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::KWS::CopyPermissionByIndexOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::KWS::CopyPermissionByIndexOptions>* Epic::OnlineServices::KWS::CopyPermissionByIndexOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__KWS__CopyPermissionByIndexOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::KWS::CopyPermissionByIndexOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::KWS::CopyPermissionByIndexOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::KWS::CopyPermissionByIndexOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Index", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::KWS::CopyPermissionByIndexOptionsInternal::CopyPermissionByIndexOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, uint32_t  m_Index) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_Index = m_Index;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::KWS::CopyPermissionByIndexOptionsInternal::CopyPermissionByIndexOptionsInternal()   {
}

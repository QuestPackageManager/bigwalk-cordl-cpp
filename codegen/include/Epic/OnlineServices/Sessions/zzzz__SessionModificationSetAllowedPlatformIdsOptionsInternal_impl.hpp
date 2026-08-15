#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionModificationSetAllowedPlatformIdsOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModificationSetAllowedPlatformIdsOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModificationSetAllowedPlatformIdsOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions>)>(&::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1804f2950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptionsInternal::*)()>(&::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions>"
constexpr  Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions>* Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__SessionModificationSetAllowedPlatformIdsOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllowedPlatformIds", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllowedPlatformIdsCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptionsInternal::SessionModificationSetAllowedPlatformIdsOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_AllowedPlatformIds, uint32_t  m_AllowedPlatformIdsCount) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_AllowedPlatformIds = m_AllowedPlatformIds;
this->m_AllowedPlatformIdsCount = m_AllowedPlatformIdsCount;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptionsInternal::SessionModificationSetAllowedPlatformIdsOptionsInternal()   {
}

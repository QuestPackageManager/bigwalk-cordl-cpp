#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionModificationAddAttributeOptionsInternal.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionAttributeAdvertisementType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModificationAddAttributeOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModificationAddAttributeOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>)>(&::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1804f2860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptionsInternal::*)()>(&::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>"
constexpr  Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>* Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__SessionModificationAddAttributeOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SessionAttribute", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AdvertisementType", ty: "::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptionsInternal::SessionModificationAddAttributeOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_SessionAttribute, ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType  m_AdvertisementType) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_SessionAttribute = m_SessionAttribute;
this->m_AdvertisementType = m_AdvertisementType;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptionsInternal::SessionModificationAddAttributeOptionsInternal()   {
}

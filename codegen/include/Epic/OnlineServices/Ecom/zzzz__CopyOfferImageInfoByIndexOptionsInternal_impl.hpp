#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CopyOfferImageInfoByIndexOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CopyOfferImageInfoByIndexOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CopyOfferImageInfoByIndexOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptions>)>(&::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805027b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptionsInternal::*)()>(&::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptions>"
constexpr  Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptions>* Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Ecom__CopyOfferImageInfoByIndexOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OfferId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ImageInfoIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptionsInternal::CopyOfferImageInfoByIndexOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_OfferId, uint32_t  m_ImageInfoIndex) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_OfferId = m_OfferId;
this->m_ImageInfoIndex = m_ImageInfoIndex;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptionsInternal::CopyOfferImageInfoByIndexOptionsInternal()   {
}

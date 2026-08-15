#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CopyItemByIdOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CopyItemByIdOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CopyItemByIdOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CopyItemByIdOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CopyItemByIdOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Ecom::CopyItemByIdOptions>)>(&::Epic::OnlineServices::Ecom::CopyItemByIdOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1804e6900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CopyItemByIdOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyItemByIdOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CopyItemByIdOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CopyItemByIdOptionsInternal::*)()>(&::Epic::OnlineServices::Ecom::CopyItemByIdOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CopyItemByIdOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Ecom::CopyItemByIdOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Ecom::CopyItemByIdOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CopyItemByIdOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyItemByIdOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Ecom::CopyItemByIdOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CopyItemByIdOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CopyItemByIdOptions>"
constexpr  Epic::OnlineServices::Ecom::CopyItemByIdOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CopyItemByIdOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CopyItemByIdOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CopyItemByIdOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CopyItemByIdOptions>* Epic::OnlineServices::Ecom::CopyItemByIdOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Ecom__CopyItemByIdOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CopyItemByIdOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Ecom::CopyItemByIdOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Ecom::CopyItemByIdOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ItemId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::CopyItemByIdOptionsInternal::CopyItemByIdOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_ItemId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_ItemId = m_ItemId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::CopyItemByIdOptionsInternal::CopyItemByIdOptionsInternal()   {
}

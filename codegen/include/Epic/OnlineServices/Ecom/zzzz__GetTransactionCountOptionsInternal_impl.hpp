#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/GetTransactionCountOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__GetTransactionCountOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__GetTransactionCountOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::GetTransactionCountOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::GetTransactionCountOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Ecom::GetTransactionCountOptions>)>(&::Epic::OnlineServices::Ecom::GetTransactionCountOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804e7b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::GetTransactionCountOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::GetTransactionCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::GetTransactionCountOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::GetTransactionCountOptionsInternal::*)()>(&::Epic::OnlineServices::Ecom::GetTransactionCountOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::GetTransactionCountOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Ecom::GetTransactionCountOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Ecom::GetTransactionCountOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::GetTransactionCountOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::GetTransactionCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Ecom::GetTransactionCountOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::GetTransactionCountOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::GetTransactionCountOptions>"
constexpr  Epic::OnlineServices::Ecom::GetTransactionCountOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::GetTransactionCountOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::GetTransactionCountOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::GetTransactionCountOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::GetTransactionCountOptions>* Epic::OnlineServices::Ecom::GetTransactionCountOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Ecom__GetTransactionCountOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::GetTransactionCountOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Ecom::GetTransactionCountOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Ecom::GetTransactionCountOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::GetTransactionCountOptionsInternal::GetTransactionCountOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::GetTransactionCountOptionsInternal::GetTransactionCountOptionsInternal()   {
}

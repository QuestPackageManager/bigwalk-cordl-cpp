#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/TransferDeviceIdAccountOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__TransferDeviceIdAccountOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__TransferDeviceIdAccountOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>)>(&::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18052c090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptionsInternal::*)()>(&::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804f1b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Connect::TransferDeviceIdAccountOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Connect::TransferDeviceIdAccountOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>"
constexpr  Epic::OnlineServices::Connect::TransferDeviceIdAccountOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>* Epic::OnlineServices::Connect::TransferDeviceIdAccountOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Connect__TransferDeviceIdAccountOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Connect::TransferDeviceIdAccountOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Connect::TransferDeviceIdAccountOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PrimaryLocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalDeviceUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ProductUserIdToPreserve", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptionsInternal::TransferDeviceIdAccountOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_PrimaryLocalUserId, ::System::IntPtr  m_LocalDeviceUserId, ::System::IntPtr  m_ProductUserIdToPreserve) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_PrimaryLocalUserId = m_PrimaryLocalUserId;
this->m_LocalDeviceUserId = m_LocalDeviceUserId;
this->m_ProductUserIdToPreserve = m_ProductUserIdToPreserve;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptionsInternal::TransferDeviceIdAccountOptionsInternal()   {
}

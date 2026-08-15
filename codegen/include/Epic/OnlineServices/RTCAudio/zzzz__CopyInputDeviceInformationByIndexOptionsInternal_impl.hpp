#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/CopyInputDeviceInformationByIndexOptionsInternal.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__CopyInputDeviceInformationByIndexOptionsInternal_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__CopyInputDeviceInformationByIndexOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptionsInternal::*)(::by_ref<::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptions>)>(&::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bdbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptionsInternal::*)()>(&::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptionsInternal::Set(::by_ref<::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptions>"
constexpr  Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptions>* Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__RTCAudio__CopyInputDeviceInformationByIndexOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DeviceIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptionsInternal::CopyInputDeviceInformationByIndexOptionsInternal(int32_t  m_ApiVersion, uint32_t  m_DeviceIndex) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_DeviceIndex = m_DeviceIndex;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptionsInternal::CopyInputDeviceInformationByIndexOptionsInternal()   {
}

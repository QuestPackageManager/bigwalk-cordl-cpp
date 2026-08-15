#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/CopyOutputDeviceInformationByIndexOptions.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__CopyOutputDeviceInformationByIndexOptions_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::CopyOutputDeviceInformationByIndexOptions.get_DeviceIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::RTCAudio::CopyOutputDeviceInformationByIndexOptions::*)()>(&::Epic::OnlineServices::RTCAudio::CopyOutputDeviceInformationByIndexOptions::get_DeviceIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::CopyOutputDeviceInformationByIndexOptions>(),
                        {"get_DeviceIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::CopyOutputDeviceInformationByIndexOptions.set_DeviceIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::CopyOutputDeviceInformationByIndexOptions::*)(uint32_t)>(&::Epic::OnlineServices::RTCAudio::CopyOutputDeviceInformationByIndexOptions::set_DeviceIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::CopyOutputDeviceInformationByIndexOptions>(),
                        {"set_DeviceIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Epic::OnlineServices::RTCAudio::CopyOutputDeviceInformationByIndexOptions::get_DeviceIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::CopyOutputDeviceInformationByIndexOptions>(),
                        {"get_DeviceIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::RTCAudio::CopyOutputDeviceInformationByIndexOptions::set_DeviceIndex(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::CopyOutputDeviceInformationByIndexOptions>(),
                        {"set_DeviceIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_DeviceIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTCAudio::CopyOutputDeviceInformationByIndexOptions::CopyOutputDeviceInformationByIndexOptions(uint32_t  _DeviceIndex_k__BackingField) noexcept  {
this->_DeviceIndex_k__BackingField = _DeviceIndex_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::CopyOutputDeviceInformationByIndexOptions::CopyOutputDeviceInformationByIndexOptions()   {
}

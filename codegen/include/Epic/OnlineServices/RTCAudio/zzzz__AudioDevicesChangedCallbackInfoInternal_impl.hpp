#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/AudioDevicesChangedCallbackInfoInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__AudioDevicesChangedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__AudioDevicesChangedCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfoInternal::*)()>(&::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfo>)>(&::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1804e6f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfo>"
constexpr  Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfo>* Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__RTCAudio__AudioDevicesChangedCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfoInternal::AudioDevicesChangedCallbackInfoInternal(::System::IntPtr  m_ClientData) noexcept  {
this->m_ClientData = m_ClientData;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfoInternal::AudioDevicesChangedCallbackInfoInternal()   {
}

#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ProcessorInstance.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Audio/zzzz__Handle_impl.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorHeader_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Audio::ProcessorInstance_UpdateSetting::ProcessorInstance_UpdateSetting(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ProcessorInstance_UpdateSetting::ProcessorInstance_UpdateSetting()   {
}
constexpr ::UnityEngine::Audio::ProcessorInstance_UpdateSetting  UnityEngine::Audio::ProcessorInstance_UpdateSetting::Default{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Audio::ProcessorInstance_UpdateSetting  UnityEngine::Audio::ProcessorInstance_UpdateSetting::NeverUpdate{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Audio::ProcessorInstance_UpdateSetting  UnityEngine::Audio::ProcessorInstance_UpdateSetting::UpdateIfDataIsAvailable{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Audio::ProcessorInstance_UpdateSetting  UnityEngine::Audio::ProcessorInstance_UpdateSetting::UpdateAlways{static_cast<int32_t>(0x3)};
// Ctor Parameters [CppParam { name: "_controlUpdateSetting_k__BackingField", ty: "::UnityEngine::Audio::ProcessorInstance_UpdateSetting", modifiers: "", def_value: Some("{}") }, CppParam { name: "_realtimeUpdateSetting_k__BackingField", ty: "::UnityEngine::Audio::ProcessorInstance_UpdateSetting", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Audio::ProcessorInstance_CreationParameters::ProcessorInstance_CreationParameters(::UnityEngine::Audio::ProcessorInstance_UpdateSetting  _controlUpdateSetting_k__BackingField, ::UnityEngine::Audio::ProcessorInstance_UpdateSetting  _realtimeUpdateSetting_k__BackingField) noexcept  {
this->_controlUpdateSetting_k__BackingField = _controlUpdateSetting_k__BackingField;
this->_realtimeUpdateSetting_k__BackingField = _realtimeUpdateSetting_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ProcessorInstance_CreationParameters::ProcessorInstance_CreationParameters()   {
}
// Ctor Parameters [CppParam { name: "TypeHash", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Data", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ManagedHandle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Audio::ProcessorInstance_Message::ProcessorInstance_Message(int64_t  TypeHash, void*  Data, ::System::IntPtr  ManagedHandle) noexcept  {
this->TypeHash = TypeHash;
this->Data = Data;
this->ManagedHandle = ManagedHandle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ProcessorInstance_Message::ProcessorInstance_Message()   {
}
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::ProcessorInstance::*)(::UnityEngine::Audio::ProcessorInstance)>(&::UnityEngine::Audio::ProcessorInstance::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180bbb190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::ProcessorInstance>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Audio::ProcessorInstance>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::ProcessorInstance::*)(::System::Object*)>(&::UnityEngine::Audio::ProcessorInstance::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18223c230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Audio::ProcessorInstance>(),
                    {::i2c::class_of<::UnityEngine::Audio::ProcessorInstance>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Audio::ProcessorInstance::*)()>(&::UnityEngine::Audio::ProcessorInstance::GetHashCode)> {
  constexpr static std::size_t size = 0x14e50;
  constexpr static std::size_t addrs = 0x180bbb260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Audio::ProcessorInstance>(),
                    {::i2c::class_of<::UnityEngine::Audio::ProcessorInstance>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool UnityEngine::Audio::ProcessorInstance::Equals(::UnityEngine::Audio::ProcessorInstance  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::ProcessorInstance>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Audio::ProcessorInstance>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Audio::ProcessorInstance::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Audio::ProcessorInstance>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Audio::ProcessorInstance::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Audio::ProcessorInstance>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Audio::ProcessorInstance>"
constexpr  UnityEngine::Audio::ProcessorInstance::operator ::System::IEquatable_1<::UnityEngine::Audio::ProcessorInstance>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Audio::ProcessorInstance>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Audio::ProcessorInstance>"
constexpr ::System::IEquatable_1<::UnityEngine::Audio::ProcessorInstance>* UnityEngine::Audio::ProcessorInstance::i___System__IEquatable_1___UnityEngine__Audio__ProcessorInstance_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Audio::ProcessorInstance>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Handle", ty: "::Unity::Audio::Handle", modifiers: "", def_value: Some("{}") }, CppParam { name: "Header", ty: "::UnityEngine::Audio::ProcessorHeader*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Audio::ProcessorInstance::ProcessorInstance(::Unity::Audio::Handle  Handle, ::UnityEngine::Audio::ProcessorHeader*  Header) noexcept  {
this->Handle = Handle;
this->Header = Header;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ProcessorInstance::ProcessorInstance()   {
}

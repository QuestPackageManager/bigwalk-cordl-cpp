#pragma once
// IWYU pragma private; include "UnityEngine/Audio/GeneratorInstance.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_impl.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorHeader_impl.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_impl.hpp"
#include "UnityEngine/zzzz__AudioSpeakerMode_impl.hpp"
#include "UnityEngine/Audio/zzzz__GeneratorInstance_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/Audio/zzzz__GeneratorInstance_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance_ICapabilities.get_isFinite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::GeneratorInstance_ICapabilities::*)()>(&::UnityEngine::Audio::GeneratorInstance_ICapabilities::get_isFinite)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(),
                    {::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance_ICapabilities.get_isRealtime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::GeneratorInstance_ICapabilities::*)()>(&::UnityEngine::Audio::GeneratorInstance_ICapabilities::get_isRealtime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(),
                    {::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance_ICapabilities.get_length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Unity::IntegerTime::DiscreteTime> (::UnityEngine::Audio::GeneratorInstance_ICapabilities::*)()>(&::UnityEngine::Audio::GeneratorInstance_ICapabilities::get_length)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(),
                    {::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool UnityEngine::Audio::GeneratorInstance_ICapabilities::get_isFinite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Audio::GeneratorInstance_ICapabilities::get_isRealtime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Nullable_1<::Unity::IntegerTime::DiscreteTime> UnityEngine::Audio::GeneratorInstance_ICapabilities::get_length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Unity::IntegerTime::DiscreteTime>>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "speakerMode", ty: "::UnityEngine::AudioSpeakerMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "sampleRate", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Audio::GeneratorInstance_Setup::GeneratorInstance_Setup(::UnityEngine::AudioSpeakerMode  speakerMode, int32_t  sampleRate) noexcept  {
this->speakerMode = speakerMode;
this->sampleRate = sampleRate;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::GeneratorInstance_Setup::GeneratorInstance_Setup()   {
}
// Ctor Parameters [CppParam { name: "m_Reserved", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Audio::GeneratorInstance_Properties::GeneratorInstance_Properties(uint8_t  m_Reserved) noexcept  {
this->m_Reserved = m_Reserved;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::GeneratorInstance_Properties::GeneratorInstance_Properties()   {
}
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance_Configuration.get_isRealtime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::GeneratorInstance_Configuration::*)()>(&::UnityEngine::Audio::GeneratorInstance_Configuration::get_isRealtime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814f8710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_Configuration>(),
                        {"get_isRealtime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance_Configuration.get_length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Unity::IntegerTime::DiscreteTime> (::UnityEngine::Audio::GeneratorInstance_Configuration::*)()>(&::UnityEngine::Audio::GeneratorInstance_Configuration::get_length)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18223b840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_Configuration>(),
                        {"get_length", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::Audio::GeneratorInstance_Configuration::get_isRealtime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_Configuration>(),
                        {"get_isRealtime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::Nullable_1<::Unity::IntegerTime::DiscreteTime> UnityEngine::Audio::GeneratorInstance_Configuration::get_length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_Configuration>(),
                        {"get_length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Unity::IntegerTime::DiscreteTime>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Setup", ty: "::UnityEngine::Audio::GeneratorInstance_Setup", modifiers: "", def_value: Some("{}") }, CppParam { name: "Properties", ty: "::UnityEngine::Audio::GeneratorInstance_Properties", modifiers: "", def_value: Some("{}") }, CppParam { name: "ReportedLength", ty: "::Unity::IntegerTime::DiscreteTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsFinite", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsRealtime", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "HasKnownLength", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Audio::GeneratorInstance_Configuration::GeneratorInstance_Configuration(::UnityEngine::Audio::GeneratorInstance_Setup  Setup, ::UnityEngine::Audio::GeneratorInstance_Properties  Properties, ::Unity::IntegerTime::DiscreteTime  ReportedLength, bool  IsFinite, bool  IsRealtime, bool  HasKnownLength) noexcept  {
this->Setup = Setup;
this->Properties = Properties;
this->ReportedLength = ReportedLength;
this->IsFinite = IsFinite;
this->IsRealtime = IsRealtime;
this->HasKnownLength = HasKnownLength;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::GeneratorInstance_Configuration::GeneratorInstance_Configuration()   {
}
// Ctor Parameters [CppParam { name: "Processor", ty: "::UnityEngine::Audio::ProcessorHeader", modifiers: "", def_value: Some("{}") }, CppParam { name: "Configuration", ty: "::UnityEngine::Audio::GeneratorInstance_Configuration", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Audio::GeneratorInstance_GeneratorHeader::GeneratorInstance_GeneratorHeader(::UnityEngine::Audio::ProcessorHeader  Processor, ::UnityEngine::Audio::GeneratorInstance_Configuration  Configuration) noexcept  {
this->Processor = Processor;
this->Configuration = Configuration;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::GeneratorInstance_GeneratorHeader::GeneratorInstance_GeneratorHeader()   {
}
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance.op_Implicit___UnityEngine__Audio__ProcessorInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::ProcessorInstance (*)(::by_ref<::UnityEngine::Audio::GeneratorInstance>)>(&::UnityEngine::Audio::GeneratorInstance::op_Implicit___UnityEngine__Audio__ProcessorInstance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180503ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(),
                        {"op_Implicit", {}, {::i2c::type_of<::by_ref<::UnityEngine::Audio::GeneratorInstance>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::GeneratorInstance::*)(::UnityEngine::Audio::GeneratorInstance)>(&::UnityEngine::Audio::GeneratorInstance::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18223bbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Audio::GeneratorInstance>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::GeneratorInstance::*)(::System::Object*)>(&::UnityEngine::Audio::GeneratorInstance::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18223bc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(),
                    {::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Audio::GeneratorInstance::*)()>(&::UnityEngine::Audio::GeneratorInstance::GetHashCode)> {
  constexpr static std::size_t size = 0x14e50;
  constexpr static std::size_t addrs = 0x180bbb260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(),
                    {::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::Audio::ProcessorInstance UnityEngine::Audio::GeneratorInstance::op_Implicit___UnityEngine__Audio__ProcessorInstance(::by_ref<::UnityEngine::Audio::GeneratorInstance>  generatorInstance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(),
                        {"op_Implicit", {}, {::i2c::type_of<::by_ref<::UnityEngine::Audio::GeneratorInstance>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::ProcessorInstance>(nullptr, ___internal_method, generatorInstance);
}
inline bool UnityEngine::Audio::GeneratorInstance::Equals(::UnityEngine::Audio::GeneratorInstance  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Audio::GeneratorInstance>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Audio::GeneratorInstance::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Audio::GeneratorInstance::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Audio::GeneratorInstance>"
constexpr  UnityEngine::Audio::GeneratorInstance::operator ::System::IEquatable_1<::UnityEngine::Audio::GeneratorInstance>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Audio::GeneratorInstance>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Audio::GeneratorInstance>"
constexpr ::System::IEquatable_1<::UnityEngine::Audio::GeneratorInstance>* UnityEngine::Audio::GeneratorInstance::i___System__IEquatable_1___UnityEngine__Audio__GeneratorInstance_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Audio::GeneratorInstance>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ProcessorInstance", ty: "::UnityEngine::Audio::ProcessorInstance", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Audio::GeneratorInstance::GeneratorInstance(::UnityEngine::Audio::ProcessorInstance  m_ProcessorInstance) noexcept  {
this->m_ProcessorInstance = m_ProcessorInstance;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::GeneratorInstance::GeneratorInstance()   {
}

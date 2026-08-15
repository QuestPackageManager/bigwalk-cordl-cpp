#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ControlContext.hpp"
#include "Unity/Audio/zzzz__Handle_impl.hpp"
#include "UnityEngine/Audio/zzzz__ControlContext_def.hpp"
#include "UnityEngine/Audio/zzzz__ControlHeader_def.hpp"
#include "UnityEngine/Audio/zzzz__GeneratorInstance_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::ControlContext::*)(void*)>(&::UnityEngine::Audio::ControlContext::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18223bac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                        {".ctor", {}, {::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.Exists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::ControlContext::*)(::UnityEngine::Audio::ProcessorInstance)>(&::UnityEngine::Audio::ControlContext::Exists)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18223b970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                        {"Exists", {}, {::i2c::type_of<::UnityEngine::Audio::ProcessorInstance>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.GetConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::GeneratorInstance_Configuration (::UnityEngine::Audio::ControlContext::*)(::UnityEngine::Audio::GeneratorInstance)>(&::UnityEngine::Audio::ControlContext::GetConfiguration)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18223b9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                        {"GetConfiguration", {}, {::i2c::type_of<::UnityEngine::Audio::GeneratorInstance>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.CleanupHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Audio::ControlHeader>)>(&::UnityEngine::Audio::ControlContext::CleanupHeader)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18223b930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                        {"CleanupHeader", {}, {::i2c::type_of<::by_ref<::UnityEngine::Audio::ControlHeader>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Audio::ControlContext::_ctor(void*  headerThatShouldBeOfResourceType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                        {".ctor", {}, {::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, headerThatShouldBeOfResourceType);
}
inline bool UnityEngine::Audio::ControlContext::Exists(::UnityEngine::Audio::ProcessorInstance  processorInstance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                        {"Exists", {}, {::i2c::type_of<::UnityEngine::Audio::ProcessorInstance>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, processorInstance);
}
inline ::UnityEngine::Audio::GeneratorInstance_Configuration UnityEngine::Audio::ControlContext::GetConfiguration(::UnityEngine::Audio::GeneratorInstance  generatorInstance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                        {"GetConfiguration", {}, {::i2c::type_of<::UnityEngine::Audio::GeneratorInstance>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::GeneratorInstance_Configuration>(*this, ___internal_method, generatorInstance);
}
inline void UnityEngine::Audio::ControlContext::CleanupHeader(::by_ref<::UnityEngine::Audio::ControlHeader>  header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                        {"CleanupHeader", {}, {::i2c::type_of<::by_ref<::UnityEngine::Audio::ControlHeader>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, header);
}
// Ctor Parameters [CppParam { name: "m_Header", ty: "::UnityEngine::Audio::ControlHeader*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Handle", ty: "::Unity::Audio::Handle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Audio::ControlContext::ControlContext(::UnityEngine::Audio::ControlHeader*  m_Header, ::Unity::Audio::Handle  m_Handle) noexcept  {
this->m_Header = m_Header;
this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ControlContext::ControlContext()   {
}

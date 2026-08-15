#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ScriptableProcessorBindings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Audio/zzzz__ScriptableProcessorBindings_def.hpp"
#include "Unity/Audio/zzzz__Handle_def.hpp"
#include "UnityEngine/Audio/zzzz__ControlHeader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.CheckProcessorExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Audio::Handle, ::UnityEngine::Audio::ControlHeader*)>(&::UnityEngine::Audio::ScriptableProcessorBindings::CheckProcessorExists)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x18223c7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                        {"CheckProcessorExists", {}, {::i2c::type_of<::Unity::Audio::Handle>(), ::i2c::type_of<::UnityEngine::Audio::ControlHeader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.CheckProcessorExistsInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Audio::Handle, void*)>(&::UnityEngine::Audio::ScriptableProcessorBindings::CheckProcessorExistsInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18223c7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                        {"CheckProcessorExistsInternal", {}, {::i2c::type_of<::Unity::Audio::Handle>(), ::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.CheckProcessorExistsInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Audio::Handle>, void*)>(&::UnityEngine::Audio::ScriptableProcessorBindings::CheckProcessorExistsInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223c7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                        {"CheckProcessorExistsInternal_Injected", {}, {::i2c::type_of<::by_ref<::Unity::Audio::Handle>>(), ::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::Audio::ScriptableProcessorBindings::CheckProcessorExists(::Unity::Audio::Handle  handle, ::UnityEngine::Audio::ControlHeader*  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                        {"CheckProcessorExists", {}, {::i2c::type_of<::Unity::Audio::Handle>(), ::i2c::type_of<::UnityEngine::Audio::ControlHeader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, control);
}
inline bool UnityEngine::Audio::ScriptableProcessorBindings::CheckProcessorExistsInternal(::Unity::Audio::Handle  handle, void*  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                        {"CheckProcessorExistsInternal", {}, {::i2c::type_of<::Unity::Audio::Handle>(), ::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, control);
}
inline bool UnityEngine::Audio::ScriptableProcessorBindings::CheckProcessorExistsInternal_Injected(::by_ref<::Unity::Audio::Handle>  handle, void*  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                        {"CheckProcessorExistsInternal_Injected", {}, {::i2c::type_of<::by_ref<::Unity::Audio::Handle>>(), ::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, control);
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ScriptableProcessorBindings::ScriptableProcessorBindings()   {
}

#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ScriptableGeneratorBindings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Audio/zzzz__ScriptableGeneratorBindings_def.hpp"
#include "UnityEngine/Audio/zzzz__ControlHeader_def.hpp"
#include "UnityEngine/Audio/zzzz__GeneratorInstance_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableGeneratorBindings.InstantiateGeneratorFromObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*, ::by_ref<::UnityEngine::Audio::ControlHeader>, ::by_ref<::UnityEngine::Audio::GeneratorInstance>)>(&::UnityEngine::Audio::ScriptableGeneratorBindings::InstantiateGeneratorFromObject)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x18223c2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::ScriptableGeneratorBindings*>(),
                        {"InstantiateGeneratorFromObject", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::by_ref<::UnityEngine::Audio::ControlHeader>>(), ::i2c::type_of<::by_ref<::UnityEngine::Audio::GeneratorInstance>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Audio::ScriptableGeneratorBindings::InstantiateGeneratorFromObject(::UnityEngine::Object*  generatorObjectDefinition, ::by_ref<::UnityEngine::Audio::ControlHeader>  control, ::by_ref<::UnityEngine::Audio::GeneratorInstance>  runtimeHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::ScriptableGeneratorBindings*>(),
                        {"InstantiateGeneratorFromObject", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::by_ref<::UnityEngine::Audio::ControlHeader>>(), ::i2c::type_of<::by_ref<::UnityEngine::Audio::GeneratorInstance>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, generatorObjectDefinition, control, runtimeHandle);
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ScriptableGeneratorBindings::ScriptableGeneratorBindings()   {
}

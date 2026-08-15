#pragma once
// IWYU pragma private; include "UnityEngine/Audio/IAudioGenerator.hpp"
#include "UnityEngine/Audio/zzzz__IAudioGenerator_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioFormat_def.hpp"
#include "UnityEngine/Audio/zzzz__ControlContext_def.hpp"
#include "UnityEngine/Audio/zzzz__GeneratorInstance_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::IAudioGenerator.CreateInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::GeneratorInstance (::UnityEngine::Audio::IAudioGenerator::*)(::UnityEngine::Audio::ControlContext, ::System::Nullable_1<::UnityEngine::Audio::AudioFormat>, ::UnityEngine::Audio::ProcessorInstance_CreationParameters)>(&::UnityEngine::Audio::IAudioGenerator::CreateInstance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Audio::IAudioGenerator*>(),
                    {::i2c::class_of<::UnityEngine::Audio::IAudioGenerator*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::Audio::GeneratorInstance UnityEngine::Audio::IAudioGenerator::CreateInstance(::UnityEngine::Audio::ControlContext  context, ::System::Nullable_1<::UnityEngine::Audio::AudioFormat>  nestedFormat, ::UnityEngine::Audio::ProcessorInstance_CreationParameters  creationParameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Audio::IAudioGenerator*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::GeneratorInstance>(this, ___internal_method, context, nestedFormat, creationParameters);
}
/// @brief Convert operator to "::UnityEngine::Audio::GeneratorInstance_ICapabilities"
constexpr  UnityEngine::Audio::IAudioGenerator::operator ::UnityEngine::Audio::GeneratorInstance_ICapabilities*() noexcept {
return static_cast<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Audio::GeneratorInstance_ICapabilities"
constexpr ::UnityEngine::Audio::GeneratorInstance_ICapabilities* UnityEngine::Audio::IAudioGenerator::i___UnityEngine__Audio__GeneratorInstance_ICapabilities() noexcept {
return static_cast<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(static_cast<void*>(this));
}

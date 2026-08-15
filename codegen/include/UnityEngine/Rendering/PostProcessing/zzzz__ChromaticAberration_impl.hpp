#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/ChromaticAberration.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ChromaticAberration_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__BoolParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__FloatParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__TextureParameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ChromaticAberration.IsEnabledAndSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::ChromaticAberration::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::ChromaticAberration::IsEnabledAndSupported)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fb2690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ChromaticAberration*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ChromaticAberration*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ChromaticAberration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ChromaticAberration::*)()>(&::UnityEngine::Rendering::PostProcessing::ChromaticAberration::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181fb26b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ChromaticAberration*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameter*& UnityEngine::Rendering::PostProcessing::ChromaticAberration::__cordl_internal_get_spectralLut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spectralLut;
}
constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameter* const& UnityEngine::Rendering::PostProcessing::ChromaticAberration::__cordl_internal_get_spectralLut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spectralLut;
}
constexpr void UnityEngine::Rendering::PostProcessing::ChromaticAberration::__cordl_internal_set_spectralLut(::UnityEngine::Rendering::PostProcessing::TextureParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spectralLut = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ChromaticAberration::__cordl_internal_get_intensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ChromaticAberration::__cordl_internal_get_intensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr void UnityEngine::Rendering::PostProcessing::ChromaticAberration::__cordl_internal_set_intensity(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intensity = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::BoolParameter*& UnityEngine::Rendering::PostProcessing::ChromaticAberration::__cordl_internal_get_fastMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastMode;
}
constexpr ::UnityEngine::Rendering::PostProcessing::BoolParameter* const& UnityEngine::Rendering::PostProcessing::ChromaticAberration::__cordl_internal_get_fastMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastMode;
}
constexpr void UnityEngine::Rendering::PostProcessing::ChromaticAberration::__cordl_internal_set_fastMode(::UnityEngine::Rendering::PostProcessing::BoolParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fastMode = value;
}
inline bool UnityEngine::Rendering::PostProcessing::ChromaticAberration::IsEnabledAndSupported(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ChromaticAberration*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::ChromaticAberration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ChromaticAberration*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::ChromaticAberration* UnityEngine::Rendering::PostProcessing::ChromaticAberration::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::ChromaticAberration*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::ChromaticAberration::ChromaticAberration()   {
}

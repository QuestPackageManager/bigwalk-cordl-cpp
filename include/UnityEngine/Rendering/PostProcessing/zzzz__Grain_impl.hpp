#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/Grain.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__Grain_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__BoolParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__FloatParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::Grain.IsEnabledAndSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::Grain::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::Grain::IsEnabledAndSupported)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fb2690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Grain*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Grain*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::Grain._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::Grain::*)()>(&::UnityEngine::Rendering::PostProcessing::Grain::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181fb7450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Grain*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::PostProcessing::BoolParameter*& UnityEngine::Rendering::PostProcessing::Grain::__cordl_internal_get_colored()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colored;
}
constexpr ::UnityEngine::Rendering::PostProcessing::BoolParameter* const& UnityEngine::Rendering::PostProcessing::Grain::__cordl_internal_get_colored() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colored;
}
constexpr void UnityEngine::Rendering::PostProcessing::Grain::__cordl_internal_set_colored(::UnityEngine::Rendering::PostProcessing::BoolParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colored = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::Grain::__cordl_internal_get_intensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::Grain::__cordl_internal_get_intensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr void UnityEngine::Rendering::PostProcessing::Grain::__cordl_internal_set_intensity(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intensity = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::Grain::__cordl_internal_get_size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::Grain::__cordl_internal_get_size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr void UnityEngine::Rendering::PostProcessing::Grain::__cordl_internal_set_size(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___size = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::Grain::__cordl_internal_get_lumContrib()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lumContrib;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::Grain::__cordl_internal_get_lumContrib() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lumContrib;
}
constexpr void UnityEngine::Rendering::PostProcessing::Grain::__cordl_internal_set_lumContrib(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lumContrib = value;
}
inline bool UnityEngine::Rendering::PostProcessing::Grain::IsEnabledAndSupported(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Grain*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::Grain::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Grain*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::Grain* UnityEngine::Rendering::PostProcessing::Grain::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::Grain*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::Grain::Grain()   {
}

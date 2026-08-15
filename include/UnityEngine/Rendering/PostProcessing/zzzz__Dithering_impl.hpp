#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/Dithering.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__Dithering_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::Dithering.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::Dithering::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::Dithering::Render)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181fb6ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Dithering*>(),
                        {"Render", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::Dithering._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::Dithering::*)()>(&::UnityEngine::Rendering::PostProcessing::Dithering::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181fb6c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Dithering*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::PostProcessing::Dithering::__cordl_internal_get_m_NoiseTextureIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NoiseTextureIndex;
}
constexpr int32_t const& UnityEngine::Rendering::PostProcessing::Dithering::__cordl_internal_get_m_NoiseTextureIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NoiseTextureIndex;
}
constexpr void UnityEngine::Rendering::PostProcessing::Dithering::__cordl_internal_set_m_NoiseTextureIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NoiseTextureIndex = value;
}
constexpr ::System::Random*& UnityEngine::Rendering::PostProcessing::Dithering::__cordl_internal_get_m_Random()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Random;
}
constexpr ::System::Random* const& UnityEngine::Rendering::PostProcessing::Dithering::__cordl_internal_get_m_Random() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Random;
}
constexpr void UnityEngine::Rendering::PostProcessing::Dithering::__cordl_internal_set_m_Random(::System::Random*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Random = value;
}
inline void UnityEngine::Rendering::PostProcessing::Dithering::Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Dithering*>(),
                        {"Render", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::Dithering::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Dithering*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::Dithering* UnityEngine::Rendering::PostProcessing::Dithering::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::Dithering*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::Dithering::Dithering()   {
}

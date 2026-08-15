#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WaterResources.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_impl.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__ScriptableSingleton_1_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterResources_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterResources_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterResources_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_ComputeLibrary._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources_ComputeLibrary::*)(::WaveHarmonic::Crest::WaterResources*)>(&::WaveHarmonic::Crest::WaterResources_ComputeLibrary::_ctor)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x18259df60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_ComputeLibrary*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterResources*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::WaterResources_BlitCompute*& WaveHarmonic::Crest::WaterResources_ComputeLibrary::__cordl_internal_get__BlitCompute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BlitCompute;
}
constexpr ::WaveHarmonic::Crest::WaterResources_BlitCompute* const& WaveHarmonic::Crest::WaterResources_ComputeLibrary::__cordl_internal_get__BlitCompute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BlitCompute;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeLibrary::__cordl_internal_set__BlitCompute(::WaveHarmonic::Crest::WaterResources_BlitCompute*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BlitCompute = value;
}
constexpr ::WaveHarmonic::Crest::WaterResources_BlurCompute*& WaveHarmonic::Crest::WaterResources_ComputeLibrary::__cordl_internal_get__BlurCompute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BlurCompute;
}
constexpr ::WaveHarmonic::Crest::WaterResources_BlurCompute* const& WaveHarmonic::Crest::WaterResources_ComputeLibrary::__cordl_internal_get__BlurCompute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BlurCompute;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeLibrary::__cordl_internal_set__BlurCompute(::WaveHarmonic::Crest::WaterResources_BlurCompute*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BlurCompute = value;
}
constexpr ::WaveHarmonic::Crest::WaterResources_ClearCompute*& WaveHarmonic::Crest::WaterResources_ComputeLibrary::__cordl_internal_get__ClearCompute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClearCompute;
}
constexpr ::WaveHarmonic::Crest::WaterResources_ClearCompute* const& WaveHarmonic::Crest::WaterResources_ComputeLibrary::__cordl_internal_get__ClearCompute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClearCompute;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeLibrary::__cordl_internal_set__ClearCompute(::WaveHarmonic::Crest::WaterResources_ClearCompute*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClearCompute = value;
}
constexpr ::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute*& WaveHarmonic::Crest::WaterResources_ComputeLibrary::__cordl_internal_get__ShapeCombineCompute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShapeCombineCompute;
}
constexpr ::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute* const& WaveHarmonic::Crest::WaterResources_ComputeLibrary::__cordl_internal_get__ShapeCombineCompute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShapeCombineCompute;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeLibrary::__cordl_internal_set__ShapeCombineCompute(::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShapeCombineCompute = value;
}
constexpr ::WaveHarmonic::Crest::WaterResources_GerstnerCompute*& WaveHarmonic::Crest::WaterResources_ComputeLibrary::__cordl_internal_get__GerstnerCompute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GerstnerCompute;
}
constexpr ::WaveHarmonic::Crest::WaterResources_GerstnerCompute* const& WaveHarmonic::Crest::WaterResources_ComputeLibrary::__cordl_internal_get__GerstnerCompute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GerstnerCompute;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeLibrary::__cordl_internal_set__GerstnerCompute(::WaveHarmonic::Crest::WaterResources_GerstnerCompute*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GerstnerCompute = value;
}
inline void WaveHarmonic::Crest::WaterResources_ComputeLibrary::_ctor(::WaveHarmonic::Crest::WaterResources*  resources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_ComputeLibrary*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterResources*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resources);
}
inline ::WaveHarmonic::Crest::WaterResources_ComputeLibrary* WaveHarmonic::Crest::WaterResources_ComputeLibrary::New_ctor(::WaveHarmonic::Crest::WaterResources*  resources)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaterResources_ComputeLibrary*>(resources));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterResources_ComputeLibrary::WaterResources_ComputeLibrary()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_UtilityCompute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources_UtilityCompute::*)(::UnityEngine::ComputeShader*)>(&::WaveHarmonic::Crest::WaterResources_UtilityCompute::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1825a5060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_UtilityCompute*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_UtilityCompute::__cordl_internal_get__Shader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Shader;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_UtilityCompute::__cordl_internal_get__Shader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Shader;
}
constexpr void WaveHarmonic::Crest::WaterResources_UtilityCompute::__cordl_internal_set__Shader(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Shader = value;
}
constexpr ::UnityEngine::Rendering::LocalKeyword& WaveHarmonic::Crest::WaterResources_UtilityCompute::__cordl_internal_get__Float1Keyword()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Float1Keyword;
}
constexpr ::UnityEngine::Rendering::LocalKeyword const& WaveHarmonic::Crest::WaterResources_UtilityCompute::__cordl_internal_get__Float1Keyword() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Float1Keyword;
}
constexpr void WaveHarmonic::Crest::WaterResources_UtilityCompute::__cordl_internal_set__Float1Keyword(::UnityEngine::Rendering::LocalKeyword  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Float1Keyword = value;
}
constexpr ::UnityEngine::Rendering::LocalKeyword& WaveHarmonic::Crest::WaterResources_UtilityCompute::__cordl_internal_get__Float2Keyword()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Float2Keyword;
}
constexpr ::UnityEngine::Rendering::LocalKeyword const& WaveHarmonic::Crest::WaterResources_UtilityCompute::__cordl_internal_get__Float2Keyword() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Float2Keyword;
}
constexpr void WaveHarmonic::Crest::WaterResources_UtilityCompute::__cordl_internal_set__Float2Keyword(::UnityEngine::Rendering::LocalKeyword  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Float2Keyword = value;
}
constexpr ::UnityEngine::Rendering::LocalKeyword& WaveHarmonic::Crest::WaterResources_UtilityCompute::__cordl_internal_get__Float3Keyword()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Float3Keyword;
}
constexpr ::UnityEngine::Rendering::LocalKeyword const& WaveHarmonic::Crest::WaterResources_UtilityCompute::__cordl_internal_get__Float3Keyword() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Float3Keyword;
}
constexpr void WaveHarmonic::Crest::WaterResources_UtilityCompute::__cordl_internal_set__Float3Keyword(::UnityEngine::Rendering::LocalKeyword  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Float3Keyword = value;
}
constexpr ::UnityEngine::Rendering::LocalKeyword& WaveHarmonic::Crest::WaterResources_UtilityCompute::__cordl_internal_get__Float4Keyword()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Float4Keyword;
}
constexpr ::UnityEngine::Rendering::LocalKeyword const& WaveHarmonic::Crest::WaterResources_UtilityCompute::__cordl_internal_get__Float4Keyword() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Float4Keyword;
}
constexpr void WaveHarmonic::Crest::WaterResources_UtilityCompute::__cordl_internal_set__Float4Keyword(::UnityEngine::Rendering::LocalKeyword  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Float4Keyword = value;
}
inline void WaveHarmonic::Crest::WaterResources_UtilityCompute::_ctor(::UnityEngine::ComputeShader*  shader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_UtilityCompute*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shader);
}
template<typename T>
inline void WaveHarmonic::Crest::WaterResources_UtilityCompute::SetVariantForFormat(T  wrapper, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_UtilityCompute*>(),
                    {"SetVariantForFormat", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper, format);
}
inline ::WaveHarmonic::Crest::WaterResources_UtilityCompute* WaveHarmonic::Crest::WaterResources_UtilityCompute::New_ctor(::UnityEngine::ComputeShader*  shader)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaterResources_UtilityCompute*>(shader));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterResources_UtilityCompute::WaterResources_UtilityCompute()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_ClearCompute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources_ClearCompute::*)(::UnityEngine::ComputeShader*)>(&::WaveHarmonic::Crest::WaterResources_ClearCompute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18259df30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_ClearCompute*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& WaveHarmonic::Crest::WaterResources_ClearCompute::__cordl_internal_get__KernelClearTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____KernelClearTarget;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterResources_ClearCompute::__cordl_internal_get__KernelClearTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____KernelClearTarget;
}
constexpr void WaveHarmonic::Crest::WaterResources_ClearCompute::__cordl_internal_set__KernelClearTarget(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____KernelClearTarget = value;
}
constexpr int32_t& WaveHarmonic::Crest::WaterResources_ClearCompute::__cordl_internal_get__KernelClearTargetBoundaryX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____KernelClearTargetBoundaryX;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterResources_ClearCompute::__cordl_internal_get__KernelClearTargetBoundaryX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____KernelClearTargetBoundaryX;
}
constexpr void WaveHarmonic::Crest::WaterResources_ClearCompute::__cordl_internal_set__KernelClearTargetBoundaryX(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____KernelClearTargetBoundaryX = value;
}
constexpr int32_t& WaveHarmonic::Crest::WaterResources_ClearCompute::__cordl_internal_get__KernelClearTargetBoundaryY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____KernelClearTargetBoundaryY;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterResources_ClearCompute::__cordl_internal_get__KernelClearTargetBoundaryY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____KernelClearTargetBoundaryY;
}
constexpr void WaveHarmonic::Crest::WaterResources_ClearCompute::__cordl_internal_set__KernelClearTargetBoundaryY(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____KernelClearTargetBoundaryY = value;
}
inline void WaveHarmonic::Crest::WaterResources_ClearCompute::_ctor(::UnityEngine::ComputeShader*  shader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_ClearCompute*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shader);
}
inline ::WaveHarmonic::Crest::WaterResources_ClearCompute* WaveHarmonic::Crest::WaterResources_ClearCompute::New_ctor(::UnityEngine::ComputeShader*  shader)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaterResources_ClearCompute*>(shader));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterResources_ClearCompute::WaterResources_ClearCompute()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_BlitCompute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources_BlitCompute::*)(::UnityEngine::ComputeShader*)>(&::WaveHarmonic::Crest::WaterResources_BlitCompute::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18259dbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_BlitCompute*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& WaveHarmonic::Crest::WaterResources_BlitCompute::__cordl_internal_get__KernelAdd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____KernelAdd;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterResources_BlitCompute::__cordl_internal_get__KernelAdd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____KernelAdd;
}
constexpr void WaveHarmonic::Crest::WaterResources_BlitCompute::__cordl_internal_set__KernelAdd(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____KernelAdd = value;
}
inline void WaveHarmonic::Crest::WaterResources_BlitCompute::_ctor(::UnityEngine::ComputeShader*  shader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_BlitCompute*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shader);
}
inline ::WaveHarmonic::Crest::WaterResources_BlitCompute* WaveHarmonic::Crest::WaterResources_BlitCompute::New_ctor(::UnityEngine::ComputeShader*  shader)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaterResources_BlitCompute*>(shader));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterResources_BlitCompute::WaterResources_BlitCompute()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_BlurCompute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources_BlurCompute::*)(::UnityEngine::ComputeShader*)>(&::WaveHarmonic::Crest::WaterResources_BlurCompute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18259dbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_BlurCompute*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& WaveHarmonic::Crest::WaterResources_BlurCompute::__cordl_internal_get__KernelHorizontal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____KernelHorizontal;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterResources_BlurCompute::__cordl_internal_get__KernelHorizontal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____KernelHorizontal;
}
constexpr void WaveHarmonic::Crest::WaterResources_BlurCompute::__cordl_internal_set__KernelHorizontal(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____KernelHorizontal = value;
}
constexpr int32_t& WaveHarmonic::Crest::WaterResources_BlurCompute::__cordl_internal_get__KernelVertical()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____KernelVertical;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterResources_BlurCompute::__cordl_internal_get__KernelVertical() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____KernelVertical;
}
constexpr void WaveHarmonic::Crest::WaterResources_BlurCompute::__cordl_internal_set__KernelVertical(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____KernelVertical = value;
}
inline void WaveHarmonic::Crest::WaterResources_BlurCompute::_ctor(::UnityEngine::ComputeShader*  shader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_BlurCompute*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shader);
}
inline ::WaveHarmonic::Crest::WaterResources_BlurCompute* WaveHarmonic::Crest::WaterResources_BlurCompute::New_ctor(::UnityEngine::ComputeShader*  shader)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaterResources_BlurCompute*>(shader));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterResources_BlurCompute::WaterResources_BlurCompute()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute::*)(::UnityEngine::ComputeShader*)>(&::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1825a3ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ShapeCombineCompute::__cordl_internal_get__Shader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Shader;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ShapeCombineCompute::__cordl_internal_get__Shader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Shader;
}
constexpr void WaveHarmonic::Crest::WaterResources_ShapeCombineCompute::__cordl_internal_set__Shader(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Shader = value;
}
constexpr ::UnityEngine::Rendering::LocalKeyword& WaveHarmonic::Crest::WaterResources_ShapeCombineCompute::__cordl_internal_get__CombineKeyword()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CombineKeyword;
}
constexpr ::UnityEngine::Rendering::LocalKeyword const& WaveHarmonic::Crest::WaterResources_ShapeCombineCompute::__cordl_internal_get__CombineKeyword() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CombineKeyword;
}
constexpr void WaveHarmonic::Crest::WaterResources_ShapeCombineCompute::__cordl_internal_set__CombineKeyword(::UnityEngine::Rendering::LocalKeyword  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CombineKeyword = value;
}
constexpr ::UnityEngine::Rendering::LocalKeyword& WaveHarmonic::Crest::WaterResources_ShapeCombineCompute::__cordl_internal_get__DynamicWavesKeyword()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DynamicWavesKeyword;
}
constexpr ::UnityEngine::Rendering::LocalKeyword const& WaveHarmonic::Crest::WaterResources_ShapeCombineCompute::__cordl_internal_get__DynamicWavesKeyword() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DynamicWavesKeyword;
}
constexpr void WaveHarmonic::Crest::WaterResources_ShapeCombineCompute::__cordl_internal_set__DynamicWavesKeyword(::UnityEngine::Rendering::LocalKeyword  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DynamicWavesKeyword = value;
}
constexpr int32_t& WaveHarmonic::Crest::WaterResources_ShapeCombineCompute::__cordl_internal_get__CopyAnimatedWavesKernel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopyAnimatedWavesKernel;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterResources_ShapeCombineCompute::__cordl_internal_get__CopyAnimatedWavesKernel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopyAnimatedWavesKernel;
}
constexpr void WaveHarmonic::Crest::WaterResources_ShapeCombineCompute::__cordl_internal_set__CopyAnimatedWavesKernel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CopyAnimatedWavesKernel = value;
}
constexpr int32_t& WaveHarmonic::Crest::WaterResources_ShapeCombineCompute::__cordl_internal_get__CombineAnimatedWavesKernel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CombineAnimatedWavesKernel;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterResources_ShapeCombineCompute::__cordl_internal_get__CombineAnimatedWavesKernel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CombineAnimatedWavesKernel;
}
constexpr void WaveHarmonic::Crest::WaterResources_ShapeCombineCompute::__cordl_internal_set__CombineAnimatedWavesKernel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CombineAnimatedWavesKernel = value;
}
constexpr int32_t& WaveHarmonic::Crest::WaterResources_ShapeCombineCompute::__cordl_internal_get__CombineDynamicWavesKernel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CombineDynamicWavesKernel;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterResources_ShapeCombineCompute::__cordl_internal_get__CombineDynamicWavesKernel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CombineDynamicWavesKernel;
}
constexpr void WaveHarmonic::Crest::WaterResources_ShapeCombineCompute::__cordl_internal_set__CombineDynamicWavesKernel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CombineDynamicWavesKernel = value;
}
inline void WaveHarmonic::Crest::WaterResources_ShapeCombineCompute::_ctor(::UnityEngine::ComputeShader*  shader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shader);
}
inline ::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute* WaveHarmonic::Crest::WaterResources_ShapeCombineCompute::New_ctor(::UnityEngine::ComputeShader*  shader)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute*>(shader));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute::WaterResources_ShapeCombineCompute()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_GerstnerCompute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources_GerstnerCompute::*)(::UnityEngine::ComputeShader*)>(&::WaveHarmonic::Crest::WaterResources_GerstnerCompute::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1825a0f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_GerstnerCompute*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_GerstnerCompute::__cordl_internal_get__Shader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Shader;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_GerstnerCompute::__cordl_internal_get__Shader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Shader;
}
constexpr void WaveHarmonic::Crest::WaterResources_GerstnerCompute::__cordl_internal_set__Shader(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Shader = value;
}
constexpr ::UnityEngine::Rendering::LocalKeyword& WaveHarmonic::Crest::WaterResources_GerstnerCompute::__cordl_internal_get__WavePairsKeyword()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WavePairsKeyword;
}
constexpr ::UnityEngine::Rendering::LocalKeyword const& WaveHarmonic::Crest::WaterResources_GerstnerCompute::__cordl_internal_get__WavePairsKeyword() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WavePairsKeyword;
}
constexpr void WaveHarmonic::Crest::WaterResources_GerstnerCompute::__cordl_internal_set__WavePairsKeyword(::UnityEngine::Rendering::LocalKeyword  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WavePairsKeyword = value;
}
constexpr int32_t& WaveHarmonic::Crest::WaterResources_GerstnerCompute::__cordl_internal_get__ExecuteKernel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExecuteKernel;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterResources_GerstnerCompute::__cordl_internal_get__ExecuteKernel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExecuteKernel;
}
constexpr void WaveHarmonic::Crest::WaterResources_GerstnerCompute::__cordl_internal_set__ExecuteKernel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ExecuteKernel = value;
}
inline void WaveHarmonic::Crest::WaterResources_GerstnerCompute::_ctor(::UnityEngine::ComputeShader*  shader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_GerstnerCompute*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shader);
}
inline ::WaveHarmonic::Crest::WaterResources_GerstnerCompute* WaveHarmonic::Crest::WaterResources_GerstnerCompute::New_ctor(::UnityEngine::ComputeShader*  shader)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaterResources_GerstnerCompute*>(shader));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterResources_GerstnerCompute::WaterResources_GerstnerCompute()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_ShaderResources._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources_ShaderResources::*)()>(&::WaveHarmonic::Crest::WaterResources_ShaderResources::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_ShaderResources*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Shader>& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__CopyDepthIntoCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopyDepthIntoCache;
}
constexpr ::UnityW<::UnityEngine::Shader> const& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__CopyDepthIntoCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopyDepthIntoCache;
}
constexpr void WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_set__CopyDepthIntoCache(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CopyDepthIntoCache = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__ColorSpline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ColorSpline;
}
constexpr ::UnityW<::UnityEngine::Shader> const& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__ColorSpline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ColorSpline;
}
constexpr void WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_set__ColorSpline(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ColorSpline = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__FlowSpline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FlowSpline;
}
constexpr ::UnityW<::UnityEngine::Shader> const& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__FlowSpline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FlowSpline;
}
constexpr void WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_set__FlowSpline(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FlowSpline = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__FoamSpline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FoamSpline;
}
constexpr ::UnityW<::UnityEngine::Shader> const& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__FoamSpline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FoamSpline;
}
constexpr void WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_set__FoamSpline(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FoamSpline = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__WaveSpline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaveSpline;
}
constexpr ::UnityW<::UnityEngine::Shader> const& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__WaveSpline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaveSpline;
}
constexpr void WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_set__WaveSpline(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WaveSpline = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__DepthGeometry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthGeometry;
}
constexpr ::UnityW<::UnityEngine::Shader> const& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__DepthGeometry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthGeometry;
}
constexpr void WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_set__DepthGeometry(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DepthGeometry = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__LevelGeometry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LevelGeometry;
}
constexpr ::UnityW<::UnityEngine::Shader> const& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__LevelGeometry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LevelGeometry;
}
constexpr void WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_set__LevelGeometry(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LevelGeometry = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__UpdateShadow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdateShadow;
}
constexpr ::UnityW<::UnityEngine::Shader> const& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__UpdateShadow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdateShadow;
}
constexpr void WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_set__UpdateShadow(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UpdateShadow = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__UnderwaterEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UnderwaterEffect;
}
constexpr ::UnityW<::UnityEngine::Shader> const& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__UnderwaterEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UnderwaterEffect;
}
constexpr void WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_set__UnderwaterEffect(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UnderwaterEffect = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__UnderwaterMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UnderwaterMask;
}
constexpr ::UnityW<::UnityEngine::Shader> const& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__UnderwaterMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UnderwaterMask;
}
constexpr void WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_set__UnderwaterMask(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UnderwaterMask = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__HorizonMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HorizonMask;
}
constexpr ::UnityW<::UnityEngine::Shader> const& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__HorizonMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HorizonMask;
}
constexpr void WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_set__HorizonMask(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HorizonMask = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__Portals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Portals;
}
constexpr ::UnityW<::UnityEngine::Shader> const& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__Portals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Portals;
}
constexpr void WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_set__Portals(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Portals = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__PortalsMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PortalsMask;
}
constexpr ::UnityW<::UnityEngine::Shader> const& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__PortalsMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PortalsMask;
}
constexpr void WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_set__PortalsMask(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PortalsMask = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__ClipConvexHull()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClipConvexHull;
}
constexpr ::UnityW<::UnityEngine::Shader> const& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__ClipConvexHull() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClipConvexHull;
}
constexpr void WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_set__ClipConvexHull(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClipConvexHull = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__ShallowWaterSimulationVisualizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShallowWaterSimulationVisualizer;
}
constexpr ::UnityW<::UnityEngine::Shader> const& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__ShallowWaterSimulationVisualizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShallowWaterSimulationVisualizer;
}
constexpr void WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_set__ShallowWaterSimulationVisualizer(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShallowWaterSimulationVisualizer = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__DebugTextureArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DebugTextureArray;
}
constexpr ::UnityW<::UnityEngine::Shader> const& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__DebugTextureArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DebugTextureArray;
}
constexpr void WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_set__DebugTextureArray(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DebugTextureArray = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__Blit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Blit;
}
constexpr ::UnityW<::UnityEngine::Shader> const& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__Blit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Blit;
}
constexpr void WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_set__Blit(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Blit = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__ForceShadows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceShadows;
}
constexpr ::UnityW<::UnityEngine::Shader> const& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__ForceShadows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceShadows;
}
constexpr void WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_set__ForceShadows(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ForceShadows = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__CaptureShadowMatrices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CaptureShadowMatrices;
}
constexpr ::UnityW<::UnityEngine::Shader> const& WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_get__CaptureShadowMatrices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CaptureShadowMatrices;
}
constexpr void WaveHarmonic::Crest::WaterResources_ShaderResources::__cordl_internal_set__CaptureShadowMatrices(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CaptureShadowMatrices = value;
}
inline void WaveHarmonic::Crest::WaterResources_ShaderResources::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_ShaderResources*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::WaterResources_ShaderResources* WaveHarmonic::Crest::WaterResources_ShaderResources::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaterResources_ShaderResources*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterResources_ShaderResources::WaterResources_ShaderResources()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_ComputeResources._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources_ComputeResources::*)()>(&::WaveHarmonic::Crest::WaterResources_ComputeResources::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_ComputeResources*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__Mask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mask;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__Mask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mask;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__Mask(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Mask = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__UnderwaterArtifacts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UnderwaterArtifacts;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__UnderwaterArtifacts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UnderwaterArtifacts;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__UnderwaterArtifacts(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UnderwaterArtifacts = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__ShapeWavesTransfer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShapeWavesTransfer;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__ShapeWavesTransfer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShapeWavesTransfer;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__ShapeWavesTransfer(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShapeWavesTransfer = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__Query()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Query;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__Query() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Query;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__Query(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Query = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__Gerstner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Gerstner;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__Gerstner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Gerstner;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__Gerstner(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Gerstner = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__FFT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FFT;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__FFT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FFT;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__FFT(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FFT = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__FFTBake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FFTBake;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__FFTBake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FFTBake;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__FFTBake(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FFTBake = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__FFTSpectrum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FFTSpectrum;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__FFTSpectrum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FFTSpectrum;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__FFTSpectrum(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FFTSpectrum = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__ShapeCombine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShapeCombine;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__ShapeCombine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShapeCombine;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__ShapeCombine(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShapeCombine = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__ShorelineColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShorelineColor;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__ShorelineColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShorelineColor;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__ShorelineColor(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShorelineColor = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__UpdateDynamicWaves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdateDynamicWaves;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__UpdateDynamicWaves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdateDynamicWaves;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__UpdateDynamicWaves(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UpdateDynamicWaves = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__UpdateFoam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdateFoam;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__UpdateFoam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdateFoam;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__UpdateFoam(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UpdateFoam = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__UpdateShadow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdateShadow;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__UpdateShadow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdateShadow;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__UpdateShadow(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UpdateShadow = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__PackLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PackLevel;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__PackLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PackLevel;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__PackLevel(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PackLevel = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__AbsorptionTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AbsorptionTexture;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__AbsorptionTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AbsorptionTexture;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__AbsorptionTexture(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AbsorptionTexture = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__ClipTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClipTexture;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__ClipTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClipTexture;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__ClipTexture(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClipTexture = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__FlowTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FlowTexture;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__FlowTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FlowTexture;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__FlowTexture(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FlowTexture = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__FoamTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FoamTexture;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__FoamTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FoamTexture;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__FoamTexture(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FoamTexture = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__LevelTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LevelTexture;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__LevelTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LevelTexture;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__LevelTexture(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LevelTexture = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__DepthTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthTexture;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__DepthTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthTexture;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__DepthTexture(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DepthTexture = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__ScatteringTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScatteringTexture;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__ScatteringTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScatteringTexture;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__ScatteringTexture(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ScatteringTexture = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__ClipPrimitive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClipPrimitive;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__ClipPrimitive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClipPrimitive;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__ClipPrimitive(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClipPrimitive = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__SphereWaterInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SphereWaterInteraction;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__SphereWaterInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SphereWaterInteraction;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__SphereWaterInteraction(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SphereWaterInteraction = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__RenderDepthProbe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RenderDepthProbe;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__RenderDepthProbe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RenderDepthProbe;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__RenderDepthProbe(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RenderDepthProbe = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__JumpFloodSDF()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JumpFloodSDF;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__JumpFloodSDF() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JumpFloodSDF;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__JumpFloodSDF(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____JumpFloodSDF = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__UpdateSWS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdateSWS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__UpdateSWS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdateSWS;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__UpdateSWS(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UpdateSWS = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__Whirlpool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Whirlpool;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__Whirlpool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Whirlpool;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__Whirlpool(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Whirlpool = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__Clear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Clear;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__Clear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Clear;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__Clear(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Clear = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__Blit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Blit;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__Blit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Blit;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__Blit(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Blit = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__Blur()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Blur;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_get__Blur() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Blur;
}
constexpr void WaveHarmonic::Crest::WaterResources_ComputeResources::__cordl_internal_set__Blur(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Blur = value;
}
inline void WaveHarmonic::Crest::WaterResources_ComputeResources::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_ComputeResources*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::WaterResources_ComputeResources* WaveHarmonic::Crest::WaterResources_ComputeResources::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaterResources_ComputeResources*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterResources_ComputeResources::WaterResources_ComputeResources()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.get_AnimatedWavesTransferWavesTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::LocalKeyword (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)()>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::get_AnimatedWavesTransferWavesTexture)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x180347870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"get_AnimatedWavesTransferWavesTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.set_AnimatedWavesTransferWavesTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)(::UnityEngine::Rendering::LocalKeyword)>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::set_AnimatedWavesTransferWavesTexture)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804f67e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"set_AnimatedWavesTransferWavesTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.get_AnimatedWavesTransferWavesTextureBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::LocalKeyword (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)()>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::get_AnimatedWavesTransferWavesTextureBlend)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180503b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"get_AnimatedWavesTransferWavesTextureBlend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.set_AnimatedWavesTransferWavesTextureBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)(::UnityEngine::Rendering::LocalKeyword)>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::set_AnimatedWavesTransferWavesTextureBlend)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x180a260f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"set_AnimatedWavesTransferWavesTextureBlend", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.get_ClipPrimitiveInverted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::LocalKeyword (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)()>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::get_ClipPrimitiveInverted)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18169a410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"get_ClipPrimitiveInverted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.set_ClipPrimitiveInverted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)(::UnityEngine::Rendering::LocalKeyword)>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::set_ClipPrimitiveInverted)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825a1560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"set_ClipPrimitiveInverted", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.get_ClipPrimitiveSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::LocalKeyword (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)()>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::get_ClipPrimitiveSphere)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825a1440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"get_ClipPrimitiveSphere", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.set_ClipPrimitiveSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)(::UnityEngine::Rendering::LocalKeyword)>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::set_ClipPrimitiveSphere)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825a15b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"set_ClipPrimitiveSphere", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.get_ClipPrimitiveCube
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::LocalKeyword (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)()>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::get_ClipPrimitiveCube)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825a1400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"get_ClipPrimitiveCube", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.set_ClipPrimitiveCube
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)(::UnityEngine::Rendering::LocalKeyword)>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::set_ClipPrimitiveCube)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825a1540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"set_ClipPrimitiveCube", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.get_ClipPrimitiveRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::LocalKeyword (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)()>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::get_ClipPrimitiveRectangle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825a1420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"get_ClipPrimitiveRectangle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.set_ClipPrimitiveRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)(::UnityEngine::Rendering::LocalKeyword)>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::set_ClipPrimitiveRectangle)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825a1580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"set_ClipPrimitiveRectangle", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.get_DepthTextureSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::LocalKeyword (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)()>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::get_DepthTextureSDF)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825a1480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"get_DepthTextureSDF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.set_DepthTextureSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)(::UnityEngine::Rendering::LocalKeyword)>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::set_DepthTextureSDF)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825a1600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"set_DepthTextureSDF", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.get_ShorelineColorSourceDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::LocalKeyword (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)()>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::get_ShorelineColorSourceDistance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825a1520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"get_ShorelineColorSourceDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.set_ShorelineColorSourceDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)(::UnityEngine::Rendering::LocalKeyword)>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::set_ShorelineColorSourceDistance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825a16f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"set_ShorelineColorSourceDistance", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.get_ShorelineColorScattering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::LocalKeyword (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)()>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::get_ShorelineColorScattering)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825a1500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"get_ShorelineColorScattering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.set_ShorelineColorScattering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)(::UnityEngine::Rendering::LocalKeyword)>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::set_ShorelineColorScattering)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825a16c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"set_ShorelineColorScattering", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.get_LevelTextureCatmullRom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::LocalKeyword (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)()>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::get_LevelTextureCatmullRom)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825a14e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"get_LevelTextureCatmullRom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.set_LevelTextureCatmullRom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)(::UnityEngine::Rendering::LocalKeyword)>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::set_LevelTextureCatmullRom)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825a1690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"set_LevelTextureCatmullRom", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.get_DepthProbeBackFaceInclusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::LocalKeyword (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)()>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::get_DepthProbeBackFaceInclusion)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825a1460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"get_DepthProbeBackFaceInclusion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.set_DepthProbeBackFaceInclusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)(::UnityEngine::Rendering::LocalKeyword)>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::set_DepthProbeBackFaceInclusion)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825a15d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"set_DepthProbeBackFaceInclusion", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.get_JumpFloodInverted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::LocalKeyword (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)()>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::get_JumpFloodInverted)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825a14a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"get_JumpFloodInverted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.set_JumpFloodInverted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)(::UnityEngine::Rendering::LocalKeyword)>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::set_JumpFloodInverted)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825a1630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"set_JumpFloodInverted", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.get_JumpFloodStandalone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::LocalKeyword (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)()>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::get_JumpFloodStandalone)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825a14c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"get_JumpFloodStandalone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.set_JumpFloodStandalone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)(::UnityEngine::Rendering::LocalKeyword)>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::set_JumpFloodStandalone)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825a1660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"set_JumpFloodStandalone", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)(::WaveHarmonic::Crest::WaterResources*)>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::Initialize)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x1825a1000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"Initialize", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterResources*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources_KeywordResources._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources_KeywordResources::*)()>(&::WaveHarmonic::Crest::WaterResources_KeywordResources::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::LocalKeyword& WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_get__AnimatedWavesTransferWavesTexture_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnimatedWavesTransferWavesTexture_k__BackingField;
}
constexpr ::UnityEngine::Rendering::LocalKeyword const& WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_get__AnimatedWavesTransferWavesTexture_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnimatedWavesTransferWavesTexture_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_set__AnimatedWavesTransferWavesTexture_k__BackingField(::UnityEngine::Rendering::LocalKeyword  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AnimatedWavesTransferWavesTexture_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::LocalKeyword& WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_get__AnimatedWavesTransferWavesTextureBlend_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnimatedWavesTransferWavesTextureBlend_k__BackingField;
}
constexpr ::UnityEngine::Rendering::LocalKeyword const& WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_get__AnimatedWavesTransferWavesTextureBlend_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnimatedWavesTransferWavesTextureBlend_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_set__AnimatedWavesTransferWavesTextureBlend_k__BackingField(::UnityEngine::Rendering::LocalKeyword  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AnimatedWavesTransferWavesTextureBlend_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::LocalKeyword& WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_get__ClipPrimitiveInverted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClipPrimitiveInverted_k__BackingField;
}
constexpr ::UnityEngine::Rendering::LocalKeyword const& WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_get__ClipPrimitiveInverted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClipPrimitiveInverted_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_set__ClipPrimitiveInverted_k__BackingField(::UnityEngine::Rendering::LocalKeyword  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClipPrimitiveInverted_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::LocalKeyword& WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_get__ClipPrimitiveSphere_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClipPrimitiveSphere_k__BackingField;
}
constexpr ::UnityEngine::Rendering::LocalKeyword const& WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_get__ClipPrimitiveSphere_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClipPrimitiveSphere_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_set__ClipPrimitiveSphere_k__BackingField(::UnityEngine::Rendering::LocalKeyword  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClipPrimitiveSphere_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::LocalKeyword& WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_get__ClipPrimitiveCube_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClipPrimitiveCube_k__BackingField;
}
constexpr ::UnityEngine::Rendering::LocalKeyword const& WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_get__ClipPrimitiveCube_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClipPrimitiveCube_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_set__ClipPrimitiveCube_k__BackingField(::UnityEngine::Rendering::LocalKeyword  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClipPrimitiveCube_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::LocalKeyword& WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_get__ClipPrimitiveRectangle_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClipPrimitiveRectangle_k__BackingField;
}
constexpr ::UnityEngine::Rendering::LocalKeyword const& WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_get__ClipPrimitiveRectangle_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClipPrimitiveRectangle_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_set__ClipPrimitiveRectangle_k__BackingField(::UnityEngine::Rendering::LocalKeyword  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClipPrimitiveRectangle_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::LocalKeyword& WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_get__DepthTextureSDF_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthTextureSDF_k__BackingField;
}
constexpr ::UnityEngine::Rendering::LocalKeyword const& WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_get__DepthTextureSDF_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthTextureSDF_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_set__DepthTextureSDF_k__BackingField(::UnityEngine::Rendering::LocalKeyword  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DepthTextureSDF_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::LocalKeyword& WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_get__ShorelineColorSourceDistance_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShorelineColorSourceDistance_k__BackingField;
}
constexpr ::UnityEngine::Rendering::LocalKeyword const& WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_get__ShorelineColorSourceDistance_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShorelineColorSourceDistance_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_set__ShorelineColorSourceDistance_k__BackingField(::UnityEngine::Rendering::LocalKeyword  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShorelineColorSourceDistance_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::LocalKeyword& WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_get__ShorelineColorScattering_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShorelineColorScattering_k__BackingField;
}
constexpr ::UnityEngine::Rendering::LocalKeyword const& WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_get__ShorelineColorScattering_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShorelineColorScattering_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_set__ShorelineColorScattering_k__BackingField(::UnityEngine::Rendering::LocalKeyword  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShorelineColorScattering_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::LocalKeyword& WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_get__LevelTextureCatmullRom_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LevelTextureCatmullRom_k__BackingField;
}
constexpr ::UnityEngine::Rendering::LocalKeyword const& WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_get__LevelTextureCatmullRom_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LevelTextureCatmullRom_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_set__LevelTextureCatmullRom_k__BackingField(::UnityEngine::Rendering::LocalKeyword  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LevelTextureCatmullRom_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::LocalKeyword& WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_get__DepthProbeBackFaceInclusion_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthProbeBackFaceInclusion_k__BackingField;
}
constexpr ::UnityEngine::Rendering::LocalKeyword const& WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_get__DepthProbeBackFaceInclusion_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthProbeBackFaceInclusion_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_set__DepthProbeBackFaceInclusion_k__BackingField(::UnityEngine::Rendering::LocalKeyword  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DepthProbeBackFaceInclusion_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::LocalKeyword& WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_get__JumpFloodInverted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JumpFloodInverted_k__BackingField;
}
constexpr ::UnityEngine::Rendering::LocalKeyword const& WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_get__JumpFloodInverted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JumpFloodInverted_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_set__JumpFloodInverted_k__BackingField(::UnityEngine::Rendering::LocalKeyword  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____JumpFloodInverted_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::LocalKeyword& WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_get__JumpFloodStandalone_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JumpFloodStandalone_k__BackingField;
}
constexpr ::UnityEngine::Rendering::LocalKeyword const& WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_get__JumpFloodStandalone_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JumpFloodStandalone_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterResources_KeywordResources::__cordl_internal_set__JumpFloodStandalone_k__BackingField(::UnityEngine::Rendering::LocalKeyword  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____JumpFloodStandalone_k__BackingField = value;
}
inline ::UnityEngine::Rendering::LocalKeyword WaveHarmonic::Crest::WaterResources_KeywordResources::get_AnimatedWavesTransferWavesTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"get_AnimatedWavesTransferWavesTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LocalKeyword>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterResources_KeywordResources::set_AnimatedWavesTransferWavesTexture(::UnityEngine::Rendering::LocalKeyword  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"set_AnimatedWavesTransferWavesTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::LocalKeyword WaveHarmonic::Crest::WaterResources_KeywordResources::get_AnimatedWavesTransferWavesTextureBlend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"get_AnimatedWavesTransferWavesTextureBlend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LocalKeyword>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterResources_KeywordResources::set_AnimatedWavesTransferWavesTextureBlend(::UnityEngine::Rendering::LocalKeyword  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"set_AnimatedWavesTransferWavesTextureBlend", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::LocalKeyword WaveHarmonic::Crest::WaterResources_KeywordResources::get_ClipPrimitiveInverted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"get_ClipPrimitiveInverted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LocalKeyword>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterResources_KeywordResources::set_ClipPrimitiveInverted(::UnityEngine::Rendering::LocalKeyword  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"set_ClipPrimitiveInverted", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::LocalKeyword WaveHarmonic::Crest::WaterResources_KeywordResources::get_ClipPrimitiveSphere()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"get_ClipPrimitiveSphere", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LocalKeyword>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterResources_KeywordResources::set_ClipPrimitiveSphere(::UnityEngine::Rendering::LocalKeyword  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"set_ClipPrimitiveSphere", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::LocalKeyword WaveHarmonic::Crest::WaterResources_KeywordResources::get_ClipPrimitiveCube()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"get_ClipPrimitiveCube", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LocalKeyword>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterResources_KeywordResources::set_ClipPrimitiveCube(::UnityEngine::Rendering::LocalKeyword  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"set_ClipPrimitiveCube", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::LocalKeyword WaveHarmonic::Crest::WaterResources_KeywordResources::get_ClipPrimitiveRectangle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"get_ClipPrimitiveRectangle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LocalKeyword>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterResources_KeywordResources::set_ClipPrimitiveRectangle(::UnityEngine::Rendering::LocalKeyword  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"set_ClipPrimitiveRectangle", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::LocalKeyword WaveHarmonic::Crest::WaterResources_KeywordResources::get_DepthTextureSDF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"get_DepthTextureSDF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LocalKeyword>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterResources_KeywordResources::set_DepthTextureSDF(::UnityEngine::Rendering::LocalKeyword  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"set_DepthTextureSDF", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::LocalKeyword WaveHarmonic::Crest::WaterResources_KeywordResources::get_ShorelineColorSourceDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"get_ShorelineColorSourceDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LocalKeyword>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterResources_KeywordResources::set_ShorelineColorSourceDistance(::UnityEngine::Rendering::LocalKeyword  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"set_ShorelineColorSourceDistance", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::LocalKeyword WaveHarmonic::Crest::WaterResources_KeywordResources::get_ShorelineColorScattering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"get_ShorelineColorScattering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LocalKeyword>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterResources_KeywordResources::set_ShorelineColorScattering(::UnityEngine::Rendering::LocalKeyword  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"set_ShorelineColorScattering", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::LocalKeyword WaveHarmonic::Crest::WaterResources_KeywordResources::get_LevelTextureCatmullRom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"get_LevelTextureCatmullRom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LocalKeyword>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterResources_KeywordResources::set_LevelTextureCatmullRom(::UnityEngine::Rendering::LocalKeyword  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"set_LevelTextureCatmullRom", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::LocalKeyword WaveHarmonic::Crest::WaterResources_KeywordResources::get_DepthProbeBackFaceInclusion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"get_DepthProbeBackFaceInclusion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LocalKeyword>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterResources_KeywordResources::set_DepthProbeBackFaceInclusion(::UnityEngine::Rendering::LocalKeyword  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"set_DepthProbeBackFaceInclusion", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::LocalKeyword WaveHarmonic::Crest::WaterResources_KeywordResources::get_JumpFloodInverted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"get_JumpFloodInverted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LocalKeyword>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterResources_KeywordResources::set_JumpFloodInverted(::UnityEngine::Rendering::LocalKeyword  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"set_JumpFloodInverted", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::LocalKeyword WaveHarmonic::Crest::WaterResources_KeywordResources::get_JumpFloodStandalone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"get_JumpFloodStandalone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LocalKeyword>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterResources_KeywordResources::set_JumpFloodStandalone(::UnityEngine::Rendering::LocalKeyword  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"set_JumpFloodStandalone", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::WaterResources_KeywordResources::Initialize(::WaveHarmonic::Crest::WaterResources*  resources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {"Initialize", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterResources*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resources);
}
inline void WaveHarmonic::Crest::WaterResources_KeywordResources::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::WaterResources_KeywordResources* WaveHarmonic::Crest::WaterResources_KeywordResources::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaterResources_KeywordResources*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterResources_KeywordResources::WaterResources_KeywordResources()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources.get_Shaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::WaterResources_ShaderResources* (::WaveHarmonic::Crest::WaterResources::*)()>(&::WaveHarmonic::Crest::WaterResources::get_Shaders)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources*>(),
                        {"get_Shaders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources.get_Compute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::WaterResources_ComputeResources* (::WaveHarmonic::Crest::WaterResources::*)()>(&::WaveHarmonic::Crest::WaterResources::get_Compute)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources*>(),
                        {"get_Compute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources.get_Keywords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::WaterResources_KeywordResources* (::WaveHarmonic::Crest::WaterResources::*)()>(&::WaveHarmonic::Crest::WaterResources::get_Keywords)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources*>(),
                        {"get_Keywords", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources.add_AfterEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources::*)(::System::Action*)>(&::WaveHarmonic::Crest::WaterResources::add_AfterEnabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18062c460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources*>(),
                        {"add_AfterEnabled", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources.remove_AfterEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources::*)(::System::Action*)>(&::WaveHarmonic::Crest::WaterResources::remove_AfterEnabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18062c5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources*>(),
                        {"remove_AfterEnabled", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources::*)()>(&::WaveHarmonic::Crest::WaterResources::OnEnable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1825a62b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources::*)()>(&::WaveHarmonic::Crest::WaterResources::Initialize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1825a6230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterResources._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterResources::*)()>(&::WaveHarmonic::Crest::WaterResources::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1825a6340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::WaterResources_ComputeLibrary*& WaveHarmonic::Crest::WaterResources::__cordl_internal_get__ComputeLibrary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ComputeLibrary;
}
constexpr ::WaveHarmonic::Crest::WaterResources_ComputeLibrary* const& WaveHarmonic::Crest::WaterResources::__cordl_internal_get__ComputeLibrary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ComputeLibrary;
}
constexpr void WaveHarmonic::Crest::WaterResources::__cordl_internal_set__ComputeLibrary(::WaveHarmonic::Crest::WaterResources_ComputeLibrary*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ComputeLibrary = value;
}
constexpr ::WaveHarmonic::Crest::WaterResources_ShaderResources*& WaveHarmonic::Crest::WaterResources::__cordl_internal_get__Shaders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Shaders;
}
constexpr ::WaveHarmonic::Crest::WaterResources_ShaderResources* const& WaveHarmonic::Crest::WaterResources::__cordl_internal_get__Shaders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Shaders;
}
constexpr void WaveHarmonic::Crest::WaterResources::__cordl_internal_set__Shaders(::WaveHarmonic::Crest::WaterResources_ShaderResources*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Shaders = value;
}
constexpr ::WaveHarmonic::Crest::WaterResources_ComputeResources*& WaveHarmonic::Crest::WaterResources::__cordl_internal_get__Compute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Compute;
}
constexpr ::WaveHarmonic::Crest::WaterResources_ComputeResources* const& WaveHarmonic::Crest::WaterResources::__cordl_internal_get__Compute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Compute;
}
constexpr void WaveHarmonic::Crest::WaterResources::__cordl_internal_set__Compute(::WaveHarmonic::Crest::WaterResources_ComputeResources*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Compute = value;
}
constexpr ::WaveHarmonic::Crest::WaterResources_KeywordResources*& WaveHarmonic::Crest::WaterResources::__cordl_internal_get__Keywords_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Keywords_k__BackingField;
}
constexpr ::WaveHarmonic::Crest::WaterResources_KeywordResources* const& WaveHarmonic::Crest::WaterResources::__cordl_internal_get__Keywords_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Keywords_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterResources::__cordl_internal_set__Keywords_k__BackingField(::WaveHarmonic::Crest::WaterResources_KeywordResources*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Keywords_k__BackingField = value;
}
constexpr ::System::Action*& WaveHarmonic::Crest::WaterResources::__cordl_internal_get_AfterEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AfterEnabled;
}
constexpr ::System::Action* const& WaveHarmonic::Crest::WaterResources::__cordl_internal_get_AfterEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AfterEnabled;
}
constexpr void WaveHarmonic::Crest::WaterResources::__cordl_internal_set_AfterEnabled(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AfterEnabled = value;
}
inline ::WaveHarmonic::Crest::WaterResources_ShaderResources* WaveHarmonic::Crest::WaterResources::get_Shaders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources*>(),
                        {"get_Shaders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::WaterResources_ShaderResources*>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::WaterResources_ComputeResources* WaveHarmonic::Crest::WaterResources::get_Compute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources*>(),
                        {"get_Compute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::WaterResources_ComputeResources*>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::WaterResources_KeywordResources* WaveHarmonic::Crest::WaterResources::get_Keywords()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources*>(),
                        {"get_Keywords", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::WaterResources_KeywordResources*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterResources::add_AfterEnabled(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources*>(),
                        {"add_AfterEnabled", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::WaterResources::remove_AfterEnabled(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources*>(),
                        {"remove_AfterEnabled", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::WaterResources::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterResources::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterResources::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterResources*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::WaterResources* WaveHarmonic::Crest::WaterResources::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaterResources*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterResources::WaterResources()   {
}

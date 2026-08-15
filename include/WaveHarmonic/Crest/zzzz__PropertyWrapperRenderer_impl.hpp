#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/PropertyWrapperRenderer.hpp"
#include "WaveHarmonic/Crest/zzzz__PropertyWrapperRenderer_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IPropertyWrapper_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperRenderer.get_PropertyBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MaterialPropertyBlock* (::WaveHarmonic::Crest::PropertyWrapperRenderer::*)()>(&::WaveHarmonic::Crest::PropertyWrapperRenderer::get_PropertyBlock)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {"get_PropertyBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperRenderer.get_Renderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Renderer> (::WaveHarmonic::Crest::PropertyWrapperRenderer::*)()>(&::WaveHarmonic::Crest::PropertyWrapperRenderer::get_Renderer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {"get_Renderer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperRenderer::*)(::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*)>(&::WaveHarmonic::Crest::PropertyWrapperRenderer::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18256c390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperRenderer.SetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperRenderer::*)(int32_t, float_t)>(&::WaveHarmonic::Crest::PropertyWrapperRenderer::SetFloat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256bd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {"SetFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperRenderer.SetFloatArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperRenderer::*)(int32_t, ::ArrayW<float_t>)>(&::WaveHarmonic::Crest::PropertyWrapperRenderer::SetFloatArray)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256bd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {"SetFloatArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperRenderer.SetTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperRenderer::*)(int32_t, ::UnityEngine::Texture*)>(&::WaveHarmonic::Crest::PropertyWrapperRenderer::SetTexture)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256be70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {"SetTexture", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperRenderer.SetBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperRenderer::*)(int32_t, ::UnityEngine::ComputeBuffer*)>(&::WaveHarmonic::Crest::PropertyWrapperRenderer::SetBuffer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256c360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {"SetBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperRenderer.SetVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperRenderer::*)(int32_t, ::UnityEngine::Vector4)>(&::WaveHarmonic::Crest::PropertyWrapperRenderer::SetVector)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18256bed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {"SetVector", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperRenderer.SetVectorArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperRenderer::*)(int32_t, ::ArrayW<::UnityEngine::Vector4>)>(&::WaveHarmonic::Crest::PropertyWrapperRenderer::SetVectorArray)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256bea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {"SetVectorArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperRenderer.SetMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperRenderer::*)(int32_t, ::UnityEngine::Matrix4x4)>(&::WaveHarmonic::Crest::PropertyWrapperRenderer::SetMatrix)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18256bde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {"SetMatrix", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperRenderer.SetInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperRenderer::*)(int32_t, int32_t)>(&::WaveHarmonic::Crest::PropertyWrapperRenderer::SetInteger)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256bdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {"SetInteger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperRenderer.SetBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperRenderer::*)(int32_t, bool)>(&::WaveHarmonic::Crest::PropertyWrapperRenderer::SetBoolean)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18256bd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {"SetBoolean", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperRenderer.GetBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperRenderer::*)()>(&::WaveHarmonic::Crest::PropertyWrapperRenderer::GetBlock)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18256c2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {"GetBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperRenderer.SetBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperRenderer::*)()>(&::WaveHarmonic::Crest::PropertyWrapperRenderer::SetBlock)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18256c320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {"SetBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::MaterialPropertyBlock* WaveHarmonic::Crest::PropertyWrapperRenderer::get_PropertyBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {"get_PropertyBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::MaterialPropertyBlock*>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Renderer> WaveHarmonic::Crest::PropertyWrapperRenderer::get_Renderer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {"get_Renderer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Renderer>>(*this, ___internal_method);
}
inline void WaveHarmonic::Crest::PropertyWrapperRenderer::_ctor(::UnityEngine::Renderer*  renderer, ::UnityEngine::MaterialPropertyBlock*  block)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, renderer, block);
}
inline void WaveHarmonic::Crest::PropertyWrapperRenderer::SetFloat(int32_t  param, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {"SetFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperRenderer::SetFloatArray(int32_t  param, ::ArrayW<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {"SetFloatArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperRenderer::SetTexture(int32_t  param, ::UnityEngine::Texture*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {"SetTexture", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperRenderer::SetBuffer(int32_t  param, ::UnityEngine::ComputeBuffer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {"SetBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperRenderer::SetVector(int32_t  param, ::UnityEngine::Vector4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {"SetVector", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperRenderer::SetVectorArray(int32_t  param, ::ArrayW<::UnityEngine::Vector4>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {"SetVectorArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperRenderer::SetMatrix(int32_t  param, ::UnityEngine::Matrix4x4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {"SetMatrix", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperRenderer::SetInteger(int32_t  param, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {"SetInteger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperRenderer::SetBoolean(int32_t  param, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {"SetBoolean", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperRenderer::GetBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {"GetBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void WaveHarmonic::Crest::PropertyWrapperRenderer::SetBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperRenderer>(),
                        {"SetBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr  WaveHarmonic::Crest::PropertyWrapperRenderer::operator ::WaveHarmonic::Crest::IPropertyWrapper*()  {
return static_cast<::WaveHarmonic::Crest::IPropertyWrapper*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr ::WaveHarmonic::Crest::IPropertyWrapper* WaveHarmonic::Crest::PropertyWrapperRenderer::i___WaveHarmonic__Crest__IPropertyWrapper()  {
return static_cast<::WaveHarmonic::Crest::IPropertyWrapper*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_PropertyBlock_k__BackingField", ty: "::UnityEngine::MaterialPropertyBlock*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Renderer_k__BackingField", ty: "::UnityW<::UnityEngine::Renderer>", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::PropertyWrapperRenderer::PropertyWrapperRenderer(::UnityEngine::MaterialPropertyBlock*  _PropertyBlock_k__BackingField, ::UnityW<::UnityEngine::Renderer>  _Renderer_k__BackingField) noexcept  {
this->_PropertyBlock_k__BackingField = _PropertyBlock_k__BackingField;
this->_Renderer_k__BackingField = _Renderer_k__BackingField;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::PropertyWrapperRenderer::PropertyWrapperRenderer()   {
}

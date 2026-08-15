#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/RasterCommandWrapper.hpp"
#include "WaveHarmonic/Crest/zzzz__RasterCommandWrapper_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ICommandWrapper_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IPropertyWrapper_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::RasterCommandWrapper.get_Commands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RasterCommandBuffer* (::WaveHarmonic::Crest::RasterCommandWrapper::*)()>(&::WaveHarmonic::Crest::RasterCommandWrapper::get_Commands)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"get_Commands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RasterCommandWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::RasterCommandWrapper::*)(::UnityEngine::Rendering::RasterCommandBuffer*)>(&::WaveHarmonic::Crest::RasterCommandWrapper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RasterCommandWrapper.SetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::RasterCommandWrapper::*)(int32_t, float_t)>(&::WaveHarmonic::Crest::RasterCommandWrapper::SetFloat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256c6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"SetFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RasterCommandWrapper.SetFloatArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::RasterCommandWrapper::*)(int32_t, ::ArrayW<float_t>)>(&::WaveHarmonic::Crest::RasterCommandWrapper::SetFloatArray)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256c6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"SetFloatArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RasterCommandWrapper.SetTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::RasterCommandWrapper::*)(int32_t, ::UnityEngine::Texture*)>(&::WaveHarmonic::Crest::RasterCommandWrapper::SetTexture)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18256c810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"SetTexture", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RasterCommandWrapper.SetVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::RasterCommandWrapper::*)(int32_t, ::UnityEngine::Vector4)>(&::WaveHarmonic::Crest::RasterCommandWrapper::SetVector)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18256c8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"SetVector", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RasterCommandWrapper.SetVectorArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::RasterCommandWrapper::*)(int32_t, ::ArrayW<::UnityEngine::Vector4>)>(&::WaveHarmonic::Crest::RasterCommandWrapper::SetVectorArray)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256c8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"SetVectorArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RasterCommandWrapper.SetMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::RasterCommandWrapper::*)(int32_t, ::UnityEngine::Matrix4x4)>(&::WaveHarmonic::Crest::RasterCommandWrapper::SetMatrix)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18256c780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"SetMatrix", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RasterCommandWrapper.SetInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::RasterCommandWrapper::*)(int32_t, int32_t)>(&::WaveHarmonic::Crest::RasterCommandWrapper::SetInteger)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256c720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"SetInteger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RasterCommandWrapper.SetBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::RasterCommandWrapper::*)(int32_t, bool)>(&::WaveHarmonic::Crest::RasterCommandWrapper::SetBoolean)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18256c680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"SetBoolean", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RasterCommandWrapper.GetBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::RasterCommandWrapper::*)()>(&::WaveHarmonic::Crest::RasterCommandWrapper::GetBlock)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"GetBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RasterCommandWrapper.SetBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::RasterCommandWrapper::*)()>(&::WaveHarmonic::Crest::RasterCommandWrapper::SetBlock)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"SetBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RasterCommandWrapper.SetInvertCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::RasterCommandWrapper::*)(bool)>(&::WaveHarmonic::Crest::RasterCommandWrapper::SetInvertCulling)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256c750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"SetInvertCulling", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RasterCommandWrapper.DrawFullScreenTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::RasterCommandWrapper::*)(::UnityEngine::Material*, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(&::WaveHarmonic::Crest::RasterCommandWrapper::DrawFullScreenTriangle)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18256c4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"DrawFullScreenTriangle", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RasterCommandWrapper.DrawMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::RasterCommandWrapper::*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(&::WaveHarmonic::Crest::RasterCommandWrapper::DrawMesh)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18256c5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::RasterCommandBuffer* WaveHarmonic::Crest::RasterCommandWrapper::get_Commands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"get_Commands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RasterCommandBuffer*>(*this, ___internal_method);
}
inline void WaveHarmonic::Crest::RasterCommandWrapper::_ctor(::UnityEngine::Rendering::RasterCommandBuffer*  commands)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, commands);
}
inline void WaveHarmonic::Crest::RasterCommandWrapper::SetFloat(int32_t  param, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"SetFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::RasterCommandWrapper::SetFloatArray(int32_t  param, ::ArrayW<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"SetFloatArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::RasterCommandWrapper::SetTexture(int32_t  param, ::UnityEngine::Texture*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"SetTexture", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::RasterCommandWrapper::SetVector(int32_t  param, ::UnityEngine::Vector4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"SetVector", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::RasterCommandWrapper::SetVectorArray(int32_t  param, ::ArrayW<::UnityEngine::Vector4>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"SetVectorArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::RasterCommandWrapper::SetMatrix(int32_t  param, ::UnityEngine::Matrix4x4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"SetMatrix", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::RasterCommandWrapper::SetInteger(int32_t  param, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"SetInteger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::RasterCommandWrapper::SetBoolean(int32_t  param, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"SetBoolean", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::RasterCommandWrapper::GetBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"GetBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void WaveHarmonic::Crest::RasterCommandWrapper::SetBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"SetBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void WaveHarmonic::Crest::RasterCommandWrapper::SetInvertCulling(bool  invert)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"SetInvertCulling", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, invert);
}
inline void WaveHarmonic::Crest::RasterCommandWrapper::DrawFullScreenTriangle(::UnityEngine::Material*  material, int32_t  pass, ::UnityEngine::MaterialPropertyBlock*  block)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"DrawFullScreenTriangle", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, material, pass, block);
}
inline void WaveHarmonic::Crest::RasterCommandWrapper::DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  pass, ::UnityEngine::MaterialPropertyBlock*  block)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RasterCommandWrapper>(),
                        {"DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mesh, matrix, material, pass, block);
}
/// @brief Convert operator to "::WaveHarmonic::Crest::ICommandWrapper"
constexpr  WaveHarmonic::Crest::RasterCommandWrapper::operator ::WaveHarmonic::Crest::ICommandWrapper*()  {
return static_cast<::WaveHarmonic::Crest::ICommandWrapper*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::WaveHarmonic::Crest::ICommandWrapper"
constexpr ::WaveHarmonic::Crest::ICommandWrapper* WaveHarmonic::Crest::RasterCommandWrapper::i___WaveHarmonic__Crest__ICommandWrapper()  {
return static_cast<::WaveHarmonic::Crest::ICommandWrapper*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr  WaveHarmonic::Crest::RasterCommandWrapper::operator ::WaveHarmonic::Crest::IPropertyWrapper*()  {
return static_cast<::WaveHarmonic::Crest::IPropertyWrapper*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr ::WaveHarmonic::Crest::IPropertyWrapper* WaveHarmonic::Crest::RasterCommandWrapper::i___WaveHarmonic__Crest__IPropertyWrapper()  {
return static_cast<::WaveHarmonic::Crest::IPropertyWrapper*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_Commands_k__BackingField", ty: "::UnityEngine::Rendering::RasterCommandBuffer*", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::RasterCommandWrapper::RasterCommandWrapper(::UnityEngine::Rendering::RasterCommandBuffer*  _Commands_k__BackingField) noexcept  {
this->_Commands_k__BackingField = _Commands_k__BackingField;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::RasterCommandWrapper::RasterCommandWrapper()   {
}

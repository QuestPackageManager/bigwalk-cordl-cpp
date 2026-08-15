#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/PropertyWrapperMaterial.hpp"
#include "WaveHarmonic/Crest/zzzz__PropertyWrapperMaterial_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IPropertyWrapperVariants_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IPropertyWrapper_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMaterial.get_Material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::WaveHarmonic::Crest::PropertyWrapperMaterial::*)()>(&::WaveHarmonic::Crest::PropertyWrapperMaterial::get_Material)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"get_Material", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMaterial._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMaterial::*)(::UnityEngine::Material*)>(&::WaveHarmonic::Crest::PropertyWrapperMaterial::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMaterial._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMaterial::*)(::UnityEngine::Shader*)>(&::WaveHarmonic::Crest::PropertyWrapperMaterial::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18256c1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMaterial._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMaterial::*)(::StringW)>(&::WaveHarmonic::Crest::PropertyWrapperMaterial::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18256c240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMaterial.SetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMaterial::*)(int32_t, float_t)>(&::WaveHarmonic::Crest::PropertyWrapperMaterial::SetFloat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256c000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"SetFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMaterial.SetFloatArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMaterial::*)(int32_t, ::ArrayW<float_t>)>(&::WaveHarmonic::Crest::PropertyWrapperMaterial::SetFloatArray)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256bfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"SetFloatArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMaterial.SetTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMaterial::*)(int32_t, ::UnityEngine::Texture*)>(&::WaveHarmonic::Crest::PropertyWrapperMaterial::SetTexture)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256c120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"SetTexture", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMaterial.SetBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMaterial::*)(int32_t, ::UnityEngine::ComputeBuffer*)>(&::WaveHarmonic::Crest::PropertyWrapperMaterial::SetBuffer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256bfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"SetBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMaterial.SetVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMaterial::*)(int32_t, ::UnityEngine::Vector4)>(&::WaveHarmonic::Crest::PropertyWrapperMaterial::SetVector)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18256c180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"SetVector", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMaterial.SetVectorArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMaterial::*)(int32_t, ::ArrayW<::UnityEngine::Vector4>)>(&::WaveHarmonic::Crest::PropertyWrapperMaterial::SetVectorArray)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256c150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"SetVectorArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMaterial.SetMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMaterial::*)(int32_t, ::UnityEngine::Matrix4x4)>(&::WaveHarmonic::Crest::PropertyWrapperMaterial::SetMatrix)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18256c090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"SetMatrix", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMaterial.SetInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMaterial::*)(int32_t, int32_t)>(&::WaveHarmonic::Crest::PropertyWrapperMaterial::SetInteger)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256c030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"SetInteger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMaterial.SetBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMaterial::*)(int32_t, bool)>(&::WaveHarmonic::Crest::PropertyWrapperMaterial::SetBoolean)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18256bf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"SetBoolean", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMaterial.GetBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMaterial::*)()>(&::WaveHarmonic::Crest::PropertyWrapperMaterial::GetBlock)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"GetBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMaterial.SetBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMaterial::*)()>(&::WaveHarmonic::Crest::PropertyWrapperMaterial::SetBlock)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"SetBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMaterial.SetKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMaterial::*)(::by_ref<::UnityEngine::Rendering::LocalKeyword>, bool)>(&::WaveHarmonic::Crest::PropertyWrapperMaterial::SetKeyword)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256c060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"SetKeyword", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMaterial.WaveHarmonic_Crest_IPropertyWrapperVariants_SetKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMaterial::*)(::by_ref<::UnityEngine::Rendering::LocalKeyword>, bool)>(&::WaveHarmonic::Crest::PropertyWrapperMaterial::WaveHarmonic_Crest_IPropertyWrapperVariants_SetKeyword)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256c060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"WaveHarmonic.Crest.IPropertyWrapperVariants.SetKeyword", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Material> WaveHarmonic::Crest::PropertyWrapperMaterial::get_Material()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"get_Material", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(*this, ___internal_method);
}
inline void WaveHarmonic::Crest::PropertyWrapperMaterial::_ctor(::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, material);
}
inline void WaveHarmonic::Crest::PropertyWrapperMaterial::_ctor(::UnityEngine::Shader*  shader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, shader);
}
inline void WaveHarmonic::Crest::PropertyWrapperMaterial::_ctor(::StringW  shaderPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, shaderPath);
}
inline void WaveHarmonic::Crest::PropertyWrapperMaterial::SetFloat(int32_t  param, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"SetFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperMaterial::SetFloatArray(int32_t  param, ::ArrayW<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"SetFloatArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperMaterial::SetTexture(int32_t  param, ::UnityEngine::Texture*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"SetTexture", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperMaterial::SetBuffer(int32_t  param, ::UnityEngine::ComputeBuffer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"SetBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperMaterial::SetVector(int32_t  param, ::UnityEngine::Vector4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"SetVector", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperMaterial::SetVectorArray(int32_t  param, ::ArrayW<::UnityEngine::Vector4>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"SetVectorArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperMaterial::SetMatrix(int32_t  param, ::UnityEngine::Matrix4x4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"SetMatrix", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperMaterial::SetInteger(int32_t  param, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"SetInteger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperMaterial::SetBoolean(int32_t  param, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"SetBoolean", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperMaterial::GetBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"GetBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void WaveHarmonic::Crest::PropertyWrapperMaterial::SetBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"SetBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void WaveHarmonic::Crest::PropertyWrapperMaterial::SetKeyword(::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"SetKeyword", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, keyword, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperMaterial::WaveHarmonic_Crest_IPropertyWrapperVariants_SetKeyword(::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMaterial>(),
                        {"WaveHarmonic.Crest.IPropertyWrapperVariants.SetKeyword", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, keyword, value);
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IPropertyWrapperVariants"
constexpr  WaveHarmonic::Crest::PropertyWrapperMaterial::operator ::WaveHarmonic::Crest::IPropertyWrapperVariants*()  {
return static_cast<::WaveHarmonic::Crest::IPropertyWrapperVariants*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::WaveHarmonic::Crest::IPropertyWrapperVariants"
constexpr ::WaveHarmonic::Crest::IPropertyWrapperVariants* WaveHarmonic::Crest::PropertyWrapperMaterial::i___WaveHarmonic__Crest__IPropertyWrapperVariants()  {
return static_cast<::WaveHarmonic::Crest::IPropertyWrapperVariants*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr  WaveHarmonic::Crest::PropertyWrapperMaterial::operator ::WaveHarmonic::Crest::IPropertyWrapper*()  {
return static_cast<::WaveHarmonic::Crest::IPropertyWrapper*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr ::WaveHarmonic::Crest::IPropertyWrapper* WaveHarmonic::Crest::PropertyWrapperMaterial::i___WaveHarmonic__Crest__IPropertyWrapper()  {
return static_cast<::WaveHarmonic::Crest::IPropertyWrapper*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_Material_k__BackingField", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::PropertyWrapperMaterial::PropertyWrapperMaterial(::UnityW<::UnityEngine::Material>  _Material_k__BackingField) noexcept  {
this->_Material_k__BackingField = _Material_k__BackingField;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::PropertyWrapperMaterial::PropertyWrapperMaterial()   {
}

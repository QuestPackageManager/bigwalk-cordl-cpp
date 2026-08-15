#pragma once
// IWYU pragma private; include "MA/Flora/ConstantBufferRefHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__ConstantBufferRefHelpers_def.hpp"
#include "MA/Flora/zzzz__ConstantBufferRef_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
template<typename T>
inline void MA::Flora::ConstantBufferRefHelpers::SetGlobalConstantBuffer(::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  nameID, ::MA::Flora::ConstantBufferRef_1<T>  constantBuffer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::ConstantBufferRefHelpers*>(),
                    {"SetGlobalConstantBuffer", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::MA::Flora::ConstantBufferRef_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, nameID, constantBuffer);
}
template<typename T>
inline void MA::Flora::ConstantBufferRefHelpers::SetComputeConstantBufferParam(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::MA::Flora::ConstantBufferRef_1<T>  constantBuffer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::ConstantBufferRefHelpers*>(),
                    {"SetComputeConstantBufferParam", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::MA::Flora::ConstantBufferRef_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, computeShader, nameID, constantBuffer);
}
template<typename T>
inline void MA::Flora::ConstantBufferRefHelpers::SetConstantBuffer(::UnityEngine::Material*  mat, int32_t  nameID, ::MA::Flora::ConstantBufferRef_1<T>  constantBuffer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::ConstantBufferRefHelpers*>(),
                    {"SetConstantBuffer", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::MA::Flora::ConstantBufferRef_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mat, nameID, constantBuffer);
}
template<typename T>
inline void MA::Flora::ConstantBufferRefHelpers::SetConstantBuffer(::UnityEngine::MaterialPropertyBlock*  mpb, int32_t  nameID, ::MA::Flora::ConstantBufferRef_1<T>  constantBuffer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::ConstantBufferRefHelpers*>(),
                    {"SetConstantBuffer", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::MA::Flora::ConstantBufferRef_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mpb, nameID, constantBuffer);
}
// Ctor Parameters []
constexpr ::MA::Flora::ConstantBufferRefHelpers::ConstantBufferRefHelpers()   {
}

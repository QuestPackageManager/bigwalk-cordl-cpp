#pragma once
// IWYU pragma private; include "MA/Flora/FrustumSIMDPacket.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "MA/Flora/zzzz__FrustumSIMDPacket_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
//  Writing Method size for method: ::MA::Flora::FrustumSIMDPacket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FrustumSIMDPacket::*)(::System::ReadOnlySpan_1<::UnityEngine::Plane>, int32_t, int32_t)>(&::MA::Flora::FrustumSIMDPacket::_ctor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1814f92d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumSIMDPacket>(),
                        {".ctor", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Plane>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FrustumSIMDPacket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FrustumSIMDPacket::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, int32_t, int32_t)>(&::MA::Flora::FrustumSIMDPacket::_ctor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1814f9470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumSIMDPacket>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FrustumSIMDPacket.AsGPUPacket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (::MA::Flora::FrustumSIMDPacket::*)()>(&::MA::Flora::FrustumSIMDPacket::AsGPUPacket)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814f9260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumSIMDPacket>(),
                        {"AsGPUPacket", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::FrustumSIMDPacket::_ctor(::System::ReadOnlySpan_1<::UnityEngine::Plane>  planes, int32_t  offset, int32_t  limit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumSIMDPacket>(),
                        {".ctor", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Plane>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, planes, offset, limit);
}
inline void MA::Flora::FrustumSIMDPacket::_ctor(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  planes, int32_t  offset, int32_t  limit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumSIMDPacket>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, planes, offset, limit);
}
inline ::Unity::Mathematics::float4x4 MA::Flora::FrustumSIMDPacket::AsGPUPacket()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumSIMDPacket>(),
                        {"AsGPUPacket", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Nx", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "Ny", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "Nz", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "D", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "AbsNx", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "AbsNy", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "AbsNz", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::FrustumSIMDPacket::FrustumSIMDPacket(::Unity::Mathematics::float4  Nx, ::Unity::Mathematics::float4  Ny, ::Unity::Mathematics::float4  Nz, ::Unity::Mathematics::float4  D, ::Unity::Mathematics::float4  AbsNx, ::Unity::Mathematics::float4  AbsNy, ::Unity::Mathematics::float4  AbsNz) noexcept  {
this->Nx = Nx;
this->Ny = Ny;
this->Nz = Nz;
this->D = D;
this->AbsNx = AbsNx;
this->AbsNy = AbsNy;
this->AbsNz = AbsNz;
}
// Ctor Parameters []
constexpr ::MA::Flora::FrustumSIMDPacket::FrustumSIMDPacket()   {
}

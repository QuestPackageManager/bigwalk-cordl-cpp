#pragma once
// IWYU pragma private; include "Unity/Mathematics/noise.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__noise_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::noise.cellular
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::noise::cellular)> {
  constexpr static std::size_t size = 0xda0;
  constexpr static std::size_t addrs = 0x181f1fc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"cellular", {}, {::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.cellular2x2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::noise::cellular2x2)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x181f1f310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"cellular2x2", {}, {::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.cellular2x2x2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::noise::cellular2x2x2)> {
  constexpr static std::size_t size = 0x630;
  constexpr static std::size_t addrs = 0x181f1f600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"cellular2x2x2", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.cellular
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::noise::cellular)> {
  constexpr static std::size_t size = 0x3000;
  constexpr static std::size_t addrs = 0x181f209d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"cellular", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.cnoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::noise::cnoise)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x181f261a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"cnoise", {}, {::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.pnoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::noise::pnoise)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x181f26f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"pnoise", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.cnoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::noise::cnoise)> {
  constexpr static std::size_t size = 0xc10;
  constexpr static std::size_t addrs = 0x181f25590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"cnoise", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.pnoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::noise::pnoise)> {
  constexpr static std::size_t size = 0xc90;
  constexpr static std::size_t addrs = 0x181f29130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"pnoise", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.cnoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float4)>(&::Unity::Mathematics::noise::cnoise)> {
  constexpr static std::size_t size = 0x1bc0;
  constexpr static std::size_t addrs = 0x181f239d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"cnoise", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.pnoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float4, ::Unity::Mathematics::float4)>(&::Unity::Mathematics::noise::pnoise)> {
  constexpr static std::size_t size = 0x1cc0;
  constexpr static std::size_t addrs = 0x181f27470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"pnoise", {}, {::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.mod289
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Unity::Mathematics::noise::mod289)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181f269f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"mod289", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.mod289
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::noise::mod289)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181f26b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"mod289", {}, {::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.mod289
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::noise::mod289)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181f26a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"mod289", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.mod289
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (*)(::Unity::Mathematics::float4)>(&::Unity::Mathematics::noise::mod289)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181f26bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"mod289", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.mod7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::noise::mod7)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181f26c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"mod7", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.mod7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (*)(::Unity::Mathematics::float4)>(&::Unity::Mathematics::noise::mod7)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181f26c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"mod7", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.permute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Unity::Mathematics::noise::permute)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181f26eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"permute", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.permute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::noise::permute)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181f26d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"permute", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.permute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (*)(::Unity::Mathematics::float4)>(&::Unity::Mathematics::noise::permute)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181f26d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"permute", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.taylorInvSqrt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Unity::Mathematics::noise::taylorInvSqrt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181f2dd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"taylorInvSqrt", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.taylorInvSqrt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (*)(::Unity::Mathematics::float4)>(&::Unity::Mathematics::noise::taylorInvSqrt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181f2dd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"taylorInvSqrt", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.fade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::noise::fade)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181f26600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"fade", {}, {::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.fade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::noise::fade)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181f26690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"fade", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.fade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (*)(::Unity::Mathematics::float4)>(&::Unity::Mathematics::noise::fade)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181f265c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"fade", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.grad4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (*)(float_t, ::Unity::Mathematics::float4)>(&::Unity::Mathematics::noise::grad4)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x181f26790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"grad4", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.rgrad2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float2, float_t)>(&::Unity::Mathematics::noise::rgrad2)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181f2a740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"rgrad2", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.snoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::noise::snoise)> {
  constexpr static std::size_t size = 0x700;
  constexpr static std::size_t addrs = 0x181f2c110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"snoise", {}, {::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.snoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::noise::snoise)> {
  constexpr static std::size_t size = 0xae0;
  constexpr static std::size_t addrs = 0x181f2c810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"snoise", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.snoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Mathematics::float3>)>(&::Unity::Mathematics::noise::snoise)> {
  constexpr static std::size_t size = 0xd60;
  constexpr static std::size_t addrs = 0x181f2b3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"snoise", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.snoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float4)>(&::Unity::Mathematics::noise::snoise)> {
  constexpr static std::size_t size = 0xb40;
  constexpr static std::size_t addrs = 0x181f2a870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"snoise", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.psrdnoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, float_t)>(&::Unity::Mathematics::noise::psrdnoise)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x181f29dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"psrdnoise", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.psrdnoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::noise::psrdnoise)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181f2a310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"psrdnoise", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.psrnoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, float_t)>(&::Unity::Mathematics::noise::psrnoise)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x181f2a350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"psrnoise", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.psrnoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::noise::psrnoise)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181f2a340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"psrnoise", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.srdnoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float2, float_t)>(&::Unity::Mathematics::noise::srdnoise)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x181f2d310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"srdnoise", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.srdnoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::noise::srdnoise)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181f2d2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"srdnoise", {}, {::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.srnoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float2, float_t)>(&::Unity::Mathematics::noise::srnoise)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x181f2d8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"srnoise", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.srnoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::noise::srnoise)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181f2d8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"srnoise", {}, {::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Mathematics::float2 Unity::Mathematics::noise::cellular(::Unity::Mathematics::float2  P)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"cellular", {}, {::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, P);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::noise::cellular2x2(::Unity::Mathematics::float2  P)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"cellular2x2", {}, {::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, P);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::noise::cellular2x2x2(::Unity::Mathematics::float3  P)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"cellular2x2x2", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, P);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::noise::cellular(::Unity::Mathematics::float3  P)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"cellular", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, P);
}
inline float_t Unity::Mathematics::noise::cnoise(::Unity::Mathematics::float2  P)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"cnoise", {}, {::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, P);
}
inline float_t Unity::Mathematics::noise::pnoise(::Unity::Mathematics::float2  P, ::Unity::Mathematics::float2  rep)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"pnoise", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, P, rep);
}
inline float_t Unity::Mathematics::noise::cnoise(::Unity::Mathematics::float3  P)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"cnoise", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, P);
}
inline float_t Unity::Mathematics::noise::pnoise(::Unity::Mathematics::float3  P, ::Unity::Mathematics::float3  rep)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"pnoise", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, P, rep);
}
inline float_t Unity::Mathematics::noise::cnoise(::Unity::Mathematics::float4  P)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"cnoise", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, P);
}
inline float_t Unity::Mathematics::noise::pnoise(::Unity::Mathematics::float4  P, ::Unity::Mathematics::float4  rep)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"pnoise", {}, {::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, P, rep);
}
inline float_t Unity::Mathematics::noise::mod289(float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"mod289", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::noise::mod289(::Unity::Mathematics::float2  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"mod289", {}, {::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, x);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::noise::mod289(::Unity::Mathematics::float3  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"mod289", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, x);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::noise::mod289(::Unity::Mathematics::float4  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"mod289", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(nullptr, ___internal_method, x);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::noise::mod7(::Unity::Mathematics::float3  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"mod7", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, x);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::noise::mod7(::Unity::Mathematics::float4  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"mod7", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(nullptr, ___internal_method, x);
}
inline float_t Unity::Mathematics::noise::permute(float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"permute", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::noise::permute(::Unity::Mathematics::float3  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"permute", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, x);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::noise::permute(::Unity::Mathematics::float4  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"permute", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(nullptr, ___internal_method, x);
}
inline float_t Unity::Mathematics::noise::taylorInvSqrt(float_t  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"taylorInvSqrt", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, r);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::noise::taylorInvSqrt(::Unity::Mathematics::float4  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"taylorInvSqrt", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(nullptr, ___internal_method, r);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::noise::fade(::Unity::Mathematics::float2  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"fade", {}, {::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, t);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::noise::fade(::Unity::Mathematics::float3  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"fade", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, t);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::noise::fade(::Unity::Mathematics::float4  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"fade", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(nullptr, ___internal_method, t);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::noise::grad4(float_t  j, ::Unity::Mathematics::float4  ip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"grad4", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(nullptr, ___internal_method, j, ip);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::noise::rgrad2(::Unity::Mathematics::float2  p, float_t  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"rgrad2", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, p, rot);
}
inline float_t Unity::Mathematics::noise::snoise(::Unity::Mathematics::float2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"snoise", {}, {::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, v);
}
inline float_t Unity::Mathematics::noise::snoise(::Unity::Mathematics::float3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"snoise", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, v);
}
inline float_t Unity::Mathematics::noise::snoise(::Unity::Mathematics::float3  v, ::by_ref<::Unity::Mathematics::float3>  gradient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"snoise", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, v, gradient);
}
inline float_t Unity::Mathematics::noise::snoise(::Unity::Mathematics::float4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"snoise", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::noise::psrdnoise(::Unity::Mathematics::float2  pos, ::Unity::Mathematics::float2  per, float_t  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"psrdnoise", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, pos, per, rot);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::noise::psrdnoise(::Unity::Mathematics::float2  pos, ::Unity::Mathematics::float2  per)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"psrdnoise", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, pos, per);
}
inline float_t Unity::Mathematics::noise::psrnoise(::Unity::Mathematics::float2  pos, ::Unity::Mathematics::float2  per, float_t  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"psrnoise", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, pos, per, rot);
}
inline float_t Unity::Mathematics::noise::psrnoise(::Unity::Mathematics::float2  pos, ::Unity::Mathematics::float2  per)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"psrnoise", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, pos, per);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::noise::srdnoise(::Unity::Mathematics::float2  pos, float_t  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"srdnoise", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, pos, rot);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::noise::srdnoise(::Unity::Mathematics::float2  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"srdnoise", {}, {::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, pos);
}
inline float_t Unity::Mathematics::noise::srnoise(::Unity::Mathematics::float2  pos, float_t  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"srnoise", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, pos, rot);
}
inline float_t Unity::Mathematics::noise::srnoise(::Unity::Mathematics::float2  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"srnoise", {}, {::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, pos);
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::noise::noise()   {
}

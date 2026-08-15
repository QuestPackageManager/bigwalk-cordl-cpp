#pragma once
// IWYU pragma private; include "Unity/Mathematics/noise.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(noise)
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4;
}
// Forward declare root types
namespace Unity::Mathematics {
class noise;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::noise*);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::noise*, "Unity.Mathematics", "noise");
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.noise
class CORDL_TYPE noise : public ::System::Object {
public:
// Declarations
/// @brief Method cellular, addr 0x181f1fc30, size 0xda0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 cellular(::Unity::Mathematics::float2  P) ;

/// @brief Method cellular, addr 0x181f209d0, size 0x3000, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 cellular(::Unity::Mathematics::float3  P) ;

/// @brief Method cellular2x2, addr 0x181f1f310, size 0x2f0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 cellular2x2(::Unity::Mathematics::float2  P) ;

/// @brief Method cellular2x2x2, addr 0x181f1f600, size 0x630, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 cellular2x2x2(::Unity::Mathematics::float3  P) ;

/// @brief Method cnoise, addr 0x181f261a0, size 0x420, virtual false, abstract: false, final false
static inline float_t cnoise(::Unity::Mathematics::float2  P) ;

/// @brief Method cnoise, addr 0x181f25590, size 0xc10, virtual false, abstract: false, final false
static inline float_t cnoise(::Unity::Mathematics::float3  P) ;

/// @brief Method cnoise, addr 0x181f239d0, size 0x1bc0, virtual false, abstract: false, final false
static inline float_t cnoise(::Unity::Mathematics::float4  P) ;

/// @brief Method fade, addr 0x181f26600, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 fade(::Unity::Mathematics::float2  t) ;

/// @brief Method fade, addr 0x181f26690, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 fade(::Unity::Mathematics::float3  t) ;

/// @brief Method fade, addr 0x181f265c0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 fade(::Unity::Mathematics::float4  t) ;

/// @brief Method grad4, addr 0x181f26790, size 0x260, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 grad4(float_t  j, ::Unity::Mathematics::float4  ip) ;

/// @brief Method mod289, addr 0x181f26b20, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mod289(::Unity::Mathematics::float2  x) ;

/// @brief Method mod289, addr 0x181f26a40, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mod289(::Unity::Mathematics::float3  x) ;

/// @brief Method mod289, addr 0x181f26bb0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mod289(::Unity::Mathematics::float4  x) ;

/// @brief Method mod289, addr 0x181f269f0, size 0x50, virtual false, abstract: false, final false
static inline float_t mod289(float_t  x) ;

/// @brief Method mod7, addr 0x181f26c50, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mod7(::Unity::Mathematics::float3  x) ;

/// @brief Method mod7, addr 0x181f26c00, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mod7(::Unity::Mathematics::float4  x) ;

/// @brief Method permute, addr 0x181f26d90, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 permute(::Unity::Mathematics::float3  x) ;

/// @brief Method permute, addr 0x181f26d30, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 permute(::Unity::Mathematics::float4  x) ;

/// @brief Method permute, addr 0x181f26eb0, size 0x60, virtual false, abstract: false, final false
static inline float_t permute(float_t  x) ;

/// @brief Method pnoise, addr 0x181f26f10, size 0x560, virtual false, abstract: false, final false
static inline float_t pnoise(::Unity::Mathematics::float2  P, ::Unity::Mathematics::float2  rep) ;

/// @brief Method pnoise, addr 0x181f29130, size 0xc90, virtual false, abstract: false, final false
static inline float_t pnoise(::Unity::Mathematics::float3  P, ::Unity::Mathematics::float3  rep) ;

/// @brief Method pnoise, addr 0x181f27470, size 0x1cc0, virtual false, abstract: false, final false
static inline float_t pnoise(::Unity::Mathematics::float4  P, ::Unity::Mathematics::float4  rep) ;

/// @brief Method psrdnoise, addr 0x181f2a310, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 psrdnoise(::Unity::Mathematics::float2  pos, ::Unity::Mathematics::float2  per) ;

/// @brief Method psrdnoise, addr 0x181f29dc0, size 0x550, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 psrdnoise(::Unity::Mathematics::float2  pos, ::Unity::Mathematics::float2  per, float_t  rot) ;

/// @brief Method psrnoise, addr 0x181f2a340, size 0x10, virtual false, abstract: false, final false
static inline float_t psrnoise(::Unity::Mathematics::float2  pos, ::Unity::Mathematics::float2  per) ;

/// @brief Method psrnoise, addr 0x181f2a350, size 0x3f0, virtual false, abstract: false, final false
static inline float_t psrnoise(::Unity::Mathematics::float2  pos, ::Unity::Mathematics::float2  per, float_t  rot) ;

/// @brief Method rgrad2, addr 0x181f2a740, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 rgrad2(::Unity::Mathematics::float2  p, float_t  rot) ;

/// @brief Method snoise, addr 0x181f2c110, size 0x700, virtual false, abstract: false, final false
static inline float_t snoise(::Unity::Mathematics::float2  v) ;

/// @brief Method snoise, addr 0x181f2c810, size 0xae0, virtual false, abstract: false, final false
static inline float_t snoise(::Unity::Mathematics::float3  v) ;

/// @brief Method snoise, addr 0x181f2b3b0, size 0xd60, virtual false, abstract: false, final false
static inline float_t snoise(::Unity::Mathematics::float3  v, ::by_ref<::Unity::Mathematics::float3>  gradient) ;

/// @brief Method snoise, addr 0x181f2a870, size 0xb40, virtual false, abstract: false, final false
static inline float_t snoise(::Unity::Mathematics::float4  v) ;

/// @brief Method srdnoise, addr 0x181f2d2f0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 srdnoise(::Unity::Mathematics::float2  pos) ;

/// @brief Method srdnoise, addr 0x181f2d310, size 0x5d0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 srdnoise(::Unity::Mathematics::float2  pos, float_t  rot) ;

/// @brief Method srnoise, addr 0x181f2d8e0, size 0x10, virtual false, abstract: false, final false
static inline float_t srnoise(::Unity::Mathematics::float2  pos) ;

/// @brief Method srnoise, addr 0x181f2d8f0, size 0x480, virtual false, abstract: false, final false
static inline float_t srnoise(::Unity::Mathematics::float2  pos, float_t  rot) ;

/// @brief Method taylorInvSqrt, addr 0x181f2dd70, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 taylorInvSqrt(::Unity::Mathematics::float4  r) ;

/// @brief Method taylorInvSqrt, addr 0x181f2dd90, size 0x20, virtual false, abstract: false, final false
static inline float_t taylorInvSqrt(float_t  r) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr noise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "noise", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
noise(noise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "noise", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
noise(noise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12752};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Mathematics::noise) == 0x10, "Size mismatch!");

} // namespace end def Unity::Mathematics

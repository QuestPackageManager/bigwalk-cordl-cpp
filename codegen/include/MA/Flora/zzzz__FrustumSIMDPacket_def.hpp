#pragma once
// IWYU pragma private; include "MA/Flora/FrustumSIMDPacket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FrustumSIMDPacket)
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace MA::Flora {
struct FrustumSIMDPacket;
}
// Write type traits
MARK_VAL_T(::MA::Flora::FrustumSIMDPacket);
DEFINE_IL2CPP_CLASS(::MA::Flora::FrustumSIMDPacket, "MA.Flora", "FrustumSIMDPacket");
// Dependencies Unity.Mathematics.float4
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FrustumSIMDPacket
struct CORDL_TYPE FrustumSIMDPacket {
public:
// Declarations
/// @brief Method AsGPUPacket, addr 0x1814f9260, size 0x70, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4x4 AsGPUPacket() ;

/// @brief Method .ctor, addr 0x1814f92d0, size 0x1a0, virtual false, abstract: false, final false
inline void _ctor(::System::ReadOnlySpan_1<::UnityEngine::Plane>  planes, int32_t  offset, int32_t  limit) ;

/// @brief Method .ctor, addr 0x1814f9470, size 0x1a0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  planes, int32_t  offset, int32_t  limit) ;

// Ctor Parameters []
// @brief default ctor
constexpr FrustumSIMDPacket() ;

// Ctor Parameters [CppParam { name: "Nx", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "Ny", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "Nz", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "D", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "AbsNx", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "AbsNy", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "AbsNz", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }]
constexpr FrustumSIMDPacket(::Unity::Mathematics::float4  Nx, ::Unity::Mathematics::float4  Ny, ::Unity::Mathematics::float4  Nz, ::Unity::Mathematics::float4  D, ::Unity::Mathematics::float4  AbsNx, ::Unity::Mathematics::float4  AbsNy, ::Unity::Mathematics::float4  AbsNz) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13313};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field Nx, offset: 0x0, size: 0x10, def value: None
 ::Unity::Mathematics::float4  Nx;

/// @brief Field Ny, offset: 0x10, size: 0x10, def value: None
 ::Unity::Mathematics::float4  Ny;

/// @brief Field Nz, offset: 0x20, size: 0x10, def value: None
 ::Unity::Mathematics::float4  Nz;

/// @brief Field D, offset: 0x30, size: 0x10, def value: None
 ::Unity::Mathematics::float4  D;

/// @brief Field AbsNx, offset: 0x40, size: 0x10, def value: None
 ::Unity::Mathematics::float4  AbsNx;

/// @brief Field AbsNy, offset: 0x50, size: 0x10, def value: None
 ::Unity::Mathematics::float4  AbsNy;

/// @brief Field AbsNz, offset: 0x60, size: 0x10, def value: None
 ::Unity::Mathematics::float4  AbsNz;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FrustumSIMDPacket, Nx) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FrustumSIMDPacket, Ny) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FrustumSIMDPacket, Nz) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FrustumSIMDPacket, D) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FrustumSIMDPacket, AbsNx) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FrustumSIMDPacket, AbsNy) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FrustumSIMDPacket, AbsNz) == 0x60, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FrustumSIMDPacket) == 0x70, "Size mismatch!");

} // namespace end def MA::Flora

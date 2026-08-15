#pragma once
// IWYU pragma private; include "GlobalNamespace/hCxgGlISmAmYnHRiipLCeSkqfDGX.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(hCxgGlISmAmYnHRiipLCeSkqfDGX)
// Forward declare root types
namespace GlobalNamespace {
struct hCxgGlISmAmYnHRiipLCeSkqfDGX;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX, "", "hCxgGlISmAmYnHRiipLCeSkqfDGX");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: hCxgGlISmAmYnHRiipLCeSkqfDGX
struct CORDL_TYPE hCxgGlISmAmYnHRiipLCeSkqfDGX {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __hCxgGlISmAmYnHRiipLCeSkqfDGX_Unwrapped
enum struct __hCxgGlISmAmYnHRiipLCeSkqfDGX_Unwrapped : int32_t {
__E_Void = static_cast<int32_t>(0x0),
__E_Bool = static_cast<int32_t>(0x1),
__E_Int = static_cast<int32_t>(0x2),
__E_Float = static_cast<int32_t>(0x3),
__E_String = static_cast<int32_t>(0x4),
__E_Texture = static_cast<int32_t>(0x5),
__E_Texture1D = static_cast<int32_t>(0x6),
__E_Texture2D = static_cast<int32_t>(0x7),
__E_Texture3D = static_cast<int32_t>(0x8),
__E_TextureCube = static_cast<int32_t>(0x9),
__E_Sampler = static_cast<int32_t>(0xa),
__E_Sampler1D = static_cast<int32_t>(0xb),
__E_Sampler2D = static_cast<int32_t>(0xc),
__E_Sampler3D = static_cast<int32_t>(0xd),
__E_SamplerCube = static_cast<int32_t>(0xe),
__E_PixelShader = static_cast<int32_t>(0xf),
__E_VertexShader = static_cast<int32_t>(0x10),
__E_PixelFragment = static_cast<int32_t>(0x11),
__E_VertexFragment = static_cast<int32_t>(0x12),
__E_UInt = static_cast<int32_t>(0x13),
__E_UInt8 = static_cast<int32_t>(0x14),
__E_GeometryShader = static_cast<int32_t>(0x15),
__E_Rasterizer = static_cast<int32_t>(0x16),
__E_DepthStencil = static_cast<int32_t>(0x17),
__E_Blend = static_cast<int32_t>(0x18),
__E_Buffer = static_cast<int32_t>(0x19),
__E_ConstantBuffer = static_cast<int32_t>(0x1a),
__E_TextureBuffer = static_cast<int32_t>(0x1b),
__E_Texture1DArray = static_cast<int32_t>(0x1c),
__E_Texture2DArray = static_cast<int32_t>(0x1d),
__E_RenderTargetView = static_cast<int32_t>(0x1e),
__E_DepthStencilView = static_cast<int32_t>(0x1f),
__E_Texture2DMultisampled = static_cast<int32_t>(0x20),
__E_Texture2DMultisampledArray = static_cast<int32_t>(0x21),
__E_TextureCubeArray = static_cast<int32_t>(0x22),
__E_HullShader = static_cast<int32_t>(0x23),
__E_DomainShader = static_cast<int32_t>(0x24),
__E_InterfacePointer = static_cast<int32_t>(0x25),
__E_ComputeShader = static_cast<int32_t>(0x26),
__E_Double = static_cast<int32_t>(0x27),
__E_RWTexture1D = static_cast<int32_t>(0x28),
__E_RWTexture1DArray = static_cast<int32_t>(0x29),
__E_RWTexture2D = static_cast<int32_t>(0x2a),
__E_RWTexture2DArray = static_cast<int32_t>(0x2b),
__E_RWTexture3D = static_cast<int32_t>(0x2c),
__E_RWBuffer = static_cast<int32_t>(0x2d),
__E_ByteAddressBuffer = static_cast<int32_t>(0x2e),
__E_RWByteAddressBuffer = static_cast<int32_t>(0x2f),
__E_StructuredBuffer = static_cast<int32_t>(0x30),
__E_RWStructuredBuffer = static_cast<int32_t>(0x31),
__E_AppendStructuredBuffer = static_cast<int32_t>(0x32),
__E_ConsumeStructuredBuffer = static_cast<int32_t>(0x33),
__E_MinimumFloat8 = static_cast<int32_t>(0x34),
__E_MinimumFloat10 = static_cast<int32_t>(0x35),
__E_MinimumFloat16 = static_cast<int32_t>(0x36),
__E_MinimumInt12 = static_cast<int32_t>(0x37),
__E_MinimumInt16 = static_cast<int32_t>(0x38),
__E_MinimumUInt16 = static_cast<int32_t>(0x39),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __hCxgGlISmAmYnHRiipLCeSkqfDGX_Unwrapped () const noexcept {
return static_cast<__hCxgGlISmAmYnHRiipLCeSkqfDGX_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr hCxgGlISmAmYnHRiipLCeSkqfDGX() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr hCxgGlISmAmYnHRiipLCeSkqfDGX(int32_t  value__) noexcept;

/// @brief Field AppendStructuredBuffer value: I32(50)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const AppendStructuredBuffer;

/// @brief Field Blend value: I32(24)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const Blend;

/// @brief Field Bool value: I32(1)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const Bool;

/// @brief Field Buffer value: I32(25)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const Buffer;

/// @brief Field ByteAddressBuffer value: I32(46)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const ByteAddressBuffer;

/// @brief Field ComputeShader value: I32(38)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const ComputeShader;

/// @brief Field ConstantBuffer value: I32(26)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const ConstantBuffer;

/// @brief Field ConsumeStructuredBuffer value: I32(51)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const ConsumeStructuredBuffer;

/// @brief Field DepthStencil value: I32(23)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const DepthStencil;

/// @brief Field DepthStencilView value: I32(31)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const DepthStencilView;

/// @brief Field DomainShader value: I32(36)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const DomainShader;

/// @brief Field Double value: I32(39)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const Double;

/// @brief Field Float value: I32(3)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const Float;

/// @brief Field GeometryShader value: I32(21)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const GeometryShader;

/// @brief Field HullShader value: I32(35)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const HullShader;

/// @brief Field Int value: I32(2)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const Int;

/// @brief Field InterfacePointer value: I32(37)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const InterfacePointer;

/// @brief Field MinimumFloat10 value: I32(53)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const MinimumFloat10;

/// @brief Field MinimumFloat16 value: I32(54)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const MinimumFloat16;

/// @brief Field MinimumFloat8 value: I32(52)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const MinimumFloat8;

/// @brief Field MinimumInt12 value: I32(55)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const MinimumInt12;

/// @brief Field MinimumInt16 value: I32(56)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const MinimumInt16;

/// @brief Field MinimumUInt16 value: I32(57)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const MinimumUInt16;

/// @brief Field PixelFragment value: I32(17)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const PixelFragment;

/// @brief Field PixelShader value: I32(15)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const PixelShader;

/// @brief Field RWBuffer value: I32(45)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const RWBuffer;

/// @brief Field RWByteAddressBuffer value: I32(47)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const RWByteAddressBuffer;

/// @brief Field RWStructuredBuffer value: I32(49)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const RWStructuredBuffer;

/// @brief Field RWTexture1D value: I32(40)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const RWTexture1D;

/// @brief Field RWTexture1DArray value: I32(41)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const RWTexture1DArray;

/// @brief Field RWTexture2D value: I32(42)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const RWTexture2D;

/// @brief Field RWTexture2DArray value: I32(43)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const RWTexture2DArray;

/// @brief Field RWTexture3D value: I32(44)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const RWTexture3D;

/// @brief Field Rasterizer value: I32(22)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const Rasterizer;

/// @brief Field RenderTargetView value: I32(30)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const RenderTargetView;

/// @brief Field Sampler value: I32(10)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const Sampler;

/// @brief Field Sampler1D value: I32(11)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const Sampler1D;

/// @brief Field Sampler2D value: I32(12)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const Sampler2D;

/// @brief Field Sampler3D value: I32(13)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const Sampler3D;

/// @brief Field SamplerCube value: I32(14)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const SamplerCube;

/// @brief Field String value: I32(4)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const String;

/// @brief Field StructuredBuffer value: I32(48)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const StructuredBuffer;

/// @brief Field Texture value: I32(5)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const Texture;

/// @brief Field Texture1D value: I32(6)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const Texture1D;

/// @brief Field Texture1DArray value: I32(28)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const Texture1DArray;

/// @brief Field Texture2D value: I32(7)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const Texture2D;

/// @brief Field Texture2DArray value: I32(29)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const Texture2DArray;

/// @brief Field Texture2DMultisampled value: I32(32)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const Texture2DMultisampled;

/// @brief Field Texture2DMultisampledArray value: I32(33)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const Texture2DMultisampledArray;

/// @brief Field Texture3D value: I32(8)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const Texture3D;

/// @brief Field TextureBuffer value: I32(27)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const TextureBuffer;

/// @brief Field TextureCube value: I32(9)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const TextureCube;

/// @brief Field TextureCubeArray value: I32(34)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const TextureCubeArray;

/// @brief Field UInt value: I32(19)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const UInt;

/// @brief Field UInt8 value: I32(20)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const UInt8;

/// @brief Field VertexFragment value: I32(18)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const VertexFragment;

/// @brief Field VertexShader value: I32(16)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const VertexShader;

/// @brief Field Void value: I32(0)
static ::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX const Void;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6215};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::hCxgGlISmAmYnHRiipLCeSkqfDGX) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

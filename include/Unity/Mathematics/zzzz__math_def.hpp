#pragma once
// IWYU pragma private; include "Unity/Mathematics/math.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(math)
namespace Unity::Mathematics {
struct AffineTransform;
}
namespace Unity::Mathematics {
struct RigidTransform;
}
namespace Unity::Mathematics {
struct bool2;
}
namespace Unity::Mathematics {
struct bool2x2;
}
namespace Unity::Mathematics {
struct bool2x3;
}
namespace Unity::Mathematics {
struct bool2x4;
}
namespace Unity::Mathematics {
struct bool3;
}
namespace Unity::Mathematics {
struct bool3x2;
}
namespace Unity::Mathematics {
struct bool3x3;
}
namespace Unity::Mathematics {
struct bool3x4;
}
namespace Unity::Mathematics {
struct bool4;
}
namespace Unity::Mathematics {
struct bool4x2;
}
namespace Unity::Mathematics {
struct bool4x3;
}
namespace Unity::Mathematics {
struct bool4x4;
}
namespace Unity::Mathematics {
struct double2;
}
namespace Unity::Mathematics {
struct double2x2;
}
namespace Unity::Mathematics {
struct double2x3;
}
namespace Unity::Mathematics {
struct double2x4;
}
namespace Unity::Mathematics {
struct double3;
}
namespace Unity::Mathematics {
struct double3x2;
}
namespace Unity::Mathematics {
struct double3x3;
}
namespace Unity::Mathematics {
struct double3x4;
}
namespace Unity::Mathematics {
struct double4;
}
namespace Unity::Mathematics {
struct double4x2;
}
namespace Unity::Mathematics {
struct double4x3;
}
namespace Unity::Mathematics {
struct double4x4;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct float2x2;
}
namespace Unity::Mathematics {
struct float2x3;
}
namespace Unity::Mathematics {
struct float2x4;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float3x2;
}
namespace Unity::Mathematics {
struct float3x3;
}
namespace Unity::Mathematics {
struct float3x4;
}
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::Mathematics {
struct float4x2;
}
namespace Unity::Mathematics {
struct float4x3;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace Unity::Mathematics {
struct half2;
}
namespace Unity::Mathematics {
struct half3;
}
namespace Unity::Mathematics {
struct half4;
}
namespace Unity::Mathematics {
struct half;
}
namespace Unity::Mathematics {
struct int2;
}
namespace Unity::Mathematics {
struct int2x2;
}
namespace Unity::Mathematics {
struct int2x3;
}
namespace Unity::Mathematics {
struct int2x4;
}
namespace Unity::Mathematics {
struct int3;
}
namespace Unity::Mathematics {
struct int3x2;
}
namespace Unity::Mathematics {
struct int3x3;
}
namespace Unity::Mathematics {
struct int3x4;
}
namespace Unity::Mathematics {
struct int4;
}
namespace Unity::Mathematics {
struct int4x2;
}
namespace Unity::Mathematics {
struct int4x3;
}
namespace Unity::Mathematics {
struct int4x4;
}
namespace Unity::Mathematics {
struct math_LongDoubleUnion;
}
namespace Unity::Mathematics {
struct math_RotationOrder;
}
namespace Unity::Mathematics {
struct math_ShuffleComponent;
}
namespace Unity::Mathematics {
struct quaternion;
}
namespace Unity::Mathematics {
struct uint2;
}
namespace Unity::Mathematics {
struct uint2x2;
}
namespace Unity::Mathematics {
struct uint2x3;
}
namespace Unity::Mathematics {
struct uint2x4;
}
namespace Unity::Mathematics {
struct uint3;
}
namespace Unity::Mathematics {
struct uint3x2;
}
namespace Unity::Mathematics {
struct uint3x3;
}
namespace Unity::Mathematics {
struct uint3x4;
}
namespace Unity::Mathematics {
struct uint4;
}
namespace Unity::Mathematics {
struct uint4x2;
}
namespace Unity::Mathematics {
struct uint4x3;
}
namespace Unity::Mathematics {
struct uint4x4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct math_RotationOrder;
}
namespace Unity::Mathematics {
struct math_ShuffleComponent;
}
namespace Unity::Mathematics {
class math;
}
namespace Unity::Mathematics {
struct math_LongDoubleUnion;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::math_RotationOrder);
MARK_VAL_T(::Unity::Mathematics::math_ShuffleComponent);
MARK_REF_T(::Unity::Mathematics::math*);
MARK_VAL_T(::Unity::Mathematics::math_LongDoubleUnion);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::math_RotationOrder, "Unity.Mathematics", "math/RotationOrder");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::math_ShuffleComponent, "Unity.Mathematics", "math/ShuffleComponent");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::math*, "Unity.Mathematics", "math");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::math_LongDoubleUnion, "Unity.Mathematics", "math/LongDoubleUnion");
// Dependencies 
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.math/RotationOrder
struct CORDL_TYPE math_RotationOrder {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __math_RotationOrder_Unwrapped
enum struct __math_RotationOrder_Unwrapped : uint8_t {
__E_XYZ = static_cast<uint8_t>(0x0u),
__E_XZY = static_cast<uint8_t>(0x1u),
__E_YXZ = static_cast<uint8_t>(0x2u),
__E_YZX = static_cast<uint8_t>(0x3u),
__E_ZXY = static_cast<uint8_t>(0x4u),
__E_ZYX = static_cast<uint8_t>(0x5u),
__E_Default = static_cast<uint8_t>(0x4u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __math_RotationOrder_Unwrapped () const noexcept {
return static_cast<__math_RotationOrder_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr math_RotationOrder() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr math_RotationOrder(uint8_t  value__) noexcept;

/// @brief Field Default value: U8(4)
static ::Unity::Mathematics::math_RotationOrder const Default;

/// @brief Field XYZ value: U8(0)
static ::Unity::Mathematics::math_RotationOrder const XYZ;

/// @brief Field XZY value: U8(1)
static ::Unity::Mathematics::math_RotationOrder const XZY;

/// @brief Field YXZ value: U8(2)
static ::Unity::Mathematics::math_RotationOrder const YXZ;

/// @brief Field YZX value: U8(3)
static ::Unity::Mathematics::math_RotationOrder const YZX;

/// @brief Field ZXY value: U8(4)
static ::Unity::Mathematics::math_RotationOrder const ZXY;

/// @brief Field ZYX value: U8(5)
static ::Unity::Mathematics::math_RotationOrder const ZYX;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12756};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::math_RotationOrder, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::math_RotationOrder) == 0x1, "Size mismatch!");

} // namespace end def Unity::Mathematics
// Dependencies 
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.math/ShuffleComponent
struct CORDL_TYPE math_ShuffleComponent {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __math_ShuffleComponent_Unwrapped
enum struct __math_ShuffleComponent_Unwrapped : uint8_t {
__E_LeftX = static_cast<uint8_t>(0x0u),
__E_LeftY = static_cast<uint8_t>(0x1u),
__E_LeftZ = static_cast<uint8_t>(0x2u),
__E_LeftW = static_cast<uint8_t>(0x3u),
__E_RightX = static_cast<uint8_t>(0x4u),
__E_RightY = static_cast<uint8_t>(0x5u),
__E_RightZ = static_cast<uint8_t>(0x6u),
__E_RightW = static_cast<uint8_t>(0x7u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __math_ShuffleComponent_Unwrapped () const noexcept {
return static_cast<__math_ShuffleComponent_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr math_ShuffleComponent() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr math_ShuffleComponent(uint8_t  value__) noexcept;

/// @brief Field LeftW value: U8(3)
static ::Unity::Mathematics::math_ShuffleComponent const LeftW;

/// @brief Field LeftX value: U8(0)
static ::Unity::Mathematics::math_ShuffleComponent const LeftX;

/// @brief Field LeftY value: U8(1)
static ::Unity::Mathematics::math_ShuffleComponent const LeftY;

/// @brief Field LeftZ value: U8(2)
static ::Unity::Mathematics::math_ShuffleComponent const LeftZ;

/// @brief Field RightW value: U8(7)
static ::Unity::Mathematics::math_ShuffleComponent const RightW;

/// @brief Field RightX value: U8(4)
static ::Unity::Mathematics::math_ShuffleComponent const RightX;

/// @brief Field RightY value: U8(5)
static ::Unity::Mathematics::math_ShuffleComponent const RightY;

/// @brief Field RightZ value: U8(6)
static ::Unity::Mathematics::math_ShuffleComponent const RightZ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12757};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::math_ShuffleComponent, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::math_ShuffleComponent) == 0x1, "Size mismatch!");

} // namespace end def Unity::Mathematics
// Dependencies 
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.math/LongDoubleUnion
struct CORDL_TYPE math_LongDoubleUnion {
public:
// Declarations
/// @brief Field doubleValue, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_doubleValue, put=__cordl_internal_set_doubleValue)) double_t  doubleValue;

/// @brief Field longValue, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_longValue, put=__cordl_internal_set_longValue)) int64_t  longValue;

constexpr double_t const& __cordl_internal_get_doubleValue() const;

constexpr double_t& __cordl_internal_get_doubleValue() ;

constexpr int64_t const& __cordl_internal_get_longValue() const;

constexpr int64_t& __cordl_internal_get_longValue() ;

constexpr void __cordl_internal_set_doubleValue(double_t  value) ;

constexpr void __cordl_internal_set_longValue(int64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr math_LongDoubleUnion() ;

// Ctor Parameters [CppParam { name: "longValue", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "doubleValue", ty: "double_t", modifiers: "", def_value: None }]
constexpr math_LongDoubleUnion(int64_t  longValue, double_t  doubleValue) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___longValue_padding[0x0];
/// @brief Field longValue, offset: 0x0, size: 0x8, def value: None
 int64_t  ___longValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___longValue_padding_forAlignment[0x0];
/// @brief Field longValue, offset: 0x0, size: 0x8, def value: None
 int64_t  ___longValue_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___doubleValue_padding[0x0];
/// @brief Field doubleValue, offset: 0x0, size: 0x8, def value: None
 double_t  ___doubleValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___doubleValue_padding_forAlignment[0x0];
/// @brief Field doubleValue, offset: 0x0, size: 0x8, def value: None
 double_t  ___doubleValue_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12758};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Unity::Mathematics::math_LongDoubleUnion) == 0x8, "Size mismatch!");

} // namespace end def Unity::Mathematics
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.math
class CORDL_TYPE math : public ::System::Object {
public:
// Declarations
using LongDoubleUnion = ::Unity::Mathematics::math_LongDoubleUnion;

using RotationOrder = ::Unity::Mathematics::math_RotationOrder;

using ShuffleComponent = ::Unity::Mathematics::math_ShuffleComponent;

/// @brief Method AffineTransform, addr 0x181ee0bb0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3x4  m) ;

/// @brief Method AffineTransform, addr 0x181ee0820, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float4x4  m) ;

/// @brief Method AffineTransform, addr 0x181ee0b20, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::RigidTransform  rigid) ;

/// @brief Method AffineTransform, addr 0x181ee07e0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3x3  rotationScale) ;

/// @brief Method AffineTransform, addr 0x181ee0930, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3  translation, ::Unity::Mathematics::quaternion  rotation) ;

/// @brief Method AffineTransform, addr 0x181ee09b0, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3  translation, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  scale) ;

/// @brief Method AffineTransform, addr 0x181ee0900, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3  translation, ::Unity::Mathematics::float3x3  rotationScale) ;

/// @brief Method Euler, addr 0x181ee0c30, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 Euler(::Unity::Mathematics::quaternion  q, ::Unity::Mathematics::math_RotationOrder  order) ;

/// @brief Method EulerXYZ, addr 0x181eda3a0, size 0x290, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EulerXYZ(::Unity::Mathematics::quaternion  q) ;

/// @brief Method EulerXZY, addr 0x181eda630, size 0x2b0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EulerXZY(::Unity::Mathematics::quaternion  q) ;

/// @brief Method EulerYXZ, addr 0x181eda8e0, size 0x2a0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EulerYXZ(::Unity::Mathematics::quaternion  q) ;

/// @brief Method EulerYZX, addr 0x181edab80, size 0x2a0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EulerYZX(::Unity::Mathematics::quaternion  q) ;

/// @brief Method EulerZXY, addr 0x181418020, size 0x2a0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EulerZXY(::Unity::Mathematics::quaternion  q) ;

/// @brief Method EulerZYX, addr 0x181edae20, size 0x2a0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EulerZYX(::Unity::Mathematics::quaternion  q) ;

/// @brief Method RigidTransform, addr 0x181ee0d50, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::quaternion  rot, ::Unity::Mathematics::float3  pos) ;

/// @brief Method RigidTransform, addr 0x181ee0d70, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::float3x3  rotation, ::Unity::Mathematics::float3  translation) ;

/// @brief Method RigidTransform, addr 0x181ee0df0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::float4x4  transform) ;

/// @brief Method abs, addr 0x181ee1060, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 abs(::Unity::Mathematics::double2  x) ;

/// @brief Method abs, addr 0x181ee0ea0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 abs(::Unity::Mathematics::double3  x) ;

/// @brief Method abs, addr 0x181ee0f10, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 abs(::Unity::Mathematics::double4  x) ;

/// @brief Method abs, addr 0x181ee1100, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 abs(::Unity::Mathematics::float2  x) ;

/// @brief Method abs, addr 0x181ee1090, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 abs(::Unity::Mathematics::float3  x) ;

/// @brief Method abs, addr 0x181ee0ed0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 abs(::Unity::Mathematics::float4  x) ;

/// @brief Method abs, addr 0x181ee0f50, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 abs(::Unity::Mathematics::int2  x) ;

/// @brief Method abs, addr 0x181ee1000, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 abs(::Unity::Mathematics::int3  x) ;

/// @brief Method abs, addr 0x181ee0fa0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 abs(::Unity::Mathematics::int4  x) ;

/// @brief Method abs, addr 0x181ee10e0, size 0x20, virtual false, abstract: false, final false
static inline double_t abs(double_t  x) ;

/// @brief Method abs, addr 0x181ee0f00, size 0x10, virtual false, abstract: false, final false
static inline float_t abs(float_t  x) ;

/// @brief Method abs, addr 0x181ee1130, size 0x10, virtual false, abstract: false, final false
static inline int32_t abs(int32_t  x) ;

/// @brief Method abs, addr 0x181ee0ef0, size 0x10, virtual false, abstract: false, final false
static inline int64_t abs(int64_t  x) ;

/// @brief Method acos, addr 0x181ee1300, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 acos(::Unity::Mathematics::double2  x) ;

/// @brief Method acos, addr 0x181ee1340, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 acos(::Unity::Mathematics::double3  x) ;

/// @brief Method acos, addr 0x181ee1200, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 acos(::Unity::Mathematics::double4  x) ;

/// @brief Method acos, addr 0x181ee1140, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 acos(::Unity::Mathematics::float2  x) ;

/// @brief Method acos, addr 0x181ee1190, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 acos(::Unity::Mathematics::float3  x) ;

/// @brief Method acos, addr 0x181ee1260, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 acos(::Unity::Mathematics::float4  x) ;

/// @brief Method acos, addr 0x18170f3c0, size 0x10, virtual false, abstract: false, final false
static inline double_t acos(double_t  x) ;

/// @brief Method acos, addr 0x181907bb0, size 0x20, virtual false, abstract: false, final false
static inline float_t acos(float_t  x) ;

/// @brief Method adj, addr 0x181edb260, size 0x1f0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 adj(::Unity::Mathematics::float3x3  m, ::by_ref<float_t>  det) ;

/// @brief Method adjInverse, addr 0x181edb0c0, size 0x1a0, virtual false, abstract: false, final false
static inline bool adjInverse(::Unity::Mathematics::float3x3  m, ::by_ref<::Unity::Mathematics::float3x3>  i, float_t  epsilon) ;

/// @brief Method all, addr 0x181ee1390, size 0x10, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::bool2  x) ;

/// @brief Method all, addr 0x181ee14f0, size 0x20, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::bool3  x) ;

/// @brief Method all, addr 0x181ee14a0, size 0x10, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::bool4  x) ;

/// @brief Method all, addr 0x181ee1540, size 0x30, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::double2  x) ;

/// @brief Method all, addr 0x181ee1420, size 0x30, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::double3  x) ;

/// @brief Method all, addr 0x181ee13e0, size 0x40, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::double4  x) ;

/// @brief Method all, addr 0x181ee1470, size 0x30, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::float2  x) ;

/// @brief Method all, addr 0x181ee1510, size 0x30, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::float3  x) ;

/// @brief Method all, addr 0x181ee14b0, size 0x40, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::float4  x) ;

/// @brief Method all, addr 0x181ee13c0, size 0x20, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::int2  x) ;

/// @brief Method all, addr 0x181ee13a0, size 0x20, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::int3  x) ;

/// @brief Method all, addr 0x181ee1450, size 0x20, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::int4  x) ;

/// @brief Method all, addr 0x181ee13c0, size 0x20, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::uint2  x) ;

/// @brief Method all, addr 0x181ee13a0, size 0x20, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::uint3  x) ;

/// @brief Method all, addr 0x181ee1450, size 0x20, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::uint4  x) ;

/// @brief Method angle, addr 0x181ee1570, size 0x110, virtual false, abstract: false, final false
static inline float_t angle(::Unity::Mathematics::quaternion  q1, ::Unity::Mathematics::quaternion  q2) ;

/// @brief Method any, addr 0x181ee16c0, size 0x10, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::bool2  x) ;

/// @brief Method any, addr 0x181ee1790, size 0x20, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::bool3  x) ;

/// @brief Method any, addr 0x1816a1270, size 0x10, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::bool4  x) ;

/// @brief Method any, addr 0x181ee16f0, size 0x30, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::double2  x) ;

/// @brief Method any, addr 0x181ee1820, size 0x30, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::double3  x) ;

/// @brief Method any, addr 0x181ee1750, size 0x40, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::double4  x) ;

/// @brief Method any, addr 0x181ee17b0, size 0x30, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::float2  x) ;

/// @brief Method any, addr 0x181ee1720, size 0x30, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::float3  x) ;

/// @brief Method any, addr 0x181ee17e0, size 0x40, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::float4  x) ;

/// @brief Method any, addr 0x181ee16a0, size 0x20, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::int2  x) ;

/// @brief Method any, addr 0x181ee16d0, size 0x20, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::int3  x) ;

/// @brief Method any, addr 0x181ee1680, size 0x20, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::int4  x) ;

/// @brief Method any, addr 0x181ee16a0, size 0x20, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::uint2  x) ;

/// @brief Method any, addr 0x181ee16d0, size 0x20, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::uint3  x) ;

/// @brief Method any, addr 0x181ee1680, size 0x20, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::uint4  x) ;

/// @brief Method asdouble, addr 0x181a52630, size 0x10, virtual false, abstract: false, final false
static inline double_t asdouble(int64_t  x) ;

/// @brief Method asdouble, addr 0x181a52630, size 0x10, virtual false, abstract: false, final false
static inline double_t asdouble(uint64_t  x) ;

/// @brief Method asfloat, addr 0x181ee1850, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 asfloat(::Unity::Mathematics::int2  x) ;

/// @brief Method asfloat, addr 0x181ee1850, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 asfloat(::Unity::Mathematics::uint2  x) ;

/// @brief Method asfloat, addr 0x1802d5330, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 asfloat(::Unity::Mathematics::int3  x) ;

/// @brief Method asfloat, addr 0x1802d5330, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 asfloat(::Unity::Mathematics::uint3  x) ;

/// @brief Method asfloat, addr 0x1804f6880, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 asfloat(::Unity::Mathematics::int4  x) ;

/// @brief Method asfloat, addr 0x1804f6880, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 asfloat(::Unity::Mathematics::uint4  x) ;

/// @brief Method asfloat, addr 0x18169c2c0, size 0x10, virtual false, abstract: false, final false
static inline float_t asfloat(int32_t  x) ;

/// @brief Method asfloat, addr 0x18169c2c0, size 0x10, virtual false, abstract: false, final false
static inline float_t asfloat(uint32_t  x) ;

/// @brief Method asin, addr 0x181ee19d0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 asin(::Unity::Mathematics::double2  x) ;

/// @brief Method asin, addr 0x181ee1980, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 asin(::Unity::Mathematics::double3  x) ;

/// @brief Method asin, addr 0x181ee18b0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 asin(::Unity::Mathematics::double4  x) ;

/// @brief Method asin, addr 0x181ee1860, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 asin(::Unity::Mathematics::float2  x) ;

/// @brief Method asin, addr 0x181ee1910, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 asin(::Unity::Mathematics::float3  x) ;

/// @brief Method asin, addr 0x181ee1a10, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 asin(::Unity::Mathematics::float4  x) ;

/// @brief Method asin, addr 0x18170f3d0, size 0x10, virtual false, abstract: false, final false
static inline double_t asin(double_t  x) ;

/// @brief Method asin, addr 0x181907d90, size 0x20, virtual false, abstract: false, final false
static inline float_t asin(float_t  x) ;

/// @brief Method asint, addr 0x181ee1ab0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 asint(::Unity::Mathematics::float2  x) ;

/// @brief Method asint, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 asint(::Unity::Mathematics::uint2  x) ;

/// @brief Method asint, addr 0x1802d5330, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 asint(::Unity::Mathematics::float3  x) ;

/// @brief Method asint, addr 0x1802d5330, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 asint(::Unity::Mathematics::uint3  x) ;

/// @brief Method asint, addr 0x1804f6880, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 asint(::Unity::Mathematics::float4  x) ;

/// @brief Method asint, addr 0x1804f6880, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 asint(::Unity::Mathematics::uint4  x) ;

/// @brief Method asint, addr 0x18169c2d0, size 0x10, virtual false, abstract: false, final false
static inline int32_t asint(float_t  x) ;

/// @brief Method asint, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline int32_t asint(uint32_t  x) ;

/// @brief Method aslong, addr 0x18169c190, size 0x10, virtual false, abstract: false, final false
static inline int64_t aslong(double_t  x) ;

/// @brief Method aslong, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline int64_t aslong(uint64_t  x) ;

/// @brief Method asuint, addr 0x181ee1ab0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 asuint(::Unity::Mathematics::float2  x) ;

/// @brief Method asuint, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 asuint(::Unity::Mathematics::int2  x) ;

/// @brief Method asuint, addr 0x1802d5330, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 asuint(::Unity::Mathematics::float3  x) ;

/// @brief Method asuint, addr 0x1802d5330, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 asuint(::Unity::Mathematics::int3  x) ;

/// @brief Method asuint, addr 0x1804f6880, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 asuint(::Unity::Mathematics::float4  x) ;

/// @brief Method asuint, addr 0x1804f6880, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 asuint(::Unity::Mathematics::int4  x) ;

/// @brief Method asuint, addr 0x18169c2d0, size 0x10, virtual false, abstract: false, final false
static inline uint32_t asuint(float_t  x) ;

/// @brief Method asuint, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline uint32_t asuint(int32_t  x) ;

/// @brief Method asulong, addr 0x18169c190, size 0x10, virtual false, abstract: false, final false
static inline uint64_t asulong(double_t  x) ;

/// @brief Method asulong, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline uint64_t asulong(int64_t  x) ;

/// @brief Method atan, addr 0x181ee1fa0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 atan(::Unity::Mathematics::double2  x) ;

/// @brief Method atan, addr 0x181ee1f50, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 atan(::Unity::Mathematics::double3  x) ;

/// @brief Method atan, addr 0x181ee1ef0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 atan(::Unity::Mathematics::double4  x) ;

/// @brief Method atan, addr 0x181ee1fe0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 atan(::Unity::Mathematics::float2  x) ;

/// @brief Method atan, addr 0x181ee1e80, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 atan(::Unity::Mathematics::float3  x) ;

/// @brief Method atan, addr 0x181ee1de0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 atan(::Unity::Mathematics::float4  x) ;

/// @brief Method atan, addr 0x18170f3f0, size 0x10, virtual false, abstract: false, final false
static inline double_t atan(double_t  x) ;

/// @brief Method atan, addr 0x181907dd0, size 0x20, virtual false, abstract: false, final false
static inline float_t atan(float_t  x) ;

/// @brief Method atan2, addr 0x181ee1c30, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 atan2(::Unity::Mathematics::double2  y, ::Unity::Mathematics::double2  x) ;

/// @brief Method atan2, addr 0x181ee1ac0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 atan2(::Unity::Mathematics::double3  y, ::Unity::Mathematics::double3  x) ;

/// @brief Method atan2, addr 0x181ee1d60, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 atan2(::Unity::Mathematics::double4  y, ::Unity::Mathematics::double4  x) ;

/// @brief Method atan2, addr 0x181ee1bc0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 atan2(::Unity::Mathematics::float2  y, ::Unity::Mathematics::float2  x) ;

/// @brief Method atan2, addr 0x181ee1b30, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 atan2(::Unity::Mathematics::float3  y, ::Unity::Mathematics::float3  x) ;

/// @brief Method atan2, addr 0x181ee1c90, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 atan2(::Unity::Mathematics::float4  y, ::Unity::Mathematics::float4  x) ;

/// @brief Method atan2, addr 0x18170f3e0, size 0x10, virtual false, abstract: false, final false
static inline double_t atan2(double_t  y, double_t  x) ;

/// @brief Method atan2, addr 0x181907db0, size 0x20, virtual false, abstract: false, final false
static inline float_t atan2(float_t  y, float_t  x) ;

/// @brief Method back, addr 0x181ee2030, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 back() ;

/// @brief Method bitmask, addr 0x181ee2040, size 0x50, virtual false, abstract: false, final false
static inline int32_t bitmask(::Unity::Mathematics::bool4  value) ;

/// @brief Method bool2, addr 0x181ee20a0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 bool2(bool  v) ;

/// @brief Method bool2, addr 0x181ee2090, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 bool2(bool  x, bool  y) ;

/// @brief Method bool2, addr 0x181ee20b0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 bool2(::Unity::Mathematics::bool2  xy) ;

/// @brief Method bool2x2, addr 0x181ee20d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 bool2x2(::Unity::Mathematics::bool2  c0, ::Unity::Mathematics::bool2  c1) ;

/// @brief Method bool2x2, addr 0x181ee2110, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 bool2x2(bool  m00, bool  m01, bool  m10, bool  m11) ;

/// @brief Method bool2x2, addr 0x181ee20e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 bool2x2(bool  v) ;

/// @brief Method bool2x3, addr 0x181ee2140, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 bool2x3(::Unity::Mathematics::bool2  c0, ::Unity::Mathematics::bool2  c1, ::Unity::Mathematics::bool2  c2) ;

/// @brief Method bool2x3, addr 0x181ee2160, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 bool2x3(bool  m00, bool  m01, bool  m02, bool  m10, bool  m11, bool  m12) ;

/// @brief Method bool2x3, addr 0x181ee21b0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 bool2x3(bool  v) ;

/// @brief Method bool2x4, addr 0x181ee21f0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 bool2x4(::Unity::Mathematics::bool2  c0, ::Unity::Mathematics::bool2  c1, ::Unity::Mathematics::bool2  c2, ::Unity::Mathematics::bool2  c3) ;

/// @brief Method bool2x4, addr 0x181ee2220, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 bool2x4(bool  m00, bool  m01, bool  m02, bool  m03, bool  m10, bool  m11, bool  m12, bool  m13) ;

/// @brief Method bool2x4, addr 0x181ee2290, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 bool2x4(bool  v) ;

/// @brief Method bool3, addr 0x181ee22f0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 bool3(bool  v) ;

/// @brief Method bool3, addr 0x181ee22e0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 bool3(bool  x, bool  y, bool  z) ;

/// @brief Method bool3, addr 0x181ee2320, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 bool3(bool  x, ::Unity::Mathematics::bool2  yz) ;

/// @brief Method bool3, addr 0x181ee2300, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 bool3(::Unity::Mathematics::bool2  xy, bool  z) ;

/// @brief Method bool3, addr 0x181ee2340, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 bool3(::Unity::Mathematics::bool3  xyz) ;

/// @brief Method bool3x2, addr 0x181ee23a0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 bool3x2(::Unity::Mathematics::bool3  c0, ::Unity::Mathematics::bool3  c1) ;

/// @brief Method bool3x2, addr 0x181ee2360, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 bool3x2(bool  m00, bool  m01, bool  m10, bool  m11, bool  m20, bool  m21) ;

/// @brief Method bool3x2, addr 0x181ee23d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 bool3x2(bool  v) ;

/// @brief Method bool3x3, addr 0x181ee24b0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 bool3x3(::Unity::Mathematics::bool3  c0, ::Unity::Mathematics::bool3  c1, ::Unity::Mathematics::bool3  c2) ;

/// @brief Method bool3x3, addr 0x181ee2400, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 bool3x3(bool  m00, bool  m01, bool  m02, bool  m10, bool  m11, bool  m12, bool  m20, bool  m21, bool  m22) ;

/// @brief Method bool3x3, addr 0x181ee2470, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 bool3x3(bool  v) ;

/// @brief Method bool3x4, addr 0x181ee2580, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 bool3x4(::Unity::Mathematics::bool3  c0, ::Unity::Mathematics::bool3  c1, ::Unity::Mathematics::bool3  c2, ::Unity::Mathematics::bool3  c3) ;

/// @brief Method bool3x4, addr 0x181ee24f0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 bool3x4(bool  m00, bool  m01, bool  m02, bool  m03, bool  m10, bool  m11, bool  m12, bool  m13, bool  m20, bool  m21, bool  m22, bool  m23) ;

/// @brief Method bool3x4, addr 0x181ee25d0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 bool3x4(bool  v) ;

/// @brief Method bool4, addr 0x181ee2690, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(bool  v) ;

/// @brief Method bool4, addr 0x181ee2670, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(bool  x, bool  y, bool  z, bool  w) ;

/// @brief Method bool4, addr 0x181ee2700, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(bool  x, bool  y, ::Unity::Mathematics::bool2  zw) ;

/// @brief Method bool4, addr 0x181ee2650, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(bool  x, ::Unity::Mathematics::bool2  yz, bool  w) ;

/// @brief Method bool4, addr 0x181ee2750, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(bool  x, ::Unity::Mathematics::bool3  yzw) ;

/// @brief Method bool4, addr 0x181ee2630, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool2  xy, bool  z, bool  w) ;

/// @brief Method bool4, addr 0x181ee26b0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool2  xy, ::Unity::Mathematics::bool2  zw) ;

/// @brief Method bool4, addr 0x181ee2720, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool3  xyz, bool  w) ;

/// @brief Method bool4, addr 0x181ee26d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool4  xyzw) ;

/// @brief Method bool4x2, addr 0x181ee2820, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 bool4x2(::Unity::Mathematics::bool4  c0, ::Unity::Mathematics::bool4  c1) ;

/// @brief Method bool4x2, addr 0x181ee2780, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 bool4x2(bool  m00, bool  m01, bool  m10, bool  m11, bool  m20, bool  m21, bool  m30, bool  m31) ;

/// @brief Method bool4x2, addr 0x181ee27e0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 bool4x2(bool  v) ;

/// @brief Method bool4x3, addr 0x181ee2880, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 bool4x3(::Unity::Mathematics::bool4  c0, ::Unity::Mathematics::bool4  c1, ::Unity::Mathematics::bool4  c2) ;

/// @brief Method bool4x3, addr 0x181ee2890, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 bool4x3(bool  m00, bool  m01, bool  m02, bool  m10, bool  m11, bool  m12, bool  m20, bool  m21, bool  m22, bool  m30, bool  m31, bool  m32) ;

/// @brief Method bool4x3, addr 0x181ee2830, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 bool4x3(bool  v) ;

/// @brief Method bool4x4, addr 0x181ea3480, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 bool4x4(::Unity::Mathematics::bool4  c0, ::Unity::Mathematics::bool4  c1, ::Unity::Mathematics::bool4  c2, ::Unity::Mathematics::bool4  c3) ;

/// @brief Method bool4x4, addr 0x181ee2910, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 bool4x4(bool  m00, bool  m01, bool  m02, bool  m03, bool  m10, bool  m11, bool  m12, bool  m13, bool  m20, bool  m21, bool  m22, bool  m23, bool  m30, bool  m31, bool  m32, bool  m33) ;

/// @brief Method bool4x4, addr 0x181ee29c0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 bool4x4(bool  v) ;

/// @brief Method ceil, addr 0x181ee2ac0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 ceil(::Unity::Mathematics::double2  x) ;

/// @brief Method ceil, addr 0x181ee2a20, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 ceil(::Unity::Mathematics::double3  x) ;

/// @brief Method ceil, addr 0x181ee2b20, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 ceil(::Unity::Mathematics::double4  x) ;

/// @brief Method ceil, addr 0x181ee2a70, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 ceil(::Unity::Mathematics::float2  x) ;

/// @brief Method ceil, addr 0x181ee2b80, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 ceil(::Unity::Mathematics::float3  x) ;

/// @brief Method ceil, addr 0x181ee2b00, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 ceil(::Unity::Mathematics::float4  x) ;

/// @brief Method ceil, addr 0x18170f400, size 0x10, virtual false, abstract: false, final false
static inline double_t ceil(double_t  x) ;

/// @brief Method ceil, addr 0x181907e30, size 0x20, virtual false, abstract: false, final false
static inline float_t ceil(float_t  x) ;

/// @brief Method ceillog2, addr 0x181ee2ce0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 ceillog2(::Unity::Mathematics::int2  x) ;

/// @brief Method ceillog2, addr 0x181ee2ce0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 ceillog2(::Unity::Mathematics::uint2  x) ;

/// @brief Method ceillog2, addr 0x181ee2bf0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 ceillog2(::Unity::Mathematics::int3  x) ;

/// @brief Method ceillog2, addr 0x181ee2bf0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 ceillog2(::Unity::Mathematics::uint3  x) ;

/// @brief Method ceillog2, addr 0x181ee2c60, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 ceillog2(::Unity::Mathematics::int4  x) ;

/// @brief Method ceillog2, addr 0x181ee2c60, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 ceillog2(::Unity::Mathematics::uint4  x) ;

/// @brief Method ceillog2, addr 0x181eab130, size 0x20, virtual false, abstract: false, final false
static inline int32_t ceillog2(int32_t  x) ;

/// @brief Method ceillog2, addr 0x181eab130, size 0x20, virtual false, abstract: false, final false
static inline int32_t ceillog2(uint32_t  x) ;

/// @brief Method ceilpow2, addr 0x181ee2ea0, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 ceilpow2(::Unity::Mathematics::int2  x) ;

/// @brief Method ceilpow2, addr 0x181ee3030, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 ceilpow2(::Unity::Mathematics::int3  x) ;

/// @brief Method ceilpow2, addr 0x181ee3400, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 ceilpow2(::Unity::Mathematics::int4  x) ;

/// @brief Method ceilpow2, addr 0x181ee3270, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 ceilpow2(::Unity::Mathematics::uint2  x) ;

/// @brief Method ceilpow2, addr 0x181ee2d60, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 ceilpow2(::Unity::Mathematics::uint3  x) ;

/// @brief Method ceilpow2, addr 0x181ee3210, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 ceilpow2(::Unity::Mathematics::uint4  x) ;

/// @brief Method ceilpow2, addr 0x181110370, size 0x3790, virtual false, abstract: false, final false
static inline int32_t ceilpow2(int32_t  x) ;

/// @brief Method ceilpow2, addr 0x181ee31c0, size 0x50, virtual false, abstract: false, final false
static inline int64_t ceilpow2(int64_t  x) ;

/// @brief Method ceilpow2, addr 0x181ee2d30, size 0x30, virtual false, abstract: false, final false
static inline uint32_t ceilpow2(uint32_t  x) ;

/// @brief Method ceilpow2, addr 0x181ee3170, size 0x50, virtual false, abstract: false, final false
static inline uint64_t ceilpow2(uint64_t  x) ;

/// @brief Method chgsign, addr 0x181ee3460, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 chgsign(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method chgsign, addr 0x181ee34c0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 chgsign(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method chgsign, addr 0x181ee3550, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 chgsign(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method chgsign, addr 0x181ee3530, size 0x20, virtual false, abstract: false, final false
static inline float_t chgsign(float_t  x, float_t  y) ;

/// @brief Method clamp, addr 0x181ee3cc0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 clamp(::Unity::Mathematics::double2  valueToClamp, ::Unity::Mathematics::double2  lowerBound, ::Unity::Mathematics::double2  upperBound) ;

/// @brief Method clamp, addr 0x181ee3670, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 clamp(::Unity::Mathematics::double3  valueToClamp, ::Unity::Mathematics::double3  lowerBound, ::Unity::Mathematics::double3  upperBound) ;

/// @brief Method clamp, addr 0x181edb450, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 clamp(::Unity::Mathematics::double4  valueToClamp, ::Unity::Mathematics::double4  lowerBound, ::Unity::Mathematics::double4  upperBound) ;

/// @brief Method clamp, addr 0x181ee37e0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 clamp(::Unity::Mathematics::float2  valueToClamp, ::Unity::Mathematics::float2  lowerBound, ::Unity::Mathematics::float2  upperBound) ;

/// @brief Method clamp, addr 0x181ee38e0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 clamp(::Unity::Mathematics::float3  valueToClamp, ::Unity::Mathematics::float3  lowerBound, ::Unity::Mathematics::float3  upperBound) ;

/// @brief Method clamp, addr 0x181ee3620, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 clamp(::Unity::Mathematics::float4  valueToClamp, ::Unity::Mathematics::float4  lowerBound, ::Unity::Mathematics::float4  upperBound) ;

/// @brief Method clamp, addr 0x181ee3c60, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 clamp(::Unity::Mathematics::int2  valueToClamp, ::Unity::Mathematics::int2  lowerBound, ::Unity::Mathematics::int2  upperBound) ;

/// @brief Method clamp, addr 0x181ee3a20, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 clamp(::Unity::Mathematics::int3  valueToClamp, ::Unity::Mathematics::int3  lowerBound, ::Unity::Mathematics::int3  upperBound) ;

/// @brief Method clamp, addr 0x181ee3ae0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 clamp(::Unity::Mathematics::int4  valueToClamp, ::Unity::Mathematics::int4  lowerBound, ::Unity::Mathematics::int4  upperBound) ;

/// @brief Method clamp, addr 0x181ee3780, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 clamp(::Unity::Mathematics::uint2  valueToClamp, ::Unity::Mathematics::uint2  lowerBound, ::Unity::Mathematics::uint2  upperBound) ;

/// @brief Method clamp, addr 0x181ee3ba0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 clamp(::Unity::Mathematics::uint3  valueToClamp, ::Unity::Mathematics::uint3  lowerBound, ::Unity::Mathematics::uint3  upperBound) ;

/// @brief Method clamp, addr 0x181ee3570, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 clamp(::Unity::Mathematics::uint4  valueToClamp, ::Unity::Mathematics::uint4  lowerBound, ::Unity::Mathematics::uint4  upperBound) ;

/// @brief Method clamp, addr 0x181ee35d0, size 0x50, virtual false, abstract: false, final false
static inline double_t clamp(double_t  valueToClamp, double_t  lowerBound, double_t  upperBound) ;

/// @brief Method clamp, addr 0x181ee3b40, size 0x60, virtual false, abstract: false, final false
static inline float_t clamp(float_t  valueToClamp, float_t  lowerBound, float_t  upperBound) ;

/// @brief Method clamp, addr 0x181ee3b20, size 0x20, virtual false, abstract: false, final false
static inline int32_t clamp(int32_t  valueToClamp, int32_t  lowerBound, int32_t  upperBound) ;

/// @brief Method clamp, addr 0x181ee38c0, size 0x20, virtual false, abstract: false, final false
static inline int64_t clamp(int64_t  valueToClamp, int64_t  lowerBound, int64_t  upperBound) ;

/// @brief Method clamp, addr 0x181ee3ac0, size 0x20, virtual false, abstract: false, final false
static inline uint32_t clamp(uint32_t  valueToClamp, uint32_t  lowerBound, uint32_t  upperBound) ;

/// @brief Method clamp, addr 0x181ee3c40, size 0x20, virtual false, abstract: false, final false
static inline uint64_t clamp(uint64_t  valueToClamp, uint64_t  lowerBound, uint64_t  upperBound) ;

/// @brief Method cmax, addr 0x181ee3fa0, size 0x40, virtual false, abstract: false, final false
static inline double_t cmax(::Unity::Mathematics::double2  x) ;

/// @brief Method cmax, addr 0x181ee4000, size 0x50, virtual false, abstract: false, final false
static inline double_t cmax(::Unity::Mathematics::double3  x) ;

/// @brief Method cmax, addr 0x181ee3ef0, size 0x70, virtual false, abstract: false, final false
static inline double_t cmax(::Unity::Mathematics::double4  x) ;

/// @brief Method cmax, addr 0x181ee3e70, size 0x40, virtual false, abstract: false, final false
static inline float_t cmax(::Unity::Mathematics::float2  x) ;

/// @brief Method cmax, addr 0x181ee3d70, size 0x60, virtual false, abstract: false, final false
static inline float_t cmax(::Unity::Mathematics::float3  x) ;

/// @brief Method cmax, addr 0x181ee3df0, size 0x80, virtual false, abstract: false, final false
static inline float_t cmax(::Unity::Mathematics::float4  x) ;

/// @brief Method cmax, addr 0x181ee3f80, size 0x20, virtual false, abstract: false, final false
static inline int32_t cmax(::Unity::Mathematics::int2  x) ;

/// @brief Method cmax, addr 0x181ee3fe0, size 0x20, virtual false, abstract: false, final false
static inline int32_t cmax(::Unity::Mathematics::int3  x) ;

/// @brief Method cmax, addr 0x181ee3eb0, size 0x20, virtual false, abstract: false, final false
static inline int32_t cmax(::Unity::Mathematics::int4  x) ;

/// @brief Method cmax, addr 0x181ee3dd0, size 0x20, virtual false, abstract: false, final false
static inline uint32_t cmax(::Unity::Mathematics::uint2  x) ;

/// @brief Method cmax, addr 0x181ee3f60, size 0x20, virtual false, abstract: false, final false
static inline uint32_t cmax(::Unity::Mathematics::uint3  x) ;

/// @brief Method cmax, addr 0x181ee3ed0, size 0x20, virtual false, abstract: false, final false
static inline uint32_t cmax(::Unity::Mathematics::uint4  x) ;

/// @brief Method cmin, addr 0x181ee4120, size 0x40, virtual false, abstract: false, final false
static inline double_t cmin(::Unity::Mathematics::double2  x) ;

/// @brief Method cmin, addr 0x181ee42c0, size 0x50, virtual false, abstract: false, final false
static inline double_t cmin(::Unity::Mathematics::double3  x) ;

/// @brief Method cmin, addr 0x181ee4090, size 0x70, virtual false, abstract: false, final false
static inline double_t cmin(::Unity::Mathematics::double4  x) ;

/// @brief Method cmin, addr 0x181ee4260, size 0x40, virtual false, abstract: false, final false
static inline float_t cmin(::Unity::Mathematics::float2  x) ;

/// @brief Method cmin, addr 0x181ee4180, size 0x60, virtual false, abstract: false, final false
static inline float_t cmin(::Unity::Mathematics::float3  x) ;

/// @brief Method cmin, addr 0x181ee41e0, size 0x80, virtual false, abstract: false, final false
static inline float_t cmin(::Unity::Mathematics::float4  x) ;

/// @brief Method cmin, addr 0x181ee42a0, size 0x20, virtual false, abstract: false, final false
static inline int32_t cmin(::Unity::Mathematics::int2  x) ;

/// @brief Method cmin, addr 0x181ee4050, size 0x20, virtual false, abstract: false, final false
static inline int32_t cmin(::Unity::Mathematics::int3  x) ;

/// @brief Method cmin, addr 0x181ee4100, size 0x20, virtual false, abstract: false, final false
static inline int32_t cmin(::Unity::Mathematics::int4  x) ;

/// @brief Method cmin, addr 0x181ee4160, size 0x20, virtual false, abstract: false, final false
static inline uint32_t cmin(::Unity::Mathematics::uint2  x) ;

/// @brief Method cmin, addr 0x181ee4310, size 0x20, virtual false, abstract: false, final false
static inline uint32_t cmin(::Unity::Mathematics::uint3  x) ;

/// @brief Method cmin, addr 0x181ee4070, size 0x20, virtual false, abstract: false, final false
static inline uint32_t cmin(::Unity::Mathematics::uint4  x) ;

/// @brief Method compress, addr 0x181ee4330, size 0x80, virtual false, abstract: false, final false
static inline int32_t compress(float_t*  output, int32_t  index, ::Unity::Mathematics::float4  val, ::Unity::Mathematics::bool4  mask) ;

/// @brief Method compress, addr 0x181ee43b0, size 0x60, virtual false, abstract: false, final false
static inline int32_t compress(int32_t*  output, int32_t  index, ::Unity::Mathematics::int4  val, ::Unity::Mathematics::bool4  mask) ;

/// @brief Method compress, addr 0x181ee4330, size 0x80, virtual false, abstract: false, final false
static inline int32_t compress(uint32_t*  output, int32_t  index, ::Unity::Mathematics::uint4  val, ::Unity::Mathematics::bool4  mask) ;

/// @brief Method conjugate, addr 0x181ee4410, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion conjugate(::Unity::Mathematics::quaternion  q) ;

/// @brief Method cos, addr 0x181ee4540, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 cos(::Unity::Mathematics::double2  x) ;

/// @brief Method cos, addr 0x181ee4480, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 cos(::Unity::Mathematics::double3  x) ;

/// @brief Method cos, addr 0x181ee4580, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 cos(::Unity::Mathematics::double4  x) ;

/// @brief Method cos, addr 0x181ee4430, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 cos(::Unity::Mathematics::float2  x) ;

/// @brief Method cos, addr 0x181ee44d0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 cos(::Unity::Mathematics::float3  x) ;

/// @brief Method cos, addr 0x181ee45e0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 cos(::Unity::Mathematics::float4  x) ;

/// @brief Method cos, addr 0x18170f540, size 0x10, virtual false, abstract: false, final false
static inline double_t cos(double_t  x) ;

/// @brief Method cos, addr 0x181908210, size 0x20, virtual false, abstract: false, final false
static inline float_t cos(float_t  x) ;

/// @brief Method cosh, addr 0x181ee48b0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 cosh(::Unity::Mathematics::double2  x) ;

/// @brief Method cosh, addr 0x181ee46f0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 cosh(::Unity::Mathematics::double3  x) ;

/// @brief Method cosh, addr 0x181ee47b0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 cosh(::Unity::Mathematics::double4  x) ;

/// @brief Method cosh, addr 0x181ee4680, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 cosh(::Unity::Mathematics::float2  x) ;

/// @brief Method cosh, addr 0x181ee4740, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 cosh(::Unity::Mathematics::float3  x) ;

/// @brief Method cosh, addr 0x181ee4810, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 cosh(::Unity::Mathematics::float4  x) ;

/// @brief Method cosh, addr 0x18170f550, size 0x10, virtual false, abstract: false, final false
static inline double_t cosh(double_t  x) ;

/// @brief Method cosh, addr 0x181ee46d0, size 0x20, virtual false, abstract: false, final false
static inline float_t cosh(float_t  x) ;

/// @brief Method countbits, addr 0x181ee4a80, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 countbits(::Unity::Mathematics::int2  x) ;

/// @brief Method countbits, addr 0x181edb590, size 0x1a0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 countbits(::Unity::Mathematics::uint2  x) ;

/// @brief Method countbits, addr 0x181ee4c10, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 countbits(::Unity::Mathematics::int3  x) ;

/// @brief Method countbits, addr 0x181ee4960, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 countbits(::Unity::Mathematics::uint3  x) ;

/// @brief Method countbits, addr 0x181ee4b40, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 countbits(::Unity::Mathematics::int4  x) ;

/// @brief Method countbits, addr 0x181ee4aa0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 countbits(::Unity::Mathematics::uint4  x) ;

/// @brief Method countbits, addr 0x181ee4cf0, size 0x40, virtual false, abstract: false, final false
static inline int32_t countbits(int32_t  x) ;

/// @brief Method countbits, addr 0x181ee48f0, size 0x70, virtual false, abstract: false, final false
static inline int32_t countbits(int64_t  x) ;

/// @brief Method countbits, addr 0x181ee4cf0, size 0x40, virtual false, abstract: false, final false
static inline int32_t countbits(uint32_t  x) ;

/// @brief Method countbits, addr 0x181ee48f0, size 0x70, virtual false, abstract: false, final false
static inline int32_t countbits(uint64_t  x) ;

/// @brief Method cross, addr 0x181ee4da0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 cross(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method cross, addr 0x181ee4d30, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 cross(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method csum, addr 0x181ee4e60, size 0x10, virtual false, abstract: false, final false
static inline double_t csum(::Unity::Mathematics::double2  x) ;

/// @brief Method csum, addr 0x181ee4e40, size 0x10, virtual false, abstract: false, final false
static inline double_t csum(::Unity::Mathematics::double3  x) ;

/// @brief Method csum, addr 0x181ee4e70, size 0x20, virtual false, abstract: false, final false
static inline double_t csum(::Unity::Mathematics::double4  x) ;

/// @brief Method csum, addr 0x181ee4ea0, size 0x20, virtual false, abstract: false, final false
static inline float_t csum(::Unity::Mathematics::float2  x) ;

/// @brief Method csum, addr 0x181ee4ec0, size 0x10, virtual false, abstract: false, final false
static inline float_t csum(::Unity::Mathematics::float3  x) ;

/// @brief Method csum, addr 0x181ee4e10, size 0x20, virtual false, abstract: false, final false
static inline float_t csum(::Unity::Mathematics::float4  x) ;

/// @brief Method csum, addr 0x181ee4e30, size 0x10, virtual false, abstract: false, final false
static inline int32_t csum(::Unity::Mathematics::int2  x) ;

/// @brief Method csum, addr 0x181ee4e90, size 0x10, virtual false, abstract: false, final false
static inline int32_t csum(::Unity::Mathematics::int3  x) ;

/// @brief Method csum, addr 0x181ee4e50, size 0x10, virtual false, abstract: false, final false
static inline int32_t csum(::Unity::Mathematics::int4  x) ;

/// @brief Method csum, addr 0x181ee4e30, size 0x10, virtual false, abstract: false, final false
static inline uint32_t csum(::Unity::Mathematics::uint2  x) ;

/// @brief Method csum, addr 0x181ee4e90, size 0x10, virtual false, abstract: false, final false
static inline uint32_t csum(::Unity::Mathematics::uint3  x) ;

/// @brief Method csum, addr 0x181ee4e50, size 0x10, virtual false, abstract: false, final false
static inline uint32_t csum(::Unity::Mathematics::uint4  x) ;

/// @brief Method decompose, addr 0x181ee4ed0, size 0x120, virtual false, abstract: false, final false
static inline void decompose(::Unity::Mathematics::AffineTransform  a, ::by_ref<::Unity::Mathematics::float3>  translation, ::by_ref<::Unity::Mathematics::quaternion>  rotation, ::by_ref<::Unity::Mathematics::float3>  scale) ;

/// @brief Method degrees, addr 0x181ee5130, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 degrees(::Unity::Mathematics::double2  x) ;

/// @brief Method degrees, addr 0x181ee5000, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 degrees(::Unity::Mathematics::double3  x) ;

/// @brief Method degrees, addr 0x181ee5040, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 degrees(::Unity::Mathematics::double4  x) ;

/// @brief Method degrees, addr 0x181ee50a0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 degrees(::Unity::Mathematics::float2  x) ;

/// @brief Method degrees, addr 0x181ee50f0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 degrees(::Unity::Mathematics::float3  x) ;

/// @brief Method degrees, addr 0x181ee50d0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 degrees(::Unity::Mathematics::float4  x) ;

/// @brief Method degrees, addr 0x181ee5090, size 0x10, virtual false, abstract: false, final false
static inline double_t degrees(double_t  x) ;

/// @brief Method degrees, addr 0x181ee4ff0, size 0x10, virtual false, abstract: false, final false
static inline float_t degrees(float_t  x) ;

/// @brief Method determinant, addr 0x181ee5a90, size 0x20, virtual false, abstract: false, final false
static inline double_t determinant(::Unity::Mathematics::double2x2  m) ;

/// @brief Method determinant, addr 0x181ee53d0, size 0xc0, virtual false, abstract: false, final false
static inline double_t determinant(::Unity::Mathematics::double3x3  m) ;

/// @brief Method determinant, addr 0x181ee5160, size 0x250, virtual false, abstract: false, final false
static inline double_t determinant(::Unity::Mathematics::double4x4  m) ;

/// @brief Method determinant, addr 0x181ee5ab0, size 0x20, virtual false, abstract: false, final false
static inline float_t determinant(::Unity::Mathematics::float2x2  m) ;

/// @brief Method determinant, addr 0x181ee5940, size 0xb0, virtual false, abstract: false, final false
static inline float_t determinant(::Unity::Mathematics::float3x3  m) ;

/// @brief Method determinant, addr 0x181ee5490, size 0x290, virtual false, abstract: false, final false
static inline float_t determinant(::Unity::Mathematics::float4x4  m) ;

/// @brief Method determinant, addr 0x181ee53b0, size 0x20, virtual false, abstract: false, final false
static inline int32_t determinant(::Unity::Mathematics::int2x2  m) ;

/// @brief Method determinant, addr 0x181ee59f0, size 0xa0, virtual false, abstract: false, final false
static inline int32_t determinant(::Unity::Mathematics::int3x3  m) ;

/// @brief Method determinant, addr 0x181ee5720, size 0x220, virtual false, abstract: false, final false
static inline int32_t determinant(::Unity::Mathematics::int4x4  m) ;

/// @brief Method distance, addr 0x181ee5c20, size 0x40, virtual false, abstract: false, final false
static inline double_t distance(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method distance, addr 0x181ee5ad0, size 0x60, virtual false, abstract: false, final false
static inline double_t distance(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method distance, addr 0x181ee5b80, size 0x70, virtual false, abstract: false, final false
static inline double_t distance(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method distance, addr 0x181ee5c80, size 0x20, virtual false, abstract: false, final false
static inline double_t distance(double_t  x, double_t  y) ;

/// @brief Method distance, addr 0x181ee5ca0, size 0x40, virtual false, abstract: false, final false
static inline float_t distance(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method distance, addr 0x181ee5b30, size 0x50, virtual false, abstract: false, final false
static inline float_t distance(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method distance, addr 0x181ee5bf0, size 0x30, virtual false, abstract: false, final false
static inline float_t distance(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method distance, addr 0x181ee5c60, size 0x20, virtual false, abstract: false, final false
static inline float_t distance(float_t  x, float_t  y) ;

/// @brief Method distancesq, addr 0x181ee5e70, size 0x30, virtual false, abstract: false, final false
static inline double_t distancesq(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method distancesq, addr 0x181ee5db0, size 0x50, virtual false, abstract: false, final false
static inline double_t distancesq(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method distancesq, addr 0x181ee5d50, size 0x60, virtual false, abstract: false, final false
static inline double_t distancesq(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method distancesq, addr 0x181ee5e60, size 0x10, virtual false, abstract: false, final false
static inline double_t distancesq(double_t  x, double_t  y) ;

/// @brief Method distancesq, addr 0x181ee5ce0, size 0x40, virtual false, abstract: false, final false
static inline float_t distancesq(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method distancesq, addr 0x181ee5e10, size 0x50, virtual false, abstract: false, final false
static inline float_t distancesq(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method distancesq, addr 0x181ee5d20, size 0x30, virtual false, abstract: false, final false
static inline float_t distancesq(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method distancesq, addr 0x181ee5e00, size 0x10, virtual false, abstract: false, final false
static inline float_t distancesq(float_t  x, float_t  y) ;

/// @brief Method dot, addr 0x181ee5fd0, size 0x20, virtual false, abstract: false, final false
static inline double_t dot(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method dot, addr 0x181ee5fa0, size 0x30, virtual false, abstract: false, final false
static inline double_t dot(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method dot, addr 0x181ee5eb0, size 0x40, virtual false, abstract: false, final false
static inline double_t dot(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method dot, addr 0x181ee5f60, size 0x10, virtual false, abstract: false, final false
static inline double_t dot(double_t  x, double_t  y) ;

/// @brief Method dot, addr 0x181ee5ef0, size 0x20, virtual false, abstract: false, final false
static inline float_t dot(::Unity::Mathematics::quaternion  a, ::Unity::Mathematics::quaternion  b) ;

/// @brief Method dot, addr 0x1819095a0, size 0x30, virtual false, abstract: false, final false
static inline float_t dot(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method dot, addr 0x181931de0, size 0x60, virtual false, abstract: false, final false
static inline float_t dot(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method dot, addr 0x181ee5ef0, size 0x20, virtual false, abstract: false, final false
static inline float_t dot(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method dot, addr 0x181ee5f90, size 0x10, virtual false, abstract: false, final false
static inline float_t dot(float_t  x, float_t  y) ;

/// @brief Method dot, addr 0x181ee5f70, size 0x20, virtual false, abstract: false, final false
static inline int32_t dot(::Unity::Mathematics::int2  x, ::Unity::Mathematics::int2  y) ;

/// @brief Method dot, addr 0x181ee5f40, size 0x20, virtual false, abstract: false, final false
static inline int32_t dot(::Unity::Mathematics::int3  x, ::Unity::Mathematics::int3  y) ;

/// @brief Method dot, addr 0x181ee5f10, size 0x30, virtual false, abstract: false, final false
static inline int32_t dot(::Unity::Mathematics::int4  x, ::Unity::Mathematics::int4  y) ;

/// @brief Method dot, addr 0x181ee5ea0, size 0x10, virtual false, abstract: false, final false
static inline int32_t dot(int32_t  x, int32_t  y) ;

/// @brief Method dot, addr 0x181ee5f70, size 0x20, virtual false, abstract: false, final false
static inline uint32_t dot(::Unity::Mathematics::uint2  x, ::Unity::Mathematics::uint2  y) ;

/// @brief Method dot, addr 0x181ee5f40, size 0x20, virtual false, abstract: false, final false
static inline uint32_t dot(::Unity::Mathematics::uint3  x, ::Unity::Mathematics::uint3  y) ;

/// @brief Method dot, addr 0x181ee5f10, size 0x30, virtual false, abstract: false, final false
static inline uint32_t dot(::Unity::Mathematics::uint4  x, ::Unity::Mathematics::uint4  y) ;

/// @brief Method dot, addr 0x181ee5ea0, size 0x10, virtual false, abstract: false, final false
static inline uint32_t dot(uint32_t  x, uint32_t  y) ;

/// @brief Method double2, addr 0x181ee6130, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::bool2  v) ;

/// @brief Method double2, addr 0x181ee6100, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::float2  v) ;

/// @brief Method double2, addr 0x181ee5ff0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::half  v) ;

/// @brief Method double2, addr 0x181ee6230, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::half2  v) ;

/// @brief Method double2, addr 0x181ee6170, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::int2  v) ;

/// @brief Method double2, addr 0x181ee61a0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::uint2  v) ;

/// @brief Method double2, addr 0x181ee6320, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(bool  v) ;

/// @brief Method double2, addr 0x181ea3320, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(double_t  v) ;

/// @brief Method double2, addr 0x181ee61f0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(float_t  v) ;

/// @brief Method double2, addr 0x181ee61d0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(int32_t  v) ;

/// @brief Method double2, addr 0x181ee60d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(uint32_t  v) ;

/// @brief Method double2, addr 0x181ea3520, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(double_t  x, double_t  y) ;

/// @brief Method double2, addr 0x181ee6210, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::double2  xy) ;

/// @brief Method double2x2, addr 0x181ee6380, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::double2  c0, ::Unity::Mathematics::double2  c1) ;

/// @brief Method double2x2, addr 0x181ee6450, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(double_t  m00, double_t  m01, double_t  m10, double_t  m11) ;

/// @brief Method double2x2, addr 0x181ee63b0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method double2x2, addr 0x181ee6470, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::float2x2  v) ;

/// @brief Method double2x2, addr 0x181ee6500, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::int2x2  v) ;

/// @brief Method double2x2, addr 0x181ee6560, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method double2x2, addr 0x181ee65c0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(bool  v) ;

/// @brief Method double2x2, addr 0x181ee63a0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(double_t  v) ;

/// @brief Method double2x2, addr 0x181ee6340, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(float_t  v) ;

/// @brief Method double2x2, addr 0x181ee64c0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(int32_t  v) ;

/// @brief Method double2x2, addr 0x181ee6410, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(uint32_t  v) ;

/// @brief Method double2x3, addr 0x181ee69f0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::double2  c0, ::Unity::Mathematics::double2  c1, ::Unity::Mathematics::double2  c2) ;

/// @brief Method double2x3, addr 0x181ee69b0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(double_t  m00, double_t  m01, double_t  m02, double_t  m10, double_t  m11, double_t  m12) ;

/// @brief Method double2x3, addr 0x181ee6870, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method double2x3, addr 0x181ee66c0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::float2x3  v) ;

/// @brief Method double2x3, addr 0x181ee6920, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::int2x3  v) ;

/// @brief Method double2x3, addr 0x181ee67d0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::uint2x3  v) ;

/// @brief Method double2x3, addr 0x181ee6740, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(bool  v) ;

/// @brief Method double2x3, addr 0x181ee66a0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(double_t  v) ;

/// @brief Method double2x3, addr 0x181ee6650, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(float_t  v) ;

/// @brief Method double2x3, addr 0x181ee6770, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(int32_t  v) ;

/// @brief Method double2x3, addr 0x181ee65f0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(uint32_t  v) ;

/// @brief Method double2x4, addr 0x181ee6a20, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::double2  c0, ::Unity::Mathematics::double2  c1, ::Unity::Mathematics::double2  c2, ::Unity::Mathematics::double2  c3) ;

/// @brief Method double2x4, addr 0x181ee6ef0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(double_t  m00, double_t  m01, double_t  m02, double_t  m03, double_t  m10, double_t  m11, double_t  m12, double_t  m13) ;

/// @brief Method double2x4, addr 0x181ee6b70, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method double2x4, addr 0x181ee6df0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::float2x4  v) ;

/// @brief Method double2x4, addr 0x181ee6c30, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::int2x4  v) ;

/// @brief Method double2x4, addr 0x181ee6ab0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method double2x4, addr 0x181ee6a70, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(bool  v) ;

/// @brief Method double2x4, addr 0x181ee6ce0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(double_t  v) ;

/// @brief Method double2x4, addr 0x181ee6d00, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(float_t  v) ;

/// @brief Method double2x4, addr 0x181ee6e80, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(int32_t  v) ;

/// @brief Method double2x4, addr 0x181ee6d70, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(uint32_t  v) ;

/// @brief Method double3, addr 0x181ee7170, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::bool3  v) ;

/// @brief Method double3, addr 0x181ee7420, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::float3  v) ;

/// @brief Method double3, addr 0x181ee72e0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::half  v) ;

/// @brief Method double3, addr 0x181ee6fc0, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::half3  v) ;

/// @brief Method double3, addr 0x181ee6f70, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::int3  v) ;

/// @brief Method double3, addr 0x181ee71e0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::uint3  v) ;

/// @brief Method double3, addr 0x181ee72b0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(bool  v) ;

/// @brief Method double3, addr 0x181ee7160, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(double_t  v) ;

/// @brief Method double3, addr 0x181ee6f40, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(float_t  v) ;

/// @brief Method double3, addr 0x181ee7260, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(int32_t  v) ;

/// @brief Method double3, addr 0x181ee7110, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(uint32_t  v) ;

/// @brief Method double3, addr 0x181ee7140, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(double_t  x, double_t  y, double_t  z) ;

/// @brief Method double3, addr 0x181ee7290, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(double_t  x, ::Unity::Mathematics::double2  yz) ;

/// @brief Method double3, addr 0x181ee71c0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::double2  xy, double_t  z) ;

/// @brief Method double3, addr 0x181ee7230, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::double3  xyz) ;

/// @brief Method double3x2, addr 0x181ee78a0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::double3  c0, ::Unity::Mathematics::double3  c1) ;

/// @brief Method double3x2, addr 0x181ee77c0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(double_t  m00, double_t  m01, double_t  m10, double_t  m11, double_t  m20, double_t  m21) ;

/// @brief Method double3x2, addr 0x181ee76a0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method double3x2, addr 0x181ee74d0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::float3x2  v) ;

/// @brief Method double3x2, addr 0x181ee7730, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::int3x2  v) ;

/// @brief Method double3x2, addr 0x181ee7580, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method double3x2, addr 0x181ee7620, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(bool  v) ;

/// @brief Method double3x2, addr 0x181ee7550, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(double_t  v) ;

/// @brief Method double3x2, addr 0x181ee7800, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(float_t  v) ;

/// @brief Method double3x2, addr 0x181ee7850, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(int32_t  v) ;

/// @brief Method double3x2, addr 0x181ee7460, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(uint32_t  v) ;

/// @brief Method double3x3, addr 0x181ee7d70, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::double3  c0, ::Unity::Mathematics::double3  c1, ::Unity::Mathematics::double3  c2) ;

/// @brief Method double3x3, addr 0x181ee7ab0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(double_t  m00, double_t  m01, double_t  m02, double_t  m10, double_t  m11, double_t  m12, double_t  m20, double_t  m21, double_t  m22) ;

/// @brief Method double3x3, addr 0x181ee7930, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method double3x3, addr 0x181ee7a00, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::float3x3  v) ;

/// @brief Method double3x3, addr 0x181ee7ba0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::int3x3  v) ;

/// @brief Method double3x3, addr 0x181ee7db0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method double3x3, addr 0x181ee7ce0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(bool  v) ;

/// @brief Method double3x3, addr 0x181ee7ea0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(double_t  v) ;

/// @brief Method double3x3, addr 0x181ee78d0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(float_t  v) ;

/// @brief Method double3x3, addr 0x181ee7c70, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(int32_t  v) ;

/// @brief Method double3x3, addr 0x181ee7b10, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(uint32_t  v) ;

/// @brief Method double3x4, addr 0x181ee8240, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::double3  c0, ::Unity::Mathematics::double3  c1, ::Unity::Mathematics::double3  c2, ::Unity::Mathematics::double3  c3) ;

/// @brief Method double3x4, addr 0x181ee7f30, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(double_t  m00, double_t  m01, double_t  m02, double_t  m03, double_t  m10, double_t  m11, double_t  m12, double_t  m13, double_t  m20, double_t  m21, double_t  m22, double_t  m23) ;

/// @brief Method double3x4, addr 0x181ee8590, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method double3x4, addr 0x181ee8050, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::float3x4  v) ;

/// @brief Method double3x4, addr 0x181ee8140, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::int3x4  v) ;

/// @brief Method double3x4, addr 0x181ee83d0, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method double3x4, addr 0x181ee84f0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(bool  v) ;

/// @brief Method double3x4, addr 0x181ee7ee0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(double_t  v) ;

/// @brief Method double3x4, addr 0x181ee8290, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(float_t  v) ;

/// @brief Method double3x4, addr 0x181ee7fc0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(int32_t  v) ;

/// @brief Method double3x4, addr 0x181ee8310, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(uint32_t  v) ;

/// @brief Method double4, addr 0x181ee86d0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::bool4  v) ;

/// @brief Method double4, addr 0x181ee8a30, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::float4  v) ;

/// @brief Method double4, addr 0x181ee8840, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::half  v) ;

/// @brief Method double4, addr 0x181ee86a0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::half4  v) ;

/// @brief Method double4, addr 0x181ee8ab0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::int4  v) ;

/// @brief Method double4, addr 0x181ee8b30, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::uint4  v) ;

/// @brief Method double4, addr 0x181ee8a80, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(bool  v) ;

/// @brief Method double4, addr 0x181ee63a0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(double_t  v) ;

/// @brief Method double4, addr 0x181ee87a0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(float_t  v) ;

/// @brief Method double4, addr 0x181ee8800, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(int32_t  v) ;

/// @brief Method double4, addr 0x181ee8b00, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(uint32_t  v) ;

/// @brief Method double4, addr 0x181e9ba90, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(double_t  x, double_t  y, double_t  z, double_t  w) ;

/// @brief Method double4, addr 0x181ee8760, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(double_t  x, double_t  y, ::Unity::Mathematics::double2  zw) ;

/// @brief Method double4, addr 0x181ee8780, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(double_t  x, ::Unity::Mathematics::double2  yz, double_t  w) ;

/// @brief Method double4, addr 0x181ee8a00, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(double_t  x, ::Unity::Mathematics::double3  yzw) ;

/// @brief Method double4, addr 0x181ee8b90, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double2  xy, double_t  z, double_t  w) ;

/// @brief Method double4, addr 0x181ee89d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double2  xy, ::Unity::Mathematics::double2  zw) ;

/// @brief Method double4, addr 0x181ee87d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double3  xyz, double_t  w) ;

/// @brief Method double4, addr 0x181ee8730, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double4  xyzw) ;

/// @brief Method double4x2, addr 0x181ee8bf0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::double4  c0, ::Unity::Mathematics::double4  c1) ;

/// @brief Method double4x2, addr 0x181ee8ea0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(double_t  m00, double_t  m01, double_t  m10, double_t  m11, double_t  m20, double_t  m21, double_t  m30, double_t  m31) ;

/// @brief Method double4x2, addr 0x181ee8ef0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method double4x2, addr 0x181ee8e00, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::float4x2  v) ;

/// @brief Method double4x2, addr 0x181ee8c20, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::int4x2  v) ;

/// @brief Method double4x2, addr 0x181ee8fa0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::uint4x2  v) ;

/// @brief Method double4x2, addr 0x181ee8d30, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(bool  v) ;

/// @brief Method double4x2, addr 0x181ee8cb0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(double_t  v) ;

/// @brief Method double4x2, addr 0x181ee8bb0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(float_t  v) ;

/// @brief Method double4x2, addr 0x181ee8ce0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(int32_t  v) ;

/// @brief Method double4x2, addr 0x181ee8d80, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(uint32_t  v) ;

/// @brief Method double4x3, addr 0x181ee93e0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::double4  c0, ::Unity::Mathematics::double4  c1, ::Unity::Mathematics::double4  c2) ;

/// @brief Method double4x3, addr 0x181ee92d0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(double_t  m00, double_t  m01, double_t  m02, double_t  m10, double_t  m11, double_t  m12, double_t  m20, double_t  m21, double_t  m22, double_t  m30, double_t  m31, double_t  m32) ;

/// @brief Method double4x3, addr 0x181ee91b0, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method double4x3, addr 0x181ee9670, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::float4x3  v) ;

/// @brief Method double4x3, addr 0x181ee94d0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::int4x3  v) ;

/// @brief Method double4x3, addr 0x181ee9050, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method double4x3, addr 0x181ee95b0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(bool  v) ;

/// @brief Method double4x3, addr 0x181ee9160, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(double_t  v) ;

/// @brief Method double4x3, addr 0x181ee9610, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(float_t  v) ;

/// @brief Method double4x3, addr 0x181ee9370, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(int32_t  v) ;

/// @brief Method double4x3, addr 0x181ee9420, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(uint32_t  v) ;

/// @brief Method double4x4, addr 0x181ee9a40, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::double4  c0, ::Unity::Mathematics::double4  c1, ::Unity::Mathematics::double4  c2, ::Unity::Mathematics::double4  c3) ;

/// @brief Method double4x4, addr 0x181ee9e90, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(double_t  m00, double_t  m01, double_t  m02, double_t  m03, double_t  m10, double_t  m11, double_t  m12, double_t  m13, double_t  m20, double_t  m21, double_t  m22, double_t  m23, double_t  m30, double_t  m31, double_t  m32, double_t  m33) ;

/// @brief Method double4x4, addr 0x181ee9db0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method double4x4, addr 0x181ee9bf0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::float4x4  v) ;

/// @brief Method double4x4, addr 0x181ee9920, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::int4x4  v) ;

/// @brief Method double4x4, addr 0x181ee9a90, size 0x160, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method double4x4, addr 0x181ee98a0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(bool  v) ;

/// @brief Method double4x4, addr 0x181ee9840, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(double_t  v) ;

/// @brief Method double4x4, addr 0x181ee9d30, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(float_t  v) ;

/// @brief Method double4x4, addr 0x181ee9e00, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(int32_t  v) ;

/// @brief Method double4x4, addr 0x181ee9750, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(uint32_t  v) ;

/// @brief Method down, addr 0x181ee9f60, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 down() ;

/// @brief Method exp, addr 0x181eea800, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 exp(::Unity::Mathematics::double2  x) ;

/// @brief Method exp, addr 0x181eea840, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 exp(::Unity::Mathematics::double3  x) ;

/// @brief Method exp, addr 0x181eea890, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 exp(::Unity::Mathematics::double4  x) ;

/// @brief Method exp, addr 0x181eea7b0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 exp(::Unity::Mathematics::float2  x) ;

/// @brief Method exp, addr 0x181eea8f0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 exp(::Unity::Mathematics::float3  x) ;

/// @brief Method exp, addr 0x181eea710, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 exp(::Unity::Mathematics::float4  x) ;

/// @brief Method exp, addr 0x181eea5c0, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion exp(::Unity::Mathematics::quaternion  q) ;

/// @brief Method exp, addr 0x18170f580, size 0x10, virtual false, abstract: false, final false
static inline double_t exp(double_t  x) ;

/// @brief Method exp, addr 0x1819082c0, size 0x20, virtual false, abstract: false, final false
static inline float_t exp(float_t  x) ;

/// @brief Method exp10, addr 0x181eea060, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 exp10(::Unity::Mathematics::double2  x) ;

/// @brief Method exp10, addr 0x181eea210, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 exp10(::Unity::Mathematics::double3  x) ;

/// @brief Method exp10, addr 0x181eea0b0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 exp10(::Unity::Mathematics::double4  x) ;

/// @brief Method exp10, addr 0x181eea000, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 exp10(::Unity::Mathematics::float2  x) ;

/// @brief Method exp10, addr 0x181ee9f80, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 exp10(::Unity::Mathematics::float3  x) ;

/// @brief Method exp10, addr 0x181eea130, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 exp10(::Unity::Mathematics::float4  x) ;

/// @brief Method exp10, addr 0x181eea200, size 0x10, virtual false, abstract: false, final false
static inline double_t exp10(double_t  x) ;

/// @brief Method exp10, addr 0x181eea280, size 0x20, virtual false, abstract: false, final false
static inline float_t exp10(float_t  x) ;

/// @brief Method exp2, addr 0x181eea350, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 exp2(::Unity::Mathematics::double2  x) ;

/// @brief Method exp2, addr 0x181eea3a0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 exp2(::Unity::Mathematics::double3  x) ;

/// @brief Method exp2, addr 0x181eea410, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 exp2(::Unity::Mathematics::double4  x) ;

/// @brief Method exp2, addr 0x181eea490, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 exp2(::Unity::Mathematics::float2  x) ;

/// @brief Method exp2, addr 0x181eea2a0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 exp2(::Unity::Mathematics::float3  x) ;

/// @brief Method exp2, addr 0x181eea4f0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 exp2(::Unity::Mathematics::float4  x) ;

/// @brief Method exp2, addr 0x181eea340, size 0x10, virtual false, abstract: false, final false
static inline double_t exp2(double_t  x) ;

/// @brief Method exp2, addr 0x181eea320, size 0x20, virtual false, abstract: false, final false
static inline float_t exp2(float_t  x) ;

/// @brief Method f16tof32, addr 0x181eeab40, size 0x230, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 f16tof32(::Unity::Mathematics::uint2  x) ;

/// @brief Method f16tof32, addr 0x181eea9c0, size 0x180, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 f16tof32(::Unity::Mathematics::uint3  x) ;

/// @brief Method f16tof32, addr 0x181eead70, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 f16tof32(::Unity::Mathematics::uint4  x) ;

/// @brief Method f16tof32, addr 0x181eea960, size 0x60, virtual false, abstract: false, final false
static inline float_t f16tof32(uint32_t  x) ;

/// @brief Method f32tof16, addr 0x181eeae90, size 0x260, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 f32tof16(::Unity::Mathematics::float2  x) ;

/// @brief Method f32tof16, addr 0x181eeb0f0, size 0x1c0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 f32tof16(::Unity::Mathematics::float3  x) ;

/// @brief Method f32tof16, addr 0x181eeb330, size 0x1c0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 f32tof16(::Unity::Mathematics::float4  x) ;

/// @brief Method f32tof16, addr 0x181eeb2b0, size 0x80, virtual false, abstract: false, final false
static inline uint32_t f32tof16(float_t  x) ;

/// @brief Method faceforward, addr 0x181eeb540, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 faceforward(::Unity::Mathematics::double2  n, ::Unity::Mathematics::double2  i, ::Unity::Mathematics::double2  ng) ;

/// @brief Method faceforward, addr 0x181eeb630, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 faceforward(::Unity::Mathematics::double3  n, ::Unity::Mathematics::double3  i, ::Unity::Mathematics::double3  ng) ;

/// @brief Method faceforward, addr 0x181eeb790, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 faceforward(::Unity::Mathematics::double4  n, ::Unity::Mathematics::double4  i, ::Unity::Mathematics::double4  ng) ;

/// @brief Method faceforward, addr 0x181eeb5c0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 faceforward(::Unity::Mathematics::float2  n, ::Unity::Mathematics::float2  i, ::Unity::Mathematics::float2  ng) ;

/// @brief Method faceforward, addr 0x181eeb6f0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 faceforward(::Unity::Mathematics::float3  n, ::Unity::Mathematics::float3  i, ::Unity::Mathematics::float3  ng) ;

/// @brief Method faceforward, addr 0x181eeb4f0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 faceforward(::Unity::Mathematics::float4  n, ::Unity::Mathematics::float4  i, ::Unity::Mathematics::float4  ng) ;

/// @brief Method fastinverse, addr 0x181eebe90, size 0x180, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 fastinverse(::Unity::Mathematics::double3x4  m) ;

/// @brief Method fastinverse, addr 0x181eeb930, size 0x3b0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 fastinverse(::Unity::Mathematics::double4x4  m) ;

/// @brief Method fastinverse, addr 0x181eebce0, size 0x1b0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 fastinverse(::Unity::Mathematics::float3x4  m) ;

/// @brief Method fastinverse, addr 0x181eeb870, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 fastinverse(::Unity::Mathematics::float4x4  m) ;

/// @brief Method float2, addr 0x181eec060, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::bool2  v) ;

/// @brief Method float2, addr 0x181eec040, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::double2  v) ;

/// @brief Method float2, addr 0x181eec220, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::half  v) ;

/// @brief Method float2, addr 0x181eec120, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::half2  v) ;

/// @brief Method float2, addr 0x181eec0d0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::int2  v) ;

/// @brief Method float2, addr 0x181eec0f0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::uint2  v) ;

/// @brief Method float2, addr 0x181eec010, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(bool  v) ;

/// @brief Method float2, addr 0x181eec2e0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(double_t  v) ;

/// @brief Method float2, addr 0x181eec300, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(float_t  v) ;

/// @brief Method float2, addr 0x181eec0b0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(int32_t  v) ;

/// @brief Method float2, addr 0x181eec1f0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(uint32_t  v) ;

/// @brief Method float2, addr 0x181eec0a0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(float_t  x, float_t  y) ;

/// @brief Method float2, addr 0x181913190, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::float2  xy) ;

/// @brief Method float2x2, addr 0x181eec3a0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::float2  c0, ::Unity::Mathematics::float2  c1) ;

/// @brief Method float2x2, addr 0x181eec310, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(float_t  m00, float_t  m01, float_t  m10, float_t  m11) ;

/// @brief Method float2x2, addr 0x181eec570, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method float2x2, addr 0x181eec3f0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::double2x2  v) ;

/// @brief Method float2x2, addr 0x181eec4d0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::int2x2  v) ;

/// @brief Method float2x2, addr 0x181eec330, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method float2x2, addr 0x181eec530, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(bool  v) ;

/// @brief Method float2x2, addr 0x181eec490, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(double_t  v) ;

/// @brief Method float2x2, addr 0x181e9f330, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(float_t  v) ;

/// @brief Method float2x2, addr 0x181eec3b0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(int32_t  v) ;

/// @brief Method float2x2, addr 0x181eec440, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(uint32_t  v) ;

/// @brief Method float2x3, addr 0x181d95eb0, size 0x630, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::float2  c0, ::Unity::Mathematics::float2  c1, ::Unity::Mathematics::float2  c2) ;

/// @brief Method float2x3, addr 0x181eec790, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(float_t  m00, float_t  m01, float_t  m02, float_t  m10, float_t  m11, float_t  m12) ;

/// @brief Method float2x3, addr 0x181eec7d0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method float2x3, addr 0x181eec720, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::double2x3  v) ;

/// @brief Method float2x3, addr 0x181eec990, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::int2x3  v) ;

/// @brief Method float2x3, addr 0x181eec880, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::uint2x3  v) ;

/// @brief Method float2x3, addr 0x181eec6c0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(bool  v) ;

/// @brief Method float2x3, addr 0x181eec5f0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(double_t  v) ;

/// @brief Method float2x3, addr 0x181eec5d0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(float_t  v) ;

/// @brief Method float2x3, addr 0x181eec940, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(int32_t  v) ;

/// @brief Method float2x3, addr 0x181eec640, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(uint32_t  v) ;

/// @brief Method float2x4, addr 0x181eeca20, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::float2  c0, ::Unity::Mathematics::float2  c1, ::Unity::Mathematics::float2  c2, ::Unity::Mathematics::float2  c3) ;

/// @brief Method float2x4, addr 0x181eecc80, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(float_t  m00, float_t  m01, float_t  m02, float_t  m03, float_t  m10, float_t  m11, float_t  m12, float_t  m13) ;

/// @brief Method float2x4, addr 0x181eecb20, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method float2x4, addr 0x181eeca90, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::double2x4  v) ;

/// @brief Method float2x4, addr 0x181eecea0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::int2x4  v) ;

/// @brief Method float2x4, addr 0x181eecdc0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method float2x4, addr 0x181eeca40, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(bool  v) ;

/// @brief Method float2x4, addr 0x181eecd50, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(double_t  v) ;

/// @brief Method float2x4, addr 0x181eecd40, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(float_t  v) ;

/// @brief Method float2x4, addr 0x181eeccd0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(int32_t  v) ;

/// @brief Method float2x4, addr 0x181eecbe0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(uint32_t  v) ;

/// @brief Method float3, addr 0x181eed2d0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::bool3  v) ;

/// @brief Method float3, addr 0x181eecf70, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::double3  v) ;

/// @brief Method float3, addr 0x181eecfe0, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::half  v) ;

/// @brief Method float3, addr 0x18150a0a0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::half3  v) ;

/// @brief Method float3, addr 0x181eed280, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::int3  v) ;

/// @brief Method float3, addr 0x181eed1b0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::uint3  v) ;

/// @brief Method float3, addr 0x181eecf40, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(bool  v) ;

/// @brief Method float3, addr 0x181eed100, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(double_t  v) ;

/// @brief Method float3, addr 0x181eed320, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(float_t  v) ;

/// @brief Method float3, addr 0x181eecfb0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(int32_t  v) ;

/// @brief Method float3, addr 0x181eed240, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(uint32_t  v) ;

/// @brief Method float3, addr 0x181eed130, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(float_t  x, float_t  y, float_t  z) ;

/// @brief Method float3, addr 0x181eed210, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(float_t  x, ::Unity::Mathematics::float2  yz) ;

/// @brief Method float3, addr 0x181eed150, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::float2  xy, float_t  z) ;

/// @brief Method float3, addr 0x181eed180, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::float3  xyz) ;

/// @brief Method float3x2, addr 0x181eed5f0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1) ;

/// @brief Method float3x2, addr 0x181eed620, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(float_t  m00, float_t  m01, float_t  m10, float_t  m11, float_t  m20, float_t  m21) ;

/// @brief Method float3x2, addr 0x181eed6e0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method float3x2, addr 0x181eed340, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::double3x2  v) ;

/// @brief Method float3x2, addr 0x181eed560, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::int3x2  v) ;

/// @brief Method float3x2, addr 0x181eed3a0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method float3x2, addr 0x181eed460, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(bool  v) ;

/// @brief Method float3x2, addr 0x181eed510, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(double_t  v) ;

/// @brief Method float3x2, addr 0x181eed770, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(float_t  v) ;

/// @brief Method float3x2, addr 0x181eed4c0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(int32_t  v) ;

/// @brief Method float3x2, addr 0x181eed660, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(uint32_t  v) ;

/// @brief Method float3x3, addr 0x181eedd10, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1, ::Unity::Mathematics::float3  c2) ;

/// @brief Method float3x3, addr 0x181eed9c0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::float4x4  f4x4) ;

/// @brief Method float3x3, addr 0x181eeda20, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(float_t  m00, float_t  m01, float_t  m02, float_t  m10, float_t  m11, float_t  m12, float_t  m20, float_t  m21, float_t  m22) ;

/// @brief Method float3x3, addr 0x181eedb00, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::quaternion  rotation) ;

/// @brief Method float3x3, addr 0x181eeddc0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method float3x3, addr 0x181eed860, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::double3x3  v) ;

/// @brief Method float3x3, addr 0x181eed900, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::int3x3  v) ;

/// @brief Method float3x3, addr 0x181eedb40, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method float3x3, addr 0x181eed7a0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(bool  v) ;

/// @brief Method float3x3, addr 0x181eedd50, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(double_t  v) ;

/// @brief Method float3x3, addr 0x181eed820, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(float_t  v) ;

/// @brief Method float3x3, addr 0x181eeda90, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(int32_t  v) ;

/// @brief Method float3x3, addr 0x181eedc60, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(uint32_t  v) ;

/// @brief Method float3x4, addr 0x181eee530, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1, ::Unity::Mathematics::float3  c2, ::Unity::Mathematics::float3  c3) ;

/// @brief Method float3x4, addr 0x181eee660, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(float_t  m00, float_t  m01, float_t  m02, float_t  m03, float_t  m10, float_t  m11, float_t  m12, float_t  m13, float_t  m20, float_t  m21, float_t  m22, float_t  m23) ;

/// @brief Method float3x4, addr 0x181eee0d0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::AffineTransform  transform) ;

/// @brief Method float3x4, addr 0x181eedf20, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method float3x4, addr 0x181eee2f0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::double3x4  v) ;

/// @brief Method float3x4, addr 0x181eee1b0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::int3x4  v) ;

/// @brief Method float3x4, addr 0x181eee3d0, size 0x160, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method float3x4, addr 0x181eee030, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(bool  v) ;

/// @brief Method float3x4, addr 0x181eede90, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(double_t  v) ;

/// @brief Method float3x4, addr 0x181eee2a0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(float_t  v) ;

/// @brief Method float3x4, addr 0x181eee120, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(int32_t  v) ;

/// @brief Method float3x4, addr 0x181eee580, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(uint32_t  v) ;

/// @brief Method float4, addr 0x181eee6f0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::bool4  v) ;

/// @brief Method float4, addr 0x181eec3f0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::double4  v) ;

/// @brief Method float4, addr 0x181eee940, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::half  v) ;

/// @brief Method float4, addr 0x181eee780, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::half4  v) ;

/// @brief Method float4, addr 0x181ea2530, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::int4  v) ;

/// @brief Method float4, addr 0x181eeec10, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::uint4  v) ;

/// @brief Method float4, addr 0x181eeeb50, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(bool  v) ;

/// @brief Method float4, addr 0x181eeeae0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(double_t  v) ;

/// @brief Method float4, addr 0x181eee770, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(float_t  v) ;

/// @brief Method float4, addr 0x181eeeb00, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(int32_t  v) ;

/// @brief Method float4, addr 0x181eec440, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(uint32_t  v) ;

/// @brief Method float4, addr 0x181eee750, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(float_t  x, float_t  y, float_t  z, float_t  w) ;

/// @brief Method float4, addr 0x181eee910, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(float_t  x, float_t  y, ::Unity::Mathematics::float2  zw) ;

/// @brief Method float4, addr 0x181eeeb20, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(float_t  x, ::Unity::Mathematics::float2  yz, float_t  w) ;

/// @brief Method float4, addr 0x181eeeb70, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(float_t  x, ::Unity::Mathematics::float3  yzw) ;

/// @brief Method float4, addr 0x181eeeab0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float2  xy, float_t  z, float_t  w) ;

/// @brief Method float4, addr 0x181eeebd0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float2  xy, ::Unity::Mathematics::float2  zw) ;

/// @brief Method float4, addr 0x181eeebb0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float3  xyz, float_t  w) ;

/// @brief Method float4, addr 0x1804f6880, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float4  xyzw) ;

/// @brief Method float4x2, addr 0x181e9ba70, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::float4  c0, ::Unity::Mathematics::float4  c1) ;

/// @brief Method float4x2, addr 0x181eeeee0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(float_t  m00, float_t  m01, float_t  m10, float_t  m11, float_t  m20, float_t  m21, float_t  m30, float_t  m31) ;

/// @brief Method float4x2, addr 0x181eef060, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method float4x2, addr 0x181eeee20, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::double4x2  v) ;

/// @brief Method float4x2, addr 0x181eeeec0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::int4x2  v) ;

/// @brief Method float4x2, addr 0x181eeed10, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::uint4x2  v) ;

/// @brief Method float4x2, addr 0x181eef030, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(bool  v) ;

/// @brief Method float4x2, addr 0x181eeec80, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(double_t  v) ;

/// @brief Method float4x2, addr 0x181eeee00, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(float_t  v) ;

/// @brief Method float4x2, addr 0x181eeef40, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(int32_t  v) ;

/// @brief Method float4x2, addr 0x181eeef70, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(uint32_t  v) ;

/// @brief Method float4x3, addr 0x181eef6e0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::float4  c0, ::Unity::Mathematics::float4  c1, ::Unity::Mathematics::float4  c2) ;

/// @brief Method float4x3, addr 0x181eef590, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(float_t  m00, float_t  m01, float_t  m02, float_t  m10, float_t  m11, float_t  m12, float_t  m20, float_t  m21, float_t  m22, float_t  m30, float_t  m31, float_t  m32) ;

/// @brief Method float4x3, addr 0x181eef3a0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method float4x3, addr 0x181eef0b0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::double4x3  v) ;

/// @brief Method float4x3, addr 0x181eef6b0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::int4x3  v) ;

/// @brief Method float4x3, addr 0x181eef420, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method float4x3, addr 0x181eef640, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(bool  v) ;

/// @brief Method float4x3, addr 0x181eef1b0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(double_t  v) ;

/// @brief Method float4x3, addr 0x181eef610, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(float_t  v) ;

/// @brief Method float4x3, addr 0x181eef680, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(int32_t  v) ;

/// @brief Method float4x3, addr 0x181eef280, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(uint32_t  v) ;

/// @brief Method float4x4, addr 0x181eefad0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::float4  c0, ::Unity::Mathematics::float4  c1, ::Unity::Mathematics::float4  c2, ::Unity::Mathematics::float4  c3) ;

/// @brief Method float4x4, addr 0x181eef700, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(float_t  m00, float_t  m01, float_t  m02, float_t  m03, float_t  m10, float_t  m11, float_t  m12, float_t  m13, float_t  m20, float_t  m21, float_t  m22, float_t  m23, float_t  m30, float_t  m31, float_t  m32, float_t  m33) ;

/// @brief Method float4x4, addr 0x181eeff00, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::float3x3  rotation, ::Unity::Mathematics::float3  translation) ;

/// @brief Method float4x4, addr 0x181ef0000, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  translation) ;

/// @brief Method float4x4, addr 0x181eefc70, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::AffineTransform  transform) ;

/// @brief Method float4x4, addr 0x181eefa80, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::RigidTransform  transform) ;

/// @brief Method float4x4, addr 0x181ef0060, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method float4x4, addr 0x181eefb00, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::double4x4  v) ;

/// @brief Method float4x4, addr 0x181eef920, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::int4x4  v) ;

/// @brief Method float4x4, addr 0x181eefd10, size 0x1f0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method float4x4, addr 0x181eeff70, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(bool  v) ;

/// @brief Method float4x4, addr 0x181eef950, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(double_t  v) ;

/// @brief Method float4x4, addr 0x181eefa50, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(float_t  v) ;

/// @brief Method float4x4, addr 0x181eeffc0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(int32_t  v) ;

/// @brief Method float4x4, addr 0x181eef7b0, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(uint32_t  v) ;

/// @brief Method floor, addr 0x181ef01c0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 floor(::Unity::Mathematics::double2  x) ;

/// @brief Method floor, addr 0x181ef0110, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 floor(::Unity::Mathematics::double3  x) ;

/// @brief Method floor, addr 0x181ef0160, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 floor(::Unity::Mathematics::double4  x) ;

/// @brief Method floor, addr 0x181ef0200, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 floor(::Unity::Mathematics::float2  x) ;

/// @brief Method floor, addr 0x181ef0250, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 floor(::Unity::Mathematics::float3  x) ;

/// @brief Method floor, addr 0x181ef00f0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 floor(::Unity::Mathematics::float4  x) ;

/// @brief Method floor, addr 0x18170f590, size 0x10, virtual false, abstract: false, final false
static inline double_t floor(double_t  x) ;

/// @brief Method floor, addr 0x181908300, size 0x20, virtual false, abstract: false, final false
static inline float_t floor(float_t  x) ;

/// @brief Method floorlog2, addr 0x181ef0390, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 floorlog2(::Unity::Mathematics::int2  x) ;

/// @brief Method floorlog2, addr 0x181ef0390, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 floorlog2(::Unity::Mathematics::uint2  x) ;

/// @brief Method floorlog2, addr 0x181ef0330, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 floorlog2(::Unity::Mathematics::int3  x) ;

/// @brief Method floorlog2, addr 0x181ef0330, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 floorlog2(::Unity::Mathematics::uint3  x) ;

/// @brief Method floorlog2, addr 0x181ef02c0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 floorlog2(::Unity::Mathematics::int4  x) ;

/// @brief Method floorlog2, addr 0x181ef02c0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 floorlog2(::Unity::Mathematics::uint4  x) ;

/// @brief Method floorlog2, addr 0x181eab150, size 0x20, virtual false, abstract: false, final false
static inline int32_t floorlog2(int32_t  x) ;

/// @brief Method floorlog2, addr 0x181eab150, size 0x20, virtual false, abstract: false, final false
static inline int32_t floorlog2(uint32_t  x) ;

/// @brief Method fmod, addr 0x181ef0610, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 fmod(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method fmod, addr 0x181ef0450, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 fmod(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method fmod, addr 0x181ef05b0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 fmod(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method fmod, addr 0x181ef04c0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 fmod(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method fmod, addr 0x181ef03e0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 fmod(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method fmod, addr 0x181ef0510, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 fmod(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method fmod, addr 0x181ef0670, size 0x10, virtual false, abstract: false, final false
static inline double_t fmod(double_t  x, double_t  y) ;

/// @brief Method fmod, addr 0x181ef0600, size 0x10, virtual false, abstract: false, final false
static inline float_t fmod(float_t  x, float_t  y) ;

/// @brief Method fold_to_uint, addr 0x181ef0680, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 fold_to_uint(::Unity::Mathematics::double2  x) ;

/// @brief Method fold_to_uint, addr 0x181ef0740, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 fold_to_uint(::Unity::Mathematics::double3  x) ;

/// @brief Method fold_to_uint, addr 0x181ef06c0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 fold_to_uint(::Unity::Mathematics::double4  x) ;

/// @brief Method fold_to_uint, addr 0x181ef07a0, size 0x20, virtual false, abstract: false, final false
static inline uint32_t fold_to_uint(double_t  x) ;

/// @brief Method forward, addr 0x181ef08e0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 forward() ;

/// @brief Method forward, addr 0x181ef07c0, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 forward(::Unity::Mathematics::quaternion  q) ;

/// @brief Method frac, addr 0x181ef0b30, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 frac(::Unity::Mathematics::double2  x) ;

/// @brief Method frac, addr 0x181ef09e0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 frac(::Unity::Mathematics::double3  x) ;

/// @brief Method frac, addr 0x181ef0b90, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 frac(::Unity::Mathematics::double4  x) ;

/// @brief Method frac, addr 0x181ef0980, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 frac(::Unity::Mathematics::float2  x) ;

/// @brief Method frac, addr 0x181ef0a80, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 frac(::Unity::Mathematics::float3  x) ;

/// @brief Method frac, addr 0x181ef0950, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 frac(::Unity::Mathematics::float4  x) ;

/// @brief Method frac, addr 0x181ef0920, size 0x30, virtual false, abstract: false, final false
static inline double_t frac(double_t  x) ;

/// @brief Method frac, addr 0x181ef08f0, size 0x30, virtual false, abstract: false, final false
static inline float_t frac(float_t  x) ;

/// @brief Method half, addr 0x181ef1420, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half half(double_t  v) ;

/// @brief Method half, addr 0x181ef14b0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half half(float_t  v) ;

/// @brief Method half, addr 0x1805a9e00, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half half(::Unity::Mathematics::half  x) ;

/// @brief Method half2, addr 0x181ef0d50, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::double2  v) ;

/// @brief Method half2, addr 0x181ef0f70, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::float2  v) ;

/// @brief Method half2, addr 0x181ef0e60, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half  v) ;

/// @brief Method half2, addr 0x181ef0c40, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(double_t  v) ;

/// @brief Method half2, addr 0x181ef0e70, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(float_t  v) ;

/// @brief Method half2, addr 0x181ee20d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y) ;

/// @brief Method half2, addr 0x181ea7ef0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half2  xy) ;

/// @brief Method half3, addr 0x181ef10d0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::double3  v) ;

/// @brief Method half3, addr 0x181ef1110, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::float3  v) ;

/// @brief Method half3, addr 0x181ef1150, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half  v) ;

/// @brief Method half3, addr 0x181ef1070, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(double_t  v) ;

/// @brief Method half3, addr 0x181ef1160, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(float_t  v) ;

/// @brief Method half3, addr 0x181ee2140, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y, ::Unity::Mathematics::half  z) ;

/// @brief Method half3, addr 0x181ef1190, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half  x, ::Unity::Mathematics::half2  yz) ;

/// @brief Method half3, addr 0x181ef11b0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half2  xy, ::Unity::Mathematics::half  z) ;

/// @brief Method half3, addr 0x181ef10a0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half3  xyz) ;

/// @brief Method half4, addr 0x181ef1250, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::double4  v) ;

/// @brief Method half4, addr 0x181ef13e0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::float4  v) ;

/// @brief Method half4, addr 0x181ef1200, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half  v) ;

/// @brief Method half4, addr 0x181ef1340, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(double_t  v) ;

/// @brief Method half4, addr 0x181ef12b0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(float_t  v) ;

/// @brief Method half4, addr 0x181ee21f0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y, ::Unity::Mathematics::half  z, ::Unity::Mathematics::half  w) ;

/// @brief Method half4, addr 0x181ef1310, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y, ::Unity::Mathematics::half2  zw) ;

/// @brief Method half4, addr 0x181ef1220, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half  x, ::Unity::Mathematics::half2  yz, ::Unity::Mathematics::half  w) ;

/// @brief Method half4, addr 0x181ef13a0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half  x, ::Unity::Mathematics::half3  yzw) ;

/// @brief Method half4, addr 0x181ef11d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half2  xy, ::Unity::Mathematics::half  z, ::Unity::Mathematics::half  w) ;

/// @brief Method half4, addr 0x181ef1290, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half2  xy, ::Unity::Mathematics::half2  zw) ;

/// @brief Method half4, addr 0x181ef12e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half3  xyz, ::Unity::Mathematics::half  w) ;

/// @brief Method half4, addr 0x181ef1370, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half4  xyzw) ;

/// @brief Method hash, addr 0x181ef1900, size 0xe0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::AffineTransform  a) ;

/// @brief Method hash, addr 0x181ef3dd0, size 0x10, virtual false, abstract: false, final false
static inline uint32_t hash(void*  pBuffer, int32_t  numBytes, uint32_t  seed) ;

/// @brief Method hash, addr 0x1807855d0, size 0x90, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::quaternion  q) ;

/// @brief Method hash, addr 0x181ef53a0, size 0xc0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::RigidTransform  t) ;

/// @brief Method hash, addr 0x181ef3920, size 0x70, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool2  v) ;

/// @brief Method hash, addr 0x181ef35a0, size 0xf0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method hash, addr 0x181ef4c10, size 0x170, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method hash, addr 0x181ef3de0, size 0x200, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method hash, addr 0x181ef2100, size 0x50, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool3  v) ;

/// @brief Method hash, addr 0x181ef4510, size 0xa0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method hash, addr 0x181ef5150, size 0xe0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method hash, addr 0x181ef3210, size 0x130, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method hash, addr 0x181ef3b90, size 0xb0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool4  v) ;

/// @brief Method hash, addr 0x181ef2cb0, size 0x120, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method hash, addr 0x181ef3c40, size 0x190, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method hash, addr 0x181ef4f50, size 0x200, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method hash, addr 0x181ef3180, size 0x90, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double2  v) ;

/// @brief Method hash, addr 0x181ef3340, size 0x140, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double2x2  v) ;

/// @brief Method hash, addr 0x181ef2190, size 0x1f0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double2x3  v) ;

/// @brief Method hash, addr 0x181ef2840, size 0x290, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double2x4  v) ;

/// @brief Method hash, addr 0x181ef3990, size 0x70, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double3  v) ;

/// @brief Method hash, addr 0x181ef1680, size 0xd0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double3x2  v) ;

/// @brief Method hash, addr 0x181ef2eb0, size 0x140, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double3x3  v) ;

/// @brief Method hash, addr 0x181ef1750, size 0x1b0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double3x4  v) ;

/// @brief Method hash, addr 0x181ef1e80, size 0x100, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double4  v) ;

/// @brief Method hash, addr 0x181ef4350, size 0x1c0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double4x2  v) ;

/// @brief Method hash, addr 0x181ef3fe0, size 0x2b0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double4x3  v) ;

/// @brief Method hash, addr 0x181ef1ae0, size 0x3a0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double4x4  v) ;

/// @brief Method hash, addr 0x181ef1620, size 0x60, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float2  v) ;

/// @brief Method hash, addr 0x181ef4970, size 0xb0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float2x2  v) ;

/// @brief Method hash, addr 0x181ef2480, size 0x110, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float2x3  v) ;

/// @brief Method hash, addr 0x181ef3690, size 0x170, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float2x4  v) ;

/// @brief Method hash, addr 0x180785590, size 0x40, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float3  v) ;

/// @brief Method hash, addr 0x181ef5320, size 0x80, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float3x2  v) ;

/// @brief Method hash, addr 0x181ef4ea0, size 0xb0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float3x3  v) ;

/// @brief Method hash, addr 0x181ef19f0, size 0xf0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float3x4  v) ;

/// @brief Method hash, addr 0x1807855d0, size 0x90, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float4  v) ;

/// @brief Method hash, addr 0x181ef2dd0, size 0xe0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float4x2  v) ;

/// @brief Method hash, addr 0x181ef4a20, size 0x130, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float4x3  v) ;

/// @brief Method hash, addr 0x180901dd0, size 0x5bd0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float4x4  v) ;

/// @brief Method hash, addr 0x181ef19e0, size 0x10, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::half  v) ;

/// @brief Method hash, addr 0x181ef5230, size 0x70, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::half2  v) ;

/// @brief Method hash, addr 0x181ef15f0, size 0x30, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::half3  v) ;

/// @brief Method hash, addr 0x181ef1530, size 0xc0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::half4  v) ;

/// @brief Method hash, addr 0x181ef2ff0, size 0x50, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int2  v) ;

/// @brief Method hash, addr 0x181ef4290, size 0xc0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int2x2  v) ;

/// @brief Method hash, addr 0x181ef3480, size 0x120, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int2x3  v) ;

/// @brief Method hash, addr 0x181ef26c0, size 0x180, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int2x4  v) ;

/// @brief Method hash, addr 0x181ef4e60, size 0x40, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int3  v) ;

/// @brief Method hash, addr 0x181ef52a0, size 0x80, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int3x2  v) ;

/// @brief Method hash, addr 0x181ef2590, size 0xb0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int3x3  v) ;

/// @brief Method hash, addr 0x181ef2380, size 0x100, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int3x4  v) ;

/// @brief Method hash, addr 0x1808fb580, size 0x6320, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int4  v) ;

/// @brief Method hash, addr 0x181ef45b0, size 0xe0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int4x2  v) ;

/// @brief Method hash, addr 0x181ef4690, size 0x130, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int4x3  v) ;

/// @brief Method hash, addr 0x181ef3a00, size 0x190, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int4x4  v) ;

/// @brief Method hash, addr 0x181ef2ad0, size 0x50, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint2  v) ;

/// @brief Method hash, addr 0x181ef48b0, size 0xc0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method hash, addr 0x181ef3800, size 0x120, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint2x3  v) ;

/// @brief Method hash, addr 0x181ef1f80, size 0x180, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method hash, addr 0x181ef2150, size 0x40, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint3  v) ;

/// @brief Method hash, addr 0x181ef2640, size 0x80, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method hash, addr 0x181ef4b50, size 0xc0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method hash, addr 0x181ef47c0, size 0xf0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method hash, addr 0x181455900, size 0x90, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint4  v) ;

/// @brief Method hash, addr 0x181ef4d80, size 0xe0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint4x2  v) ;

/// @brief Method hash, addr 0x181ef3040, size 0x140, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method hash, addr 0x181ef2b20, size 0x190, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method hash_with_unaligned_loads, addr 0x181ef5460, size 0x1f0, virtual false, abstract: false, final false
static inline uint32_t hash_with_unaligned_loads(void*  pBuffer, int32_t  numBytes, uint32_t  seed) ;

/// @brief Method hash_without_unaligned_loads, addr 0x181ef5650, size 0x2a0, virtual false, abstract: false, final false
static inline uint32_t hash_without_unaligned_loads(void*  pBuffer, int32_t  numBytes, uint32_t  seed) ;

/// @brief Method hashwide, addr 0x181ef67d0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2  v) ;

/// @brief Method hashwide, addr 0x181ef8750, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method hashwide, addr 0x181ef6cf0, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method hashwide, addr 0x181ef9420, size 0x1f0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method hashwide, addr 0x181ef7e90, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2  v) ;

/// @brief Method hashwide, addr 0x181ef8f00, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x2  v) ;

/// @brief Method hashwide, addr 0x181ef8b90, size 0x1f0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x3  v) ;

/// @brief Method hashwide, addr 0x181ef96b0, size 0x2a0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x4  v) ;

/// @brief Method hashwide, addr 0x181ef8e90, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2  v) ;

/// @brief Method hashwide, addr 0x181ef9230, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x2  v) ;

/// @brief Method hashwide, addr 0x181ef6180, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x3  v) ;

/// @brief Method hashwide, addr 0x181ef7880, size 0x180, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x4  v) ;

/// @brief Method hashwide, addr 0x181ef84a0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::half2  v) ;

/// @brief Method hashwide, addr 0x181ef85e0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2  v) ;

/// @brief Method hashwide, addr 0x181ef7390, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x2  v) ;

/// @brief Method hashwide, addr 0x181ef8370, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x3  v) ;

/// @brief Method hashwide, addr 0x181ef68f0, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x4  v) ;

/// @brief Method hashwide, addr 0x181ef6450, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2  v) ;

/// @brief Method hashwide, addr 0x181ef6310, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method hashwide, addr 0x181ef92f0, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x3  v) ;

/// @brief Method hashwide, addr 0x181ef80f0, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method hashwide, addr 0x181ef7af0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3  v) ;

/// @brief Method hashwide, addr 0x181ef89e0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method hashwide, addr 0x181ef8a90, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method hashwide, addr 0x181ef75d0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method hashwide, addr 0x181ef6f70, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3  v) ;

/// @brief Method hashwide, addr 0x181ef59b0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x2  v) ;

/// @brief Method hashwide, addr 0x181ef8830, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x3  v) ;

/// @brief Method hashwide, addr 0x181ef7f30, size 0x1c0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x4  v) ;

/// @brief Method hashwide, addr 0x181ef6e60, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3  v) ;

/// @brief Method hashwide, addr 0x181ef6650, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x2  v) ;

/// @brief Method hashwide, addr 0x181ef6590, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x3  v) ;

/// @brief Method hashwide, addr 0x181ef5f20, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x4  v) ;

/// @brief Method hashwide, addr 0x181ef7ca0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::half3  v) ;

/// @brief Method hashwide, addr 0x181ef8d80, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3  v) ;

/// @brief Method hashwide, addr 0x181ef7300, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x2  v) ;

/// @brief Method hashwide, addr 0x181ef6830, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x3  v) ;

/// @brief Method hashwide, addr 0x181ef7a00, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x4  v) ;

/// @brief Method hashwide, addr 0x181ef8980, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3  v) ;

/// @brief Method hashwide, addr 0x181ef7cf0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method hashwide, addr 0x181ef8520, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method hashwide, addr 0x181ef90d0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method hashwide, addr 0x181ef71a0, size 0x160, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::AffineTransform  a) ;

/// @brief Method hashwide, addr 0x181ef63e0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::quaternion  q) ;

/// @brief Method hashwide, addr 0x181ef66e0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::RigidTransform  t) ;

/// @brief Method hashwide, addr 0x181ef9050, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4  v) ;

/// @brief Method hashwide, addr 0x181ef8280, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method hashwide, addr 0x181ef7b40, size 0x160, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method hashwide, addr 0x181ef9950, size 0x1d0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method hashwide, addr 0x181ef64b0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4  v) ;

/// @brief Method hashwide, addr 0x181ef7000, size 0x1a0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x2  v) ;

/// @brief Method hashwide, addr 0x181ef6a80, size 0x270, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x3  v) ;

/// @brief Method hashwide, addr 0x181ef5aa0, size 0x370, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x4  v) ;

/// @brief Method hashwide, addr 0x181ef63e0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4  v) ;

/// @brief Method hashwide, addr 0x181ef8dd0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x2  v) ;

/// @brief Method hashwide, addr 0x181ef5e10, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x3  v) ;

/// @brief Method hashwide, addr 0x181ef7710, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x4  v) ;

/// @brief Method hashwide, addr 0x181ef9610, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::half4  v) ;

/// @brief Method hashwide, addr 0x181ef91c0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4  v) ;

/// @brief Method hashwide, addr 0x181ef6eb0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x2  v) ;

/// @brief Method hashwide, addr 0x181ef8640, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x3  v) ;

/// @brief Method hashwide, addr 0x181ef7460, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x4  v) ;

/// @brief Method hashwide, addr 0x181ef62a0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4  v) ;

/// @brief Method hashwide, addr 0x181ef58f0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x2  v) ;

/// @brief Method hashwide, addr 0x181ef7d80, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method hashwide, addr 0x181ef6010, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method int2, addr 0x181ef9ba0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::bool2  v) ;

/// @brief Method int2, addr 0x181ef9bd0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::double2  v) ;

/// @brief Method int2, addr 0x181ef9b20, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::float2  v) ;

/// @brief Method int2, addr 0x181ecb860, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::uint2  v) ;

/// @brief Method int2, addr 0x181ef9b60, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(bool  v) ;

/// @brief Method int2, addr 0x181ef9b40, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(double_t  v) ;

/// @brief Method int2, addr 0x181ef9b80, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(float_t  v) ;

/// @brief Method int2, addr 0x181ef9bc0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(int32_t  v) ;

/// @brief Method int2, addr 0x181ef9bc0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(uint32_t  v) ;

/// @brief Method int2, addr 0x181ee2820, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(int32_t  x, int32_t  y) ;

/// @brief Method int2, addr 0x181ecb860, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::int2  xy) ;

/// @brief Method int2x2, addr 0x181eec3a0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::int2  c0, ::Unity::Mathematics::int2  c1) ;

/// @brief Method int2x2, addr 0x181ef9d10, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(int32_t  m00, int32_t  m01, int32_t  m10, int32_t  m11) ;

/// @brief Method int2x2, addr 0x181ef9bf0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method int2x2, addr 0x181ef9d40, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::double2x2  v) ;

/// @brief Method int2x2, addr 0x181ef9c90, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::float2x2  v) ;

/// @brief Method int2x2, addr 0x181ef9dd0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method int2x2, addr 0x181ef9e60, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(bool  v) ;

/// @brief Method int2x2, addr 0x181ef9e20, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(double_t  v) ;

/// @brief Method int2x2, addr 0x181ef9d90, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(float_t  v) ;

/// @brief Method int2x2, addr 0x181ef9ce0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(int32_t  v) ;

/// @brief Method int2x2, addr 0x181ef9ce0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(uint32_t  v) ;

/// @brief Method int2x3, addr 0x181d95eb0, size 0x630, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::int2  c0, ::Unity::Mathematics::int2  c1, ::Unity::Mathematics::int2  c2) ;

/// @brief Method int2x3, addr 0x181ef9f10, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m10, int32_t  m11, int32_t  m12) ;

/// @brief Method int2x3, addr 0x181efa070, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method int2x3, addr 0x181efa170, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::double2x3  v) ;

/// @brief Method int2x3, addr 0x181efa260, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::float2x3  v) ;

/// @brief Method int2x3, addr 0x181ef9f60, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::uint2x3  v) ;

/// @brief Method int2x3, addr 0x181efa1e0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(bool  v) ;

/// @brief Method int2x3, addr 0x181efa020, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(double_t  v) ;

/// @brief Method int2x3, addr 0x181ef9ec0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(float_t  v) ;

/// @brief Method int2x3, addr 0x181ef9fe0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(int32_t  v) ;

/// @brief Method int2x3, addr 0x181ef9fe0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(uint32_t  v) ;

/// @brief Method int2x4, addr 0x181e9b920, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::int2  c0, ::Unity::Mathematics::int2  c1, ::Unity::Mathematics::int2  c2, ::Unity::Mathematics::int2  c3) ;

/// @brief Method int2x4, addr 0x181efa3f0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m03, int32_t  m10, int32_t  m11, int32_t  m12, int32_t  m13) ;

/// @brief Method int2x4, addr 0x181efa2e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method int2x4, addr 0x181efa670, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::double2x4  v) ;

/// @brief Method int2x4, addr 0x181efa560, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::float2x4  v) ;

/// @brief Method int2x4, addr 0x181efa360, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method int2x4, addr 0x181efa450, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(bool  v) ;

/// @brief Method int2x4, addr 0x181efa4f0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(double_t  v) ;

/// @brief Method int2x4, addr 0x181efa600, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(float_t  v) ;

/// @brief Method int2x4, addr 0x181efa310, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(int32_t  v) ;

/// @brief Method int2x4, addr 0x181efa310, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(uint32_t  v) ;

/// @brief Method int3, addr 0x181efa810, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::bool3  v) ;

/// @brief Method int3, addr 0x181efa850, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::double3  v) ;

/// @brief Method int3, addr 0x181efa730, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::float3  v) ;

/// @brief Method int3, addr 0x181efa7a0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::uint3  v) ;

/// @brief Method int3, addr 0x181efa700, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(bool  v) ;

/// @brief Method int3, addr 0x181efa7d0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(double_t  v) ;

/// @brief Method int3, addr 0x181efa7f0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(float_t  v) ;

/// @brief Method int3, addr 0x181efa720, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(int32_t  v) ;

/// @brief Method int3, addr 0x181efa720, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(uint32_t  v) ;

/// @brief Method int3, addr 0x181ee2880, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(int32_t  x, int32_t  y, int32_t  z) ;

/// @brief Method int3, addr 0x181efa760, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(int32_t  x, ::Unity::Mathematics::int2  yz) ;

/// @brief Method int3, addr 0x181efa780, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::int2  xy, int32_t  z) ;

/// @brief Method int3, addr 0x181efa7a0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::int3  xyz) ;

/// @brief Method int3x2, addr 0x181eed5f0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::int3  c0, ::Unity::Mathematics::int3  c1) ;

/// @brief Method int3x2, addr 0x181efa9e0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(int32_t  m00, int32_t  m01, int32_t  m10, int32_t  m11, int32_t  m20, int32_t  m21) ;

/// @brief Method int3x2, addr 0x181efaae0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method int3x2, addr 0x181efa890, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::double3x2  v) ;

/// @brief Method int3x2, addr 0x181efa970, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::float3x2  v) ;

/// @brief Method int3x2, addr 0x181efa900, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method int3x2, addr 0x181efaa70, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(bool  v) ;

/// @brief Method int3x2, addr 0x181efabc0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(double_t  v) ;

/// @brief Method int3x2, addr 0x181efab70, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(float_t  v) ;

/// @brief Method int3x2, addr 0x181efaa30, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(int32_t  v) ;

/// @brief Method int3x2, addr 0x181efaa30, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(uint32_t  v) ;

/// @brief Method int3x3, addr 0x181eedd10, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::int3  c0, ::Unity::Mathematics::int3  c1, ::Unity::Mathematics::int3  c2) ;

/// @brief Method int3x3, addr 0x181efaeb0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m10, int32_t  m11, int32_t  m12, int32_t  m20, int32_t  m21, int32_t  m22) ;

/// @brief Method int3x3, addr 0x181efaf90, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method int3x3, addr 0x181efad70, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::double3x3  v) ;

/// @brief Method int3x3, addr 0x181efae10, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::float3x3  v) ;

/// @brief Method int3x3, addr 0x181efacd0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method int3x3, addr 0x181efb050, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(bool  v) ;

/// @brief Method int3x3, addr 0x181efaf20, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(double_t  v) ;

/// @brief Method int3x3, addr 0x181efac60, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(float_t  v) ;

/// @brief Method int3x3, addr 0x181efac10, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(int32_t  v) ;

/// @brief Method int3x3, addr 0x181efac10, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(uint32_t  v) ;

/// @brief Method int3x4, addr 0x181eee530, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::int3  c0, ::Unity::Mathematics::int3  c1, ::Unity::Mathematics::int3  c2, ::Unity::Mathematics::int3  c3) ;

/// @brief Method int3x4, addr 0x181efb5b0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m03, int32_t  m10, int32_t  m11, int32_t  m12, int32_t  m13, int32_t  m20, int32_t  m21, int32_t  m22, int32_t  m23) ;

/// @brief Method int3x4, addr 0x181efb270, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method int3x4, addr 0x181efb1b0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::double3x4  v) ;

/// @brief Method int3x4, addr 0x181efb3c0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::float3x4  v) ;

/// @brief Method int3x4, addr 0x181efb640, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method int3x4, addr 0x181efb0f0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(bool  v) ;

/// @brief Method int3x4, addr 0x181efb490, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(double_t  v) ;

/// @brief Method int3x4, addr 0x181efb520, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(float_t  v) ;

/// @brief Method int3x4, addr 0x181efb360, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(int32_t  v) ;

/// @brief Method int3x4, addr 0x181efb360, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(uint32_t  v) ;

/// @brief Method int4, addr 0x181efb780, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::bool4  v) ;

/// @brief Method int4, addr 0x181efb7d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::double4  v) ;

/// @brief Method int4, addr 0x181efb8e0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::float4  v) ;

/// @brief Method int4, addr 0x181efb700, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::uint4  v) ;

/// @brief Method int4, addr 0x181efb720, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(bool  v) ;

/// @brief Method int4, addr 0x181efb800, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(double_t  v) ;

/// @brief Method int4, addr 0x181efb820, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(float_t  v) ;

/// @brief Method int4, addr 0x181ea32e0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(int32_t  v) ;

/// @brief Method int4, addr 0x181ea32e0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(uint32_t  v) ;

/// @brief Method int4, addr 0x181ea3480, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(int32_t  x, int32_t  y, int32_t  z, int32_t  w) ;

/// @brief Method int4, addr 0x181efb840, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(int32_t  x, int32_t  y, ::Unity::Mathematics::int2  zw) ;

/// @brief Method int4, addr 0x181efb8c0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(int32_t  x, ::Unity::Mathematics::int2  yz, int32_t  w) ;

/// @brief Method int4, addr 0x181efb740, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(int32_t  x, ::Unity::Mathematics::int3  yzw) ;

/// @brief Method int4, addr 0x181efb860, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int2  xy, int32_t  z, int32_t  w) ;

/// @brief Method int4, addr 0x181ecb880, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int2  xy, ::Unity::Mathematics::int2  zw) ;

/// @brief Method int4, addr 0x181efb880, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int3  xyz, int32_t  w) ;

/// @brief Method int4, addr 0x181efb700, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int4  xyzw) ;

/// @brief Method int4x2, addr 0x181e9ba70, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::int4  c0, ::Unity::Mathematics::int4  c1) ;

/// @brief Method int4x2, addr 0x181efbbe0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(int32_t  m00, int32_t  m01, int32_t  m10, int32_t  m11, int32_t  m20, int32_t  m21, int32_t  m30, int32_t  m31) ;

/// @brief Method int4x2, addr 0x181efbb90, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method int4x2, addr 0x181efb980, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::double4x2  v) ;

/// @brief Method int4x2, addr 0x181efbb00, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::float4x2  v) ;

/// @brief Method int4x2, addr 0x181efba40, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::uint4x2  v) ;

/// @brief Method int4x2, addr 0x181efbad0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(bool  v) ;

/// @brief Method int4x2, addr 0x181efb920, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(double_t  v) ;

/// @brief Method int4x2, addr 0x181efbaa0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(float_t  v) ;

/// @brief Method int4x2, addr 0x181efba00, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(int32_t  v) ;

/// @brief Method int4x2, addr 0x181efba00, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(uint32_t  v) ;

/// @brief Method int4x3, addr 0x181eef6e0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::int4  c0, ::Unity::Mathematics::int4  c1, ::Unity::Mathematics::int4  c2) ;

/// @brief Method int4x3, addr 0x181efbe60, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m10, int32_t  m11, int32_t  m12, int32_t  m20, int32_t  m21, int32_t  m22, int32_t  m30, int32_t  m31, int32_t  m32) ;

/// @brief Method int4x3, addr 0x181efbde0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method int4x3, addr 0x181efbd00, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::double4x3  v) ;

/// @brief Method int4x3, addr 0x181efbfa0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::float4x3  v) ;

/// @brief Method int4x3, addr 0x181efbee0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method int4x3, addr 0x181efbf60, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(bool  v) ;

/// @brief Method int4x3, addr 0x181efbc30, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(double_t  v) ;

/// @brief Method int4x3, addr 0x181efbdb0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(float_t  v) ;

/// @brief Method int4x3, addr 0x181efbcb0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(int32_t  v) ;

/// @brief Method int4x3, addr 0x181efbcb0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(uint32_t  v) ;

/// @brief Method int4x4, addr 0x181eefad0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::int4  c0, ::Unity::Mathematics::int4  c1, ::Unity::Mathematics::int4  c2, ::Unity::Mathematics::int4  c3) ;

/// @brief Method int4x4, addr 0x181efc560, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m03, int32_t  m10, int32_t  m11, int32_t  m12, int32_t  m13, int32_t  m20, int32_t  m21, int32_t  m22, int32_t  m23, int32_t  m30, int32_t  m31, int32_t  m32, int32_t  m33) ;

/// @brief Method int4x4, addr 0x181efc270, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method int4x4, addr 0x181efc3b0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::double4x4  v) ;

/// @brief Method int4x4, addr 0x181efc0c0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::float4x4  v) ;

/// @brief Method int4x4, addr 0x181efc300, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method int4x4, addr 0x181efc070, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(bool  v) ;

/// @brief Method int4x4, addr 0x181efc4b0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(double_t  v) ;

/// @brief Method int4x4, addr 0x181efc220, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(float_t  v) ;

/// @brief Method int4x4, addr 0x181efc1c0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(int32_t  v) ;

/// @brief Method int4x4, addr 0x181efc1c0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(uint32_t  v) ;

/// @brief Method inverse, addr 0x181efc610, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform inverse(::Unity::Mathematics::AffineTransform  a) ;

/// @brief Method inverse, addr 0x181efe1a0, size 0x1a0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::RigidTransform inverse(::Unity::Mathematics::RigidTransform  t) ;

/// @brief Method inverse, addr 0x181efc780, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 inverse(::Unity::Mathematics::double2x2  m) ;

/// @brief Method inverse, addr 0x181efd970, size 0x210, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 inverse(::Unity::Mathematics::double3x3  m) ;

/// @brief Method inverse, addr 0x181efcad0, size 0xea0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 inverse(::Unity::Mathematics::double4x4  m) ;

/// @brief Method inverse, addr 0x181efca50, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 inverse(::Unity::Mathematics::float2x2  m) ;

/// @brief Method inverse, addr 0x181efc800, size 0x250, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 inverse(::Unity::Mathematics::float3x3  m) ;

/// @brief Method inverse, addr 0x181efdbd0, size 0x5d0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 inverse(::Unity::Mathematics::float4x4  m) ;

/// @brief Method inverse, addr 0x181efdb80, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion inverse(::Unity::Mathematics::quaternion  q) ;

/// @brief Method isfinite, addr 0x181efe4c0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 isfinite(::Unity::Mathematics::double2  x) ;

/// @brief Method isfinite, addr 0x181efe480, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 isfinite(::Unity::Mathematics::float2  x) ;

/// @brief Method isfinite, addr 0x181efe530, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isfinite(::Unity::Mathematics::double3  x) ;

/// @brief Method isfinite, addr 0x181efe370, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isfinite(::Unity::Mathematics::float3  x) ;

/// @brief Method isfinite, addr 0x181efe400, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 isfinite(::Unity::Mathematics::double4  x) ;

/// @brief Method isfinite, addr 0x181efe3d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 isfinite(::Unity::Mathematics::float4  x) ;

/// @brief Method isfinite, addr 0x181efe340, size 0x30, virtual false, abstract: false, final false
static inline bool isfinite(double_t  x) ;

/// @brief Method isfinite, addr 0x181efe510, size 0x20, virtual false, abstract: false, final false
static inline bool isfinite(float_t  x) ;

/// @brief Method isinf, addr 0x181efe7c0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 isinf(::Unity::Mathematics::double2  x) ;

/// @brief Method isinf, addr 0x181efe760, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 isinf(::Unity::Mathematics::float2  x) ;

/// @brief Method isinf, addr 0x181efe5d0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isinf(::Unity::Mathematics::double3  x) ;

/// @brief Method isinf, addr 0x181efe860, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isinf(::Unity::Mathematics::float3  x) ;

/// @brief Method isinf, addr 0x181efe6a0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 isinf(::Unity::Mathematics::double4  x) ;

/// @brief Method isinf, addr 0x181efe830, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 isinf(::Unity::Mathematics::float4  x) ;

/// @brief Method isinf, addr 0x181efe670, size 0x30, virtual false, abstract: false, final false
static inline bool isinf(double_t  x) ;

/// @brief Method isinf, addr 0x181efe5b0, size 0x20, virtual false, abstract: false, final false
static inline bool isinf(float_t  x) ;

/// @brief Method isnan, addr 0x181efea10, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 isnan(::Unity::Mathematics::double2  x) ;

/// @brief Method isnan, addr 0x181efe950, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 isnan(::Unity::Mathematics::float2  x) ;

/// @brief Method isnan, addr 0x181efe8f0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isnan(::Unity::Mathematics::double3  x) ;

/// @brief Method isnan, addr 0x181efeac0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isnan(::Unity::Mathematics::float3  x) ;

/// @brief Method isnan, addr 0x181efe9a0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 isnan(::Unity::Mathematics::double4  x) ;

/// @brief Method isnan, addr 0x181efea50, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 isnan(::Unity::Mathematics::float4  x) ;

/// @brief Method isnan, addr 0x181707d80, size 0x30, virtual false, abstract: false, final false
static inline bool isnan(double_t  x) ;

/// @brief Method isnan, addr 0x181724a50, size 0x20, virtual false, abstract: false, final false
static inline bool isnan(float_t  x) ;

/// @brief Method ispow2, addr 0x181efeb90, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 ispow2(::Unity::Mathematics::int2  x) ;

/// @brief Method ispow2, addr 0x181efec50, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 ispow2(::Unity::Mathematics::uint2  x) ;

/// @brief Method ispow2, addr 0x181efeb20, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 ispow2(::Unity::Mathematics::int3  x) ;

/// @brief Method ispow2, addr 0x181efec90, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 ispow2(::Unity::Mathematics::uint3  x) ;

/// @brief Method ispow2, addr 0x181efecf0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 ispow2(::Unity::Mathematics::int4  x) ;

/// @brief Method ispow2, addr 0x181efebd0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 ispow2(::Unity::Mathematics::uint4  x) ;

/// @brief Method ispow2, addr 0x181efeb80, size 0x10, virtual false, abstract: false, final false
static inline bool ispow2(int32_t  x) ;

/// @brief Method ispow2, addr 0x181efec40, size 0x10, virtual false, abstract: false, final false
static inline bool ispow2(uint32_t  x) ;

/// @brief Method left, addr 0x181efed60, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 left() ;

/// @brief Method length, addr 0x181efee90, size 0x40, virtual false, abstract: false, final false
static inline double_t length(::Unity::Mathematics::double2  x) ;

/// @brief Method length, addr 0x181efee40, size 0x50, virtual false, abstract: false, final false
static inline double_t length(::Unity::Mathematics::double3  x) ;

/// @brief Method length, addr 0x181efede0, size 0x60, virtual false, abstract: false, final false
static inline double_t length(::Unity::Mathematics::double4  x) ;

/// @brief Method length, addr 0x181ee10e0, size 0x20, virtual false, abstract: false, final false
static inline double_t length(double_t  x) ;

/// @brief Method length, addr 0x181efeed0, size 0x20, virtual false, abstract: false, final false
static inline float_t length(::Unity::Mathematics::quaternion  q) ;

/// @brief Method length, addr 0x181efed70, size 0x30, virtual false, abstract: false, final false
static inline float_t length(::Unity::Mathematics::float2  x) ;

/// @brief Method length, addr 0x181efeda0, size 0x40, virtual false, abstract: false, final false
static inline float_t length(::Unity::Mathematics::float3  x) ;

/// @brief Method length, addr 0x1804a7620, size 0x50, virtual false, abstract: false, final false
static inline float_t length(::Unity::Mathematics::float4  x) ;

/// @brief Method length, addr 0x181ee0f00, size 0x10, virtual false, abstract: false, final false
static inline float_t length(float_t  x) ;

/// @brief Method lengthsq, addr 0x181efef10, size 0x20, virtual false, abstract: false, final false
static inline double_t lengthsq(::Unity::Mathematics::double2  x) ;

/// @brief Method lengthsq, addr 0x181efef30, size 0x40, virtual false, abstract: false, final false
static inline double_t lengthsq(::Unity::Mathematics::double3  x) ;

/// @brief Method lengthsq, addr 0x181efefc0, size 0x40, virtual false, abstract: false, final false
static inline double_t lengthsq(::Unity::Mathematics::double4  x) ;

/// @brief Method lengthsq, addr 0x181efef70, size 0x10, virtual false, abstract: false, final false
static inline double_t lengthsq(double_t  x) ;

/// @brief Method lengthsq, addr 0x181efeef0, size 0x20, virtual false, abstract: false, final false
static inline float_t lengthsq(::Unity::Mathematics::quaternion  q) ;

/// @brief Method lengthsq, addr 0x181eff000, size 0x20, virtual false, abstract: false, final false
static inline float_t lengthsq(::Unity::Mathematics::float2  x) ;

/// @brief Method lengthsq, addr 0x181efef80, size 0x40, virtual false, abstract: false, final false
static inline float_t lengthsq(::Unity::Mathematics::float3  x) ;

/// @brief Method lengthsq, addr 0x181efeef0, size 0x20, virtual false, abstract: false, final false
static inline float_t lengthsq(::Unity::Mathematics::float4  x) ;

/// @brief Method lengthsq, addr 0x1803133a0, size 0x10, virtual false, abstract: false, final false
static inline float_t lengthsq(float_t  x) ;

/// @brief Method lerp, addr 0x181eff3b0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 lerp(::Unity::Mathematics::double2  start, ::Unity::Mathematics::double2  end, ::Unity::Mathematics::double2  t) ;

/// @brief Method lerp, addr 0x181eff0a0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 lerp(::Unity::Mathematics::double2  start, ::Unity::Mathematics::double2  end, double_t  t) ;

/// @brief Method lerp, addr 0x181eff210, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 lerp(::Unity::Mathematics::double3  start, ::Unity::Mathematics::double3  end, ::Unity::Mathematics::double3  t) ;

/// @brief Method lerp, addr 0x181eff400, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 lerp(::Unity::Mathematics::double3  start, ::Unity::Mathematics::double3  end, double_t  t) ;

/// @brief Method lerp, addr 0x181eff150, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 lerp(::Unity::Mathematics::double4  start, ::Unity::Mathematics::double4  end, ::Unity::Mathematics::double4  t) ;

/// @brief Method lerp, addr 0x181eff2a0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 lerp(::Unity::Mathematics::double4  start, ::Unity::Mathematics::double4  end, double_t  t) ;

/// @brief Method lerp, addr 0x181eff100, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 lerp(::Unity::Mathematics::float2  start, ::Unity::Mathematics::float2  end, ::Unity::Mathematics::float2  t) ;

/// @brief Method lerp, addr 0x181eff480, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 lerp(::Unity::Mathematics::float2  start, ::Unity::Mathematics::float2  end, float_t  t) ;

/// @brief Method lerp, addr 0x181eff020, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 lerp(::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, ::Unity::Mathematics::float3  t) ;

/// @brief Method lerp, addr 0x181eff340, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 lerp(::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, float_t  t) ;

/// @brief Method lerp, addr 0x181eff0e0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 lerp(::Unity::Mathematics::float4  start, ::Unity::Mathematics::float4  end, ::Unity::Mathematics::float4  t) ;

/// @brief Method lerp, addr 0x181eff4d0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 lerp(::Unity::Mathematics::float4  start, ::Unity::Mathematics::float4  end, float_t  t) ;

/// @brief Method lerp, addr 0x181594560, size 0x280, virtual false, abstract: false, final false
static inline double_t lerp(double_t  start, double_t  end, double_t  t) ;

/// @brief Method lerp, addr 0x18030b390, size 0x10, virtual false, abstract: false, final false
static inline float_t lerp(float_t  start, float_t  end, float_t  t) ;

/// @brief Method log, addr 0x181effb10, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 log(::Unity::Mathematics::double2  x) ;

/// @brief Method log, addr 0x181effc40, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 log(::Unity::Mathematics::double3  x) ;

/// @brief Method log, addr 0x181effd00, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 log(::Unity::Mathematics::double4  x) ;

/// @brief Method log, addr 0x181effbf0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 log(::Unity::Mathematics::float2  x) ;

/// @brief Method log, addr 0x181effc90, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 log(::Unity::Mathematics::float3  x) ;

/// @brief Method log, addr 0x181effb50, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 log(::Unity::Mathematics::float4  x) ;

/// @brief Method log, addr 0x181effd60, size 0x1d0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion log(::Unity::Mathematics::quaternion  q) ;

/// @brief Method log, addr 0x18170f5b0, size 0x10, virtual false, abstract: false, final false
static inline double_t log(double_t  x) ;

/// @brief Method log, addr 0x181909140, size 0x20, virtual false, abstract: false, final false
static inline float_t log(float_t  x) ;

/// @brief Method log10, addr 0x181eff4f0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 log10(::Unity::Mathematics::double2  x) ;

/// @brief Method log10, addr 0x181eff630, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 log10(::Unity::Mathematics::double3  x) ;

/// @brief Method log10, addr 0x181eff530, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 log10(::Unity::Mathematics::double4  x) ;

/// @brief Method log10, addr 0x181eff680, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 log10(::Unity::Mathematics::float2  x) ;

/// @brief Method log10, addr 0x181eff6d0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 log10(::Unity::Mathematics::float3  x) ;

/// @brief Method log10, addr 0x181eff590, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 log10(::Unity::Mathematics::float4  x) ;

/// @brief Method log10, addr 0x18170f5a0, size 0x10, virtual false, abstract: false, final false
static inline double_t log10(double_t  x) ;

/// @brief Method log10, addr 0x181909100, size 0x20, virtual false, abstract: false, final false
static inline float_t log10(float_t  x) ;

/// @brief Method log2, addr 0x181eff7d0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 log2(::Unity::Mathematics::double2  x) ;

/// @brief Method log2, addr 0x181eff9c0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 log2(::Unity::Mathematics::double3  x) ;

/// @brief Method log2, addr 0x181effa50, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 log2(::Unity::Mathematics::double4  x) ;

/// @brief Method log2, addr 0x181eff770, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 log2(::Unity::Mathematics::float2  x) ;

/// @brief Method log2, addr 0x181eff840, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 log2(::Unity::Mathematics::float3  x) ;

/// @brief Method log2, addr 0x181eff8f0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 log2(::Unity::Mathematics::float4  x) ;

/// @brief Method log2, addr 0x181eff830, size 0x10, virtual false, abstract: false, final false
static inline double_t log2(double_t  x) ;

/// @brief Method log2, addr 0x181eff740, size 0x30, virtual false, abstract: false, final false
static inline float_t log2(float_t  x) ;

/// @brief Method lzcnt, addr 0x181efffd0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 lzcnt(::Unity::Mathematics::int2  x) ;

/// @brief Method lzcnt, addr 0x181efffd0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 lzcnt(::Unity::Mathematics::uint2  x) ;

/// @brief Method lzcnt, addr 0x181efff30, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 lzcnt(::Unity::Mathematics::int3  x) ;

/// @brief Method lzcnt, addr 0x181efff30, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 lzcnt(::Unity::Mathematics::uint3  x) ;

/// @brief Method lzcnt, addr 0x181efff80, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 lzcnt(::Unity::Mathematics::int4  x) ;

/// @brief Method lzcnt, addr 0x181efff80, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 lzcnt(::Unity::Mathematics::uint4  x) ;

/// @brief Method lzcnt, addr 0x18098c620, size 0x190, virtual false, abstract: false, final false
static inline int32_t lzcnt(int32_t  x) ;

/// @brief Method lzcnt, addr 0x180d93170, size 0xd0, virtual false, abstract: false, final false
static inline int32_t lzcnt(int64_t  x) ;

/// @brief Method lzcnt, addr 0x18098c620, size 0x190, virtual false, abstract: false, final false
static inline int32_t lzcnt(uint32_t  x) ;

/// @brief Method lzcnt, addr 0x180d93170, size 0xd0, virtual false, abstract: false, final false
static inline int32_t lzcnt(uint64_t  x) ;

/// @brief Method mad, addr 0x181f001e0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mad(::Unity::Mathematics::double2  mulA, ::Unity::Mathematics::double2  mulB, ::Unity::Mathematics::double2  addC) ;

/// @brief Method mad, addr 0x181f00100, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mad(::Unity::Mathematics::double3  mulA, ::Unity::Mathematics::double3  mulB, ::Unity::Mathematics::double3  addC) ;

/// @brief Method mad, addr 0x181f00240, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mad(::Unity::Mathematics::double4  mulA, ::Unity::Mathematics::double4  mulB, ::Unity::Mathematics::double4  addC) ;

/// @brief Method mad, addr 0x181f00160, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mad(::Unity::Mathematics::float2  mulA, ::Unity::Mathematics::float2  mulB, ::Unity::Mathematics::float2  addC) ;

/// @brief Method mad, addr 0x181f002d0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mad(::Unity::Mathematics::float3  mulA, ::Unity::Mathematics::float3  mulB, ::Unity::Mathematics::float3  addC) ;

/// @brief Method mad, addr 0x181f00220, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mad(::Unity::Mathematics::float4  mulA, ::Unity::Mathematics::float4  mulB, ::Unity::Mathematics::float4  addC) ;

/// @brief Method mad, addr 0x181f00040, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mad(::Unity::Mathematics::int2  mulA, ::Unity::Mathematics::int2  mulB, ::Unity::Mathematics::int2  addC) ;

/// @brief Method mad, addr 0x181f00090, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mad(::Unity::Mathematics::int3  mulA, ::Unity::Mathematics::int3  mulB, ::Unity::Mathematics::int3  addC) ;

/// @brief Method mad, addr 0x181f00000, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mad(::Unity::Mathematics::int4  mulA, ::Unity::Mathematics::int4  mulB, ::Unity::Mathematics::int4  addC) ;

/// @brief Method mad, addr 0x181f00040, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mad(::Unity::Mathematics::uint2  mulA, ::Unity::Mathematics::uint2  mulB, ::Unity::Mathematics::uint2  addC) ;

/// @brief Method mad, addr 0x181f00090, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mad(::Unity::Mathematics::uint3  mulA, ::Unity::Mathematics::uint3  mulB, ::Unity::Mathematics::uint3  addC) ;

/// @brief Method mad, addr 0x181f00000, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mad(::Unity::Mathematics::uint4  mulA, ::Unity::Mathematics::uint4  mulB, ::Unity::Mathematics::uint4  addC) ;

/// @brief Method mad, addr 0x181f001d0, size 0x10, virtual false, abstract: false, final false
static inline double_t mad(double_t  mulA, double_t  mulB, double_t  addC) ;

/// @brief Method mad, addr 0x181f001c0, size 0x10, virtual false, abstract: false, final false
static inline float_t mad(float_t  mulA, float_t  mulB, float_t  addC) ;

/// @brief Method mad, addr 0x181f002c0, size 0x10, virtual false, abstract: false, final false
static inline int32_t mad(int32_t  mulA, int32_t  mulB, int32_t  addC) ;

/// @brief Method mad, addr 0x181f001b0, size 0x10, virtual false, abstract: false, final false
static inline int64_t mad(int64_t  mulA, int64_t  mulB, int64_t  addC) ;

/// @brief Method mad, addr 0x181f002c0, size 0x10, virtual false, abstract: false, final false
static inline uint32_t mad(uint32_t  mulA, uint32_t  mulB, uint32_t  addC) ;

/// @brief Method mad, addr 0x181f001b0, size 0x10, virtual false, abstract: false, final false
static inline uint64_t mad(uint64_t  mulA, uint64_t  mulB, uint64_t  addC) ;

/// @brief Method max, addr 0x181f00600, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 max(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method max, addr 0x181f00500, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 max(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method max, addr 0x181f00670, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 max(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method max, addr 0x181f007b0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 max(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method max, addr 0x181f003d0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 max(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method max, addr 0x181f00330, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 max(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method max, addr 0x181f003a0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 max(::Unity::Mathematics::int2  x, ::Unity::Mathematics::int2  y) ;

/// @brief Method max, addr 0x181f00360, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 max(::Unity::Mathematics::int3  x, ::Unity::Mathematics::int3  y) ;

/// @brief Method max, addr 0x181f005d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 max(::Unity::Mathematics::int4  x, ::Unity::Mathematics::int4  y) ;

/// @brief Method max, addr 0x181f00730, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 max(::Unity::Mathematics::uint2  x, ::Unity::Mathematics::uint2  y) ;

/// @brief Method max, addr 0x181f00770, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 max(::Unity::Mathematics::uint3  x, ::Unity::Mathematics::uint3  y) ;

/// @brief Method max, addr 0x181f00590, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 max(::Unity::Mathematics::uint4  x, ::Unity::Mathematics::uint4  y) ;

/// @brief Method max, addr 0x181f004c0, size 0x30, virtual false, abstract: false, final false
static inline double_t max(double_t  x, double_t  y) ;

/// @brief Method max, addr 0x181f00480, size 0x30, virtual false, abstract: false, final false
static inline float_t max(float_t  x, float_t  y) ;

/// @brief Method max, addr 0x181f004f0, size 0x10, virtual false, abstract: false, final false
static inline int32_t max(int32_t  x, int32_t  y) ;

/// @brief Method max, addr 0x181f00760, size 0x10, virtual false, abstract: false, final false
static inline int64_t max(int64_t  x, int64_t  y) ;

/// @brief Method max, addr 0x181f00720, size 0x10, virtual false, abstract: false, final false
static inline uint32_t max(uint32_t  x, uint32_t  y) ;

/// @brief Method max, addr 0x181f004b0, size 0x10, virtual false, abstract: false, final false
static inline uint64_t max(uint64_t  x, uint64_t  y) ;

/// @brief Method min, addr 0x181f00980, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 min(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method min, addr 0x181f00840, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 min(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method min, addr 0x181f00a50, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 min(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method min, addr 0x181f00b60, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 min(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method min, addr 0x181f008d0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 min(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method min, addr 0x181f00c20, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 min(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method min, addr 0x181f00ca0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 min(::Unity::Mathematics::int2  x, ::Unity::Mathematics::int2  y) ;

/// @brief Method min, addr 0x181f00cf0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 min(::Unity::Mathematics::int3  x, ::Unity::Mathematics::int3  y) ;

/// @brief Method min, addr 0x181f009f0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 min(::Unity::Mathematics::int4  x, ::Unity::Mathematics::int4  y) ;

/// @brief Method min, addr 0x181f00b00, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 min(::Unity::Mathematics::uint2  x, ::Unity::Mathematics::uint2  y) ;

/// @brief Method min, addr 0x181f00be0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 min(::Unity::Mathematics::uint3  x, ::Unity::Mathematics::uint3  y) ;

/// @brief Method min, addr 0x181f00c50, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 min(::Unity::Mathematics::uint4  x, ::Unity::Mathematics::uint4  y) ;

/// @brief Method min, addr 0x181f00a20, size 0x30, virtual false, abstract: false, final false
static inline double_t min(double_t  x, double_t  y) ;

/// @brief Method min, addr 0x181f00b30, size 0x30, virtual false, abstract: false, final false
static inline float_t min(float_t  x, float_t  y) ;

/// @brief Method min, addr 0x181f00830, size 0x10, virtual false, abstract: false, final false
static inline int32_t min(int32_t  x, int32_t  y) ;

/// @brief Method min, addr 0x181f00c90, size 0x10, virtual false, abstract: false, final false
static inline int64_t min(int64_t  x, int64_t  y) ;

/// @brief Method min, addr 0x181f00ce0, size 0x10, virtual false, abstract: false, final false
static inline uint32_t min(uint32_t  x, uint32_t  y) ;

/// @brief Method min, addr 0x181f00cd0, size 0x10, virtual false, abstract: false, final false
static inline uint64_t min(uint64_t  x, uint64_t  y) ;

/// @brief Method modf, addr 0x181f01160, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 modf(::Unity::Mathematics::double2  x, ::by_ref<::Unity::Mathematics::double2>  i) ;

/// @brief Method modf, addr 0x181f00d30, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 modf(::Unity::Mathematics::double3  x, ::by_ref<::Unity::Mathematics::double3>  i) ;

/// @brief Method modf, addr 0x181f01070, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 modf(::Unity::Mathematics::double4  x, ::by_ref<::Unity::Mathematics::double4>  i) ;

/// @brief Method modf, addr 0x181f00f10, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 modf(::Unity::Mathematics::float2  x, ::by_ref<::Unity::Mathematics::float2>  i) ;

/// @brief Method modf, addr 0x181f00fa0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 modf(::Unity::Mathematics::float3  x, ::by_ref<::Unity::Mathematics::float3>  i) ;

/// @brief Method modf, addr 0x181f00df0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 modf(::Unity::Mathematics::float4  x, ::by_ref<::Unity::Mathematics::float4>  i) ;

/// @brief Method modf, addr 0x181f00ee0, size 0x30, virtual false, abstract: false, final false
static inline double_t modf(double_t  x, ::by_ref<double_t>  i) ;

/// @brief Method modf, addr 0x181f011f0, size 0x40, virtual false, abstract: false, final false
static inline float_t modf(float_t  x, ::by_ref<float_t>  i) ;

/// @brief Method movehl, addr 0x181f01250, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 movehl(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method movehl, addr 0x181f01230, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 movehl(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method movelh, addr 0x181f012d0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 movelh(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method movelh, addr 0x181f012b0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 movelh(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method mul, addr 0x181f09ba0, size 0x180, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform mul(::Unity::Mathematics::AffineTransform  a, ::Unity::Mathematics::AffineTransform  b) ;

/// @brief Method mul, addr 0x181f0b6c0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform mul(::Unity::Mathematics::AffineTransform  a, ::Unity::Mathematics::float3x3  b) ;

/// @brief Method mul, addr 0x181f08c20, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform mul(::Unity::Mathematics::float3x3  a, ::Unity::Mathematics::AffineTransform  b) ;

/// @brief Method mul, addr 0x181f0bec0, size 0x1f0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::RigidTransform mul(::Unity::Mathematics::RigidTransform  a, ::Unity::Mathematics::RigidTransform  b) ;

/// @brief Method mul, addr 0x181f0be80, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2x2  b) ;

/// @brief Method mul, addr 0x181f08be0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x2  a, ::Unity::Mathematics::double2  b) ;

/// @brief Method mul, addr 0x181f01a30, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x3  a, ::Unity::Mathematics::double3  b) ;

/// @brief Method mul, addr 0x181f0c9c0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method mul, addr 0x181f05330, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3x2  b) ;

/// @brief Method mul, addr 0x181f07110, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4x2  b) ;

/// @brief Method mul, addr 0x181f07b20, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x2  a, ::Unity::Mathematics::double2x2  b) ;

/// @brief Method mul, addr 0x181f083d0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x3  a, ::Unity::Mathematics::double3x2  b) ;

/// @brief Method mul, addr 0x181f03260, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x4  a, ::Unity::Mathematics::double4x2  b) ;

/// @brief Method mul, addr 0x181f096b0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x2  a, ::Unity::Mathematics::double2x3  b) ;

/// @brief Method mul, addr 0x181f0bd40, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x3  a, ::Unity::Mathematics::double3x3  b) ;

/// @brief Method mul, addr 0x181f0c0b0, size 0x1a0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x4  a, ::Unity::Mathematics::double4x3  b) ;

/// @brief Method mul, addr 0x181f09020, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x2  a, ::Unity::Mathematics::double2x4  b) ;

/// @brief Method mul, addr 0x181f09f40, size 0x1b0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x3  a, ::Unity::Mathematics::double3x4  b) ;

/// @brief Method mul, addr 0x181f035a0, size 0x230, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x4  a, ::Unity::Mathematics::double4x4  b) ;

/// @brief Method mul, addr 0x181f04ea0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2x3  b) ;

/// @brief Method mul, addr 0x181f05f30, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3x3  b) ;

/// @brief Method mul, addr 0x181f07e10, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x2  a, ::Unity::Mathematics::double2  b) ;

/// @brief Method mul, addr 0x181f0b100, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x3  a, ::Unity::Mathematics::double3  b) ;

/// @brief Method mul, addr 0x181f06130, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method mul, addr 0x181f02350, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4x3  b) ;

/// @brief Method mul, addr 0x181f0d140, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x2  a, ::Unity::Mathematics::double2x2  b) ;

/// @brief Method mul, addr 0x181f049f0, size 0x1c0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x3  a, ::Unity::Mathematics::double3x2  b) ;

/// @brief Method mul, addr 0x181f08540, size 0x240, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x4  a, ::Unity::Mathematics::double4x2  b) ;

/// @brief Method mul, addr 0x181f04370, size 0x1d0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x2  a, ::Unity::Mathematics::double2x3  b) ;

/// @brief Method mul, addr 0x181f07b90, size 0x280, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x3  a, ::Unity::Mathematics::double3x3  b) ;

/// @brief Method mul, addr 0x181f0c560, size 0x360, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x4  a, ::Unity::Mathematics::double4x3  b) ;

/// @brief Method mul, addr 0x181f0d740, size 0x2a0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x2  a, ::Unity::Mathematics::double2x4  b) ;

/// @brief Method mul, addr 0x181f03ed0, size 0x350, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x3  a, ::Unity::Mathematics::double3x4  b) ;

/// @brief Method mul, addr 0x181f0cac0, size 0x460, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x4  a, ::Unity::Mathematics::double4x4  b) ;

/// @brief Method mul, addr 0x181f05560, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2x4  b) ;

/// @brief Method mul, addr 0x181f04220, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3x4  b) ;

/// @brief Method mul, addr 0x181f0d9e0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4x4  b) ;

/// @brief Method mul, addr 0x181f09e40, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x2  a, ::Unity::Mathematics::double2  b) ;

/// @brief Method mul, addr 0x181f07650, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x3  a, ::Unity::Mathematics::double3  b) ;

/// @brief Method mul, addr 0x181f02630, size 0x1a0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method mul, addr 0x181f0c3f0, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x2  a, ::Unity::Mathematics::double2x2  b) ;

/// @brief Method mul, addr 0x181f09140, size 0x230, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x3  a, ::Unity::Mathematics::double3x2  b) ;

/// @brief Method mul, addr 0x181f08d70, size 0x2b0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x4  a, ::Unity::Mathematics::double4x2  b) ;

/// @brief Method mul, addr 0x181f0ab50, size 0x240, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x2  a, ::Unity::Mathematics::double2x3  b) ;

/// @brief Method mul, addr 0x181f0a720, size 0x310, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x3  a, ::Unity::Mathematics::double3x3  b) ;

/// @brief Method mul, addr 0x181f06280, size 0x440, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x4  a, ::Unity::Mathematics::double4x3  b) ;

/// @brief Method mul, addr 0x181f0dae0, size 0x2e0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x2  a, ::Unity::Mathematics::double2x4  b) ;

/// @brief Method mul, addr 0x181f04f00, size 0x430, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x3  a, ::Unity::Mathematics::double3x4  b) ;

/// @brief Method mul, addr 0x181f05a20, size 0x510, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x4  a, ::Unity::Mathematics::double4x4  b) ;

/// @brief Method mul, addr 0x181f03830, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2x2  b) ;

/// @brief Method mul, addr 0x181f02850, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x2  a, ::Unity::Mathematics::float2  b) ;

/// @brief Method mul, addr 0x181f03370, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x3  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method mul, addr 0x181f0a6a0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method mul, addr 0x181f045b0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3x2  b) ;

/// @brief Method mul, addr 0x181f0ad90, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4x2  b) ;

/// @brief Method mul, addr 0x181f0ae40, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x2  a, ::Unity::Mathematics::float2x2  b) ;

/// @brief Method mul, addr 0x181f03870, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x3  a, ::Unity::Mathematics::float3x2  b) ;

/// @brief Method mul, addr 0x181f015f0, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x4  a, ::Unity::Mathematics::float4x2  b) ;

/// @brief Method mul, addr 0x181f0b870, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x2  a, ::Unity::Mathematics::float2x3  b) ;

/// @brief Method mul, addr 0x181f09570, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x3  a, ::Unity::Mathematics::float3x3  b) ;

/// @brief Method mul, addr 0x181f09370, size 0x1a0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x4  a, ::Unity::Mathematics::float4x3  b) ;

/// @brief Method mul, addr 0x181f01420, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x2  a, ::Unity::Mathematics::float2x4  b) ;

/// @brief Method mul, addr 0x181f02480, size 0x1b0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x3  a, ::Unity::Mathematics::float3x4  b) ;

/// @brief Method mul, addr 0x181f09970, size 0x230, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x4  a, ::Unity::Mathematics::float4x4  b) ;

/// @brief Method mul, addr 0x181f0aeb0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2x3  b) ;

/// @brief Method mul, addr 0x181f042e0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3x3  b) ;

/// @brief Method mul, addr 0x181f04970, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x2  a, ::Unity::Mathematics::float2  b) ;

/// @brief Method mul, addr 0x181f05410, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x3  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method mul, addr 0x181f079c0, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method mul, addr 0x181f01920, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4x3  b) ;

/// @brief Method mul, addr 0x1807c0380, size 0xb220, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::quaternion  q, ::Unity::Mathematics::float3  v) ;

/// @brief Method mul, addr 0x181f0aa30, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x2  a, ::Unity::Mathematics::float2x2  b) ;

/// @brief Method mul, addr 0x181f0c250, size 0x1a0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x3  a, ::Unity::Mathematics::float3x2  b) ;

/// @brief Method mul, addr 0x181f0cf20, size 0x220, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x4  a, ::Unity::Mathematics::float4x2  b) ;

/// @brief Method mul, addr 0x181f0d350, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x2  a, ::Unity::Mathematics::float2x3  b) ;

/// @brief Method mul, addr 0x1814e1b10, size 0x250, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x3  a, ::Unity::Mathematics::float3x3  b) ;

/// @brief Method mul, addr 0x181f07330, size 0x320, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x4  a, ::Unity::Mathematics::float4x3  b) ;

/// @brief Method mul, addr 0x181f01700, size 0x220, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x2  a, ::Unity::Mathematics::float2x4  b) ;

/// @brief Method mul, addr 0x181f080c0, size 0x310, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x3  a, ::Unity::Mathematics::float3x4  b) ;

/// @brief Method mul, addr 0x181f02b90, size 0x3f0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x4  a, ::Unity::Mathematics::float4x4  b) ;

/// @brief Method mul, addr 0x181f0d600, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::AffineTransform  a, ::Unity::Mathematics::float4  pos) ;

/// @brief Method mul, addr 0x181f02100, size 0x180, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::RigidTransform  a, ::Unity::Mathematics::float4  pos) ;

/// @brief Method mul, addr 0x181f0ca40, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2x4  b) ;

/// @brief Method mul, addr 0x181f07270, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3x4  b) ;

/// @brief Method mul, addr 0x181f0d260, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4x4  b) ;

/// @brief Method mul, addr 0x181f08a30, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x2  a, ::Unity::Mathematics::float2  b) ;

/// @brief Method mul, addr 0x181f0b1f0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x3  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method mul, addr 0x181f019e0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method mul, addr 0x181f09510, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x2  a, ::Unity::Mathematics::float2x2  b) ;

/// @brief Method mul, addr 0x181f0b330, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x3  a, ::Unity::Mathematics::float3x2  b) ;

/// @brief Method mul, addr 0x181f03e20, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float4x2  b) ;

/// @brief Method mul, addr 0x181f06840, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x2  a, ::Unity::Mathematics::float2x3  b) ;

/// @brief Method mul, addr 0x181f0a4e0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x3  a, ::Unity::Mathematics::float3x3  b) ;

/// @brief Method mul, addr 0x181f0a5a0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float4x3  b) ;

/// @brief Method mul, addr 0x181f08490, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x2  a, ::Unity::Mathematics::float2x4  b) ;

/// @brief Method mul, addr 0x181f0b760, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x3  a, ::Unity::Mathematics::float3x4  b) ;

/// @brief Method mul, addr 0x181f0d4e0, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float4x4  b) ;

/// @brief Method mul, addr 0x181f07ae0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2  a, ::Unity::Mathematics::int2x2  b) ;

/// @brief Method mul, addr 0x181f054f0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x2  a, ::Unity::Mathematics::int2  b) ;

/// @brief Method mul, addr 0x181f07780, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x3  a, ::Unity::Mathematics::int3  b) ;

/// @brief Method mul, addr 0x181f04bb0, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x4  a, ::Unity::Mathematics::int4  b) ;

/// @brief Method mul, addr 0x181f09ef0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3x2  b) ;

/// @brief Method mul, addr 0x181f07210, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int4  a, ::Unity::Mathematics::int4x2  b) ;

/// @brief Method mul, addr 0x181f0b230, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x2  a, ::Unity::Mathematics::int2x2  b) ;

/// @brief Method mul, addr 0x181f08a60, size 0x180, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x3  a, ::Unity::Mathematics::int3x2  b) ;

/// @brief Method mul, addr 0x181f05810, size 0x210, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x4  a, ::Unity::Mathematics::int4x2  b) ;

/// @brief Method mul, addr 0x181f05fc0, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x2  a, ::Unity::Mathematics::int2x3  b) ;

/// @brief Method mul, addr 0x181f055e0, size 0x230, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x3  a, ::Unity::Mathematics::int3x3  b) ;

/// @brief Method mul, addr 0x181f02890, size 0x300, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x4  a, ::Unity::Mathematics::int4x3  b) ;

/// @brief Method mul, addr 0x181f01d60, size 0x1e0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x2  a, ::Unity::Mathematics::int2x4  b) ;

/// @brief Method mul, addr 0x181f02f80, size 0x2e0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x3  a, ::Unity::Mathematics::int3x4  b) ;

/// @brief Method mul, addr 0x181f0a0f0, size 0x3f0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x4  a, ::Unity::Mathematics::int4x4  b) ;

/// @brief Method mul, addr 0x181f037d0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int2  a, ::Unity::Mathematics::int2x3  b) ;

/// @brief Method mul, addr 0x181f02410, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3x3  b) ;

/// @brief Method mul, addr 0x181f05390, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x2  a, ::Unity::Mathematics::int2  b) ;

/// @brief Method mul, addr 0x181f06e80, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x3  a, ::Unity::Mathematics::int3  b) ;

/// @brief Method mul, addr 0x181f04cc0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x4  a, ::Unity::Mathematics::int4  b) ;

/// @brief Method mul, addr 0x181f01cd0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int4  a, ::Unity::Mathematics::int4x3  b) ;

/// @brief Method mul, addr 0x181f0c8c0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x2  a, ::Unity::Mathematics::int2x2  b) ;

/// @brief Method mul, addr 0x181f03450, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x3  a, ::Unity::Mathematics::int3x2  b) ;

/// @brief Method mul, addr 0x181f01f40, size 0x1c0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x4  a, ::Unity::Mathematics::int4x2  b) ;

/// @brief Method mul, addr 0x181f066c0, size 0x180, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x2  a, ::Unity::Mathematics::int2x3  b) ;

/// @brief Method mul, addr 0x181f0af10, size 0x1f0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x3  a, ::Unity::Mathematics::int3x3  b) ;

/// @brief Method mul, addr 0x181f08780, size 0x2b0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x4  a, ::Unity::Mathematics::int4x3  b) ;

/// @brief Method mul, addr 0x181f06f20, size 0x1f0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x2  a, ::Unity::Mathematics::int2x4  b) ;

/// @brief Method mul, addr 0x181f06bb0, size 0x2d0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x3  a, ::Unity::Mathematics::int3x4  b) ;

/// @brief Method mul, addr 0x181f03ab0, size 0x370, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x4  a, ::Unity::Mathematics::int4x4  b) ;

/// @brief Method mul, addr 0x181f07190, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int2  a, ::Unity::Mathematics::int2x4  b) ;

/// @brief Method mul, addr 0x181f033c0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3x4  b) ;

/// @brief Method mul, addr 0x181f01540, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4  a, ::Unity::Mathematics::int4x4  b) ;

/// @brief Method mul, addr 0x181f027d0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x2  a, ::Unity::Mathematics::int2  b) ;

/// @brief Method mul, addr 0x181f02280, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x3  a, ::Unity::Mathematics::int3  b) ;

/// @brief Method mul, addr 0x181f09d20, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x4  a, ::Unity::Mathematics::int4  b) ;

/// @brief Method mul, addr 0x181f04da0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x2  a, ::Unity::Mathematics::int2x2  b) ;

/// @brief Method mul, addr 0x181f03930, size 0x180, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x3  a, ::Unity::Mathematics::int3x2  b) ;

/// @brief Method mul, addr 0x181f07ea0, size 0x220, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x4  a, ::Unity::Mathematics::int4x2  b) ;

/// @brief Method mul, addr 0x181f07840, size 0x180, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x2  a, ::Unity::Mathematics::int2x3  b) ;

/// @brief Method mul, addr 0x181f01a90, size 0x240, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x3  a, ::Unity::Mathematics::int3x3  b) ;

/// @brief Method mul, addr 0x181f0b3b0, size 0x310, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x4  a, ::Unity::Mathematics::int4x3  b) ;

/// @brief Method mul, addr 0x181f09770, size 0x200, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x2  a, ::Unity::Mathematics::int2x4  b) ;

/// @brief Method mul, addr 0x181f068c0, size 0x2f0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x3  a, ::Unity::Mathematics::int3x4  b) ;

/// @brief Method mul, addr 0x181f0b940, size 0x400, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x4  a, ::Unity::Mathematics::int4x4  b) ;

/// @brief Method mul, addr 0x181f04540, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion mul(::Unity::Mathematics::quaternion  a, ::Unity::Mathematics::quaternion  b) ;

/// @brief Method mul, addr 0x181f07ae0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2  a, ::Unity::Mathematics::uint2x2  b) ;

/// @brief Method mul, addr 0x181f054f0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x2  a, ::Unity::Mathematics::uint2  b) ;

/// @brief Method mul, addr 0x181f07780, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x3  a, ::Unity::Mathematics::uint3  b) ;

/// @brief Method mul, addr 0x181f04bb0, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x4  a, ::Unity::Mathematics::uint4  b) ;

/// @brief Method mul, addr 0x181f09ef0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint3  a, ::Unity::Mathematics::uint3x2  b) ;

/// @brief Method mul, addr 0x181f07210, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint4  a, ::Unity::Mathematics::uint4x2  b) ;

/// @brief Method mul, addr 0x181f0b230, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x2  a, ::Unity::Mathematics::uint2x2  b) ;

/// @brief Method mul, addr 0x181f08a60, size 0x180, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x3  a, ::Unity::Mathematics::uint3x2  b) ;

/// @brief Method mul, addr 0x181f05810, size 0x210, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x4  a, ::Unity::Mathematics::uint4x2  b) ;

/// @brief Method mul, addr 0x181f05fc0, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x2  a, ::Unity::Mathematics::uint2x3  b) ;

/// @brief Method mul, addr 0x181f055e0, size 0x230, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x3  a, ::Unity::Mathematics::uint3x3  b) ;

/// @brief Method mul, addr 0x181f02890, size 0x300, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x4  a, ::Unity::Mathematics::uint4x3  b) ;

/// @brief Method mul, addr 0x181f01d60, size 0x1e0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x2  a, ::Unity::Mathematics::uint2x4  b) ;

/// @brief Method mul, addr 0x181f02f80, size 0x2e0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x3  a, ::Unity::Mathematics::uint3x4  b) ;

/// @brief Method mul, addr 0x181f0a0f0, size 0x3f0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x4  a, ::Unity::Mathematics::uint4x4  b) ;

/// @brief Method mul, addr 0x181f037d0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint2  a, ::Unity::Mathematics::uint2x3  b) ;

/// @brief Method mul, addr 0x181f02410, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3  a, ::Unity::Mathematics::uint3x3  b) ;

/// @brief Method mul, addr 0x181f05390, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x2  a, ::Unity::Mathematics::uint2  b) ;

/// @brief Method mul, addr 0x181f06e80, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x3  a, ::Unity::Mathematics::uint3  b) ;

/// @brief Method mul, addr 0x181f04cc0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x4  a, ::Unity::Mathematics::uint4  b) ;

/// @brief Method mul, addr 0x181f01cd0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint4  a, ::Unity::Mathematics::uint4x3  b) ;

/// @brief Method mul, addr 0x181f0c8c0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x2  a, ::Unity::Mathematics::uint2x2  b) ;

/// @brief Method mul, addr 0x181f03450, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x3  a, ::Unity::Mathematics::uint3x2  b) ;

/// @brief Method mul, addr 0x181f01f40, size 0x1c0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x4  a, ::Unity::Mathematics::uint4x2  b) ;

/// @brief Method mul, addr 0x181f066c0, size 0x180, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x2  a, ::Unity::Mathematics::uint2x3  b) ;

/// @brief Method mul, addr 0x181f0af10, size 0x1f0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x3  a, ::Unity::Mathematics::uint3x3  b) ;

/// @brief Method mul, addr 0x181f08780, size 0x2b0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x4  a, ::Unity::Mathematics::uint4x3  b) ;

/// @brief Method mul, addr 0x181f06f20, size 0x1f0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x2  a, ::Unity::Mathematics::uint2x4  b) ;

/// @brief Method mul, addr 0x181f06bb0, size 0x2d0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x3  a, ::Unity::Mathematics::uint3x4  b) ;

/// @brief Method mul, addr 0x181f04610, size 0x360, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x4  a, ::Unity::Mathematics::uint4x4  b) ;

/// @brief Method mul, addr 0x181f07190, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint2  a, ::Unity::Mathematics::uint2x4  b) ;

/// @brief Method mul, addr 0x181f033c0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint3  a, ::Unity::Mathematics::uint3x4  b) ;

/// @brief Method mul, addr 0x181f01540, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4  a, ::Unity::Mathematics::uint4x4  b) ;

/// @brief Method mul, addr 0x181f027d0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x2  a, ::Unity::Mathematics::uint2  b) ;

/// @brief Method mul, addr 0x181f02280, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x3  a, ::Unity::Mathematics::uint3  b) ;

/// @brief Method mul, addr 0x181f09d20, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x4  a, ::Unity::Mathematics::uint4  b) ;

/// @brief Method mul, addr 0x181f04da0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x2  a, ::Unity::Mathematics::uint2x2  b) ;

/// @brief Method mul, addr 0x181f03930, size 0x180, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x3  a, ::Unity::Mathematics::uint3x2  b) ;

/// @brief Method mul, addr 0x181f07ea0, size 0x220, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x4  a, ::Unity::Mathematics::uint4x2  b) ;

/// @brief Method mul, addr 0x181f07840, size 0x180, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x2  a, ::Unity::Mathematics::uint2x3  b) ;

/// @brief Method mul, addr 0x181f01a90, size 0x240, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x3  a, ::Unity::Mathematics::uint3x3  b) ;

/// @brief Method mul, addr 0x181f0b3b0, size 0x310, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x4  a, ::Unity::Mathematics::uint4x3  b) ;

/// @brief Method mul, addr 0x181f09770, size 0x200, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x2  a, ::Unity::Mathematics::uint2x4  b) ;

/// @brief Method mul, addr 0x181f068c0, size 0x2f0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x3  a, ::Unity::Mathematics::uint3x4  b) ;

/// @brief Method mul, addr 0x181f0b940, size 0x400, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x4  a, ::Unity::Mathematics::uint4x4  b) ;

/// @brief Method mul, addr 0x181ee5fd0, size 0x20, virtual false, abstract: false, final false
static inline double_t mul(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2  b) ;

/// @brief Method mul, addr 0x181ee5fa0, size 0x30, virtual false, abstract: false, final false
static inline double_t mul(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3  b) ;

/// @brief Method mul, addr 0x181ee5eb0, size 0x40, virtual false, abstract: false, final false
static inline double_t mul(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method mul, addr 0x181ee5f60, size 0x10, virtual false, abstract: false, final false
static inline double_t mul(double_t  a, double_t  b) ;

/// @brief Method mul, addr 0x1819095a0, size 0x30, virtual false, abstract: false, final false
static inline float_t mul(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b) ;

/// @brief Method mul, addr 0x181931de0, size 0x60, virtual false, abstract: false, final false
static inline float_t mul(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method mul, addr 0x181f0ae00, size 0x40, virtual false, abstract: false, final false
static inline float_t mul(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method mul, addr 0x181ee5f90, size 0x10, virtual false, abstract: false, final false
static inline float_t mul(float_t  a, float_t  b) ;

/// @brief Method mul, addr 0x181ee5f70, size 0x20, virtual false, abstract: false, final false
static inline int32_t mul(::Unity::Mathematics::int2  a, ::Unity::Mathematics::int2  b) ;

/// @brief Method mul, addr 0x181ee5f40, size 0x20, virtual false, abstract: false, final false
static inline int32_t mul(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3  b) ;

/// @brief Method mul, addr 0x181ee5f10, size 0x30, virtual false, abstract: false, final false
static inline int32_t mul(::Unity::Mathematics::int4  a, ::Unity::Mathematics::int4  b) ;

/// @brief Method mul, addr 0x181ee5ea0, size 0x10, virtual false, abstract: false, final false
static inline int32_t mul(int32_t  a, int32_t  b) ;

/// @brief Method mul, addr 0x181ee5f70, size 0x20, virtual false, abstract: false, final false
static inline uint32_t mul(::Unity::Mathematics::uint2  a, ::Unity::Mathematics::uint2  b) ;

/// @brief Method mul, addr 0x181ee5f40, size 0x20, virtual false, abstract: false, final false
static inline uint32_t mul(::Unity::Mathematics::uint3  a, ::Unity::Mathematics::uint3  b) ;

/// @brief Method mul, addr 0x181ee5f10, size 0x30, virtual false, abstract: false, final false
static inline uint32_t mul(::Unity::Mathematics::uint4  a, ::Unity::Mathematics::uint4  b) ;

/// @brief Method mul, addr 0x181ee5ea0, size 0x10, virtual false, abstract: false, final false
static inline uint32_t mul(uint32_t  a, uint32_t  b) ;

/// @brief Method mulScale, addr 0x181f01330, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 mulScale(::Unity::Mathematics::float3x3  m, ::Unity::Mathematics::float3  s) ;

/// @brief Method nlerp, addr 0x181f0ddc0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion nlerp(::Unity::Mathematics::quaternion  q1, ::Unity::Mathematics::quaternion  q2, float_t  t) ;

/// @brief Method normalize, addr 0x181f0e140, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 normalize(::Unity::Mathematics::double2  x) ;

/// @brief Method normalize, addr 0x181f0de60, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 normalize(::Unity::Mathematics::double3  x) ;

/// @brief Method normalize, addr 0x181f0df70, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 normalize(::Unity::Mathematics::double4  x) ;

/// @brief Method normalize, addr 0x181f0e030, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 normalize(::Unity::Mathematics::float2  x) ;

/// @brief Method normalize, addr 0x181f0e1c0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 normalize(::Unity::Mathematics::float3  x) ;

/// @brief Method normalize, addr 0x181f0df00, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 normalize(::Unity::Mathematics::float4  x) ;

/// @brief Method normalize, addr 0x181f0e0c0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion normalize(::Unity::Mathematics::quaternion  q) ;

/// @brief Method normalizesafe, addr 0x181f0e720, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 normalizesafe(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  defaultvalue) ;

/// @brief Method normalizesafe, addr 0x181f0e7d0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 normalizesafe(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  defaultvalue) ;

/// @brief Method normalizesafe, addr 0x181f0e280, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 normalizesafe(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  defaultvalue) ;

/// @brief Method normalizesafe, addr 0x181f0e370, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 normalizesafe(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  defaultvalue) ;

/// @brief Method normalizesafe, addr 0x181f0e640, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 normalizesafe(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  defaultvalue) ;

/// @brief Method normalizesafe, addr 0x181f0e450, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 normalizesafe(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  defaultvalue) ;

/// @brief Method normalizesafe, addr 0x181f0e4f0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion normalizesafe(::Unity::Mathematics::quaternion  q) ;

/// @brief Method normalizesafe, addr 0x181f0e5a0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion normalizesafe(::Unity::Mathematics::quaternion  q, ::Unity::Mathematics::quaternion  defaultvalue) ;

/// @brief Method orthonormal_basis, addr 0x181f0e970, size 0xb0, virtual false, abstract: false, final false
static inline void orthonormal_basis(::Unity::Mathematics::double3  normal, ::by_ref<::Unity::Mathematics::double3>  basis1, ::by_ref<::Unity::Mathematics::double3>  basis2) ;

/// @brief Method orthonormal_basis, addr 0x181f0e8c0, size 0xb0, virtual false, abstract: false, final false
static inline void orthonormal_basis(::Unity::Mathematics::float3  normal, ::by_ref<::Unity::Mathematics::float3>  basis1, ::by_ref<::Unity::Mathematics::float3>  basis2) ;

/// @brief Method orthonormalize, addr 0x181465f10, size 0x210, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 orthonormalize(::Unity::Mathematics::float3x3  i) ;

/// @brief Method pow, addr 0x181f0ec90, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 pow(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method pow, addr 0x181f0ead0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 pow(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method pow, addr 0x181f0ebe0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 pow(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method pow, addr 0x181f0eb60, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 pow(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method pow, addr 0x181f0ea20, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 pow(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method pow, addr 0x181f0ed00, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 pow(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method pow, addr 0x181f0ebd0, size 0x10, virtual false, abstract: false, final false
static inline double_t pow(double_t  x, double_t  y) ;

/// @brief Method pow, addr 0x1819095d0, size 0x20, virtual false, abstract: false, final false
static inline float_t pow(float_t  x, float_t  y) ;

/// @brief Method project, addr 0x181f0ef70, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 project(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2  ontoB) ;

/// @brief Method project, addr 0x181f0f0a0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 project(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3  ontoB) ;

/// @brief Method project, addr 0x181f0ee40, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 project(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  ontoB) ;

/// @brief Method project, addr 0x181f0ede0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 project(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  ontoB) ;

/// @brief Method project, addr 0x181f0eff0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 project(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  ontoB) ;

/// @brief Method project, addr 0x181f0f190, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 project(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  ontoB) ;

/// @brief Method projectsafe, addr 0x181f0f5c0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 projectsafe(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2  ontoB, ::Unity::Mathematics::double2  defaultValue) ;

/// @brief Method projectsafe, addr 0x181f0f690, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 projectsafe(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3  ontoB, ::Unity::Mathematics::double3  defaultValue) ;

/// @brief Method projectsafe, addr 0x181f0f470, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 projectsafe(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  ontoB, ::Unity::Mathematics::double4  defaultValue) ;

/// @brief Method projectsafe, addr 0x181f0f270, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 projectsafe(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  ontoB, ::Unity::Mathematics::float2  defaultValue) ;

/// @brief Method projectsafe, addr 0x181f0f350, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 projectsafe(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  ontoB, ::Unity::Mathematics::float3  defaultValue) ;

/// @brief Method projectsafe, addr 0x181f0f1f0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 projectsafe(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  ontoB, ::Unity::Mathematics::float4  defaultValue) ;

/// @brief Method pseudoinverse, addr 0x181edb730, size 0x390, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 pseudoinverse(::Unity::Mathematics::float3x3  m) ;

/// @brief Method quaternion, addr 0x181f0f800, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float3x3  m) ;

/// @brief Method quaternion, addr 0x181f0f7b0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float4x4  m) ;

/// @brief Method quaternion, addr 0x1804f6880, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float4  value) ;

/// @brief Method quaternion, addr 0x181e9f380, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion quaternion(float_t  x, float_t  y, float_t  z, float_t  w) ;

/// @brief Method radians, addr 0x181f0f8d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 radians(::Unity::Mathematics::double2  x) ;

/// @brief Method radians, addr 0x181f0f900, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 radians(::Unity::Mathematics::double3  x) ;

/// @brief Method radians, addr 0x181f0f950, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 radians(::Unity::Mathematics::double4  x) ;

/// @brief Method radians, addr 0x181f0f8a0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 radians(::Unity::Mathematics::float2  x) ;

/// @brief Method radians, addr 0x181f0f860, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 radians(::Unity::Mathematics::float3  x) ;

/// @brief Method radians, addr 0x181f0f840, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 radians(::Unity::Mathematics::float4  x) ;

/// @brief Method radians, addr 0x181f0f940, size 0x10, virtual false, abstract: false, final false
static inline double_t radians(double_t  x) ;

/// @brief Method radians, addr 0x181a42870, size 0x10, virtual false, abstract: false, final false
static inline float_t radians(float_t  x) ;

/// @brief Method rcp, addr 0x181f0fab0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 rcp(::Unity::Mathematics::double2  x) ;

/// @brief Method rcp, addr 0x181f0f9a0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 rcp(::Unity::Mathematics::double3  x) ;

/// @brief Method rcp, addr 0x181f0fa20, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 rcp(::Unity::Mathematics::double4  x) ;

/// @brief Method rcp, addr 0x181f0f9f0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 rcp(::Unity::Mathematics::float2  x) ;

/// @brief Method rcp, addr 0x181f0fa70, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 rcp(::Unity::Mathematics::float3  x) ;

/// @brief Method rcp, addr 0x181f0fae0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 rcp(::Unity::Mathematics::float4  x) ;

/// @brief Method rcp, addr 0x181f0f9e0, size 0x10, virtual false, abstract: false, final false
static inline double_t rcp(double_t  x) ;

/// @brief Method rcp, addr 0x181f0fb10, size 0x10, virtual false, abstract: false, final false
static inline float_t rcp(float_t  x) ;

/// @brief Method read32_little_endian, addr 0x1816691e0, size 0x20, virtual false, abstract: false, final false
static inline uint32_t read32_little_endian(void*  pBuffer) ;

/// @brief Method reflect, addr 0x181f0fcf0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 reflect(::Unity::Mathematics::double2  i, ::Unity::Mathematics::double2  n) ;

/// @brief Method reflect, addr 0x181f0fc50, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 reflect(::Unity::Mathematics::double3  i, ::Unity::Mathematics::double3  n) ;

/// @brief Method reflect, addr 0x181f0fb80, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 reflect(::Unity::Mathematics::double4  i, ::Unity::Mathematics::double4  n) ;

/// @brief Method reflect, addr 0x181f0fb20, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 reflect(::Unity::Mathematics::float2  i, ::Unity::Mathematics::float2  n) ;

/// @brief Method reflect, addr 0x181f0fd50, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 reflect(::Unity::Mathematics::float3  i, ::Unity::Mathematics::float3  n) ;

/// @brief Method reflect, addr 0x181f0fdf0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 reflect(::Unity::Mathematics::float4  i, ::Unity::Mathematics::float4  n) ;

/// @brief Method refract, addr 0x181f100e0, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 refract(::Unity::Mathematics::double2  i, ::Unity::Mathematics::double2  n, double_t  indexOfRefraction) ;

/// @brief Method refract, addr 0x181f10320, size 0x1a0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 refract(::Unity::Mathematics::double3  i, ::Unity::Mathematics::double3  n, double_t  indexOfRefraction) ;

/// @brief Method refract, addr 0x181f0fe30, size 0x1c0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 refract(::Unity::Mathematics::double4  i, ::Unity::Mathematics::double4  n, double_t  indexOfRefraction) ;

/// @brief Method refract, addr 0x181f0fff0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 refract(::Unity::Mathematics::float2  i, ::Unity::Mathematics::float2  n, float_t  indexOfRefraction) ;

/// @brief Method refract, addr 0x181f10210, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 refract(::Unity::Mathematics::float3  i, ::Unity::Mathematics::float3  n, float_t  indexOfRefraction) ;

/// @brief Method refract, addr 0x181f104c0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 refract(::Unity::Mathematics::float4  i, ::Unity::Mathematics::float4  n, float_t  indexOfRefraction) ;

/// @brief Method remap, addr 0x181f107b0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 remap(::Unity::Mathematics::double2  srcStart, ::Unity::Mathematics::double2  srcEnd, ::Unity::Mathematics::double2  dstStart, ::Unity::Mathematics::double2  dstEnd, ::Unity::Mathematics::double2  x) ;

/// @brief Method remap, addr 0x181f106a0, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 remap(::Unity::Mathematics::double3  srcStart, ::Unity::Mathematics::double3  srcEnd, ::Unity::Mathematics::double3  dstStart, ::Unity::Mathematics::double3  dstEnd, ::Unity::Mathematics::double3  x) ;

/// @brief Method remap, addr 0x181f10840, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 remap(::Unity::Mathematics::double4  srcStart, ::Unity::Mathematics::double4  srcEnd, ::Unity::Mathematics::double4  dstStart, ::Unity::Mathematics::double4  dstEnd, ::Unity::Mathematics::double4  x) ;

/// @brief Method remap, addr 0x181f105e0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 remap(::Unity::Mathematics::float2  srcStart, ::Unity::Mathematics::float2  srcEnd, ::Unity::Mathematics::float2  dstStart, ::Unity::Mathematics::float2  dstEnd, ::Unity::Mathematics::float2  x) ;

/// @brief Method remap, addr 0x181f10990, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 remap(::Unity::Mathematics::float3  srcStart, ::Unity::Mathematics::float3  srcEnd, ::Unity::Mathematics::float3  dstStart, ::Unity::Mathematics::float3  dstEnd, ::Unity::Mathematics::float3  x) ;

/// @brief Method remap, addr 0x181f10570, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 remap(::Unity::Mathematics::float4  srcStart, ::Unity::Mathematics::float4  srcEnd, ::Unity::Mathematics::float4  dstStart, ::Unity::Mathematics::float4  dstEnd, ::Unity::Mathematics::float4  x) ;

/// @brief Method remap, addr 0x181f105b0, size 0x30, virtual false, abstract: false, final false
static inline double_t remap(double_t  srcStart, double_t  srcEnd, double_t  dstStart, double_t  dstEnd, double_t  x) ;

/// @brief Method remap, addr 0x181f10670, size 0x30, virtual false, abstract: false, final false
static inline float_t remap(float_t  srcStart, float_t  srcEnd, float_t  dstStart, float_t  dstEnd, float_t  x) ;

/// @brief Method reversebits, addr 0x181f10c90, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 reversebits(::Unity::Mathematics::int2  x) ;

/// @brief Method reversebits, addr 0x181f10cd0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 reversebits(::Unity::Mathematics::int3  x) ;

/// @brief Method reversebits, addr 0x181f10b50, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 reversebits(::Unity::Mathematics::int4  x) ;

/// @brief Method reversebits, addr 0x181edbc50, size 0x2f0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 reversebits(::Unity::Mathematics::uint2  x) ;

/// @brief Method reversebits, addr 0x181edbac0, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 reversebits(::Unity::Mathematics::uint3  x) ;

/// @brief Method reversebits, addr 0x181f10a70, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 reversebits(::Unity::Mathematics::uint4  x) ;

/// @brief Method reversebits, addr 0x181f10b10, size 0x40, virtual false, abstract: false, final false
static inline int32_t reversebits(int32_t  x) ;

/// @brief Method reversebits, addr 0x181f10c30, size 0x60, virtual false, abstract: false, final false
static inline int64_t reversebits(int64_t  x) ;

/// @brief Method reversebits, addr 0x181f10b10, size 0x40, virtual false, abstract: false, final false
static inline uint32_t reversebits(uint32_t  x) ;

/// @brief Method reversebits, addr 0x181f10c30, size 0x60, virtual false, abstract: false, final false
static inline uint64_t reversebits(uint64_t  x) ;

/// @brief Method right, addr 0x181f10d50, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 right() ;

/// @brief Method rol, addr 0x181f10f10, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 rol(::Unity::Mathematics::int2  x, int32_t  n) ;

/// @brief Method rol, addr 0x181f10de0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 rol(::Unity::Mathematics::int3  x, int32_t  n) ;

/// @brief Method rol, addr 0x181f10e60, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 rol(::Unity::Mathematics::int4  x, int32_t  n) ;

/// @brief Method rol, addr 0x181f10d60, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 rol(::Unity::Mathematics::uint2  x, int32_t  n) ;

/// @brief Method rol, addr 0x181f10fc0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 rol(::Unity::Mathematics::uint3  x, int32_t  n) ;

/// @brief Method rol, addr 0x181f10ee0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 rol(::Unity::Mathematics::uint4  x, int32_t  n) ;

/// @brief Method rol, addr 0x18170c9d0, size 0x20, virtual false, abstract: false, final false
static inline int32_t rol(int32_t  x, int32_t  n) ;

/// @brief Method rol, addr 0x181ecb830, size 0x20, virtual false, abstract: false, final false
static inline int64_t rol(int64_t  x, int32_t  n) ;

/// @brief Method rol, addr 0x18170c9d0, size 0x20, virtual false, abstract: false, final false
static inline uint32_t rol(uint32_t  x, int32_t  n) ;

/// @brief Method rol, addr 0x181ecb830, size 0x20, virtual false, abstract: false, final false
static inline uint64_t rol(uint64_t  x, int32_t  n) ;

/// @brief Method ror, addr 0x181f111d0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 ror(::Unity::Mathematics::int2  x, int32_t  n) ;

/// @brief Method ror, addr 0x181f11280, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 ror(::Unity::Mathematics::int3  x, int32_t  n) ;

/// @brief Method ror, addr 0x181f110d0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 ror(::Unity::Mathematics::int4  x, int32_t  n) ;

/// @brief Method ror, addr 0x181f11050, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 ror(::Unity::Mathematics::uint2  x, int32_t  n) ;

/// @brief Method ror, addr 0x181f11150, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 ror(::Unity::Mathematics::uint3  x, int32_t  n) ;

/// @brief Method ror, addr 0x181f11300, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 ror(::Unity::Mathematics::uint4  x, int32_t  n) ;

/// @brief Method ror, addr 0x1816193e0, size 0x20, virtual false, abstract: false, final false
static inline int32_t ror(int32_t  x, int32_t  n) ;

/// @brief Method ror, addr 0x18161a270, size 0x20, virtual false, abstract: false, final false
static inline int64_t ror(int64_t  x, int32_t  n) ;

/// @brief Method ror, addr 0x1816193e0, size 0x20, virtual false, abstract: false, final false
static inline uint32_t ror(uint32_t  x, int32_t  n) ;

/// @brief Method ror, addr 0x18161a270, size 0x20, virtual false, abstract: false, final false
static inline uint64_t ror(uint64_t  x, int32_t  n) ;

/// @brief Method rotate, addr 0x181f114e0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 rotate(::Unity::Mathematics::double4x4  a, ::Unity::Mathematics::double3  b) ;

/// @brief Method rotate, addr 0x181f115e0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::AffineTransform  a, ::Unity::Mathematics::float3  dir) ;

/// @brief Method rotate, addr 0x181f11390, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::RigidTransform  a, ::Unity::Mathematics::float3  dir) ;

/// @brief Method rotate, addr 0x181f11330, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method rotate, addr 0x1807c0380, size 0xb220, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::quaternion  q, ::Unity::Mathematics::float3  v) ;

/// @brief Method rotation, addr 0x181edbf40, size 0x400, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion rotation(::Unity::Mathematics::float3x3  m) ;

/// @brief Method round, addr 0x181f116a0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 round(::Unity::Mathematics::double2  x) ;

/// @brief Method round, addr 0x181f11770, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 round(::Unity::Mathematics::double3  x) ;

/// @brief Method round, addr 0x181f117e0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 round(::Unity::Mathematics::double4  x) ;

/// @brief Method round, addr 0x181f11910, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 round(::Unity::Mathematics::float2  x) ;

/// @brief Method round, addr 0x181f116f0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 round(::Unity::Mathematics::float3  x) ;

/// @brief Method round, addr 0x181f11870, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 round(::Unity::Mathematics::float4  x) ;

/// @brief Method round, addr 0x18170fa90, size 0x10, virtual false, abstract: false, final false
static inline double_t round(double_t  x) ;

/// @brief Method round, addr 0x181909b20, size 0x20, virtual false, abstract: false, final false
static inline float_t round(float_t  x) ;

/// @brief Method rsqrt, addr 0x181f11c80, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 rsqrt(::Unity::Mathematics::double2  x) ;

/// @brief Method rsqrt, addr 0x181f119b0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 rsqrt(::Unity::Mathematics::double3  x) ;

/// @brief Method rsqrt, addr 0x181f11a70, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 rsqrt(::Unity::Mathematics::double4  x) ;

/// @brief Method rsqrt, addr 0x181f11c10, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 rsqrt(::Unity::Mathematics::float2  x) ;

/// @brief Method rsqrt, addr 0x181f11960, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 rsqrt(::Unity::Mathematics::float3  x) ;

/// @brief Method rsqrt, addr 0x181f11bc0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 rsqrt(::Unity::Mathematics::float4  x) ;

/// @brief Method rsqrt, addr 0x181f11c40, size 0x40, virtual false, abstract: false, final false
static inline double_t rsqrt(double_t  x) ;

/// @brief Method rsqrt, addr 0x181f11b60, size 0x60, virtual false, abstract: false, final false
static inline float_t rsqrt(float_t  x) ;

/// @brief Method saturate, addr 0x181f12080, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 saturate(::Unity::Mathematics::double2  x) ;

/// @brief Method saturate, addr 0x181f11f60, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 saturate(::Unity::Mathematics::double3  x) ;

/// @brief Method saturate, addr 0x181f11de0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 saturate(::Unity::Mathematics::double4  x) ;

/// @brief Method saturate, addr 0x181f11ed0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 saturate(::Unity::Mathematics::float2  x) ;

/// @brief Method saturate, addr 0x181f11d00, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 saturate(::Unity::Mathematics::float3  x) ;

/// @brief Method saturate, addr 0x181f11e90, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 saturate(::Unity::Mathematics::float4  x) ;

/// @brief Method saturate, addr 0x181f11e40, size 0x50, virtual false, abstract: false, final false
static inline double_t saturate(double_t  x) ;

/// @brief Method saturate, addr 0x181f12040, size 0x40, virtual false, abstract: false, final false
static inline float_t saturate(float_t  x) ;

/// @brief Method scaleMul, addr 0x181f12110, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 scaleMul(::Unity::Mathematics::float3  s, ::Unity::Mathematics::float3x3  m) ;

/// @brief Method select, addr 0x181f12210, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 select(::Unity::Mathematics::double2  falseValue, ::Unity::Mathematics::double2  trueValue, ::Unity::Mathematics::bool2  test) ;

/// @brief Method select, addr 0x181f12300, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 select(::Unity::Mathematics::double2  falseValue, ::Unity::Mathematics::double2  trueValue, bool  test) ;

/// @brief Method select, addr 0x181f124a0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 select(::Unity::Mathematics::double3  falseValue, ::Unity::Mathematics::double3  trueValue, ::Unity::Mathematics::bool3  test) ;

/// @brief Method select, addr 0x181f124f0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 select(::Unity::Mathematics::double3  falseValue, ::Unity::Mathematics::double3  trueValue, bool  test) ;

/// @brief Method select, addr 0x181f12430, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 select(::Unity::Mathematics::double4  falseValue, ::Unity::Mathematics::double4  trueValue, ::Unity::Mathematics::bool4  test) ;

/// @brief Method select, addr 0x181f12520, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 select(::Unity::Mathematics::double4  falseValue, ::Unity::Mathematics::double4  trueValue, bool  test) ;

/// @brief Method select, addr 0x181f122b0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 select(::Unity::Mathematics::float2  falseValue, ::Unity::Mathematics::float2  trueValue, ::Unity::Mathematics::bool2  test) ;

/// @brief Method select, addr 0x181f122a0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 select(::Unity::Mathematics::float2  falseValue, ::Unity::Mathematics::float2  trueValue, bool  test) ;

/// @brief Method select, addr 0x181f12320, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 select(::Unity::Mathematics::float3  falseValue, ::Unity::Mathematics::float3  trueValue, ::Unity::Mathematics::bool3  test) ;

/// @brief Method select, addr 0x181f12370, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 select(::Unity::Mathematics::float3  falseValue, ::Unity::Mathematics::float3  trueValue, bool  test) ;

/// @brief Method select, addr 0x181f123d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 select(::Unity::Mathematics::float4  falseValue, ::Unity::Mathematics::float4  trueValue, ::Unity::Mathematics::bool4  test) ;

/// @brief Method select, addr 0x181f12300, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 select(::Unity::Mathematics::float4  falseValue, ::Unity::Mathematics::float4  trueValue, bool  test) ;

/// @brief Method select, addr 0x181f123a0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 select(::Unity::Mathematics::int2  falseValue, ::Unity::Mathematics::int2  trueValue, ::Unity::Mathematics::bool2  test) ;

/// @brief Method select, addr 0x181f122a0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 select(::Unity::Mathematics::int2  falseValue, ::Unity::Mathematics::int2  trueValue, bool  test) ;

/// @brief Method select, addr 0x181f12250, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 select(::Unity::Mathematics::int3  falseValue, ::Unity::Mathematics::int3  trueValue, ::Unity::Mathematics::bool3  test) ;

/// @brief Method select, addr 0x181f12370, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 select(::Unity::Mathematics::int3  falseValue, ::Unity::Mathematics::int3  trueValue, bool  test) ;

/// @brief Method select, addr 0x181f12400, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 select(::Unity::Mathematics::int4  falseValue, ::Unity::Mathematics::int4  trueValue, ::Unity::Mathematics::bool4  test) ;

/// @brief Method select, addr 0x181f12300, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 select(::Unity::Mathematics::int4  falseValue, ::Unity::Mathematics::int4  trueValue, bool  test) ;

/// @brief Method select, addr 0x181f123a0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 select(::Unity::Mathematics::uint2  falseValue, ::Unity::Mathematics::uint2  trueValue, ::Unity::Mathematics::bool2  test) ;

/// @brief Method select, addr 0x181f122a0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 select(::Unity::Mathematics::uint2  falseValue, ::Unity::Mathematics::uint2  trueValue, bool  test) ;

/// @brief Method select, addr 0x181f12250, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 select(::Unity::Mathematics::uint3  falseValue, ::Unity::Mathematics::uint3  trueValue, ::Unity::Mathematics::bool3  test) ;

/// @brief Method select, addr 0x181f12370, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 select(::Unity::Mathematics::uint3  falseValue, ::Unity::Mathematics::uint3  trueValue, bool  test) ;

/// @brief Method select, addr 0x181f12400, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 select(::Unity::Mathematics::uint4  falseValue, ::Unity::Mathematics::uint4  trueValue, ::Unity::Mathematics::bool4  test) ;

/// @brief Method select, addr 0x181f12300, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 select(::Unity::Mathematics::uint4  falseValue, ::Unity::Mathematics::uint4  trueValue, bool  test) ;

/// @brief Method select, addr 0x181f12290, size 0x10, virtual false, abstract: false, final false
static inline double_t select(double_t  falseValue, double_t  trueValue, bool  test) ;

/// @brief Method select, addr 0x181f12290, size 0x10, virtual false, abstract: false, final false
static inline float_t select(float_t  falseValue, float_t  trueValue, bool  test) ;

/// @brief Method select, addr 0x181f12240, size 0x10, virtual false, abstract: false, final false
static inline int32_t select(int32_t  falseValue, int32_t  trueValue, bool  test) ;

/// @brief Method select, addr 0x181f12200, size 0x10, virtual false, abstract: false, final false
static inline int64_t select(int64_t  falseValue, int64_t  trueValue, bool  test) ;

/// @brief Method select, addr 0x181f12240, size 0x10, virtual false, abstract: false, final false
static inline uint32_t select(uint32_t  falseValue, uint32_t  trueValue, bool  test) ;

/// @brief Method select, addr 0x181f12200, size 0x10, virtual false, abstract: false, final false
static inline uint64_t select(uint64_t  falseValue, uint64_t  trueValue, bool  test) ;

/// @brief Method select_shuffle_component, addr 0x181edc4f0, size 0xc0, virtual false, abstract: false, final false
static inline bool select_shuffle_component(::Unity::Mathematics::bool2  a, ::Unity::Mathematics::bool2  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x181f129c0, size 0xe0, virtual false, abstract: false, final false
static inline bool select_shuffle_component(::Unity::Mathematics::bool3  a, ::Unity::Mathematics::bool3  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x181edc400, size 0xf0, virtual false, abstract: false, final false
static inline bool select_shuffle_component(::Unity::Mathematics::bool4  a, ::Unity::Mathematics::bool4  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x181f12700, size 0xd0, virtual false, abstract: false, final false
static inline double_t select_shuffle_component(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x181f12aa0, size 0xe0, virtual false, abstract: false, final false
static inline double_t select_shuffle_component(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x181f128c0, size 0x100, virtual false, abstract: false, final false
static inline double_t select_shuffle_component(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x181edc5b0, size 0xe0, virtual false, abstract: false, final false
static inline float_t select_shuffle_component(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x181f12620, size 0xe0, virtual false, abstract: false, final false
static inline float_t select_shuffle_component(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x181f12b80, size 0x100, virtual false, abstract: false, final false
static inline float_t select_shuffle_component(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x181edc340, size 0xc0, virtual false, abstract: false, final false
static inline int32_t select_shuffle_component(::Unity::Mathematics::int2  a, ::Unity::Mathematics::int2  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x181f12550, size 0xd0, virtual false, abstract: false, final false
static inline int32_t select_shuffle_component(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x181f127d0, size 0xf0, virtual false, abstract: false, final false
static inline int32_t select_shuffle_component(::Unity::Mathematics::int4  a, ::Unity::Mathematics::int4  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x181edc340, size 0xc0, virtual false, abstract: false, final false
static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint2  a, ::Unity::Mathematics::uint2  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x181f12550, size 0xd0, virtual false, abstract: false, final false
static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint3  a, ::Unity::Mathematics::uint3  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x181f127d0, size 0xf0, virtual false, abstract: false, final false
static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint4  a, ::Unity::Mathematics::uint4  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method shuffle, addr 0x181f162b0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool2  left, ::Unity::Mathematics::bool2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x181f16060, size 0x1c0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool3  left, ::Unity::Mathematics::bool3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x181f16dc0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool4  left, ::Unity::Mathematics::bool4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x181f133e0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool2  left, ::Unity::Mathematics::bool2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x181f14c60, size 0x270, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool3  left, ::Unity::Mathematics::bool3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x181f16220, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool4  left, ::Unity::Mathematics::bool4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x181f141e0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool2  left, ::Unity::Mathematics::bool2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x181f12ea0, size 0x320, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool3  left, ::Unity::Mathematics::bool3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x181f15230, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool4  left, ::Unity::Mathematics::bool4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x181f13d40, size 0x160, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double2  left, ::Unity::Mathematics::double2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x181f13210, size 0x1d0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double3  left, ::Unity::Mathematics::double3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x181f14030, size 0x1b0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double4  left, ::Unity::Mathematics::double4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x181f15540, size 0x210, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double2  left, ::Unity::Mathematics::double2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x181f167e0, size 0x280, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double3  left, ::Unity::Mathematics::double3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x181f14330, size 0x280, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double4  left, ::Unity::Mathematics::double4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x181f15a30, size 0x2c0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double2  left, ::Unity::Mathematics::double2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x181f13900, size 0x350, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double3  left, ::Unity::Mathematics::double3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x181edc690, size 0x350, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double4  left, ::Unity::Mathematics::double4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x181f15750, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float2  left, ::Unity::Mathematics::float2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x181f165e0, size 0x200, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float3  left, ::Unity::Mathematics::float3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x181f16400, size 0x1e0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float4  left, ::Unity::Mathematics::float4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x181f157c0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float2  left, ::Unity::Mathematics::float2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x181f16e10, size 0x290, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float3  left, ::Unity::Mathematics::float3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x181f152d0, size 0x270, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float4  left, ::Unity::Mathematics::float4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x181f14960, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float2  left, ::Unity::Mathematics::float2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x181f16a60, size 0x360, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float3  left, ::Unity::Mathematics::float3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x181edc9e0, size 0x330, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float4  left, ::Unity::Mathematics::float4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x181f131c0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int2  left, ::Unity::Mathematics::int2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x181f14a40, size 0x220, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int3  left, ::Unity::Mathematics::int3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x181f12c80, size 0x200, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int4  left, ::Unity::Mathematics::int4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x181f13ea0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int2  left, ::Unity::Mathematics::int2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x181f15dd0, size 0x290, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int3  left, ::Unity::Mathematics::int3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x181f145b0, size 0x2b0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int4  left, ::Unity::Mathematics::int4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x181f14270, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int2  left, ::Unity::Mathematics::int2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x181f14ed0, size 0x360, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int3  left, ::Unity::Mathematics::int3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x181f13480, size 0x390, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int4  left, ::Unity::Mathematics::int4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x181f131c0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint2  left, ::Unity::Mathematics::uint2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x181f14a40, size 0x220, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint3  left, ::Unity::Mathematics::uint3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x181f12c80, size 0x200, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint4  left, ::Unity::Mathematics::uint4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x181f13ea0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint2  left, ::Unity::Mathematics::uint2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x181f15dd0, size 0x290, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint3  left, ::Unity::Mathematics::uint3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x181f145b0, size 0x2b0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint4  left, ::Unity::Mathematics::uint4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x181f14270, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint2  left, ::Unity::Mathematics::uint2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x181f14ed0, size 0x360, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint3  left, ::Unity::Mathematics::uint3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x181f13480, size 0x390, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint4  left, ::Unity::Mathematics::uint4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x181f12e90, size 0x10, virtual false, abstract: false, final false
static inline bool shuffle(::Unity::Mathematics::bool2  left, ::Unity::Mathematics::bool2  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x181f14860, size 0x100, virtual false, abstract: false, final false
static inline bool shuffle(::Unity::Mathematics::bool3  left, ::Unity::Mathematics::bool3  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x181f12e80, size 0x10, virtual false, abstract: false, final false
static inline bool shuffle(::Unity::Mathematics::bool4  left, ::Unity::Mathematics::bool4  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x181f15870, size 0xc0, virtual false, abstract: false, final false
static inline double_t shuffle(::Unity::Mathematics::double2  left, ::Unity::Mathematics::double2  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x181f16300, size 0x100, virtual false, abstract: false, final false
static inline double_t shuffle(::Unity::Mathematics::double3  left, ::Unity::Mathematics::double3  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x181f15cf0, size 0xe0, virtual false, abstract: false, final false
static inline double_t shuffle(::Unity::Mathematics::double4  left, ::Unity::Mathematics::double4  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x181f14320, size 0x10, virtual false, abstract: false, final false
static inline float_t shuffle(::Unity::Mathematics::float2  left, ::Unity::Mathematics::float2  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x181f15930, size 0x100, virtual false, abstract: false, final false
static inline float_t shuffle(::Unity::Mathematics::float3  left, ::Unity::Mathematics::float3  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x181f13810, size 0xf0, virtual false, abstract: false, final false
static inline float_t shuffle(::Unity::Mathematics::float4  left, ::Unity::Mathematics::float4  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x181f152c0, size 0x10, virtual false, abstract: false, final false
static inline int32_t shuffle(::Unity::Mathematics::int2  left, ::Unity::Mathematics::int2  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x181f13f30, size 0x100, virtual false, abstract: false, final false
static inline int32_t shuffle(::Unity::Mathematics::int3  left, ::Unity::Mathematics::int3  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x181f13c50, size 0xf0, virtual false, abstract: false, final false
static inline int32_t shuffle(::Unity::Mathematics::int4  left, ::Unity::Mathematics::int4  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x181f152c0, size 0x10, virtual false, abstract: false, final false
static inline uint32_t shuffle(::Unity::Mathematics::uint2  left, ::Unity::Mathematics::uint2  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x181f13f30, size 0x100, virtual false, abstract: false, final false
static inline uint32_t shuffle(::Unity::Mathematics::uint3  left, ::Unity::Mathematics::uint3  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x181f13c50, size 0xf0, virtual false, abstract: false, final false
static inline uint32_t shuffle(::Unity::Mathematics::uint4  left, ::Unity::Mathematics::uint4  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method sign, addr 0x181f17200, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 sign(::Unity::Mathematics::double2  x) ;

/// @brief Method sign, addr 0x181f170b0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 sign(::Unity::Mathematics::double3  x) ;

/// @brief Method sign, addr 0x181f17350, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 sign(::Unity::Mathematics::double4  x) ;

/// @brief Method sign, addr 0x181f171a0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 sign(::Unity::Mathematics::float2  x) ;

/// @brief Method sign, addr 0x181f17450, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 sign(::Unity::Mathematics::float3  x) ;

/// @brief Method sign, addr 0x181f172b0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 sign(::Unity::Mathematics::float4  x) ;

/// @brief Method sign, addr 0x181f17310, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 sign(::Unity::Mathematics::int2  x) ;

/// @brief Method sign, addr 0x181f174d0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 sign(::Unity::Mathematics::int3  x) ;

/// @brief Method sign, addr 0x181f172e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 sign(::Unity::Mathematics::int4  x) ;

/// @brief Method sign, addr 0x181f17160, size 0x40, virtual false, abstract: false, final false
static inline double_t sign(double_t  x) ;

/// @brief Method sign, addr 0x181f17280, size 0x30, virtual false, abstract: false, final false
static inline float_t sign(float_t  x) ;

/// @brief Method sign, addr 0x181f170a0, size 0x10, virtual false, abstract: false, final false
static inline int32_t sign(int32_t  x) ;

/// @brief Method sin, addr 0x181f17730, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 sin(::Unity::Mathematics::double2  x) ;

/// @brief Method sin, addr 0x181f17520, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 sin(::Unity::Mathematics::double3  x) ;

/// @brief Method sin, addr 0x181f175e0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 sin(::Unity::Mathematics::double4  x) ;

/// @brief Method sin, addr 0x181f176e0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 sin(::Unity::Mathematics::float2  x) ;

/// @brief Method sin, addr 0x181f17570, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 sin(::Unity::Mathematics::float3  x) ;

/// @brief Method sin, addr 0x181f17640, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 sin(::Unity::Mathematics::float4  x) ;

/// @brief Method sin, addr 0x18170fb70, size 0x10, virtual false, abstract: false, final false
static inline double_t sin(double_t  x) ;

/// @brief Method sin, addr 0x181909c60, size 0x20, virtual false, abstract: false, final false
static inline float_t sin(float_t  x) ;

/// @brief Method sincos, addr 0x181f17ac0, size 0x80, virtual false, abstract: false, final false
static inline void sincos(::Unity::Mathematics::double2  x, ::by_ref<::Unity::Mathematics::double2>  s, ::by_ref<::Unity::Mathematics::double2>  c) ;

/// @brief Method sincos, addr 0x181f17b40, size 0xc0, virtual false, abstract: false, final false
static inline void sincos(::Unity::Mathematics::double3  x, ::by_ref<::Unity::Mathematics::double3>  s, ::by_ref<::Unity::Mathematics::double3>  c) ;

/// @brief Method sincos, addr 0x181f17770, size 0xf0, virtual false, abstract: false, final false
static inline void sincos(::Unity::Mathematics::double4  x, ::by_ref<::Unity::Mathematics::double4>  s, ::by_ref<::Unity::Mathematics::double4>  c) ;

/// @brief Method sincos, addr 0x181f17c60, size 0x90, virtual false, abstract: false, final false
static inline void sincos(::Unity::Mathematics::float2  x, ::by_ref<::Unity::Mathematics::float2>  s, ::by_ref<::Unity::Mathematics::float2>  c) ;

/// @brief Method sincos, addr 0x181f17860, size 0xe0, virtual false, abstract: false, final false
static inline void sincos(::Unity::Mathematics::float3  x, ::by_ref<::Unity::Mathematics::float3>  s, ::by_ref<::Unity::Mathematics::float3>  c) ;

/// @brief Method sincos, addr 0x181f17940, size 0x140, virtual false, abstract: false, final false
static inline void sincos(::Unity::Mathematics::float4  x, ::by_ref<::Unity::Mathematics::float4>  s, ::by_ref<::Unity::Mathematics::float4>  c) ;

/// @brief Method sincos, addr 0x181f17a80, size 0x40, virtual false, abstract: false, final false
static inline void sincos(double_t  x, ::by_ref<double_t>  s, ::by_ref<double_t>  c) ;

/// @brief Method sincos, addr 0x181f17c00, size 0x60, virtual false, abstract: false, final false
static inline void sincos(float_t  x, ::by_ref<float_t>  s, ::by_ref<float_t>  c) ;

/// @brief Method sinh, addr 0x181f17cf0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 sinh(::Unity::Mathematics::double2  x) ;

/// @brief Method sinh, addr 0x181f17e00, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 sinh(::Unity::Mathematics::double3  x) ;

/// @brief Method sinh, addr 0x181f17da0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 sinh(::Unity::Mathematics::double4  x) ;

/// @brief Method sinh, addr 0x181f17f10, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 sinh(::Unity::Mathematics::float2  x) ;

/// @brief Method sinh, addr 0x181f17d30, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 sinh(::Unity::Mathematics::float3  x) ;

/// @brief Method sinh, addr 0x181f17e70, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 sinh(::Unity::Mathematics::float4  x) ;

/// @brief Method sinh, addr 0x18170fb80, size 0x10, virtual false, abstract: false, final false
static inline double_t sinh(double_t  x) ;

/// @brief Method sinh, addr 0x181f17e50, size 0x20, virtual false, abstract: false, final false
static inline float_t sinh(float_t  x) ;

/// @brief Method slerp, addr 0x181418580, size 0x220, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion slerp(::Unity::Mathematics::quaternion  q1, ::Unity::Mathematics::quaternion  q2, float_t  t) ;

/// @brief Method smoothstep, addr 0x181f17f60, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 smoothstep(::Unity::Mathematics::double2  xMin, ::Unity::Mathematics::double2  xMax, ::Unity::Mathematics::double2  x) ;

/// @brief Method smoothstep, addr 0x181f18400, size 0x1a0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 smoothstep(::Unity::Mathematics::double3  xMin, ::Unity::Mathematics::double3  xMax, ::Unity::Mathematics::double3  x) ;

/// @brief Method smoothstep, addr 0x181f181f0, size 0x210, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 smoothstep(::Unity::Mathematics::double4  xMin, ::Unity::Mathematics::double4  xMax, ::Unity::Mathematics::double4  x) ;

/// @brief Method smoothstep, addr 0x181f18610, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 smoothstep(::Unity::Mathematics::float2  xMin, ::Unity::Mathematics::float2  xMax, ::Unity::Mathematics::float2  x) ;

/// @brief Method smoothstep, addr 0x181f18060, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 smoothstep(::Unity::Mathematics::float3  xMin, ::Unity::Mathematics::float3  xMax, ::Unity::Mathematics::float3  x) ;

/// @brief Method smoothstep, addr 0x181f18790, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 smoothstep(::Unity::Mathematics::float4  xMin, ::Unity::Mathematics::float4  xMax, ::Unity::Mathematics::float4  x) ;

/// @brief Method smoothstep, addr 0x181f18710, size 0x80, virtual false, abstract: false, final false
static inline double_t smoothstep(double_t  xMin, double_t  xMax, double_t  x) ;

/// @brief Method smoothstep, addr 0x181f185a0, size 0x70, virtual false, abstract: false, final false
static inline float_t smoothstep(float_t  xMin, float_t  xMax, float_t  x) ;

/// @brief Method sqrt, addr 0x181ea3970, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 sqrt(::Unity::Mathematics::double2  x) ;

/// @brief Method sqrt, addr 0x181f18880, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 sqrt(::Unity::Mathematics::double3  x) ;

/// @brief Method sqrt, addr 0x181f18830, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 sqrt(::Unity::Mathematics::double4  x) ;

/// @brief Method sqrt, addr 0x181f18800, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 sqrt(::Unity::Mathematics::float2  x) ;

/// @brief Method sqrt, addr 0x181f18910, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 sqrt(::Unity::Mathematics::float3  x) ;

/// @brief Method sqrt, addr 0x181f18820, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 sqrt(::Unity::Mathematics::float4  x) ;

/// @brief Method sqrt, addr 0x18170fb90, size 0x20, virtual false, abstract: false, final false
static inline double_t sqrt(double_t  x) ;

/// @brief Method sqrt, addr 0x181f18870, size 0x10, virtual false, abstract: false, final false
static inline float_t sqrt(float_t  x) ;

/// @brief Method square, addr 0x181f18980, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 square(::Unity::Mathematics::double2  x) ;

/// @brief Method square, addr 0x181f189e0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 square(::Unity::Mathematics::double3  x) ;

/// @brief Method square, addr 0x181f18930, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 square(::Unity::Mathematics::double4  x) ;

/// @brief Method square, addr 0x181f18b00, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 square(::Unity::Mathematics::float2  x) ;

/// @brief Method square, addr 0x181f18a20, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 square(::Unity::Mathematics::float3  x) ;

/// @brief Method square, addr 0x181f189b0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 square(::Unity::Mathematics::float4  x) ;

/// @brief Method square, addr 0x181f189c0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 square(::Unity::Mathematics::int2  x) ;

/// @brief Method square, addr 0x181f18a60, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 square(::Unity::Mathematics::int3  x) ;

/// @brief Method square, addr 0x181f18ac0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 square(::Unity::Mathematics::int4  x) ;

/// @brief Method square, addr 0x181f189c0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 square(::Unity::Mathematics::uint2  x) ;

/// @brief Method square, addr 0x181f18a60, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 square(::Unity::Mathematics::uint3  x) ;

/// @brief Method square, addr 0x181f18ac0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 square(::Unity::Mathematics::uint4  x) ;

/// @brief Method square, addr 0x181efef70, size 0x10, virtual false, abstract: false, final false
static inline double_t square(double_t  x) ;

/// @brief Method square, addr 0x1803133a0, size 0x10, virtual false, abstract: false, final false
static inline float_t square(float_t  x) ;

/// @brief Method square, addr 0x181f18ab0, size 0x10, virtual false, abstract: false, final false
static inline int32_t square(int32_t  x) ;

/// @brief Method square, addr 0x181f18ab0, size 0x10, virtual false, abstract: false, final false
static inline uint32_t square(uint32_t  x) ;

/// @brief Method step, addr 0x181f18c00, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 step(::Unity::Mathematics::double2  threshold, ::Unity::Mathematics::double2  x) ;

/// @brief Method step, addr 0x181f18b90, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 step(::Unity::Mathematics::double3  threshold, ::Unity::Mathematics::double3  x) ;

/// @brief Method step, addr 0x181f18cd0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 step(::Unity::Mathematics::double4  threshold, ::Unity::Mathematics::double4  x) ;

/// @brief Method step, addr 0x181f18d80, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 step(::Unity::Mathematics::float2  threshold, ::Unity::Mathematics::float2  x) ;

/// @brief Method step, addr 0x181f18c60, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 step(::Unity::Mathematics::float3  threshold, ::Unity::Mathematics::float3  x) ;

/// @brief Method step, addr 0x181f18b70, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 step(::Unity::Mathematics::float4  threshold, ::Unity::Mathematics::float4  x) ;

/// @brief Method step, addr 0x181f18b50, size 0x20, virtual false, abstract: false, final false
static inline double_t step(double_t  threshold, double_t  x) ;

/// @brief Method step, addr 0x181f18b30, size 0x20, virtual false, abstract: false, final false
static inline float_t step(float_t  threshold, float_t  x) ;

/// @brief Method tan, addr 0x181f18df0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 tan(::Unity::Mathematics::double2  x) ;

/// @brief Method tan, addr 0x181f18ee0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 tan(::Unity::Mathematics::double3  x) ;

/// @brief Method tan, addr 0x181f18e80, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 tan(::Unity::Mathematics::double4  x) ;

/// @brief Method tan, addr 0x181f18e30, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 tan(::Unity::Mathematics::float2  x) ;

/// @brief Method tan, addr 0x181f18fd0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 tan(::Unity::Mathematics::float3  x) ;

/// @brief Method tan, addr 0x181f18f30, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 tan(::Unity::Mathematics::float4  x) ;

/// @brief Method tan, addr 0x18170fbb0, size 0x10, virtual false, abstract: false, final false
static inline double_t tan(double_t  x) ;

/// @brief Method tan, addr 0x181909fa0, size 0x20, virtual false, abstract: false, final false
static inline float_t tan(float_t  x) ;

/// @brief Method tanh, addr 0x181f19270, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 tanh(::Unity::Mathematics::double2  x) ;

/// @brief Method tanh, addr 0x181f19040, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 tanh(::Unity::Mathematics::double3  x) ;

/// @brief Method tanh, addr 0x181f19090, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 tanh(::Unity::Mathematics::double4  x) ;

/// @brief Method tanh, addr 0x181f19190, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 tanh(::Unity::Mathematics::float2  x) ;

/// @brief Method tanh, addr 0x181f191e0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 tanh(::Unity::Mathematics::float3  x) ;

/// @brief Method tanh, addr 0x181f190f0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 tanh(::Unity::Mathematics::float4  x) ;

/// @brief Method tanh, addr 0x18170fbc0, size 0x10, virtual false, abstract: false, final false
static inline double_t tanh(double_t  x) ;

/// @brief Method tanh, addr 0x181f19250, size 0x20, virtual false, abstract: false, final false
static inline float_t tanh(float_t  x) ;

/// @brief Method transform, addr 0x181f19520, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 transform(::Unity::Mathematics::double4x4  a, ::Unity::Mathematics::double3  b) ;

/// @brief Method transform, addr 0x181f19430, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 transform(::Unity::Mathematics::AffineTransform  a, ::Unity::Mathematics::float3  pos) ;

/// @brief Method transform, addr 0x181f192b0, size 0x180, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 transform(::Unity::Mathematics::RigidTransform  a, ::Unity::Mathematics::float3  pos) ;

/// @brief Method transform, addr 0x181f19650, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 transform(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method transpose, addr 0x181f19b90, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 transpose(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method transpose, addr 0x181f1a320, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 transpose(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method transpose, addr 0x181f19760, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 transpose(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method transpose, addr 0x181f198f0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 transpose(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method transpose, addr 0x181f1a080, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 transpose(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method transpose, addr 0x181f1a440, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 transpose(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method transpose, addr 0x181f1a0f0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 transpose(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method transpose, addr 0x181f1a370, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 transpose(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method transpose, addr 0x181f196b0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 transpose(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method transpose, addr 0x181f19bd0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 transpose(::Unity::Mathematics::double2x2  v) ;

/// @brief Method transpose, addr 0x181f19b00, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 transpose(::Unity::Mathematics::double3x2  v) ;

/// @brief Method transpose, addr 0x181f19b40, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 transpose(::Unity::Mathematics::double4x2  v) ;

/// @brief Method transpose, addr 0x181f1a3f0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 transpose(::Unity::Mathematics::double2x3  v) ;

/// @brief Method transpose, addr 0x181f19c80, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 transpose(::Unity::Mathematics::double3x3  v) ;

/// @brief Method transpose, addr 0x181f1a000, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 transpose(::Unity::Mathematics::double4x3  v) ;

/// @brief Method transpose, addr 0x181f199c0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 transpose(::Unity::Mathematics::double2x4  v) ;

/// @brief Method transpose, addr 0x181f1a250, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 transpose(::Unity::Mathematics::double3x4  v) ;

/// @brief Method transpose, addr 0x181f19da0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 transpose(::Unity::Mathematics::double4x4  v) ;

/// @brief Method transpose, addr 0x181f197e0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 transpose(::Unity::Mathematics::float2x2  v) ;

/// @brief Method transpose, addr 0x181f19f90, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 transpose(::Unity::Mathematics::float3x2  v) ;

/// @brief Method transpose, addr 0x181f19fc0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 transpose(::Unity::Mathematics::float4x2  v) ;

/// @brief Method transpose, addr 0x181f19eb0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 transpose(::Unity::Mathematics::float2x3  v) ;

/// @brief Method transpose, addr 0x181f1a1f0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 transpose(::Unity::Mathematics::float3x3  v) ;

/// @brief Method transpose, addr 0x181f19a80, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 transpose(::Unity::Mathematics::float4x3  v) ;

/// @brief Method transpose, addr 0x181f19ce0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 transpose(::Unity::Mathematics::float2x4  v) ;

/// @brief Method transpose, addr 0x181f19e40, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 transpose(::Unity::Mathematics::float3x4  v) ;

/// @brief Method transpose, addr 0x181f1a160, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 transpose(::Unity::Mathematics::float4x4  v) ;

/// @brief Method transpose, addr 0x181f19800, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 transpose(::Unity::Mathematics::int2x2  v) ;

/// @brief Method transpose, addr 0x181f19840, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 transpose(::Unity::Mathematics::int3x2  v) ;

/// @brief Method transpose, addr 0x181f19890, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 transpose(::Unity::Mathematics::int4x2  v) ;

/// @brief Method transpose, addr 0x181f1a2c0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 transpose(::Unity::Mathematics::int2x3  v) ;

/// @brief Method transpose, addr 0x181f19d30, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 transpose(::Unity::Mathematics::int3x3  v) ;

/// @brief Method transpose, addr 0x181f19c00, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 transpose(::Unity::Mathematics::int4x3  v) ;

/// @brief Method transpose, addr 0x181f19a10, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 transpose(::Unity::Mathematics::int2x4  v) ;

/// @brief Method transpose, addr 0x181f19940, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 transpose(::Unity::Mathematics::int3x4  v) ;

/// @brief Method transpose, addr 0x181f19ef0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 transpose(::Unity::Mathematics::int4x4  v) ;

/// @brief Method transpose, addr 0x181f19800, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 transpose(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method transpose, addr 0x181f19840, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 transpose(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method transpose, addr 0x181f19890, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 transpose(::Unity::Mathematics::uint4x2  v) ;

/// @brief Method transpose, addr 0x181f1a2c0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 transpose(::Unity::Mathematics::uint2x3  v) ;

/// @brief Method transpose, addr 0x181f19d30, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 transpose(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method transpose, addr 0x181f19c00, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 transpose(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method transpose, addr 0x181f19a10, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 transpose(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method transpose, addr 0x181f19940, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 transpose(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method transpose, addr 0x181f19ef0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 transpose(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method trunc, addr 0x181f1a730, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 trunc(::Unity::Mathematics::double2  x) ;

/// @brief Method trunc, addr 0x181f1a5a0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 trunc(::Unity::Mathematics::double3  x) ;

/// @brief Method trunc, addr 0x181f1a6a0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 trunc(::Unity::Mathematics::double4  x) ;

/// @brief Method trunc, addr 0x181f1a780, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 trunc(::Unity::Mathematics::float2  x) ;

/// @brief Method trunc, addr 0x181f1a610, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 trunc(::Unity::Mathematics::float3  x) ;

/// @brief Method trunc, addr 0x181f1a4e0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 trunc(::Unity::Mathematics::float4  x) ;

/// @brief Method trunc, addr 0x181f1a590, size 0x10, virtual false, abstract: false, final false
static inline double_t trunc(double_t  x) ;

/// @brief Method trunc, addr 0x181f1a7d0, size 0x20, virtual false, abstract: false, final false
static inline float_t trunc(float_t  x) ;

/// @brief Method tzcnt, addr 0x181f1a840, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 tzcnt(::Unity::Mathematics::int2  x) ;

/// @brief Method tzcnt, addr 0x181f1a840, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 tzcnt(::Unity::Mathematics::uint2  x) ;

/// @brief Method tzcnt, addr 0x181f1a7f0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 tzcnt(::Unity::Mathematics::int3  x) ;

/// @brief Method tzcnt, addr 0x181f1a7f0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 tzcnt(::Unity::Mathematics::uint3  x) ;

/// @brief Method tzcnt, addr 0x181f1a870, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 tzcnt(::Unity::Mathematics::int4  x) ;

/// @brief Method tzcnt, addr 0x181f1a870, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 tzcnt(::Unity::Mathematics::uint4  x) ;

/// @brief Method tzcnt, addr 0x18075b140, size 0x6fc0, virtual false, abstract: false, final false
static inline int32_t tzcnt(int32_t  x) ;

/// @brief Method tzcnt, addr 0x180d93240, size 0x2a80, virtual false, abstract: false, final false
static inline int32_t tzcnt(int64_t  x) ;

/// @brief Method tzcnt, addr 0x18075b140, size 0x6fc0, virtual false, abstract: false, final false
static inline int32_t tzcnt(uint32_t  x) ;

/// @brief Method tzcnt, addr 0x180d93240, size 0x2a80, virtual false, abstract: false, final false
static inline int32_t tzcnt(uint64_t  x) ;

/// @brief Method uint2, addr 0x181ef9ba0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::bool2  v) ;

/// @brief Method uint2, addr 0x181f1a8c0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::double2  v) ;

/// @brief Method uint2, addr 0x181f1a990, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::float2  v) ;

/// @brief Method uint2, addr 0x181ecb860, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::int2  v) ;

/// @brief Method uint2, addr 0x181ef9b60, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(bool  v) ;

/// @brief Method uint2, addr 0x181f1a910, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(double_t  v) ;

/// @brief Method uint2, addr 0x181f1a950, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(float_t  v) ;

/// @brief Method uint2, addr 0x181ef9bc0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(int32_t  v) ;

/// @brief Method uint2, addr 0x181ef9bc0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(uint32_t  v) ;

/// @brief Method uint2, addr 0x181ee2820, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(uint32_t  x, uint32_t  y) ;

/// @brief Method uint2, addr 0x181ecb860, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::uint2  xy) ;

/// @brief Method uint2x2, addr 0x181eec3a0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::uint2  c0, ::Unity::Mathematics::uint2  c1) ;

/// @brief Method uint2x2, addr 0x181ef9d10, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(uint32_t  m00, uint32_t  m01, uint32_t  m10, uint32_t  m11) ;

/// @brief Method uint2x2, addr 0x181ef9bf0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method uint2x2, addr 0x181f1aac0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::double2x2  v) ;

/// @brief Method uint2x2, addr 0x181f1ab50, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::float2x2  v) ;

/// @brief Method uint2x2, addr 0x181ef9dd0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::int2x2  v) ;

/// @brief Method uint2x2, addr 0x181ef9e60, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(bool  v) ;

/// @brief Method uint2x2, addr 0x181f1aa50, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(double_t  v) ;

/// @brief Method uint2x2, addr 0x181f1a9e0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(float_t  v) ;

/// @brief Method uint2x2, addr 0x181ef9ce0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(int32_t  v) ;

/// @brief Method uint2x2, addr 0x181ef9ce0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(uint32_t  v) ;

/// @brief Method uint2x3, addr 0x181d95eb0, size 0x630, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::uint2  c0, ::Unity::Mathematics::uint2  c1, ::Unity::Mathematics::uint2  c2) ;

/// @brief Method uint2x3, addr 0x181ef9f10, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m10, uint32_t  m11, uint32_t  m12) ;

/// @brief Method uint2x3, addr 0x181efa070, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method uint2x3, addr 0x181f1ae00, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::double2x3  v) ;

/// @brief Method uint2x3, addr 0x181f1ac80, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::float2x3  v) ;

/// @brief Method uint2x3, addr 0x181ef9f60, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::int2x3  v) ;

/// @brief Method uint2x3, addr 0x181efa1e0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(bool  v) ;

/// @brief Method uint2x3, addr 0x181f1abe0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(double_t  v) ;

/// @brief Method uint2x3, addr 0x181f1ad60, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(float_t  v) ;

/// @brief Method uint2x3, addr 0x181ef9fe0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(int32_t  v) ;

/// @brief Method uint2x3, addr 0x181ef9fe0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(uint32_t  v) ;

/// @brief Method uint2x4, addr 0x181e9b920, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::uint2  c0, ::Unity::Mathematics::uint2  c1, ::Unity::Mathematics::uint2  c2, ::Unity::Mathematics::uint2  c3) ;

/// @brief Method uint2x4, addr 0x181efa3f0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m03, uint32_t  m10, uint32_t  m11, uint32_t  m12, uint32_t  m13) ;

/// @brief Method uint2x4, addr 0x181efa2e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method uint2x4, addr 0x181f1b180, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::double2x4  v) ;

/// @brief Method uint2x4, addr 0x181f1aed0, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::float2x4  v) ;

/// @brief Method uint2x4, addr 0x181efa360, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::int2x4  v) ;

/// @brief Method uint2x4, addr 0x181efa450, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(bool  v) ;

/// @brief Method uint2x4, addr 0x181f1b0b0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(double_t  v) ;

/// @brief Method uint2x4, addr 0x181f1afe0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(float_t  v) ;

/// @brief Method uint2x4, addr 0x181efa310, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(int32_t  v) ;

/// @brief Method uint2x4, addr 0x181efa310, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(uint32_t  v) ;

/// @brief Method uint3, addr 0x181efa810, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::bool3  v) ;

/// @brief Method uint3, addr 0x181f1b2f0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::double3  v) ;

/// @brief Method uint3, addr 0x181f1b280, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::float3  v) ;

/// @brief Method uint3, addr 0x181efa7a0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::int3  v) ;

/// @brief Method uint3, addr 0x181efa700, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(bool  v) ;

/// @brief Method uint3, addr 0x181f1b360, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(double_t  v) ;

/// @brief Method uint3, addr 0x181f1b3a0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(float_t  v) ;

/// @brief Method uint3, addr 0x181efa720, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(int32_t  v) ;

/// @brief Method uint3, addr 0x181efa720, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(uint32_t  v) ;

/// @brief Method uint3, addr 0x181ee2880, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(uint32_t  x, uint32_t  y, uint32_t  z) ;

/// @brief Method uint3, addr 0x181efa760, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(uint32_t  x, ::Unity::Mathematics::uint2  yz) ;

/// @brief Method uint3, addr 0x181efa780, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::uint2  xy, uint32_t  z) ;

/// @brief Method uint3, addr 0x181efa7a0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::uint3  xyz) ;

/// @brief Method uint3x2, addr 0x181eed5f0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::uint3  c0, ::Unity::Mathematics::uint3  c1) ;

/// @brief Method uint3x2, addr 0x181efa9e0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(uint32_t  m00, uint32_t  m01, uint32_t  m10, uint32_t  m11, uint32_t  m20, uint32_t  m21) ;

/// @brief Method uint3x2, addr 0x181efaae0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method uint3x2, addr 0x181f1b470, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::double3x2  v) ;

/// @brief Method uint3x2, addr 0x181f1b530, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::float3x2  v) ;

/// @brief Method uint3x2, addr 0x181efa900, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::int3x2  v) ;

/// @brief Method uint3x2, addr 0x181efaa70, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(bool  v) ;

/// @brief Method uint3x2, addr 0x181f1b3e0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(double_t  v) ;

/// @brief Method uint3x2, addr 0x181f1b600, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(float_t  v) ;

/// @brief Method uint3x2, addr 0x181efaa30, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(int32_t  v) ;

/// @brief Method uint3x2, addr 0x181efaa30, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(uint32_t  v) ;

/// @brief Method uint3x3, addr 0x181eedd10, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::uint3  c0, ::Unity::Mathematics::uint3  c1, ::Unity::Mathematics::uint3  c2) ;

/// @brief Method uint3x3, addr 0x181efaeb0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m10, uint32_t  m11, uint32_t  m12, uint32_t  m20, uint32_t  m21, uint32_t  m22) ;

/// @brief Method uint3x3, addr 0x181efaf90, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method uint3x3, addr 0x181f1b940, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::double3x3  v) ;

/// @brief Method uint3x3, addr 0x181f1b760, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::float3x3  v) ;

/// @brief Method uint3x3, addr 0x181efacd0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::int3x3  v) ;

/// @brief Method uint3x3, addr 0x181efb050, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(bool  v) ;

/// @brief Method uint3x3, addr 0x181f1b690, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(double_t  v) ;

/// @brief Method uint3x3, addr 0x181f1b870, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(float_t  v) ;

/// @brief Method uint3x3, addr 0x181efac10, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(int32_t  v) ;

/// @brief Method uint3x3, addr 0x181efac10, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(uint32_t  v) ;

/// @brief Method uint3x4, addr 0x181eee530, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::uint3  c0, ::Unity::Mathematics::uint3  c1, ::Unity::Mathematics::uint3  c2, ::Unity::Mathematics::uint3  c3) ;

/// @brief Method uint3x4, addr 0x181efb5b0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m03, uint32_t  m10, uint32_t  m11, uint32_t  m12, uint32_t  m13, uint32_t  m20, uint32_t  m21, uint32_t  m22, uint32_t  m23) ;

/// @brief Method uint3x4, addr 0x181efb270, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method uint3x4, addr 0x181f1bb60, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::double3x4  v) ;

/// @brief Method uint3x4, addr 0x181f1bbd0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::float3x4  v) ;

/// @brief Method uint3x4, addr 0x181efb640, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::int3x4  v) ;

/// @brief Method uint3x4, addr 0x181efb0f0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(bool  v) ;

/// @brief Method uint3x4, addr 0x181f1ba60, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(double_t  v) ;

/// @brief Method uint3x4, addr 0x181f1bc20, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(float_t  v) ;

/// @brief Method uint3x4, addr 0x181efb360, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(int32_t  v) ;

/// @brief Method uint3x4, addr 0x181efb360, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(uint32_t  v) ;

/// @brief Method uint4, addr 0x181efb780, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::bool4  v) ;

/// @brief Method uint4, addr 0x181f1bd20, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::double4  v) ;

/// @brief Method uint4, addr 0x181f1be30, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::float4  v) ;

/// @brief Method uint4, addr 0x181efb700, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::int4  v) ;

/// @brief Method uint4, addr 0x181efb720, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(bool  v) ;

/// @brief Method uint4, addr 0x181f1bde0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(double_t  v) ;

/// @brief Method uint4, addr 0x181f1bd90, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(float_t  v) ;

/// @brief Method uint4, addr 0x181ea32e0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(int32_t  v) ;

/// @brief Method uint4, addr 0x181ea32e0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(uint32_t  v) ;

/// @brief Method uint4, addr 0x181ea3480, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(uint32_t  x, uint32_t  y, uint32_t  z, uint32_t  w) ;

/// @brief Method uint4, addr 0x181efb840, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(uint32_t  x, uint32_t  y, ::Unity::Mathematics::uint2  zw) ;

/// @brief Method uint4, addr 0x181efb8c0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(uint32_t  x, ::Unity::Mathematics::uint2  yz, uint32_t  w) ;

/// @brief Method uint4, addr 0x181efb740, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(uint32_t  x, ::Unity::Mathematics::uint3  yzw) ;

/// @brief Method uint4, addr 0x181efb860, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint2  xy, uint32_t  z, uint32_t  w) ;

/// @brief Method uint4, addr 0x181ecb880, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint2  xy, ::Unity::Mathematics::uint2  zw) ;

/// @brief Method uint4, addr 0x181efb880, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint3  xyz, uint32_t  w) ;

/// @brief Method uint4, addr 0x181efb700, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint4  xyzw) ;

/// @brief Method uint4x2, addr 0x181e9ba70, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::uint4  c0, ::Unity::Mathematics::uint4  c1) ;

/// @brief Method uint4x2, addr 0x181efbbe0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(uint32_t  m00, uint32_t  m01, uint32_t  m10, uint32_t  m11, uint32_t  m20, uint32_t  m21, uint32_t  m30, uint32_t  m31) ;

/// @brief Method uint4x2, addr 0x181f1bea0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method uint4x2, addr 0x181f1c0c0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::double4x2  v) ;

/// @brief Method uint4x2, addr 0x181f1c1c0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::float4x2  v) ;

/// @brief Method uint4x2, addr 0x181efba40, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::int4x2  v) ;

/// @brief Method uint4x2, addr 0x181f1bf70, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(bool  v) ;

/// @brief Method uint4x2, addr 0x181f1c2c0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(double_t  v) ;

/// @brief Method uint4x2, addr 0x181f1c000, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(float_t  v) ;

/// @brief Method uint4x2, addr 0x181efba00, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(int32_t  v) ;

/// @brief Method uint4x2, addr 0x181efba00, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(uint32_t  v) ;

/// @brief Method uint4x3, addr 0x181eef6e0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::uint4  c0, ::Unity::Mathematics::uint4  c1, ::Unity::Mathematics::uint4  c2) ;

/// @brief Method uint4x3, addr 0x181efbe60, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m10, uint32_t  m11, uint32_t  m12, uint32_t  m20, uint32_t  m21, uint32_t  m22, uint32_t  m30, uint32_t  m31, uint32_t  m32) ;

/// @brief Method uint4x3, addr 0x181f1c660, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method uint4x3, addr 0x181f1c3d0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::double4x3  v) ;

/// @brief Method uint4x3, addr 0x181f1c380, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::float4x3  v) ;

/// @brief Method uint4x3, addr 0x181efbee0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::int4x3  v) ;

/// @brief Method uint4x3, addr 0x181f1c790, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(bool  v) ;

/// @brief Method uint4x3, addr 0x181f1c550, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(double_t  v) ;

/// @brief Method uint4x3, addr 0x181f1c440, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(float_t  v) ;

/// @brief Method uint4x3, addr 0x181efbcb0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(int32_t  v) ;

/// @brief Method uint4x3, addr 0x181efbcb0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(uint32_t  v) ;

/// @brief Method uint4x4, addr 0x181eefad0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::uint4  c0, ::Unity::Mathematics::uint4  c1, ::Unity::Mathematics::uint4  c2, ::Unity::Mathematics::uint4  c3) ;

/// @brief Method uint4x4, addr 0x181efc560, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m03, uint32_t  m10, uint32_t  m11, uint32_t  m12, uint32_t  m13, uint32_t  m20, uint32_t  m21, uint32_t  m22, uint32_t  m23, uint32_t  m30, uint32_t  m31, uint32_t  m32, uint32_t  m33) ;

/// @brief Method uint4x4, addr 0x181f1c9d0, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method uint4x4, addr 0x181f1cb60, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::double4x4  v) ;

/// @brief Method uint4x4, addr 0x181f1c970, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::float4x4  v) ;

/// @brief Method uint4x4, addr 0x181efc300, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::int4x4  v) ;

/// @brief Method uint4x4, addr 0x181f1c860, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(bool  v) ;

/// @brief Method uint4x4, addr 0x181f1cc10, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(double_t  v) ;

/// @brief Method uint4x4, addr 0x181f1cbe0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(float_t  v) ;

/// @brief Method uint4x4, addr 0x181efc1c0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(int32_t  v) ;

/// @brief Method uint4x4, addr 0x181efc1c0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(uint32_t  v) ;

/// @brief Method unitexp, addr 0x181f1cc40, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion unitexp(::Unity::Mathematics::quaternion  q) ;

/// @brief Method unitlog, addr 0x181f1cd60, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion unitlog(::Unity::Mathematics::quaternion  q) ;

/// @brief Method unlerp, addr 0x181f1cf20, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 unlerp(::Unity::Mathematics::double2  start, ::Unity::Mathematics::double2  end, ::Unity::Mathematics::double2  x) ;

/// @brief Method unlerp, addr 0x181f1ce80, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 unlerp(::Unity::Mathematics::double3  start, ::Unity::Mathematics::double3  end, ::Unity::Mathematics::double3  x) ;

/// @brief Method unlerp, addr 0x181f1d080, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 unlerp(::Unity::Mathematics::double4  start, ::Unity::Mathematics::double4  end, ::Unity::Mathematics::double4  x) ;

/// @brief Method unlerp, addr 0x181f1cfa0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 unlerp(::Unity::Mathematics::float2  start, ::Unity::Mathematics::float2  end, ::Unity::Mathematics::float2  x) ;

/// @brief Method unlerp, addr 0x181f1d000, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 unlerp(::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, ::Unity::Mathematics::float3  x) ;

/// @brief Method unlerp, addr 0x181f1cf80, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 unlerp(::Unity::Mathematics::float4  start, ::Unity::Mathematics::float4  end, ::Unity::Mathematics::float4  x) ;

/// @brief Method unlerp, addr 0x181f1d150, size 0x10, virtual false, abstract: false, final false
static inline double_t unlerp(double_t  start, double_t  end, double_t  x) ;

/// @brief Method unlerp, addr 0x181f1cf70, size 0x10, virtual false, abstract: false, final false
static inline float_t unlerp(float_t  start, float_t  end, float_t  x) ;

/// @brief Method unpackhi, addr 0x181f1d160, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 unpackhi(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method unpackhi, addr 0x181f1d1c0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 unpackhi(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method unpacklo, addr 0x181f1d200, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 unpacklo(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method unpacklo, addr 0x181f1d1e0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 unpacklo(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method up, addr 0x181f1d260, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 up() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr math() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "math", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
math(math && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "math", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
math(math const& ) = delete;

/// @brief Field DBL_MIN_NORMAL offset 0xffffffff size 0x8
static constexpr double_t  DBL_MIN_NORMAL{static_cast<double_t>(0.0)};

/// @brief Field E offset 0xffffffff size 0x4
static constexpr float_t  E{static_cast<float_t>(2.7182817f)};

/// @brief Field EPSILON offset 0xffffffff size 0x4
static constexpr float_t  EPSILON{static_cast<float_t>(1.1920929e-7f)};

/// @brief Field EPSILON_DBL offset 0xffffffff size 0x8
static constexpr double_t  EPSILON_DBL{static_cast<double_t>(0.0)};

/// @brief Field E_DBL offset 0xffffffff size 0x8
static constexpr double_t  E_DBL{static_cast<double_t>(2.7)};

/// @brief Field FLT_MIN_NORMAL offset 0xffffffff size 0x4
static constexpr float_t  FLT_MIN_NORMAL{static_cast<float_t>(1.1754944e-38f)};

/// @brief Field INFINITY_DBL offset 0xffffffff size 0x8
static constexpr double_t  INFINITY_DBL{INFINITY};

/// @brief Field LN10 offset 0xffffffff size 0x4
static constexpr float_t  LN10{static_cast<float_t>(2.3025851f)};

/// @brief Field LN10_DBL offset 0xffffffff size 0x8
static constexpr double_t  LN10_DBL{static_cast<double_t>(2.3)};

/// @brief Field LN2 offset 0xffffffff size 0x4
static constexpr float_t  LN2{static_cast<float_t>(0.6931472f)};

/// @brief Field LN2_DBL offset 0xffffffff size 0x8
static constexpr double_t  LN2_DBL{static_cast<double_t>(0.7)};

/// @brief Field LOG10E offset 0xffffffff size 0x4
static constexpr float_t  LOG10E{static_cast<float_t>(0.4342945f)};

/// @brief Field LOG10E_DBL offset 0xffffffff size 0x8
static constexpr double_t  LOG10E_DBL{static_cast<double_t>(0.4)};

/// @brief Field LOG2E offset 0xffffffff size 0x4
static constexpr float_t  LOG2E{static_cast<float_t>(1.442695f)};

/// @brief Field LOG2E_DBL offset 0xffffffff size 0x8
static constexpr double_t  LOG2E_DBL{static_cast<double_t>(1.4)};

/// @brief Field NAN_DBL offset 0xffffffff size 0x8
static constexpr double_t  NAN_DBL{NAN};

/// @brief Field PI offset 0xffffffff size 0x4
static constexpr float_t  PI{static_cast<float_t>(3.1415927f)};

/// @brief Field PI2 offset 0xffffffff size 0x4
static constexpr float_t  PI2{static_cast<float_t>(6.2831855f)};

/// @brief Field PI2_DBL offset 0xffffffff size 0x8
static constexpr double_t  PI2_DBL{static_cast<double_t>(6.3)};

/// @brief Field PIHALF offset 0xffffffff size 0x4
static constexpr float_t  PIHALF{static_cast<float_t>(1.5707964f)};

/// @brief Field PIHALF_DBL offset 0xffffffff size 0x8
static constexpr double_t  PIHALF_DBL{static_cast<double_t>(1.6)};

/// @brief Field PI_DBL offset 0xffffffff size 0x8
static constexpr double_t  PI_DBL{static_cast<double_t>(3.1)};

/// @brief Field SQRT2 offset 0xffffffff size 0x4
static constexpr float_t  SQRT2{static_cast<float_t>(1.4142135f)};

/// @brief Field SQRT2_DBL offset 0xffffffff size 0x8
static constexpr double_t  SQRT2_DBL{static_cast<double_t>(1.4)};

/// @brief Field TAU offset 0xffffffff size 0x4
static constexpr float_t  TAU{static_cast<float_t>(6.2831855f)};

/// @brief Field TAU_DBL offset 0xffffffff size 0x8
static constexpr double_t  TAU_DBL{static_cast<double_t>(6.3)};

/// @brief Field TODEGREES offset 0xffffffff size 0x4
static constexpr float_t  TODEGREES{static_cast<float_t>(57.29578f)};

/// @brief Field TODEGREES_DBL offset 0xffffffff size 0x8
static constexpr double_t  TODEGREES_DBL{static_cast<double_t>(57.3)};

/// @brief Field TORADIANS offset 0xffffffff size 0x4
static constexpr float_t  TORADIANS{static_cast<float_t>(0.017453292f)};

/// @brief Field TORADIANS_DBL offset 0xffffffff size 0x8
static constexpr double_t  TORADIANS_DBL{static_cast<double_t>(0.0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12759};

/// @brief Field INFINITY offset 0xffffffff size 0x4
static constexpr float_t  _cordl_INFINITY{INFINITY};

/// @brief Field NAN offset 0xffffffff size 0x4
static constexpr float_t  _cordl_NAN{NAN};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Mathematics::math) == 0x10, "Size mismatch!");

} // namespace end def Unity::Mathematics

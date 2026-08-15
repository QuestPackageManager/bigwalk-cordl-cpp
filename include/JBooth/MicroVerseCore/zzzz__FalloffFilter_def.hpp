#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/FalloffFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FalloffFilter)
namespace JBooth::MicroVerseCore {
class Easing;
}
namespace JBooth::MicroVerseCore {
struct FalloffFilter_FilterTypeNoGlobalNoPaintMask;
}
namespace JBooth::MicroVerseCore {
struct FalloffFilter_FilterTypeNoGlobal;
}
namespace JBooth::MicroVerseCore {
struct FalloffFilter_FilterTypeNoPaintMask;
}
namespace JBooth::MicroVerseCore {
struct FalloffFilter_FilterType;
}
namespace JBooth::MicroVerseCore {
class FalloffFilter_PaintMask;
}
namespace JBooth::MicroVerseCore {
struct FalloffFilter_TextureChannel;
}
namespace JBooth::MicroVerseCore {
class Noise;
}
namespace JBooth::MicroVerseCore {
class PaintFalloffArea;
}
namespace JBooth::MicroVerseCore {
struct PaintMask_FalloffFilter_Size;
}
namespace JBooth::MicroVerseCore {
struct PaintMask_FalloffFilter_UpdateMode;
}
namespace JBooth::MicroVerseCore {
class SplineArea;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct FalloffFilter_FilterType;
}
namespace JBooth::MicroVerseCore {
struct FalloffFilter_FilterTypeNoGlobal;
}
namespace JBooth::MicroVerseCore {
struct FalloffFilter_FilterTypeNoGlobalNoPaintMask;
}
namespace JBooth::MicroVerseCore {
struct FalloffFilter_FilterTypeNoPaintMask;
}
namespace JBooth::MicroVerseCore {
struct FalloffFilter_TextureChannel;
}
namespace JBooth::MicroVerseCore {
struct PaintMask_FalloffFilter_Size;
}
namespace JBooth::MicroVerseCore {
struct PaintMask_FalloffFilter_UpdateMode;
}
namespace JBooth::MicroVerseCore {
class FalloffFilter;
}
namespace JBooth::MicroVerseCore {
class FalloffFilter_PaintMask;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::FalloffFilter_FilterType);
MARK_VAL_T(::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobal);
MARK_VAL_T(::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobalNoPaintMask);
MARK_VAL_T(::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoPaintMask);
MARK_VAL_T(::JBooth::MicroVerseCore::FalloffFilter_TextureChannel);
MARK_VAL_T(::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size);
MARK_VAL_T(::JBooth::MicroVerseCore::PaintMask_FalloffFilter_UpdateMode);
MARK_REF_T(::JBooth::MicroVerseCore::FalloffFilter*);
MARK_REF_T(::JBooth::MicroVerseCore::FalloffFilter_PaintMask*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::FalloffFilter_FilterType, "JBooth.MicroVerseCore", "FalloffFilter/FilterType");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobal, "JBooth.MicroVerseCore", "FalloffFilter/FilterTypeNoGlobal");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobalNoPaintMask, "JBooth.MicroVerseCore", "FalloffFilter/FilterTypeNoGlobalNoPaintMask");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoPaintMask, "JBooth.MicroVerseCore", "FalloffFilter/FilterTypeNoPaintMask");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::FalloffFilter_TextureChannel, "JBooth.MicroVerseCore", "FalloffFilter/TextureChannel");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size, "JBooth.MicroVerseCore", "FalloffFilter/PaintMask/Size");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::PaintMask_FalloffFilter_UpdateMode, "JBooth.MicroVerseCore", "FalloffFilter/PaintMask/UpdateMode");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::FalloffFilter*, "JBooth.MicroVerseCore", "FalloffFilter");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::FalloffFilter_PaintMask*, "JBooth.MicroVerseCore", "FalloffFilter/PaintMask");
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.FalloffFilter/FilterType
struct CORDL_TYPE FalloffFilter_FilterType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FalloffFilter_FilterType_Unwrapped
enum struct __FalloffFilter_FilterType_Unwrapped : int32_t {
__E_Global = static_cast<int32_t>(0x0),
__E_Box = static_cast<int32_t>(0x1),
__E_Range = static_cast<int32_t>(0x2),
__E_Texture = static_cast<int32_t>(0x3),
__E_SplineArea = static_cast<int32_t>(0x4),
__E_PaintMask = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FalloffFilter_FilterType_Unwrapped () const noexcept {
return static_cast<__FalloffFilter_FilterType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FalloffFilter_FilterType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FalloffFilter_FilterType(int32_t  value__) noexcept;

/// @brief Field Box value: I32(1)
static ::JBooth::MicroVerseCore::FalloffFilter_FilterType const Box;

/// @brief Field Global value: I32(0)
static ::JBooth::MicroVerseCore::FalloffFilter_FilterType const Global;

/// @brief Field PaintMask value: I32(5)
static ::JBooth::MicroVerseCore::FalloffFilter_FilterType const PaintMask;

/// @brief Field Range value: I32(2)
static ::JBooth::MicroVerseCore::FalloffFilter_FilterType const Range;

/// @brief Field SplineArea value: I32(4)
static ::JBooth::MicroVerseCore::FalloffFilter_FilterType const SplineArea;

/// @brief Field Texture value: I32(3)
static ::JBooth::MicroVerseCore::FalloffFilter_FilterType const Texture;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18000};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::FalloffFilter_FilterType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::FalloffFilter_FilterType) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.FalloffFilter/FilterTypeNoGlobal
struct CORDL_TYPE FalloffFilter_FilterTypeNoGlobal {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FalloffFilter_FilterTypeNoGlobal_Unwrapped
enum struct __FalloffFilter_FilterTypeNoGlobal_Unwrapped : int32_t {
__E_Box = static_cast<int32_t>(0x1),
__E_Range = static_cast<int32_t>(0x2),
__E_Texture = static_cast<int32_t>(0x3),
__E_SplineArea = static_cast<int32_t>(0x4),
__E_PaintMask = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FalloffFilter_FilterTypeNoGlobal_Unwrapped () const noexcept {
return static_cast<__FalloffFilter_FilterTypeNoGlobal_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FalloffFilter_FilterTypeNoGlobal() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FalloffFilter_FilterTypeNoGlobal(int32_t  value__) noexcept;

/// @brief Field Box value: I32(1)
static ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobal const Box;

/// @brief Field PaintMask value: I32(5)
static ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobal const PaintMask;

/// @brief Field Range value: I32(2)
static ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobal const Range;

/// @brief Field SplineArea value: I32(4)
static ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobal const SplineArea;

/// @brief Field Texture value: I32(3)
static ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobal const Texture;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18001};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobal, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobal) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.FalloffFilter/FilterTypeNoPaintMask
struct CORDL_TYPE FalloffFilter_FilterTypeNoPaintMask {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FalloffFilter_FilterTypeNoPaintMask_Unwrapped
enum struct __FalloffFilter_FilterTypeNoPaintMask_Unwrapped : int32_t {
__E_Global = static_cast<int32_t>(0x0),
__E_Box = static_cast<int32_t>(0x1),
__E_Range = static_cast<int32_t>(0x2),
__E_Texture = static_cast<int32_t>(0x3),
__E_SplineArea = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FalloffFilter_FilterTypeNoPaintMask_Unwrapped () const noexcept {
return static_cast<__FalloffFilter_FilterTypeNoPaintMask_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FalloffFilter_FilterTypeNoPaintMask() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FalloffFilter_FilterTypeNoPaintMask(int32_t  value__) noexcept;

/// @brief Field Box value: I32(1)
static ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoPaintMask const Box;

/// @brief Field Global value: I32(0)
static ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoPaintMask const Global;

/// @brief Field Range value: I32(2)
static ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoPaintMask const Range;

/// @brief Field SplineArea value: I32(4)
static ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoPaintMask const SplineArea;

/// @brief Field Texture value: I32(3)
static ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoPaintMask const Texture;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18002};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoPaintMask, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoPaintMask) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.FalloffFilter/FilterTypeNoGlobalNoPaintMask
struct CORDL_TYPE FalloffFilter_FilterTypeNoGlobalNoPaintMask {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FalloffFilter_FilterTypeNoGlobalNoPaintMask_Unwrapped
enum struct __FalloffFilter_FilterTypeNoGlobalNoPaintMask_Unwrapped : int32_t {
__E_Box = static_cast<int32_t>(0x1),
__E_Range = static_cast<int32_t>(0x2),
__E_Texture = static_cast<int32_t>(0x3),
__E_SplineArea = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FalloffFilter_FilterTypeNoGlobalNoPaintMask_Unwrapped () const noexcept {
return static_cast<__FalloffFilter_FilterTypeNoGlobalNoPaintMask_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FalloffFilter_FilterTypeNoGlobalNoPaintMask() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FalloffFilter_FilterTypeNoGlobalNoPaintMask(int32_t  value__) noexcept;

/// @brief Field Box value: I32(1)
static ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobalNoPaintMask const Box;

/// @brief Field Range value: I32(2)
static ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobalNoPaintMask const Range;

/// @brief Field SplineArea value: I32(4)
static ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobalNoPaintMask const SplineArea;

/// @brief Field Texture value: I32(3)
static ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobalNoPaintMask const Texture;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18003};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobalNoPaintMask, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobalNoPaintMask) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.FalloffFilter/TextureChannel
struct CORDL_TYPE FalloffFilter_TextureChannel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FalloffFilter_TextureChannel_Unwrapped
enum struct __FalloffFilter_TextureChannel_Unwrapped : int32_t {
__E_R = static_cast<int32_t>(0x0),
__E_G = static_cast<int32_t>(0x1),
__E_B = static_cast<int32_t>(0x2),
__E_A = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FalloffFilter_TextureChannel_Unwrapped () const noexcept {
return static_cast<__FalloffFilter_TextureChannel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FalloffFilter_TextureChannel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FalloffFilter_TextureChannel(int32_t  value__) noexcept;

/// @brief Field A value: I32(3)
static ::JBooth::MicroVerseCore::FalloffFilter_TextureChannel const A;

/// @brief Field B value: I32(2)
static ::JBooth::MicroVerseCore::FalloffFilter_TextureChannel const B;

/// @brief Field G value: I32(1)
static ::JBooth::MicroVerseCore::FalloffFilter_TextureChannel const G;

/// @brief Field R value: I32(0)
static ::JBooth::MicroVerseCore::FalloffFilter_TextureChannel const R;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18004};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::FalloffFilter_TextureChannel, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::FalloffFilter_TextureChannel) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.FalloffFilter/PaintMask/Size
struct CORDL_TYPE PaintMask_FalloffFilter_Size {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PaintMask_FalloffFilter_Size_Unwrapped
enum struct __PaintMask_FalloffFilter_Size_Unwrapped : int32_t {
__E_k64 = static_cast<int32_t>(0x40),
__E_k128 = static_cast<int32_t>(0x80),
__E_k256 = static_cast<int32_t>(0x100),
__E_k512 = static_cast<int32_t>(0x200),
__E_k1024 = static_cast<int32_t>(0x400),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PaintMask_FalloffFilter_Size_Unwrapped () const noexcept {
return static_cast<__PaintMask_FalloffFilter_Size_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PaintMask_FalloffFilter_Size() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PaintMask_FalloffFilter_Size(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18005};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k1024 value: I32(1024)
static ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size const k1024;

/// @brief Field k128 value: I32(128)
static ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size const k128;

/// @brief Field k256 value: I32(256)
static ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size const k256;

/// @brief Field k512 value: I32(512)
static ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size const k512;

/// @brief Field k64 value: I32(64)
static ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size const k64;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.FalloffFilter/PaintMask/UpdateMode
struct CORDL_TYPE PaintMask_FalloffFilter_UpdateMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PaintMask_FalloffFilter_UpdateMode_Unwrapped
enum struct __PaintMask_FalloffFilter_UpdateMode_Unwrapped : int32_t {
__E_EveryChange = static_cast<int32_t>(0x0),
__E_EndStroke = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PaintMask_FalloffFilter_UpdateMode_Unwrapped () const noexcept {
return static_cast<__PaintMask_FalloffFilter_UpdateMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PaintMask_FalloffFilter_UpdateMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PaintMask_FalloffFilter_UpdateMode(int32_t  value__) noexcept;

/// @brief Field EndStroke value: I32(1)
static ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_UpdateMode const EndStroke;

/// @brief Field EveryChange value: I32(0)
static ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_UpdateMode const EveryChange;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18006};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::PaintMask_FalloffFilter_UpdateMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::PaintMask_FalloffFilter_UpdateMode) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.FalloffFilter::PaintMask::Size, JBooth.MicroVerseCore.FalloffFilter::PaintMask::UpdateMode, System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.FalloffFilter/PaintMask
class CORDL_TYPE FalloffFilter_PaintMask : public ::System::Object {
public:
// Declarations
using Size = ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size;

using UpdateMode = ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_UpdateMode;

/// @brief Field bytes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_bytes, put=__cordl_internal_set_bytes)) ::ArrayW<uint8_t>  bytes;

/// @brief Field painting, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_painting, put=__cordl_internal_set_painting)) bool  painting;

/// @brief Field size, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size  size;

/// @brief Field texture, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_texture, put=__cordl_internal_set_texture)) ::UnityW<::UnityEngine::Texture2D>  texture;

/// @brief Field updateMode, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateMode, put=__cordl_internal_set_updateMode)) ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_UpdateMode  updateMode;

/// @brief Method Clear, addr 0x18143bbf0, size 0x60, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Fill, addr 0x18143bc50, size 0x150, virtual false, abstract: false, final false
inline void Fill(float_t  val) ;

static inline ::JBooth::MicroVerseCore::FalloffFilter_PaintMask* New_ctor() ;

/// @brief Method Pack, addr 0x18143bda0, size 0x50, virtual false, abstract: false, final false
inline void Pack() ;

/// @brief Method Paint, addr 0x18143bdf0, size 0x440, virtual false, abstract: false, final false
inline void Paint(float_t  x, float_t  y, float_t  brushSize, float_t  brushFalloff, float_t  brushFlow, float_t  targetValue, double_t  deltaTime) ;

/// @brief Method Resize, addr 0x18143c230, size 0x440, virtual false, abstract: false, final false
inline void Resize(::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size  newSize) ;

/// @brief Method Smooth, addr 0x18143c670, size 0x6d0, virtual false, abstract: false, final false
inline void Smooth(float_t  x, float_t  y, float_t  brushSize, float_t  brushFalloff, float_t  brushFlow, float_t  targetValue, double_t  deltaTime) ;

/// @brief Method Unpack, addr 0x18143cd40, size 0x2a0, virtual false, abstract: false, final false
inline void Unpack() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_bytes() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_bytes() ;

constexpr bool const& __cordl_internal_get_painting() const;

constexpr bool& __cordl_internal_get_painting() ;

constexpr ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size const& __cordl_internal_get_size() const;

constexpr ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size& __cordl_internal_get_size() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_texture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_texture() ;

constexpr ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_UpdateMode const& __cordl_internal_get_updateMode() const;

constexpr ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_UpdateMode& __cordl_internal_get_updateMode() ;

constexpr void __cordl_internal_set_bytes(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_painting(bool  value) ;

constexpr void __cordl_internal_set_size(::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size  value) ;

constexpr void __cordl_internal_set_texture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_updateMode(::JBooth::MicroVerseCore::PaintMask_FalloffFilter_UpdateMode  value) ;

/// @brief Method .ctor, addr 0x18143cfe0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FalloffFilter_PaintMask() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FalloffFilter_PaintMask", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FalloffFilter_PaintMask(FalloffFilter_PaintMask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FalloffFilter_PaintMask", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FalloffFilter_PaintMask(FalloffFilter_PaintMask const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18007};

/// @brief Field texture, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___texture;

/// @brief Field bytes, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___bytes;

/// @brief Field size, offset: 0x20, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_Size  ___size;

/// @brief Field painting, offset: 0x24, size: 0x1, def value: None
 bool  ___painting;

/// @brief Field updateMode, offset: 0x28, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::PaintMask_FalloffFilter_UpdateMode  ___updateMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::FalloffFilter_PaintMask, ___texture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FalloffFilter_PaintMask, ___bytes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FalloffFilter_PaintMask, ___size) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FalloffFilter_PaintMask, ___painting) == 0x24, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FalloffFilter_PaintMask, ___updateMode) == 0x28, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::FalloffFilter_PaintMask) == 0x30, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.FalloffFilter::FilterType, JBooth.MicroVerseCore.FalloffFilter::TextureChannel, System.Object, UnityEngine.Vector2, UnityEngine.Vector4
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.FalloffFilter
class CORDL_TYPE FalloffFilter : public ::System::Object {
public:
// Declarations
using FilterType = ::JBooth::MicroVerseCore::FalloffFilter_FilterType;

using FilterTypeNoGlobal = ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobal;

using FilterTypeNoGlobalNoPaintMask = ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoGlobalNoPaintMask;

using FilterTypeNoPaintMask = ::JBooth::MicroVerseCore::FalloffFilter_FilterTypeNoPaintMask;

using PaintMask = ::JBooth::MicroVerseCore::FalloffFilter_PaintMask;

using TextureChannel = ::JBooth::MicroVerseCore::FalloffFilter_TextureChannel;

/// @brief Field _Falloff, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Falloff, put=setStaticF__Falloff)) int32_t  _Falloff;

/// @brief Field _FalloffAreaBoost, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FalloffAreaBoost, put=setStaticF__FalloffAreaBoost)) int32_t  _FalloffAreaBoost;

/// @brief Field _FalloffAreaRange, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FalloffAreaRange, put=setStaticF__FalloffAreaRange)) int32_t  _FalloffAreaRange;

/// @brief Field _FalloffTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FalloffTexture, put=setStaticF__FalloffTexture)) int32_t  _FalloffTexture;

/// @brief Field _FalloffTextureChannel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FalloffTextureChannel, put=setStaticF__FalloffTextureChannel)) int32_t  _FalloffTextureChannel;

/// @brief Field _FalloffTextureParams, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FalloffTextureParams, put=setStaticF__FalloffTextureParams)) int32_t  _FalloffTextureParams;

/// @brief Field _FalloffTextureRotScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FalloffTextureRotScale, put=setStaticF__FalloffTextureRotScale)) int32_t  _FalloffTextureRotScale;

/// @brief Field _PaintAreaClamp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__PaintAreaClamp, put=setStaticF__PaintAreaClamp)) int32_t  _PaintAreaClamp;

/// @brief Field _PaintAreaFalloffTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__PaintAreaFalloffTexture, put=setStaticF__PaintAreaFalloffTexture)) int32_t  _PaintAreaFalloffTexture;

/// @brief Field _PaintAreaMatrix, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__PaintAreaMatrix, put=setStaticF__PaintAreaMatrix)) int32_t  _PaintAreaMatrix;

/// @brief Field _TerrainSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TerrainSize, put=setStaticF__TerrainSize)) int32_t  _TerrainSize;

/// @brief Field clampTexture, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_clampTexture, put=__cordl_internal_set_clampTexture)) bool  clampTexture;

/// @brief Field easing, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_easing, put=__cordl_internal_set_easing)) ::JBooth::MicroVerseCore::Easing*  easing;

/// @brief Field falloffRange, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_falloffRange, put=__cordl_internal_set_falloffRange)) ::UnityEngine::Vector2  falloffRange;

/// @brief Field filterType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_filterType, put=__cordl_internal_set_filterType)) ::JBooth::MicroVerseCore::FalloffFilter_FilterType  filterType;

/// @brief Field noise, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_noise, put=__cordl_internal_set_noise)) ::JBooth::MicroVerseCore::Noise*  noise;

/// @brief Field paintArea, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_paintArea, put=__cordl_internal_set_paintArea)) ::UnityW<::JBooth::MicroVerseCore::PaintFalloffArea>  paintArea;

/// @brief Field paintMask, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_paintMask, put=__cordl_internal_set_paintMask)) ::JBooth::MicroVerseCore::FalloffFilter_PaintMask*  paintMask;

/// @brief Field splineArea, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_splineArea, put=__cordl_internal_set_splineArea)) ::UnityW<::JBooth::MicroVerseCore::SplineArea>  splineArea;

/// @brief Field splineAreaFalloff, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_splineAreaFalloff, put=__cordl_internal_set_splineAreaFalloff)) float_t  splineAreaFalloff;

/// @brief Field splineAreaFalloffBoost, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_splineAreaFalloffBoost, put=__cordl_internal_set_splineAreaFalloffBoost)) float_t  splineAreaFalloffBoost;

/// @brief Field texture, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_texture, put=__cordl_internal_set_texture)) ::UnityW<::UnityEngine::Texture2D>  texture;

/// @brief Field textureChannel, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_textureChannel, put=__cordl_internal_set_textureChannel)) ::JBooth::MicroVerseCore::FalloffFilter_TextureChannel  textureChannel;

/// @brief Field textureParams, offset 0x24, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureParams, put=__cordl_internal_set_textureParams)) ::UnityEngine::Vector2  textureParams;

/// @brief Field textureRotationScale, offset 0x2c, size 0x10 
 __declspec(property(get=__cordl_internal_get_textureRotationScale, put=__cordl_internal_set_textureRotationScale)) ::UnityEngine::Vector4  textureRotationScale;

/// @brief Field useFilter, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_useFilter, put=__cordl_internal_set_useFilter)) ::JBooth::MicroVerseCore::FalloffFilter*  useFilter;

/// @brief Method CastEnum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TTarget>
static inline TTarget CastEnum(TSource  source, TTarget  fallback) ;

/// @brief Method GetUseFilter, addr 0x18142c180, size 0x90, virtual false, abstract: false, final false
inline ::JBooth::MicroVerseCore::FalloffFilter* GetUseFilter(::UnityEngine::Transform*  transform) ;

static inline ::JBooth::MicroVerseCore::FalloffFilter* New_ctor() ;

/// @brief Method PrepareMaterial, addr 0x18142c210, size 0x6e0, virtual false, abstract: false, final false
inline void PrepareMaterial(::UnityEngine::Material*  mat, ::UnityEngine::Transform*  transform, ::System::Collections::Generic::List_1<::StringW>*  keywords, ::UnityEngine::Terrain*  terrain) ;

/// @brief Method PrepareTerrain, addr 0x18142c8f0, size 0x400, virtual false, abstract: false, final false
inline void PrepareTerrain(::UnityEngine::Material*  mat, ::UnityEngine::Terrain*  terrain, ::UnityEngine::Transform*  transform, ::System::Collections::Generic::List_1<::StringW>*  keywords) ;

constexpr bool const& __cordl_internal_get_clampTexture() const;

constexpr bool& __cordl_internal_get_clampTexture() ;

constexpr ::JBooth::MicroVerseCore::Easing* const& __cordl_internal_get_easing() const;

constexpr ::JBooth::MicroVerseCore::Easing*& __cordl_internal_get_easing() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_falloffRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_falloffRange() ;

constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterType const& __cordl_internal_get_filterType() const;

constexpr ::JBooth::MicroVerseCore::FalloffFilter_FilterType& __cordl_internal_get_filterType() ;

constexpr ::JBooth::MicroVerseCore::Noise* const& __cordl_internal_get_noise() const;

constexpr ::JBooth::MicroVerseCore::Noise*& __cordl_internal_get_noise() ;

constexpr ::UnityW<::JBooth::MicroVerseCore::PaintFalloffArea> const& __cordl_internal_get_paintArea() const;

constexpr ::UnityW<::JBooth::MicroVerseCore::PaintFalloffArea>& __cordl_internal_get_paintArea() ;

constexpr ::JBooth::MicroVerseCore::FalloffFilter_PaintMask* const& __cordl_internal_get_paintMask() const;

constexpr ::JBooth::MicroVerseCore::FalloffFilter_PaintMask*& __cordl_internal_get_paintMask() ;

constexpr ::UnityW<::JBooth::MicroVerseCore::SplineArea> const& __cordl_internal_get_splineArea() const;

constexpr ::UnityW<::JBooth::MicroVerseCore::SplineArea>& __cordl_internal_get_splineArea() ;

constexpr float_t const& __cordl_internal_get_splineAreaFalloff() const;

constexpr float_t& __cordl_internal_get_splineAreaFalloff() ;

constexpr float_t const& __cordl_internal_get_splineAreaFalloffBoost() const;

constexpr float_t& __cordl_internal_get_splineAreaFalloffBoost() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_texture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_texture() ;

constexpr ::JBooth::MicroVerseCore::FalloffFilter_TextureChannel const& __cordl_internal_get_textureChannel() const;

constexpr ::JBooth::MicroVerseCore::FalloffFilter_TextureChannel& __cordl_internal_get_textureChannel() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_textureParams() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_textureParams() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_textureRotationScale() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_textureRotationScale() ;

constexpr ::JBooth::MicroVerseCore::FalloffFilter* const& __cordl_internal_get_useFilter() const;

constexpr ::JBooth::MicroVerseCore::FalloffFilter*& __cordl_internal_get_useFilter() ;

constexpr void __cordl_internal_set_clampTexture(bool  value) ;

constexpr void __cordl_internal_set_easing(::JBooth::MicroVerseCore::Easing*  value) ;

constexpr void __cordl_internal_set_falloffRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_filterType(::JBooth::MicroVerseCore::FalloffFilter_FilterType  value) ;

constexpr void __cordl_internal_set_noise(::JBooth::MicroVerseCore::Noise*  value) ;

constexpr void __cordl_internal_set_paintArea(::UnityW<::JBooth::MicroVerseCore::PaintFalloffArea>  value) ;

constexpr void __cordl_internal_set_paintMask(::JBooth::MicroVerseCore::FalloffFilter_PaintMask*  value) ;

constexpr void __cordl_internal_set_splineArea(::UnityW<::JBooth::MicroVerseCore::SplineArea>  value) ;

constexpr void __cordl_internal_set_splineAreaFalloff(float_t  value) ;

constexpr void __cordl_internal_set_splineAreaFalloffBoost(float_t  value) ;

constexpr void __cordl_internal_set_texture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_textureChannel(::JBooth::MicroVerseCore::FalloffFilter_TextureChannel  value) ;

constexpr void __cordl_internal_set_textureParams(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_textureRotationScale(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_useFilter(::JBooth::MicroVerseCore::FalloffFilter*  value) ;

/// @brief Method .ctor, addr 0x18142ce60, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__Falloff() ;

static inline int32_t getStaticF__FalloffAreaBoost() ;

static inline int32_t getStaticF__FalloffAreaRange() ;

static inline int32_t getStaticF__FalloffTexture() ;

static inline int32_t getStaticF__FalloffTextureChannel() ;

static inline int32_t getStaticF__FalloffTextureParams() ;

static inline int32_t getStaticF__FalloffTextureRotScale() ;

static inline int32_t getStaticF__PaintAreaClamp() ;

static inline int32_t getStaticF__PaintAreaFalloffTexture() ;

static inline int32_t getStaticF__PaintAreaMatrix() ;

static inline int32_t getStaticF__TerrainSize() ;

static inline void setStaticF__Falloff(int32_t  value) ;

static inline void setStaticF__FalloffAreaBoost(int32_t  value) ;

static inline void setStaticF__FalloffAreaRange(int32_t  value) ;

static inline void setStaticF__FalloffTexture(int32_t  value) ;

static inline void setStaticF__FalloffTextureChannel(int32_t  value) ;

static inline void setStaticF__FalloffTextureParams(int32_t  value) ;

static inline void setStaticF__FalloffTextureRotScale(int32_t  value) ;

static inline void setStaticF__PaintAreaClamp(int32_t  value) ;

static inline void setStaticF__PaintAreaFalloffTexture(int32_t  value) ;

static inline void setStaticF__PaintAreaMatrix(int32_t  value) ;

static inline void setStaticF__TerrainSize(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FalloffFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FalloffFilter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FalloffFilter(FalloffFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FalloffFilter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FalloffFilter(FalloffFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18008};

/// @brief Field filterType, offset: 0x10, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::FalloffFilter_FilterType  ___filterType;

/// @brief Field texture, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___texture;

/// @brief Field textureChannel, offset: 0x20, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::FalloffFilter_TextureChannel  ___textureChannel;

/// @brief Field textureParams, offset: 0x24, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___textureParams;

/// @brief Field textureRotationScale, offset: 0x2c, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___textureRotationScale;

/// @brief Field clampTexture, offset: 0x3c, size: 0x1, def value: None
 bool  ___clampTexture;

/// @brief Field splineArea, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroVerseCore::SplineArea>  ___splineArea;

/// @brief Field splineAreaFalloff, offset: 0x48, size: 0x4, def value: None
 float_t  ___splineAreaFalloff;

/// @brief Field splineAreaFalloffBoost, offset: 0x4c, size: 0x4, def value: None
 float_t  ___splineAreaFalloffBoost;

/// @brief Field paintArea, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroVerseCore::PaintFalloffArea>  ___paintArea;

/// @brief Field easing, offset: 0x58, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::Easing*  ___easing;

/// @brief Field noise, offset: 0x60, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::Noise*  ___noise;

/// @brief Field falloffRange, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___falloffRange;

/// @brief Field paintMask, offset: 0x70, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::FalloffFilter_PaintMask*  ___paintMask;

/// @brief Field useFilter, offset: 0x78, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::FalloffFilter*  ___useFilter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::FalloffFilter, ___filterType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FalloffFilter, ___texture) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FalloffFilter, ___textureChannel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FalloffFilter, ___textureParams) == 0x24, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FalloffFilter, ___textureRotationScale) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FalloffFilter, ___clampTexture) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FalloffFilter, ___splineArea) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FalloffFilter, ___splineAreaFalloff) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FalloffFilter, ___splineAreaFalloffBoost) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FalloffFilter, ___paintArea) == 0x50, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FalloffFilter, ___easing) == 0x58, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FalloffFilter, ___noise) == 0x60, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FalloffFilter, ___falloffRange) == 0x68, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FalloffFilter, ___paintMask) == 0x70, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FalloffFilter, ___useFilter) == 0x78, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::FalloffFilter) == 0x80, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore

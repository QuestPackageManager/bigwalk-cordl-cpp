#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/SubpixelMorphologicalAntialiasing.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SubpixelMorphologicalAntialiasing)
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
namespace UnityEngine::Rendering::PostProcessing {
struct SubpixelMorphologicalAntialiasing_Pass;
}
namespace UnityEngine::Rendering::PostProcessing {
struct SubpixelMorphologicalAntialiasing_Quality;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct SubpixelMorphologicalAntialiasing_Pass;
}
namespace UnityEngine::Rendering::PostProcessing {
struct SubpixelMorphologicalAntialiasing_Quality;
}
namespace UnityEngine::Rendering::PostProcessing {
class SubpixelMorphologicalAntialiasing;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Pass);
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Quality);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Pass, "UnityEngine.Rendering.PostProcessing", "SubpixelMorphologicalAntialiasing/Pass");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Quality, "UnityEngine.Rendering.PostProcessing", "SubpixelMorphologicalAntialiasing/Quality");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing*, "UnityEngine.Rendering.PostProcessing", "SubpixelMorphologicalAntialiasing");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing/Pass
struct CORDL_TYPE SubpixelMorphologicalAntialiasing_Pass {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SubpixelMorphologicalAntialiasing_Pass_Unwrapped
enum struct __SubpixelMorphologicalAntialiasing_Pass_Unwrapped : int32_t {
__E_EdgeDetection = static_cast<int32_t>(0x0),
__E_BlendWeights = static_cast<int32_t>(0x3),
__E_NeighborhoodBlending = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SubpixelMorphologicalAntialiasing_Pass_Unwrapped () const noexcept {
return static_cast<__SubpixelMorphologicalAntialiasing_Pass_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SubpixelMorphologicalAntialiasing_Pass() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SubpixelMorphologicalAntialiasing_Pass(int32_t  value__) noexcept;

/// @brief Field BlendWeights value: I32(3)
static ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Pass const BlendWeights;

/// @brief Field EdgeDetection value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Pass const EdgeDetection;

/// @brief Field NeighborhoodBlending value: I32(6)
static ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Pass const NeighborhoodBlending;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18590};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Pass, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Pass) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing/Quality
struct CORDL_TYPE SubpixelMorphologicalAntialiasing_Quality {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SubpixelMorphologicalAntialiasing_Quality_Unwrapped
enum struct __SubpixelMorphologicalAntialiasing_Quality_Unwrapped : int32_t {
__E_Low = static_cast<int32_t>(0x0),
__E_Medium = static_cast<int32_t>(0x1),
__E_High = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SubpixelMorphologicalAntialiasing_Quality_Unwrapped () const noexcept {
return static_cast<__SubpixelMorphologicalAntialiasing_Quality_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SubpixelMorphologicalAntialiasing_Quality() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SubpixelMorphologicalAntialiasing_Quality(int32_t  value__) noexcept;

/// @brief Field High value: I32(2)
static ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Quality const High;

/// @brief Field Low value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Quality const Low;

/// @brief Field Medium value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Quality const Medium;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18591};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Quality, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Quality) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies System.Object, UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing::Quality
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing
class CORDL_TYPE SubpixelMorphologicalAntialiasing : public ::System::Object {
public:
// Declarations
using Pass = ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Pass;

using Quality = ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Quality;

/// @brief Field quality, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_quality, put=__cordl_internal_set_quality)) ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Quality  quality;

/// @brief Method IsSupported, addr 0x181fbd9c0, size 0x20, virtual false, abstract: false, final false
inline bool IsSupported() ;

static inline ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing* New_ctor() ;

/// @brief Method Render, addr 0x181fbd9e0, size 0x400, virtual false, abstract: false, final false
inline void Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

constexpr ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Quality const& __cordl_internal_get_quality() const;

constexpr ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Quality& __cordl_internal_get_quality() ;

constexpr void __cordl_internal_set_quality(::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Quality  value) ;

/// @brief Method .ctor, addr 0x181fbdde0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubpixelMorphologicalAntialiasing() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubpixelMorphologicalAntialiasing", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubpixelMorphologicalAntialiasing(SubpixelMorphologicalAntialiasing && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubpixelMorphologicalAntialiasing", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubpixelMorphologicalAntialiasing(SubpixelMorphologicalAntialiasing const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18592};

/// @brief Field quality, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Quality  ___quality;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing, ___quality) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing

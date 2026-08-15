#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioScatterContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioRandomContainer_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioScatterContainer)
namespace GlobalNamespace {
struct AudioScatterContainer_ScatterShape;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct AudioScatterContainer_ScatterShape;
}
namespace GlobalNamespace {
class AudioScatterContainer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AudioScatterContainer_ScatterShape);
MARK_REF_T(::GlobalNamespace::AudioScatterContainer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioScatterContainer_ScatterShape, "", "AudioScatterContainer/ScatterShape");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioScatterContainer*, "", "AudioScatterContainer");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioScatterContainer/ScatterShape
struct CORDL_TYPE AudioScatterContainer_ScatterShape {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AudioScatterContainer_ScatterShape_Unwrapped
enum struct __AudioScatterContainer_ScatterShape_Unwrapped : int32_t {
__E_Sphere = static_cast<int32_t>(0x0),
__E_Hemisphere = static_cast<int32_t>(0x1),
__E_RoundPlane = static_cast<int32_t>(0x2),
__E_Custom = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioScatterContainer_ScatterShape_Unwrapped () const noexcept {
return static_cast<__AudioScatterContainer_ScatterShape_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AudioScatterContainer_ScatterShape() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AudioScatterContainer_ScatterShape(int32_t  value__) noexcept;

/// @brief Field Custom value: I32(3)
static ::GlobalNamespace::AudioScatterContainer_ScatterShape const Custom;

/// @brief Field Hemisphere value: I32(1)
static ::GlobalNamespace::AudioScatterContainer_ScatterShape const Hemisphere;

/// @brief Field RoundPlane value: I32(2)
static ::GlobalNamespace::AudioScatterContainer_ScatterShape const RoundPlane;

/// @brief Field Sphere value: I32(0)
static ::GlobalNamespace::AudioScatterContainer_ScatterShape const Sphere;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17569};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioScatterContainer_ScatterShape, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioScatterContainer_ScatterShape) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies AudioRandomContainer, AudioScatterContainer::ScatterShape
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioScatterContainer
class CORDL_TYPE AudioScatterContainer : public ::GlobalNamespace::AudioRandomContainer {
public:
// Declarations
using ScatterShape = ::GlobalNamespace::AudioScatterContainer_ScatterShape;

 __declspec(property(get=get_HibernationDistance)) float_t  HibernationDistance;

 __declspec(property(get=get_MaxDistance)) float_t  MaxDistance;

 __declspec(property(get=get_MaxHorizontalAngle)) float_t  MaxHorizontalAngle;

 __declspec(property(get=get_MaxInterval)) float_t  MaxInterval;

 __declspec(property(get=get_MaxVerticalAngle)) float_t  MaxVerticalAngle;

 __declspec(property(get=get_MinDistance)) float_t  MinDistance;

 __declspec(property(get=get_MinHorizontalAngle)) float_t  MinHorizontalAngle;

 __declspec(property(get=get_MinInterval)) float_t  MinInterval;

 __declspec(property(get=get_MinVerticalAngle)) float_t  MinVerticalAngle;

 __declspec(property(get=get_Shape)) ::GlobalNamespace::AudioScatterContainer_ScatterShape  Shape;

/// @brief Field _hibernationDistance, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__hibernationDistance, put=__cordl_internal_set__hibernationDistance)) float_t  _hibernationDistance;

/// @brief Field _maxDistance, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxDistance, put=__cordl_internal_set__maxDistance)) float_t  _maxDistance;

/// @brief Field _maxHorizontalAngle, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxHorizontalAngle, put=__cordl_internal_set__maxHorizontalAngle)) float_t  _maxHorizontalAngle;

/// @brief Field _maxInterval, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxInterval, put=__cordl_internal_set__maxInterval)) float_t  _maxInterval;

/// @brief Field _maxVerticalAngle, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxVerticalAngle, put=__cordl_internal_set__maxVerticalAngle)) float_t  _maxVerticalAngle;

/// @brief Field _minDistance, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__minDistance, put=__cordl_internal_set__minDistance)) float_t  _minDistance;

/// @brief Field _minHorizontalAngle, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__minHorizontalAngle, put=__cordl_internal_set__minHorizontalAngle)) float_t  _minHorizontalAngle;

/// @brief Field _minInterval, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__minInterval, put=__cordl_internal_set__minInterval)) float_t  _minInterval;

/// @brief Field _minVerticalAngle, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__minVerticalAngle, put=__cordl_internal_set__minVerticalAngle)) float_t  _minVerticalAngle;

/// @brief Field _shape, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__shape, put=__cordl_internal_set__shape)) ::GlobalNamespace::AudioScatterContainer_ScatterShape  _shape;

/// @brief Method DrawScatterGizmos, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void DrawScatterGizmos(::UnityEngine::Transform*  transform, bool  frameOnly) ;

/// @brief Method GetNextInterval, addr 0x18048f680, size 0x20, virtual false, abstract: false, final false
inline float_t GetNextInterval() ;

/// @brief Method GetNextPosition, addr 0x18048f6a0, size 0x710, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetNextPosition(::UnityEngine::Transform*  centerTransform) ;

static inline ::GlobalNamespace::AudioScatterContainer* New_ctor() ;

/// @brief Method OnEnable, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnValidate() ;

constexpr float_t const& __cordl_internal_get__hibernationDistance() const;

constexpr float_t& __cordl_internal_get__hibernationDistance() ;

constexpr float_t const& __cordl_internal_get__maxDistance() const;

constexpr float_t& __cordl_internal_get__maxDistance() ;

constexpr float_t const& __cordl_internal_get__maxHorizontalAngle() const;

constexpr float_t& __cordl_internal_get__maxHorizontalAngle() ;

constexpr float_t const& __cordl_internal_get__maxInterval() const;

constexpr float_t& __cordl_internal_get__maxInterval() ;

constexpr float_t const& __cordl_internal_get__maxVerticalAngle() const;

constexpr float_t& __cordl_internal_get__maxVerticalAngle() ;

constexpr float_t const& __cordl_internal_get__minDistance() const;

constexpr float_t& __cordl_internal_get__minDistance() ;

constexpr float_t const& __cordl_internal_get__minHorizontalAngle() const;

constexpr float_t& __cordl_internal_get__minHorizontalAngle() ;

constexpr float_t const& __cordl_internal_get__minInterval() const;

constexpr float_t& __cordl_internal_get__minInterval() ;

constexpr float_t const& __cordl_internal_get__minVerticalAngle() const;

constexpr float_t& __cordl_internal_get__minVerticalAngle() ;

constexpr ::GlobalNamespace::AudioScatterContainer_ScatterShape const& __cordl_internal_get__shape() const;

constexpr ::GlobalNamespace::AudioScatterContainer_ScatterShape& __cordl_internal_get__shape() ;

constexpr void __cordl_internal_set__hibernationDistance(float_t  value) ;

constexpr void __cordl_internal_set__maxDistance(float_t  value) ;

constexpr void __cordl_internal_set__maxHorizontalAngle(float_t  value) ;

constexpr void __cordl_internal_set__maxInterval(float_t  value) ;

constexpr void __cordl_internal_set__maxVerticalAngle(float_t  value) ;

constexpr void __cordl_internal_set__minDistance(float_t  value) ;

constexpr void __cordl_internal_set__minHorizontalAngle(float_t  value) ;

constexpr void __cordl_internal_set__minInterval(float_t  value) ;

constexpr void __cordl_internal_set__minVerticalAngle(float_t  value) ;

constexpr void __cordl_internal_set__shape(::GlobalNamespace::AudioScatterContainer_ScatterShape  value) ;

/// @brief Method .ctor, addr 0x18048fdb0, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HibernationDistance, addr 0x180483510, size 0x10, virtual false, abstract: false, final false
inline float_t get_HibernationDistance() ;

/// @brief Method get_MaxDistance, addr 0x180474bc0, size 0x10, virtual false, abstract: false, final false
inline float_t get_MaxDistance() ;

/// @brief Method get_MaxHorizontalAngle, addr 0x180483500, size 0x10, virtual false, abstract: false, final false
inline float_t get_MaxHorizontalAngle() ;

/// @brief Method get_MaxInterval, addr 0x180474bd0, size 0x10, virtual false, abstract: false, final false
inline float_t get_MaxInterval() ;

/// @brief Method get_MaxVerticalAngle, addr 0x180312eb0, size 0x10, virtual false, abstract: false, final false
inline float_t get_MaxVerticalAngle() ;

/// @brief Method get_MinDistance, addr 0x1802e58b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_MinDistance() ;

/// @brief Method get_MinHorizontalAngle, addr 0x180483530, size 0x10, virtual false, abstract: false, final false
inline float_t get_MinHorizontalAngle() ;

/// @brief Method get_MinInterval, addr 0x18034f9d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_MinInterval() ;

/// @brief Method get_MinVerticalAngle, addr 0x180483520, size 0x10, virtual false, abstract: false, final false
inline float_t get_MinVerticalAngle() ;

/// @brief Method get_Shape, addr 0x1803becf0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioScatterContainer_ScatterShape get_Shape() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioScatterContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioScatterContainer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioScatterContainer(AudioScatterContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioScatterContainer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioScatterContainer(AudioScatterContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17570};

/// @brief Field _minInterval, offset: 0x64, size: 0x4, def value: None
 float_t  ____minInterval;

/// @brief Field _maxInterval, offset: 0x68, size: 0x4, def value: None
 float_t  ____maxInterval;

/// @brief Field _minDistance, offset: 0x6c, size: 0x4, def value: None
 float_t  ____minDistance;

/// @brief Field _maxDistance, offset: 0x70, size: 0x4, def value: None
 float_t  ____maxDistance;

/// @brief Field _shape, offset: 0x74, size: 0x4, def value: None
 ::GlobalNamespace::AudioScatterContainer_ScatterShape  ____shape;

/// @brief Field _minHorizontalAngle, offset: 0x78, size: 0x4, def value: None
 float_t  ____minHorizontalAngle;

/// @brief Field _maxHorizontalAngle, offset: 0x7c, size: 0x4, def value: None
 float_t  ____maxHorizontalAngle;

/// @brief Field _minVerticalAngle, offset: 0x80, size: 0x4, def value: None
 float_t  ____minVerticalAngle;

/// @brief Field _maxVerticalAngle, offset: 0x84, size: 0x4, def value: None
 float_t  ____maxVerticalAngle;

/// @brief Field _hibernationDistance, offset: 0x88, size: 0x4, def value: None
 float_t  ____hibernationDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioScatterContainer, ____minInterval) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioScatterContainer, ____maxInterval) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioScatterContainer, ____minDistance) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioScatterContainer, ____maxDistance) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioScatterContainer, ____shape) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioScatterContainer, ____minHorizontalAngle) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioScatterContainer, ____maxHorizontalAngle) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioScatterContainer, ____minVerticalAngle) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioScatterContainer, ____maxVerticalAngle) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioScatterContainer, ____hibernationDistance) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioScatterContainer) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace

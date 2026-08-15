#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineInstantiate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineComponent_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineInstantiate)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine::Splines {
struct SplineComponent_AlignAxis;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
namespace UnityEngine::Splines {
struct SplineInstantiate_InstantiableItem;
}
namespace UnityEngine::Splines {
struct SplineInstantiate_Method;
}
namespace UnityEngine::Splines {
struct SplineInstantiate_OffsetSpace;
}
namespace UnityEngine::Splines {
struct SplineInstantiate_Space;
}
namespace UnityEngine::Splines {
struct SplineInstantiate_Vector3Offset;
}
namespace UnityEngine::Splines {
class SplineInstantiate___c;
}
namespace UnityEngine::Splines {
struct SplineModification;
}
namespace UnityEngine::Splines {
class Spline;
}
namespace UnityEngine::Splines {
struct Vector3Offset_SplineInstantiate_Setup;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Splines {
struct SplineInstantiate_Method;
}
namespace UnityEngine::Splines {
struct SplineInstantiate_OffsetSpace;
}
namespace UnityEngine::Splines {
struct SplineInstantiate_Space;
}
namespace UnityEngine::Splines {
struct Vector3Offset_SplineInstantiate_Setup;
}
namespace UnityEngine::Splines {
class SplineInstantiate;
}
namespace UnityEngine::Splines {
class SplineInstantiate___c;
}
namespace UnityEngine::Splines {
struct SplineInstantiate_InstantiableItem;
}
namespace UnityEngine::Splines {
struct SplineInstantiate_Vector3Offset;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Splines::SplineInstantiate_Method);
MARK_VAL_T(::UnityEngine::Splines::SplineInstantiate_OffsetSpace);
MARK_VAL_T(::UnityEngine::Splines::SplineInstantiate_Space);
MARK_VAL_T(::UnityEngine::Splines::Vector3Offset_SplineInstantiate_Setup);
MARK_REF_T(::UnityEngine::Splines::SplineInstantiate*);
MARK_REF_T(::UnityEngine::Splines::SplineInstantiate___c*);
MARK_VAL_T(::UnityEngine::Splines::SplineInstantiate_InstantiableItem);
MARK_VAL_T(::UnityEngine::Splines::SplineInstantiate_Vector3Offset);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineInstantiate_Method, "UnityEngine.Splines", "SplineInstantiate/Method");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineInstantiate_OffsetSpace, "UnityEngine.Splines", "SplineInstantiate/OffsetSpace");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineInstantiate_Space, "UnityEngine.Splines", "SplineInstantiate/Space");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::Vector3Offset_SplineInstantiate_Setup, "UnityEngine.Splines", "SplineInstantiate/Vector3Offset/Setup");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineInstantiate*, "UnityEngine.Splines", "SplineInstantiate");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineInstantiate___c*, "UnityEngine.Splines", "SplineInstantiate/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineInstantiate_InstantiableItem, "UnityEngine.Splines", "SplineInstantiate/InstantiableItem");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineInstantiate_Vector3Offset, "UnityEngine.Splines", "SplineInstantiate/Vector3Offset");
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineInstantiate/OffsetSpace
struct CORDL_TYPE SplineInstantiate_OffsetSpace {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SplineInstantiate_OffsetSpace_Unwrapped
enum struct __SplineInstantiate_OffsetSpace_Unwrapped : int32_t {
__E_Spline = static_cast<int32_t>(0x0),
__E_Local = static_cast<int32_t>(0x1),
__E_World = static_cast<int32_t>(0x2),
__E_Object = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SplineInstantiate_OffsetSpace_Unwrapped () const noexcept {
return static_cast<__SplineInstantiate_OffsetSpace_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SplineInstantiate_OffsetSpace() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SplineInstantiate_OffsetSpace(int32_t  value__) noexcept;

/// @brief Field Local value: I32(1)
static ::UnityEngine::Splines::SplineInstantiate_OffsetSpace const Local;

/// @brief Field Object value: I32(3)
static ::UnityEngine::Splines::SplineInstantiate_OffsetSpace const Object;

/// @brief Field Spline value: I32(0)
static ::UnityEngine::Splines::SplineInstantiate_OffsetSpace const Spline;

/// @brief Field World value: I32(2)
static ::UnityEngine::Splines::SplineInstantiate_OffsetSpace const World;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18732};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate_OffsetSpace, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineInstantiate_OffsetSpace) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Splines
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineInstantiate/Vector3Offset/Setup
struct CORDL_TYPE Vector3Offset_SplineInstantiate_Setup {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Vector3Offset_SplineInstantiate_Setup_Unwrapped
enum struct __Vector3Offset_SplineInstantiate_Setup_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_HasOffset = static_cast<int32_t>(0x1),
__E_HasCustomSpace = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Vector3Offset_SplineInstantiate_Setup_Unwrapped () const noexcept {
return static_cast<__Vector3Offset_SplineInstantiate_Setup_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Vector3Offset_SplineInstantiate_Setup() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Vector3Offset_SplineInstantiate_Setup(int32_t  value__) noexcept;

/// @brief Field HasCustomSpace value: I32(2)
static ::UnityEngine::Splines::Vector3Offset_SplineInstantiate_Setup const HasCustomSpace;

/// @brief Field HasOffset value: I32(1)
static ::UnityEngine::Splines::Vector3Offset_SplineInstantiate_Setup const HasOffset;

/// @brief Field None value: I32(0)
static ::UnityEngine::Splines::Vector3Offset_SplineInstantiate_Setup const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18733};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::Vector3Offset_SplineInstantiate_Setup, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::Vector3Offset_SplineInstantiate_Setup) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Splines
// Dependencies UnityEngine.Splines.SplineInstantiate::OffsetSpace, UnityEngine.Splines.SplineInstantiate::Vector3Offset::Setup, UnityEngine.Vector3
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineInstantiate/Vector3Offset
struct CORDL_TYPE SplineInstantiate_Vector3Offset {
public:
// Declarations
using Setup = ::UnityEngine::Splines::Vector3Offset_SplineInstantiate_Setup;

 __declspec(property(get=get_hasCustomSpace)) bool  hasCustomSpace;

 __declspec(property(get=get_hasOffset)) bool  hasOffset;

/// @brief Method CheckCustomSpace, addr 0x1821844d0, size 0x30, virtual false, abstract: false, final false
inline void CheckCustomSpace(::UnityEngine::Splines::SplineInstantiate_Space  instanceSpace) ;

/// @brief Method CheckMinMax, addr 0x182184540, size 0x80, virtual false, abstract: false, final false
inline void CheckMinMax() ;

/// @brief Method CheckMinMaxValidity, addr 0x182184500, size 0x40, virtual false, abstract: false, final false
inline void CheckMinMaxValidity() ;

/// @brief Method GetNextOffset, addr 0x1821845c0, size 0x180, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetNextOffset() ;

/// @brief Method get_hasCustomSpace, addr 0x1814bd3c0, size 0x20, virtual false, abstract: false, final false
inline bool get_hasCustomSpace() ;

/// @brief Method get_hasOffset, addr 0x181455c90, size 0x20, virtual false, abstract: false, final false
inline bool get_hasOffset() ;

// Ctor Parameters []
// @brief default ctor
constexpr SplineInstantiate_Vector3Offset() ;

// Ctor Parameters [CppParam { name: "setup", ty: "::UnityEngine::Splines::Vector3Offset_SplineInstantiate_Setup", modifiers: "", def_value: None }, CppParam { name: "min", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "max", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "randomX", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "randomY", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "randomZ", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "space", ty: "::UnityEngine::Splines::SplineInstantiate_OffsetSpace", modifiers: "", def_value: None }]
constexpr SplineInstantiate_Vector3Offset(::UnityEngine::Splines::Vector3Offset_SplineInstantiate_Setup  setup, ::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max, bool  randomX, bool  randomY, bool  randomZ, ::UnityEngine::Splines::SplineInstantiate_OffsetSpace  space) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18734};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field setup, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::Splines::Vector3Offset_SplineInstantiate_Setup  setup;

/// @brief Field min, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  min;

/// @brief Field max, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  max;

/// @brief Field randomX, offset: 0x1c, size: 0x1, def value: None
 bool  randomX;

/// @brief Field randomY, offset: 0x1d, size: 0x1, def value: None
 bool  randomY;

/// @brief Field randomZ, offset: 0x1e, size: 0x1, def value: None
 bool  randomZ;

/// @brief Field space, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::Splines::SplineInstantiate_OffsetSpace  space;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate_Vector3Offset, setup) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate_Vector3Offset, min) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate_Vector3Offset, max) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate_Vector3Offset, randomX) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate_Vector3Offset, randomY) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate_Vector3Offset, randomZ) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate_Vector3Offset, space) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineInstantiate_Vector3Offset) == 0x24, "Size mismatch!");

} // namespace end def UnityEngine::Splines
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineInstantiate/InstantiableItem
struct CORDL_TYPE SplineInstantiate_InstantiableItem {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SplineInstantiate_InstantiableItem() ;

// Ctor Parameters [CppParam { name: "prefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "Prefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "probability", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Probability", ty: "float_t", modifiers: "", def_value: None }]
constexpr SplineInstantiate_InstantiableItem(::UnityW<::UnityEngine::GameObject>  prefab, ::UnityW<::UnityEngine::GameObject>  Prefab, float_t  probability, float_t  Probability) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18735};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field prefab, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  prefab;

/// @brief Field Prefab, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  Prefab;

/// @brief Field probability, offset: 0x10, size: 0x4, def value: None
 float_t  probability;

/// @brief Field Probability, offset: 0x14, size: 0x4, def value: None
 float_t  Probability;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate_InstantiableItem, prefab) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate_InstantiableItem, Prefab) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate_InstantiableItem, probability) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate_InstantiableItem, Probability) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineInstantiate_InstantiableItem) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Splines
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineInstantiate/Method
struct CORDL_TYPE SplineInstantiate_Method {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SplineInstantiate_Method_Unwrapped
enum struct __SplineInstantiate_Method_Unwrapped : int32_t {
__E_InstanceCount = static_cast<int32_t>(0x0),
__E_SpacingDistance = static_cast<int32_t>(0x1),
__E_LinearDistance = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SplineInstantiate_Method_Unwrapped () const noexcept {
return static_cast<__SplineInstantiate_Method_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SplineInstantiate_Method() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SplineInstantiate_Method(int32_t  value__) noexcept;

/// @brief Field InstanceCount value: I32(0)
static ::UnityEngine::Splines::SplineInstantiate_Method const InstanceCount;

/// @brief Field LinearDistance value: I32(2)
static ::UnityEngine::Splines::SplineInstantiate_Method const LinearDistance;

/// @brief Field SpacingDistance value: I32(1)
static ::UnityEngine::Splines::SplineInstantiate_Method const SpacingDistance;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18736};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate_Method, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineInstantiate_Method) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Splines
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineInstantiate/Space
struct CORDL_TYPE SplineInstantiate_Space {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SplineInstantiate_Space_Unwrapped
enum struct __SplineInstantiate_Space_Unwrapped : int32_t {
__E_Spline = static_cast<int32_t>(0x0),
__E_Local = static_cast<int32_t>(0x1),
__E_World = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SplineInstantiate_Space_Unwrapped () const noexcept {
return static_cast<__SplineInstantiate_Space_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SplineInstantiate_Space() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SplineInstantiate_Space(int32_t  value__) noexcept;

/// @brief Field Local value: I32(1)
static ::UnityEngine::Splines::SplineInstantiate_Space const Local;

/// @brief Field Spline value: I32(0)
static ::UnityEngine::Splines::SplineInstantiate_Space const Spline;

/// @brief Field World value: I32(2)
static ::UnityEngine::Splines::SplineInstantiate_Space const World;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18737};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate_Space, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineInstantiate_Space) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Splines
// Dependencies System.Object
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.SplineInstantiate/<>c
class CORDL_TYPE SplineInstantiate___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Splines::SplineInstantiate___c*  __9;

/// @brief Field <>9__124_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__124_0, put=setStaticF___9__124_0)) ::System::Func_2<::UnityW<::UnityEngine::Splines::SplineInstantiate>,int32_t>*  __9__124_0;

static inline ::UnityEngine::Splines::SplineInstantiate___c* New_ctor() ;

/// @brief Method <CheckChildrenValidity>b__124_0, addr 0x18203f130, size 0x10, virtual false, abstract: false, final false
inline int32_t _CheckChildrenValidity_b__124_0(::UnityEngine::Splines::SplineInstantiate*  sInstantiate) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Splines::SplineInstantiate___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::Splines::SplineInstantiate>,int32_t>* getStaticF___9__124_0() ;

static inline void setStaticF___9(::UnityEngine::Splines::SplineInstantiate___c*  value) ;

static inline void setStaticF___9__124_0(::System::Func_2<::UnityW<::UnityEngine::Splines::SplineInstantiate>,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineInstantiate___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineInstantiate___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineInstantiate___c(SplineInstantiate___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineInstantiate___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineInstantiate___c(SplineInstantiate___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18738};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Splines::SplineInstantiate___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Splines
// Dependencies UnityEngine.Splines.SplineComponent, UnityEngine.Splines.SplineComponent::AlignAxis, UnityEngine.Splines.SplineInstantiate::InstantiableItem, UnityEngine.Splines.SplineInstantiate::Method, UnityEngine.Splines.SplineInstantiate::Space, UnityEngine.Splines.SplineInstantiate::Vector3Offset, UnityEngine.Vector2
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.SplineInstantiate
class CORDL_TYPE SplineInstantiate : public ::UnityEngine::Splines::SplineComponent {
public:
// Declarations
using InstantiableItem = ::UnityEngine::Splines::SplineInstantiate_InstantiableItem;

using Method = ::UnityEngine::Splines::SplineInstantiate_Method;

using OffsetSpace = ::UnityEngine::Splines::SplineInstantiate_OffsetSpace;

using Space = ::UnityEngine::Splines::SplineInstantiate_Space;

using Vector3Offset = ::UnityEngine::Splines::SplineInstantiate_Vector3Offset;

using __c = ::UnityEngine::Splines::SplineInstantiate___c;

 __declspec(property(get=get_Container, put=set_Container)) ::UnityW<::UnityEngine::Splines::SplineContainer>  Container;

 __declspec(property(get=get_CoordinateSpace, put=set_CoordinateSpace)) ::UnityEngine::Splines::SplineInstantiate_Space  CoordinateSpace;

 __declspec(property(get=get_ForwardAxis, put=set_ForwardAxis)) ::UnityEngine::Splines::SplineComponent_AlignAxis  ForwardAxis;

 __declspec(property(get=get_InstancesRoot)) ::UnityW<::UnityEngine::GameObject>  InstancesRoot;

 __declspec(property(get=get_InstantiateMethod, put=set_InstantiateMethod)) ::UnityEngine::Splines::SplineInstantiate_Method  InstantiateMethod;

 __declspec(property(get=get_MaxPositionOffset, put=set_MaxPositionOffset)) ::UnityEngine::Vector3  MaxPositionOffset;

 __declspec(property(get=get_MaxRotationOffset, put=set_MaxRotationOffset)) ::UnityEngine::Vector3  MaxRotationOffset;

 __declspec(property(get=get_MaxScaleOffset, put=set_MaxScaleOffset)) ::UnityEngine::Vector3  MaxScaleOffset;

 __declspec(property(get=get_MaxSpacing, put=set_MaxSpacing)) float_t  MaxSpacing;

 __declspec(property(get=get_MinPositionOffset, put=set_MinPositionOffset)) ::UnityEngine::Vector3  MinPositionOffset;

 __declspec(property(get=get_MinRotationOffset, put=set_MinRotationOffset)) ::UnityEngine::Vector3  MinRotationOffset;

 __declspec(property(get=get_MinScaleOffset, put=set_MinScaleOffset)) ::UnityEngine::Vector3  MinScaleOffset;

 __declspec(property(get=get_MinSpacing, put=set_MinSpacing)) float_t  MinSpacing;

 __declspec(property(get=get_PositionSpace, put=set_PositionSpace)) ::UnityEngine::Splines::SplineInstantiate_OffsetSpace  PositionSpace;

 __declspec(property(get=get_RotationSpace, put=set_RotationSpace)) ::UnityEngine::Splines::SplineInstantiate_OffsetSpace  RotationSpace;

 __declspec(property(get=get_ScaleSpace, put=set_ScaleSpace)) ::UnityEngine::Splines::SplineInstantiate_OffsetSpace  ScaleSpace;

 __declspec(property(get=get_Seed, put=set_Seed)) int32_t  Seed;

 __declspec(property(get=get_UpAxis, put=set_UpAxis)) ::UnityEngine::Splines::SplineComponent_AlignAxis  UpAxis;

 __declspec(property(get=get_container)) ::UnityW<::UnityEngine::Splines::SplineContainer>  container;

 __declspec(property(get=get_forwardAxis)) ::UnityEngine::Splines::SplineComponent_AlignAxis  forwardAxis;

 __declspec(property(get=get_instances)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  instances;

 __declspec(property(get=get_instancesRootTransform)) ::UnityW<::UnityEngine::Transform>  instancesRootTransform;

 __declspec(property(get=get_itemsToInstantiate, put=set_itemsToInstantiate)) ::ArrayW<::UnityEngine::Splines::SplineInstantiate_InstantiableItem>  itemsToInstantiate;

/// @brief Field m_AutoRefresh, offset 0xd9, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AutoRefresh, put=__cordl_internal_set_m_AutoRefresh)) bool  m_AutoRefresh;

/// @brief Field m_Container, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Container, put=__cordl_internal_set_m_Container)) ::UnityW<::UnityEngine::Splines::SplineContainer>  m_Container;

/// @brief Field m_CurrentItem, offset 0xe0, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_CurrentItem, put=__cordl_internal_set_m_CurrentItem)) ::UnityEngine::Splines::SplineInstantiate_InstantiableItem  m_CurrentItem;

/// @brief Field m_DeprecatedInstances, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DeprecatedInstances, put=__cordl_internal_set_m_DeprecatedInstances)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  m_DeprecatedInstances;

/// @brief Field m_Forward, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Forward, put=__cordl_internal_set_m_Forward)) ::UnityEngine::Splines::SplineComponent_AlignAxis  m_Forward;

/// @brief Field m_Instances, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Instances, put=__cordl_internal_set_m_Instances)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  m_Instances;

/// @brief Field m_InstancesCacheDirty, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_InstancesCacheDirty, put=__cordl_internal_set_m_InstancesCacheDirty)) bool  m_InstancesCacheDirty;

/// @brief Field m_InstancesRoot, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InstancesRoot, put=__cordl_internal_set_m_InstancesRoot)) ::UnityW<::UnityEngine::GameObject>  m_InstancesRoot;

/// @brief Field m_ItemsToInstantiate, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ItemsToInstantiate, put=__cordl_internal_set_m_ItemsToInstantiate)) ::System::Collections::Generic::List_1<::UnityEngine::Splines::SplineInstantiate_InstantiableItem>*  m_ItemsToInstantiate;

/// @brief Field m_LengthsCache, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LengthsCache, put=__cordl_internal_set_m_LengthsCache)) ::System::Collections::Generic::List_1<float_t>*  m_LengthsCache;

/// @brief Field m_MaxProbability, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxProbability, put=__cordl_internal_set_m_MaxProbability)) float_t  m_MaxProbability;

/// @brief Field m_Method, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Method, put=__cordl_internal_set_m_Method)) ::UnityEngine::Splines::SplineInstantiate_Method  m_Method;

/// @brief Field m_PositionOffset, offset 0x50, size 0x24 
 __declspec(property(get=__cordl_internal_get_m_PositionOffset, put=__cordl_internal_set_m_PositionOffset)) ::UnityEngine::Splines::SplineInstantiate_Vector3Offset  m_PositionOffset;

/// @brief Field m_RotationOffset, offset 0x74, size 0x24 
 __declspec(property(get=__cordl_internal_get_m_RotationOffset, put=__cordl_internal_set_m_RotationOffset)) ::UnityEngine::Splines::SplineInstantiate_Vector3Offset  m_RotationOffset;

/// @brief Field m_ScaleOffset, offset 0x98, size 0x24 
 __declspec(property(get=__cordl_internal_get_m_ScaleOffset, put=__cordl_internal_set_m_ScaleOffset)) ::UnityEngine::Splines::SplineInstantiate_Vector3Offset  m_ScaleOffset;

/// @brief Field m_Seed, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Seed, put=__cordl_internal_set_m_Seed)) int32_t  m_Seed;

/// @brief Field m_Space, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Space, put=__cordl_internal_set_m_Space)) ::UnityEngine::Splines::SplineInstantiate_Space  m_Space;

/// @brief Field m_Spacing, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Spacing, put=__cordl_internal_set_m_Spacing)) ::UnityEngine::Vector2  m_Spacing;

/// @brief Field m_SplineDirty, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SplineDirty, put=__cordl_internal_set_m_SplineDirty)) bool  m_SplineDirty;

/// @brief Field m_TimesCache, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TimesCache, put=__cordl_internal_set_m_TimesCache)) ::System::Collections::Generic::List_1<float_t>*  m_TimesCache;

/// @brief Field m_Up, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Up, put=__cordl_internal_set_m_Up)) ::UnityEngine::Splines::SplineComponent_AlignAxis  m_Up;

 __declspec(property(get=get_maxPositionOffset)) ::UnityEngine::Vector3  maxPositionOffset;

 __declspec(property(get=get_maxProbability, put=set_maxProbability)) float_t  maxProbability;

 __declspec(property(get=get_maxRotationOffset)) ::UnityEngine::Vector3  maxRotationOffset;

 __declspec(property(get=get_maxScaleOffset)) ::UnityEngine::Vector3  maxScaleOffset;

 __declspec(property(get=get_method)) ::UnityEngine::Splines::SplineInstantiate_Method  method;

 __declspec(property(get=get_minPositionOffset)) ::UnityEngine::Vector3  minPositionOffset;

 __declspec(property(get=get_minRotationOffset)) ::UnityEngine::Vector3  minRotationOffset;

 __declspec(property(get=get_minScaleOffset)) ::UnityEngine::Vector3  minScaleOffset;

 __declspec(property(get=get_positionSpace)) ::UnityEngine::Splines::SplineInstantiate_OffsetSpace  positionSpace;

 __declspec(property(get=get_rotationSpace)) ::UnityEngine::Splines::SplineInstantiate_OffsetSpace  rotationSpace;

 __declspec(property(get=get_scaleSpace)) ::UnityEngine::Splines::SplineInstantiate_OffsetSpace  scaleSpace;

 __declspec(property(get=get_space)) ::UnityEngine::Splines::SplineInstantiate_Space  space;

 __declspec(property(get=get_upAxis)) ::UnityEngine::Splines::SplineComponent_AlignAxis  upAxis;

/// @brief Method AssigneNewSeed, addr 0x182170c10, size 0x30, virtual false, abstract: false, final false
inline void AssigneNewSeed() ;

/// @brief Method CheckChildrenValidity, addr 0x182170c40, size 0x1f0, virtual false, abstract: false, final false
inline void CheckChildrenValidity() ;

/// @brief Method Clear, addr 0x182170ed0, size 0x10, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ClearDeprecatedInstances, addr 0x182170e30, size 0xa0, virtual false, abstract: false, final false
inline void ClearDeprecatedInstances() ;

/// @brief Method EnsureItemsValidity, addr 0x182170ee0, size 0x240, virtual false, abstract: false, final false
inline void EnsureItemsValidity() ;

/// @brief Method GetCustomSpaceAxis, addr 0x182171120, size 0x220, virtual false, abstract: false, final false
inline void GetCustomSpaceAxis(::UnityEngine::Splines::SplineInstantiate_OffsetSpace  space, ::Unity::Mathematics::float3  splineUp, ::Unity::Mathematics::float3  direction, ::UnityEngine::Transform*  instanceTransform, ::by_ref<::Unity::Mathematics::float3>  customUp, ::by_ref<::Unity::Mathematics::float3>  customForward) ;

/// @brief Method GetPrefabIndex, addr 0x182171340, size 0xb0, virtual false, abstract: false, final false
inline int32_t GetPrefabIndex() ;

/// @brief Method InitContainer, addr 0x1821713f0, size 0x50, virtual false, abstract: false, final false
inline void InitContainer() ;

static inline ::UnityEngine::Splines::SplineInstantiate* New_ctor() ;

/// @brief Method OnDisable, addr 0x182171440, size 0x60, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1821714a0, size 0x90, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSplineChanged, addr 0x182171530, size 0x60, virtual false, abstract: false, final false
inline void OnSplineChanged(::UnityEngine::Splines::Spline*  spline, int32_t  knotIndex, ::UnityEngine::Splines::SplineModification  modificationType) ;

/// @brief Method OnValidate, addr 0x182171590, size 0xa0, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Randomize, addr 0x182171630, size 0x40, virtual false, abstract: false, final false
inline void Randomize() ;

/// @brief Method SetDirty, addr 0x182171670, size 0x10, virtual false, abstract: false, final false
inline void SetDirty() ;

/// @brief Method SetSplineDirty, addr 0x182171680, size 0xc0, virtual false, abstract: false, final false
inline void SetSplineDirty(::UnityEngine::Splines::Spline*  spline) ;

/// @brief Method SpawnPrefab, addr 0x182171740, size 0x430, virtual false, abstract: false, final false
inline bool SpawnPrefab(int32_t  index) ;

/// @brief Method TryClearCache, addr 0x182171b70, size 0x100, virtual false, abstract: false, final false
inline void TryClearCache() ;

/// @brief Method UndoRedoPerformed, addr 0x182171c70, size 0x10, virtual false, abstract: false, final false
inline void UndoRedoPerformed() ;

/// @brief Method Update, addr 0x1821745d0, size 0x20, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateInstances, addr 0x182171c80, size 0x2950, virtual false, abstract: false, final false
inline void UpdateInstances() ;

/// @brief Method ValidateAxis, addr 0x1821745f0, size 0x50, virtual false, abstract: false, final false
inline void ValidateAxis() ;

/// @brief Method ValidateSpacing, addr 0x182174640, size 0x70, virtual false, abstract: false, final false
inline void ValidateSpacing() ;

constexpr bool const& __cordl_internal_get_m_AutoRefresh() const;

constexpr bool& __cordl_internal_get_m_AutoRefresh() ;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& __cordl_internal_get_m_Container() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& __cordl_internal_get_m_Container() ;

constexpr ::UnityEngine::Splines::SplineInstantiate_InstantiableItem const& __cordl_internal_get_m_CurrentItem() const;

constexpr ::UnityEngine::Splines::SplineInstantiate_InstantiableItem& __cordl_internal_get_m_CurrentItem() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_m_DeprecatedInstances() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_m_DeprecatedInstances() ;

constexpr ::UnityEngine::Splines::SplineComponent_AlignAxis const& __cordl_internal_get_m_Forward() const;

constexpr ::UnityEngine::Splines::SplineComponent_AlignAxis& __cordl_internal_get_m_Forward() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_m_Instances() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_m_Instances() ;

constexpr bool const& __cordl_internal_get_m_InstancesCacheDirty() const;

constexpr bool& __cordl_internal_get_m_InstancesCacheDirty() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_InstancesRoot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_InstancesRoot() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Splines::SplineInstantiate_InstantiableItem>* const& __cordl_internal_get_m_ItemsToInstantiate() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Splines::SplineInstantiate_InstantiableItem>*& __cordl_internal_get_m_ItemsToInstantiate() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_m_LengthsCache() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_m_LengthsCache() ;

constexpr float_t const& __cordl_internal_get_m_MaxProbability() const;

constexpr float_t& __cordl_internal_get_m_MaxProbability() ;

constexpr ::UnityEngine::Splines::SplineInstantiate_Method const& __cordl_internal_get_m_Method() const;

constexpr ::UnityEngine::Splines::SplineInstantiate_Method& __cordl_internal_get_m_Method() ;

constexpr ::UnityEngine::Splines::SplineInstantiate_Vector3Offset const& __cordl_internal_get_m_PositionOffset() const;

constexpr ::UnityEngine::Splines::SplineInstantiate_Vector3Offset& __cordl_internal_get_m_PositionOffset() ;

constexpr ::UnityEngine::Splines::SplineInstantiate_Vector3Offset const& __cordl_internal_get_m_RotationOffset() const;

constexpr ::UnityEngine::Splines::SplineInstantiate_Vector3Offset& __cordl_internal_get_m_RotationOffset() ;

constexpr ::UnityEngine::Splines::SplineInstantiate_Vector3Offset const& __cordl_internal_get_m_ScaleOffset() const;

constexpr ::UnityEngine::Splines::SplineInstantiate_Vector3Offset& __cordl_internal_get_m_ScaleOffset() ;

constexpr int32_t const& __cordl_internal_get_m_Seed() const;

constexpr int32_t& __cordl_internal_get_m_Seed() ;

constexpr ::UnityEngine::Splines::SplineInstantiate_Space const& __cordl_internal_get_m_Space() const;

constexpr ::UnityEngine::Splines::SplineInstantiate_Space& __cordl_internal_get_m_Space() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_Spacing() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_Spacing() ;

constexpr bool const& __cordl_internal_get_m_SplineDirty() const;

constexpr bool& __cordl_internal_get_m_SplineDirty() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_m_TimesCache() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_m_TimesCache() ;

constexpr ::UnityEngine::Splines::SplineComponent_AlignAxis const& __cordl_internal_get_m_Up() const;

constexpr ::UnityEngine::Splines::SplineComponent_AlignAxis& __cordl_internal_get_m_Up() ;

constexpr void __cordl_internal_set_m_AutoRefresh(bool  value) ;

constexpr void __cordl_internal_set_m_Container(::UnityW<::UnityEngine::Splines::SplineContainer>  value) ;

constexpr void __cordl_internal_set_m_CurrentItem(::UnityEngine::Splines::SplineInstantiate_InstantiableItem  value) ;

constexpr void __cordl_internal_set_m_DeprecatedInstances(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_m_Forward(::UnityEngine::Splines::SplineComponent_AlignAxis  value) ;

constexpr void __cordl_internal_set_m_Instances(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_m_InstancesCacheDirty(bool  value) ;

constexpr void __cordl_internal_set_m_InstancesRoot(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_ItemsToInstantiate(::System::Collections::Generic::List_1<::UnityEngine::Splines::SplineInstantiate_InstantiableItem>*  value) ;

constexpr void __cordl_internal_set_m_LengthsCache(::System::Collections::Generic::List_1<float_t>*  value) ;

constexpr void __cordl_internal_set_m_MaxProbability(float_t  value) ;

constexpr void __cordl_internal_set_m_Method(::UnityEngine::Splines::SplineInstantiate_Method  value) ;

constexpr void __cordl_internal_set_m_PositionOffset(::UnityEngine::Splines::SplineInstantiate_Vector3Offset  value) ;

constexpr void __cordl_internal_set_m_RotationOffset(::UnityEngine::Splines::SplineInstantiate_Vector3Offset  value) ;

constexpr void __cordl_internal_set_m_ScaleOffset(::UnityEngine::Splines::SplineInstantiate_Vector3Offset  value) ;

constexpr void __cordl_internal_set_m_Seed(int32_t  value) ;

constexpr void __cordl_internal_set_m_Space(::UnityEngine::Splines::SplineInstantiate_Space  value) ;

constexpr void __cordl_internal_set_m_Spacing(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_SplineDirty(bool  value) ;

constexpr void __cordl_internal_set_m_TimesCache(::System::Collections::Generic::List_1<float_t>*  value) ;

constexpr void __cordl_internal_set_m_Up(::UnityEngine::Splines::SplineComponent_AlignAxis  value) ;

/// @brief Method .ctor, addr 0x1821746b0, size 0x150, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Container, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Splines::SplineContainer> get_Container() ;

/// @brief Method get_CoordinateSpace, addr 0x1803231b0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineInstantiate_Space get_CoordinateSpace() ;

/// @brief Method get_ForwardAxis, addr 0x180e25b50, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineComponent_AlignAxis get_ForwardAxis() ;

/// @brief Method get_InstancesRoot, addr 0x1803223b0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_InstancesRoot() ;

/// @brief Method get_InstantiateMethod, addr 0x180392fe0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineInstantiate_Method get_InstantiateMethod() ;

/// @brief Method get_MaxPositionOffset, addr 0x182174800, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_MaxPositionOffset() ;

/// @brief Method get_MaxRotationOffset, addr 0x1820ff290, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_MaxRotationOffset() ;

/// @brief Method get_MaxScaleOffset, addr 0x180cbfa70, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_MaxScaleOffset() ;

/// @brief Method get_MaxSpacing, addr 0x1802e2d80, size 0x10, virtual false, abstract: false, final false
inline float_t get_MaxSpacing() ;

/// @brief Method get_MinPositionOffset, addr 0x182174820, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_MinPositionOffset() ;

/// @brief Method get_MinRotationOffset, addr 0x1820ff2e0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_MinRotationOffset() ;

/// @brief Method get_MinScaleOffset, addr 0x180cbfaa0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_MinScaleOffset() ;

/// @brief Method get_MinSpacing, addr 0x1802e2b90, size 0x10, virtual false, abstract: false, final false
inline float_t get_MinSpacing() ;

/// @brief Method get_PositionSpace, addr 0x1803fa740, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineInstantiate_OffsetSpace get_PositionSpace() ;

/// @brief Method get_RotationSpace, addr 0x180cbfa00, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineInstantiate_OffsetSpace get_RotationSpace() ;

/// @brief Method get_ScaleSpace, addr 0x1803b2c60, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineInstantiate_OffsetSpace get_ScaleSpace() ;

/// @brief Method get_Seed, addr 0x1813abac0, size 0x1810, virtual false, abstract: false, final false
inline int32_t get_Seed() ;

/// @brief Method get_UpAxis, addr 0x1803d4dd0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineComponent_AlignAxis get_UpAxis() ;

/// @brief Method get_container, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Splines::SplineContainer> get_container() ;

/// @brief Method get_forwardAxis, addr 0x180e25b50, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineComponent_AlignAxis get_forwardAxis() ;

/// @brief Method get_instances, addr 0x1803b2f10, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* get_instances() ;

/// @brief Method get_instancesRootTransform, addr 0x182174840, size 0x160, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_instancesRootTransform() ;

/// @brief Method get_itemsToInstantiate, addr 0x1821749a0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Splines::SplineInstantiate_InstantiableItem> get_itemsToInstantiate() ;

/// @brief Method get_maxPositionOffset, addr 0x182174800, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_maxPositionOffset() ;

/// @brief Method get_maxProbability, addr 0x18040c370, size 0x10, virtual false, abstract: false, final false
inline float_t get_maxProbability() ;

/// @brief Method get_maxRotationOffset, addr 0x1820ff290, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_maxRotationOffset() ;

/// @brief Method get_maxScaleOffset, addr 0x180cbfa70, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_maxScaleOffset() ;

/// @brief Method get_method, addr 0x180392fe0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineInstantiate_Method get_method() ;

/// @brief Method get_minPositionOffset, addr 0x182174820, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_minPositionOffset() ;

/// @brief Method get_minRotationOffset, addr 0x1820ff2e0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_minRotationOffset() ;

/// @brief Method get_minScaleOffset, addr 0x180cbfaa0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_minScaleOffset() ;

/// @brief Method get_positionSpace, addr 0x1803fa740, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineInstantiate_OffsetSpace get_positionSpace() ;

/// @brief Method get_rotationSpace, addr 0x180cbfa00, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineInstantiate_OffsetSpace get_rotationSpace() ;

/// @brief Method get_scaleSpace, addr 0x1803b2c60, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineInstantiate_OffsetSpace get_scaleSpace() ;

/// @brief Method get_space, addr 0x1803231b0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineInstantiate_Space get_space() ;

/// @brief Method get_upAxis, addr 0x1803d4dd0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineComponent_AlignAxis get_upAxis() ;

/// @brief Method set_Container, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_Container(::UnityEngine::Splines::SplineContainer*  value) ;

/// @brief Method set_CoordinateSpace, addr 0x180323270, size 0x10, virtual false, abstract: false, final false
inline void set_CoordinateSpace(::UnityEngine::Splines::SplineInstantiate_Space  value) ;

/// @brief Method set_ForwardAxis, addr 0x1821749b0, size 0x60, virtual false, abstract: false, final false
inline void set_ForwardAxis(::UnityEngine::Splines::SplineComponent_AlignAxis  value) ;

/// @brief Method set_InstantiateMethod, addr 0x180393000, size 0x10, virtual false, abstract: false, final false
inline void set_InstantiateMethod(::UnityEngine::Splines::SplineInstantiate_Method  value) ;

/// @brief Method set_MaxPositionOffset, addr 0x182174a10, size 0x20, virtual false, abstract: false, final false
inline void set_MaxPositionOffset(::UnityEngine::Vector3  value) ;

/// @brief Method set_MaxRotationOffset, addr 0x182174a30, size 0x20, virtual false, abstract: false, final false
inline void set_MaxRotationOffset(::UnityEngine::Vector3  value) ;

/// @brief Method set_MaxScaleOffset, addr 0x182174a50, size 0x30, virtual false, abstract: false, final false
inline void set_MaxScaleOffset(::UnityEngine::Vector3  value) ;

/// @brief Method set_MaxSpacing, addr 0x182174a80, size 0x90, virtual false, abstract: false, final false
inline void set_MaxSpacing(float_t  value) ;

/// @brief Method set_MinPositionOffset, addr 0x182174b10, size 0x20, virtual false, abstract: false, final false
inline void set_MinPositionOffset(::UnityEngine::Vector3  value) ;

/// @brief Method set_MinRotationOffset, addr 0x182174b30, size 0x20, virtual false, abstract: false, final false
inline void set_MinRotationOffset(::UnityEngine::Vector3  value) ;

/// @brief Method set_MinScaleOffset, addr 0x182174b50, size 0x30, virtual false, abstract: false, final false
inline void set_MinScaleOffset(::UnityEngine::Vector3  value) ;

/// @brief Method set_MinSpacing, addr 0x182174b80, size 0x80, virtual false, abstract: false, final false
inline void set_MinSpacing(float_t  value) ;

/// @brief Method set_PositionSpace, addr 0x182174c00, size 0x20, virtual false, abstract: false, final false
inline void set_PositionSpace(::UnityEngine::Splines::SplineInstantiate_OffsetSpace  value) ;

/// @brief Method set_RotationSpace, addr 0x182174c20, size 0x20, virtual false, abstract: false, final false
inline void set_RotationSpace(::UnityEngine::Splines::SplineInstantiate_OffsetSpace  value) ;

/// @brief Method set_ScaleSpace, addr 0x182174c40, size 0x20, virtual false, abstract: false, final false
inline void set_ScaleSpace(::UnityEngine::Splines::SplineInstantiate_OffsetSpace  value) ;

/// @brief Method set_Seed, addr 0x182174c60, size 0x10, virtual false, abstract: false, final false
inline void set_Seed(int32_t  value) ;

/// @brief Method set_UpAxis, addr 0x1803d4ea0, size 0x10, virtual false, abstract: false, final false
inline void set_UpAxis(::UnityEngine::Splines::SplineComponent_AlignAxis  value) ;

/// @brief Method set_itemsToInstantiate, addr 0x182174c70, size 0x70, virtual false, abstract: false, final false
inline void set_itemsToInstantiate(::ArrayW<::UnityEngine::Splines::SplineInstantiate_InstantiableItem>  value) ;

/// @brief Method set_maxProbability, addr 0x182174ce0, size 0x50, virtual false, abstract: false, final false
inline void set_maxProbability(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineInstantiate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineInstantiate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineInstantiate(SplineInstantiate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineInstantiate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineInstantiate(SplineInstantiate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18739};

/// @brief Field k_HelpUrl offset 0xffffffff size 0x8
static constexpr ::ConstString  k_HelpUrl{u"https://docs.unity3d.com/Packages/com.unity.splines@latest/index.html?subfolder=/manual/instantiate-component.html"};

/// @brief Field k_InstancesRootName offset 0xffffffff size 0x8
static constexpr ::ConstString  k_InstancesRootName{u"root-"};

/// @brief Field m_Container, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  ___m_Container;

/// @brief Field m_ItemsToInstantiate, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Splines::SplineInstantiate_InstantiableItem>*  ___m_ItemsToInstantiate;

/// @brief Field m_Method, offset: 0x38, size: 0x4, def value: None
 ::UnityEngine::Splines::SplineInstantiate_Method  ___m_Method;

/// @brief Field m_Space, offset: 0x3c, size: 0x4, def value: None
 ::UnityEngine::Splines::SplineInstantiate_Space  ___m_Space;

/// @brief Field m_Spacing, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_Spacing;

/// @brief Field m_Up, offset: 0x48, size: 0x4, def value: None
 ::UnityEngine::Splines::SplineComponent_AlignAxis  ___m_Up;

/// @brief Field m_Forward, offset: 0x4c, size: 0x4, def value: None
 ::UnityEngine::Splines::SplineComponent_AlignAxis  ___m_Forward;

/// @brief Field m_PositionOffset, offset: 0x50, size: 0x24, def value: None
 ::UnityEngine::Splines::SplineInstantiate_Vector3Offset  ___m_PositionOffset;

/// @brief Field m_RotationOffset, offset: 0x74, size: 0x24, def value: None
 ::UnityEngine::Splines::SplineInstantiate_Vector3Offset  ___m_RotationOffset;

/// @brief Field m_ScaleOffset, offset: 0x98, size: 0x24, def value: None
 ::UnityEngine::Splines::SplineInstantiate_Vector3Offset  ___m_ScaleOffset;

/// @brief Field m_DeprecatedInstances, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___m_DeprecatedInstances;

/// @brief Field m_InstancesRoot, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_InstancesRoot;

/// @brief Field m_Instances, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___m_Instances;

/// @brief Field m_InstancesCacheDirty, offset: 0xd8, size: 0x1, def value: None
 bool  ___m_InstancesCacheDirty;

/// @brief Field m_AutoRefresh, offset: 0xd9, size: 0x1, def value: None
 bool  ___m_AutoRefresh;

/// @brief Field m_CurrentItem, offset: 0xe0, size: 0x18, def value: None
 ::UnityEngine::Splines::SplineInstantiate_InstantiableItem  ___m_CurrentItem;

/// @brief Field m_SplineDirty, offset: 0xf8, size: 0x1, def value: None
 bool  ___m_SplineDirty;

/// @brief Field m_MaxProbability, offset: 0xfc, size: 0x4, def value: None
 float_t  ___m_MaxProbability;

/// @brief Field m_Seed, offset: 0x100, size: 0x4, def value: None
 int32_t  ___m_Seed;

/// @brief Field m_TimesCache, offset: 0x108, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ___m_TimesCache;

/// @brief Field m_LengthsCache, offset: 0x110, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ___m_LengthsCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_Container) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_ItemsToInstantiate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_Method) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_Space) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_Spacing) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_Up) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_Forward) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_PositionOffset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_RotationOffset) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_ScaleOffset) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_DeprecatedInstances) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_InstancesRoot) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_Instances) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_InstancesCacheDirty) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_AutoRefresh) == 0xd9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_CurrentItem) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_SplineDirty) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_MaxProbability) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_Seed) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_TimesCache) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineInstantiate, ___m_LengthsCache) == 0x110, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineInstantiate) == 0x118, "Size mismatch!");

} // namespace end def UnityEngine::Splines

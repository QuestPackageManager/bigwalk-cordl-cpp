#pragma once
// IWYU pragma private; include "UnityEngine/Motion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Motion)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Motion;
}
// Write type traits
MARK_REF_T(::UnityEngine::Motion*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Motion*, "UnityEngine", "Motion");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Motion
class CORDL_TYPE Motion : public ::UnityEngine::Object {
public:
// Declarations
/// @brief Field <isAnimatorMotion>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__isAnimatorMotion_k__BackingField, put=__cordl_internal_set__isAnimatorMotion_k__BackingField)) bool  _isAnimatorMotion_k__BackingField;

 __declspec(property(get=get_averageAngularSpeed)) float_t  averageAngularSpeed;

 __declspec(property(get=get_averageSpeed)) ::UnityEngine::Vector3  averageSpeed;

 __declspec(property(get=get_isLooping)) bool  isLooping;

static inline ::UnityEngine::Motion* New_ctor() ;

constexpr bool const& __cordl_internal_get__isAnimatorMotion_k__BackingField() const;

constexpr bool& __cordl_internal_get__isAnimatorMotion_k__BackingField() ;

constexpr void __cordl_internal_set__isAnimatorMotion_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_averageAngularSpeed, addr 0x1822371c0, size 0x30, virtual false, abstract: false, final false
inline float_t get_averageAngularSpeed() ;

/// @brief Method get_averageAngularSpeed_Injected, addr 0x1822371b0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_averageAngularSpeed_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_averageSpeed, addr 0x182237200, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_averageSpeed() ;

/// @brief Method get_averageSpeed_Injected, addr 0x1822371f0, size 0x10, virtual false, abstract: false, final false
static inline void get_averageSpeed_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_isLooping, addr 0x182237250, size 0x30, virtual false, abstract: false, final false
inline bool get_isLooping() ;

/// @brief Method get_isLooping_Injected, addr 0x182237240, size 0x10, virtual false, abstract: false, final false
static inline bool get_isLooping_Injected(::System::IntPtr  _unity_self) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Motion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Motion", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Motion(Motion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Motion", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Motion(Motion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19923};

/// @brief Field <isAnimatorMotion>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____isAnimatorMotion_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Motion, ____isAnimatorMotion_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Motion) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine

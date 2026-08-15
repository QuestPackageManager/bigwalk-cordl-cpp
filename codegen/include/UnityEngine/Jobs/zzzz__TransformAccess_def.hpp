#pragma once
// IWYU pragma private; include "UnityEngine/Jobs/TransformAccess.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransformAccess)
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Jobs {
struct TransformAccess;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Jobs::TransformAccess);
DEFINE_IL2CPP_CLASS(::UnityEngine::Jobs::TransformAccess, "UnityEngine.Jobs", "TransformAccess");
// Dependencies System.IntPtr
namespace UnityEngine::Jobs {
// Is value type: true
// CS Name: UnityEngine.Jobs.TransformAccess
struct CORDL_TYPE TransformAccess {
public:
// Declarations
 __declspec(property(get=get_isValid)) bool  isValid;

 __declspec(property(get=get_localScale)) ::UnityEngine::Vector3  localScale;

 __declspec(property(get=get_localToWorldMatrix)) ::UnityEngine::Matrix4x4  localToWorldMatrix;

 __declspec(property(get=get_position)) ::UnityEngine::Vector3  position;

 __declspec(property(get=get_rotation)) ::UnityEngine::Quaternion  rotation;

/// @brief Method GetLocalScale, addr 0x182288ef0, size 0x10, virtual false, abstract: false, final false
static inline void GetLocalScale(::by_ref<::UnityEngine::Jobs::TransformAccess>  access, ::by_ref<::UnityEngine::Vector3>  r) ;

/// @brief Method GetLocalToWorldMatrix, addr 0x182288f00, size 0x10, virtual false, abstract: false, final false
static inline void GetLocalToWorldMatrix(::by_ref<::UnityEngine::Jobs::TransformAccess>  access, ::by_ref<::UnityEngine::Matrix4x4>  m) ;

/// @brief Method GetPosition, addr 0x182288f30, size 0x10, virtual false, abstract: false, final false
static inline void GetPosition(::by_ref<::UnityEngine::Jobs::TransformAccess>  access, ::by_ref<::UnityEngine::Vector3>  p) ;

/// @brief Method GetPositionAndRotation, addr 0x182288f10, size 0x20, virtual false, abstract: false, final false
inline void GetPositionAndRotation(::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation) ;

/// @brief Method GetPositionAndRotation_Internal, addr 0x182288f10, size 0x20, virtual false, abstract: false, final false
static inline void GetPositionAndRotation_Internal(::by_ref<::UnityEngine::Jobs::TransformAccess>  access, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation) ;

/// @brief Method GetRotation, addr 0x182288f40, size 0x10, virtual false, abstract: false, final false
static inline void GetRotation(::by_ref<::UnityEngine::Jobs::TransformAccess>  access, ::by_ref<::UnityEngine::Quaternion>  r) ;

/// @brief Method SetPositionAndRotation, addr 0x182288f60, size 0x50, virtual false, abstract: false, final false
inline void SetPositionAndRotation(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method SetPositionAndRotation_Internal, addr 0x182288f50, size 0x10, virtual false, abstract: false, final false
static inline void SetPositionAndRotation_Internal(::by_ref<::UnityEngine::Jobs::TransformAccess>  access, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation) ;

/// @brief Method get_isValid, addr 0x1802ff710, size 0x10, virtual false, abstract: false, final false
inline bool get_isValid() ;

/// @brief Method get_localScale, addr 0x182288fb0, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_localScale() ;

/// @brief Method get_localToWorldMatrix, addr 0x182289010, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_localToWorldMatrix() ;

/// @brief Method get_position, addr 0x182289090, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method get_rotation, addr 0x1822890f0, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_rotation() ;

// Ctor Parameters []
// @brief default ctor
constexpr TransformAccess() ;

// Ctor Parameters [CppParam { name: "hierarchy", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TransformAccess(::System::IntPtr  hierarchy, int32_t  index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10791};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field hierarchy, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  hierarchy;

/// @brief Field index, offset: 0x8, size: 0x4, def value: None
 int32_t  index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Jobs::TransformAccess, hierarchy) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Jobs::TransformAccess, index) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Jobs::TransformAccess) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Jobs

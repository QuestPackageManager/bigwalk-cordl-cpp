#pragma once
// IWYU pragma private; include "UnityEngine/Animations/TransformSceneHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransformSceneHandle)
namespace UnityEngine::Animations {
struct AnimationStream;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct TransformSceneHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::TransformSceneHandle);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::TransformSceneHandle, "UnityEngine.Animations", "TransformSceneHandle");
// Dependencies 
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.TransformSceneHandle
struct CORDL_TYPE TransformSceneHandle {
public:
// Declarations
 __declspec(property(get=get_createdByNative)) bool  createdByNative;

 __declspec(property(get=get_hasTransformSceneHandleDefinitionIndex)) bool  hasTransformSceneHandleDefinitionIndex;

/// @brief Method CheckIsValid, addr 0x182237910, size 0xd0, virtual false, abstract: false, final false
inline void CheckIsValid(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method GetPosition, addr 0x182237a60, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPosition(::UnityEngine::Animations::AnimationStream  stream) ;

/// @brief Method GetPositionInternal, addr 0x1822379f0, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPositionInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method GetPositionInternal_Injected, addr 0x1822379e0, size 0x10, virtual false, abstract: false, final false
static inline void GetPositionInternal_Injected(::by_ref<::UnityEngine::Animations::TransformSceneHandle>  _unity_self, ::by_ref<::UnityEngine::Animations::AnimationStream>  stream, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method GetRotation, addr 0x182237b80, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetRotation(::UnityEngine::Animations::AnimationStream  stream) ;

/// @brief Method GetRotationInternal, addr 0x182237b20, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetRotationInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method GetRotationInternal_Injected, addr 0x182237b10, size 0x10, virtual false, abstract: false, final false
static inline void GetRotationInternal_Injected(::by_ref<::UnityEngine::Animations::TransformSceneHandle>  _unity_self, ::by_ref<::UnityEngine::Animations::AnimationStream>  stream, ::by_ref<::UnityEngine::Quaternion>  ret) ;

/// @brief Method HasValidTransform, addr 0x182237c30, size 0x20, virtual false, abstract: false, final false
inline bool HasValidTransform(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method get_createdByNative, addr 0x181458fb0, size 0x60, virtual false, abstract: false, final false
inline bool get_createdByNative() ;

/// @brief Method get_hasTransformSceneHandleDefinitionIndex, addr 0x1822377c0, size 0x20, virtual false, abstract: false, final false
inline bool get_hasTransformSceneHandleDefinitionIndex() ;

// Ctor Parameters []
// @brief default ctor
constexpr TransformSceneHandle() ;

// Ctor Parameters [CppParam { name: "valid", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "transformSceneHandleDefinitionIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TransformSceneHandle(uint32_t  valid, int32_t  transformSceneHandleDefinitionIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19946};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field valid, offset: 0x0, size: 0x4, def value: None
 uint32_t  valid;

/// @brief Field transformSceneHandleDefinitionIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  transformSceneHandleDefinitionIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::TransformSceneHandle, valid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::TransformSceneHandle, transformSceneHandleDefinitionIndex) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::TransformSceneHandle) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine::Animations

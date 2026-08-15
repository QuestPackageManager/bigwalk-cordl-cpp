#pragma once
// IWYU pragma private; include "UnityEngine/Animations/TransformStreamHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransformStreamHandle)
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
struct TransformStreamHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::TransformStreamHandle);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::TransformStreamHandle, "UnityEngine.Animations", "TransformStreamHandle");
// Dependencies 
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.TransformStreamHandle
struct CORDL_TYPE TransformStreamHandle {
public:
// Declarations
 __declspec(property(get=get_animatorBindingsVersion)) uint32_t  animatorBindingsVersion;

 __declspec(property(get=get_createdByNative)) bool  createdByNative;

 __declspec(property(get=get_hasHandleIndex)) bool  hasHandleIndex;

 __declspec(property(get=get_hasSkeletonIndex)) bool  hasSkeletonIndex;

/// @brief Method CheckIsValidAndResolve, addr 0x182237c50, size 0xc0, virtual false, abstract: false, final false
inline void CheckIsValidAndResolve(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method GetPosition, addr 0x182237d90, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPosition(::UnityEngine::Animations::AnimationStream  stream) ;

/// @brief Method GetPositionInternal, addr 0x182237d20, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPositionInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method GetPositionInternal_Injected, addr 0x182237d10, size 0x10, virtual false, abstract: false, final false
static inline void GetPositionInternal_Injected(::by_ref<::UnityEngine::Animations::TransformStreamHandle>  _unity_self, ::by_ref<::UnityEngine::Animations::AnimationStream>  stream, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method GetRotation, addr 0x182237eb0, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetRotation(::UnityEngine::Animations::AnimationStream  stream) ;

/// @brief Method GetRotationInternal, addr 0x182237e50, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetRotationInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method GetRotationInternal_Injected, addr 0x182237e40, size 0x10, virtual false, abstract: false, final false
static inline void GetRotationInternal_Injected(::by_ref<::UnityEngine::Animations::TransformStreamHandle>  _unity_self, ::by_ref<::UnityEngine::Animations::AnimationStream>  stream, ::by_ref<::UnityEngine::Quaternion>  ret) ;

/// @brief Method IsResolvedInternal, addr 0x182237f60, size 0x50, virtual false, abstract: false, final false
inline bool IsResolvedInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method IsSameVersionAsStream, addr 0x180645c90, size 0x10, virtual false, abstract: false, final false
inline bool IsSameVersionAsStream(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method IsValidInternal, addr 0x182237fb0, size 0x50, virtual false, abstract: false, final false
inline bool IsValidInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method ResolveInternal, addr 0x182238000, size 0x20, virtual false, abstract: false, final false
inline void ResolveInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method SetLocalRotation, addr 0x182238070, size 0xa0, virtual false, abstract: false, final false
inline void SetLocalRotation(::UnityEngine::Animations::AnimationStream  stream, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method SetLocalRotationInternal, addr 0x182238030, size 0x40, virtual false, abstract: false, final false
inline void SetLocalRotationInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method SetLocalRotationInternal_Injected, addr 0x182238020, size 0x10, virtual false, abstract: false, final false
static inline void SetLocalRotationInternal_Injected(::by_ref<::UnityEngine::Animations::TransformStreamHandle>  _unity_self, ::by_ref<::UnityEngine::Animations::AnimationStream>  stream, ::by_ref<::UnityEngine::Quaternion>  rotation) ;

/// @brief Method SetRotation, addr 0x182238160, size 0xe0, virtual false, abstract: false, final false
inline void SetRotation(::UnityEngine::Animations::AnimationStream  stream, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method SetRotationInternal, addr 0x182238120, size 0x40, virtual false, abstract: false, final false
inline void SetRotationInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method SetRotationInternal_Injected, addr 0x182238110, size 0x10, virtual false, abstract: false, final false
static inline void SetRotationInternal_Injected(::by_ref<::UnityEngine::Animations::TransformStreamHandle>  _unity_self, ::by_ref<::UnityEngine::Animations::AnimationStream>  stream, ::by_ref<::UnityEngine::Quaternion>  rotation) ;

/// @brief Method get_animatorBindingsVersion, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_animatorBindingsVersion() ;

/// @brief Method get_createdByNative, addr 0x181458fb0, size 0x60, virtual false, abstract: false, final false
inline bool get_createdByNative() ;

/// @brief Method get_hasHandleIndex, addr 0x1822377c0, size 0x20, virtual false, abstract: false, final false
inline bool get_hasHandleIndex() ;

/// @brief Method get_hasSkeletonIndex, addr 0x1822079c0, size 0x20, virtual false, abstract: false, final false
inline bool get_hasSkeletonIndex() ;

// Ctor Parameters []
// @brief default ctor
constexpr TransformStreamHandle() ;

// Ctor Parameters [CppParam { name: "m_AnimatorBindingsVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "handleIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "skeletonIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TransformStreamHandle(uint32_t  m_AnimatorBindingsVersion, int32_t  handleIndex, int32_t  skeletonIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19944};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field m_AnimatorBindingsVersion, offset: 0x0, size: 0x4, def value: None
 uint32_t  m_AnimatorBindingsVersion;

/// @brief Field handleIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  handleIndex;

/// @brief Field skeletonIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  skeletonIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::TransformStreamHandle, m_AnimatorBindingsVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::TransformStreamHandle, handleIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::TransformStreamHandle, skeletonIndex) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::TransformStreamHandle) == 0xc, "Size mismatch!");

} // namespace end def UnityEngine::Animations

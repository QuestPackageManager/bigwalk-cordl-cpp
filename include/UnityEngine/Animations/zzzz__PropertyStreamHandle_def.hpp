#pragma once
// IWYU pragma private; include "UnityEngine/Animations/PropertyStreamHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyStreamHandle)
namespace UnityEngine::Animations {
struct AnimationStream;
}
namespace UnityEngine {
struct EntityId;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct PropertyStreamHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::PropertyStreamHandle);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::PropertyStreamHandle, "UnityEngine.Animations", "PropertyStreamHandle");
// Dependencies 
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.PropertyStreamHandle
struct CORDL_TYPE PropertyStreamHandle {
public:
// Declarations
 __declspec(property(get=get_animatorBindingsVersion)) uint32_t  animatorBindingsVersion;

 __declspec(property(get=get_createdByNative)) bool  createdByNative;

 __declspec(property(get=get_hasBindType)) bool  hasBindType;

 __declspec(property(get=get_hasHandleIndex)) bool  hasHandleIndex;

 __declspec(property(get=get_hasValueArrayIndex)) bool  hasValueArrayIndex;

/// @brief Method CheckIsValidAndResolve, addr 0x182237280, size 0xe0, virtual false, abstract: false, final false
inline void CheckIsValidAndResolve(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method GetBool, addr 0x182237380, size 0x90, virtual false, abstract: false, final false
inline bool GetBool(::UnityEngine::Animations::AnimationStream  stream) ;

/// @brief Method GetBoolInternal, addr 0x182237360, size 0x20, virtual false, abstract: false, final false
inline bool GetBoolInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method GetEntityId, addr 0x182237450, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::EntityId GetEntityId(::UnityEngine::Animations::AnimationStream  stream) ;

/// @brief Method GetEntityIdInternal, addr 0x182237420, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::EntityId GetEntityIdInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method GetEntityIdInternal_Injected, addr 0x182237410, size 0x10, virtual false, abstract: false, final false
static inline void GetEntityIdInternal_Injected(::by_ref<::UnityEngine::Animations::PropertyStreamHandle>  _unity_self, ::by_ref<::UnityEngine::Animations::AnimationStream>  stream, ::by_ref<::UnityEngine::EntityId>  ret) ;

/// @brief Method GetFloat, addr 0x182237510, size 0x90, virtual false, abstract: false, final false
inline float_t GetFloat(::UnityEngine::Animations::AnimationStream  stream) ;

/// @brief Method GetFloatInternal, addr 0x1822374f0, size 0x20, virtual false, abstract: false, final false
inline float_t GetFloatInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method GetInt, addr 0x1822375c0, size 0x120, virtual false, abstract: false, final false
inline int32_t GetInt(::UnityEngine::Animations::AnimationStream  stream) ;

/// @brief Method GetIntInternal, addr 0x1822375a0, size 0x20, virtual false, abstract: false, final false
inline int32_t GetIntInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method IsResolvedInternal, addr 0x1822376e0, size 0x70, virtual false, abstract: false, final false
inline bool IsResolvedInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method IsSameVersionAsStream, addr 0x180645c90, size 0x10, virtual false, abstract: false, final false
inline bool IsSameVersionAsStream(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method IsValidInternal, addr 0x182237750, size 0x50, virtual false, abstract: false, final false
inline bool IsValidInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method ResolveInternal, addr 0x1822377a0, size 0x20, virtual false, abstract: false, final false
inline void ResolveInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method get_animatorBindingsVersion, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_animatorBindingsVersion() ;

/// @brief Method get_createdByNative, addr 0x181458fb0, size 0x60, virtual false, abstract: false, final false
inline bool get_createdByNative() ;

/// @brief Method get_hasBindType, addr 0x1814bcda0, size 0x20, virtual false, abstract: false, final false
inline bool get_hasBindType() ;

/// @brief Method get_hasHandleIndex, addr 0x1822377c0, size 0x20, virtual false, abstract: false, final false
inline bool get_hasHandleIndex() ;

/// @brief Method get_hasValueArrayIndex, addr 0x1822079c0, size 0x20, virtual false, abstract: false, final false
inline bool get_hasValueArrayIndex() ;

// Ctor Parameters []
// @brief default ctor
constexpr PropertyStreamHandle() ;

// Ctor Parameters [CppParam { name: "m_AnimatorBindingsVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "handleIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "valueArrayIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bindType", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PropertyStreamHandle(uint32_t  m_AnimatorBindingsVersion, int32_t  handleIndex, int32_t  valueArrayIndex, int32_t  bindType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19945};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_AnimatorBindingsVersion, offset: 0x0, size: 0x4, def value: None
 uint32_t  m_AnimatorBindingsVersion;

/// @brief Field handleIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  handleIndex;

/// @brief Field valueArrayIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  valueArrayIndex;

/// @brief Field bindType, offset: 0xc, size: 0x4, def value: None
 int32_t  bindType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::PropertyStreamHandle, m_AnimatorBindingsVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::PropertyStreamHandle, handleIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::PropertyStreamHandle, valueArrayIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::PropertyStreamHandle, bindType) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::PropertyStreamHandle) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Animations

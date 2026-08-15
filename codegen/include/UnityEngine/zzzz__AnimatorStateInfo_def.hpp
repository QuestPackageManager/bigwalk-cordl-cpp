#pragma once
// IWYU pragma private; include "UnityEngine/AnimatorStateInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatorStateInfo)
// Forward declare root types
namespace UnityEngine {
struct AnimatorStateInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AnimatorStateInfo);
DEFINE_IL2CPP_CLASS(::UnityEngine::AnimatorStateInfo, "UnityEngine", "AnimatorStateInfo");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.AnimatorStateInfo
struct CORDL_TYPE AnimatorStateInfo {
public:
// Declarations
 __declspec(property(get=get_fullPathHash)) int32_t  fullPathHash;

 __declspec(property(get=get_length)) float_t  length;

 __declspec(property(get=get_loop)) bool  loop;

 __declspec(property(get=get_normalizedTime)) float_t  normalizedTime;

 __declspec(property(get=get_shortNameHash)) int32_t  shortNameHash;

/// @brief Method IsName, addr 0x182233f10, size 0xd0, virtual false, abstract: false, final false
inline bool IsName(::StringW  name) ;

/// @brief Method get_fullPathHash, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline int32_t get_fullPathHash() ;

/// @brief Method get_length, addr 0x180346a80, size 0x10, virtual false, abstract: false, final false
inline float_t get_length() ;

/// @brief Method get_loop, addr 0x182051850, size 0x10, virtual false, abstract: false, final false
inline bool get_loop() ;

/// @brief Method get_normalizedTime, addr 0x180303b30, size 0x10, virtual false, abstract: false, final false
inline float_t get_normalizedTime() ;

/// @brief Method get_shortNameHash, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_shortNameHash() ;

// Ctor Parameters []
// @brief default ctor
constexpr AnimatorStateInfo() ;

// Ctor Parameters [CppParam { name: "m_Name", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Path", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_FullPath", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_NormalizedTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Speed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_SpeedMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Tag", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Loop", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AnimatorStateInfo(int32_t  m_Name, int32_t  m_Path, int32_t  m_FullPath, float_t  m_NormalizedTime, float_t  m_Length, float_t  m_Speed, float_t  m_SpeedMultiplier, int32_t  m_Tag, int32_t  m_Loop) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19910};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field m_Name, offset: 0x0, size: 0x4, def value: None
 int32_t  m_Name;

/// @brief Field m_Path, offset: 0x4, size: 0x4, def value: None
 int32_t  m_Path;

/// @brief Field m_FullPath, offset: 0x8, size: 0x4, def value: None
 int32_t  m_FullPath;

/// @brief Field m_NormalizedTime, offset: 0xc, size: 0x4, def value: None
 float_t  m_NormalizedTime;

/// @brief Field m_Length, offset: 0x10, size: 0x4, def value: None
 float_t  m_Length;

/// @brief Field m_Speed, offset: 0x14, size: 0x4, def value: None
 float_t  m_Speed;

/// @brief Field m_SpeedMultiplier, offset: 0x18, size: 0x4, def value: None
 float_t  m_SpeedMultiplier;

/// @brief Field m_Tag, offset: 0x1c, size: 0x4, def value: None
 int32_t  m_Tag;

/// @brief Field m_Loop, offset: 0x20, size: 0x4, def value: None
 int32_t  m_Loop;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AnimatorStateInfo, m_Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorStateInfo, m_Path) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorStateInfo, m_FullPath) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorStateInfo, m_NormalizedTime) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorStateInfo, m_Length) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorStateInfo, m_Speed) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorStateInfo, m_SpeedMultiplier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorStateInfo, m_Tag) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorStateInfo, m_Loop) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AnimatorStateInfo) == 0x24, "Size mismatch!");

} // namespace end def UnityEngine

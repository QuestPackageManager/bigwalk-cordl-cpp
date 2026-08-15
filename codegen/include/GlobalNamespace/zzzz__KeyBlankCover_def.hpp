#pragma once
// IWYU pragma private; include "GlobalNamespace/KeyBlankCover.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeyBlankCover)
// Forward declare root types
namespace GlobalNamespace {
class KeyBlankCover;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KeyBlankCover*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KeyBlankCover*, "", "KeyBlankCover");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: false
// CS Name: KeyBlankCover
class CORDL_TYPE KeyBlankCover : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field currentStage, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentStage, put=__cordl_internal_set_currentStage)) int32_t  currentStage;

/// @brief Field stages, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_stages, put=__cordl_internal_set_stages)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  stages;

/// @brief Method Bite, addr 0x180409fa0, size 0x90, virtual false, abstract: false, final false
inline void Bite() ;

static inline ::GlobalNamespace::KeyBlankCover* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_currentStage() const;

constexpr int32_t& __cordl_internal_get_currentStage() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_stages() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_stages() ;

constexpr void __cordl_internal_set_currentStage(int32_t  value) ;

constexpr void __cordl_internal_set_stages(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KeyBlankCover() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KeyBlankCover", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyBlankCover(KeyBlankCover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyBlankCover", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyBlankCover(KeyBlankCover const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5147};

/// @brief Field stages, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___stages;

/// @brief Field currentStage, offset: 0x28, size: 0x4, def value: None
 int32_t  ___currentStage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KeyBlankCover, ___stages) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeyBlankCover, ___currentStage) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KeyBlankCover) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/CursorManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CursorManager)
namespace GlobalNamespace {
struct CursorManager_CursorData;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class CursorManager;
}
namespace GlobalNamespace {
struct CursorManager_CursorData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CursorManager*);
MARK_VAL_T(::GlobalNamespace::CursorManager_CursorData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CursorManager*, "", "CursorManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CursorManager_CursorData, "", "CursorManager/CursorData");
// Dependencies UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: CursorManager/CursorData
struct CORDL_TYPE CursorManager_CursorData {
public:
// Declarations
/// @brief Method SetActive, addr 0x180420ac0, size 0x90, virtual false, abstract: false, final false
inline void SetActive() ;

// Ctor Parameters []
// @brief default ctor
constexpr CursorManager_CursorData() ;

// Ctor Parameters [CppParam { name: "cursorTexture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None }, CppParam { name: "hotSpot", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr CursorManager_CursorData(::UnityW<::UnityEngine::Texture2D>  cursorTexture, ::UnityEngine::Vector2  hotSpot) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5159};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field cursorTexture, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  cursorTexture;

/// @brief Field hotSpot, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Vector2  hotSpot;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CursorManager_CursorData, cursorTexture) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CursorManager_CursorData, hotSpot) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CursorManager_CursorData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies CursorManager::CursorData, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CursorManager
class CORDL_TYPE CursorManager : public ::System::Object {
public:
// Declarations
using CursorData = ::GlobalNamespace::CursorManager_CursorData;

/// @brief Field UIcursor, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_UIcursor, put=__cordl_internal_set_UIcursor)) ::GlobalNamespace::CursorManager_CursorData  UIcursor;

/// @brief Field crosshairCursor, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_crosshairCursor, put=__cordl_internal_set_crosshairCursor)) ::GlobalNamespace::CursorManager_CursorData  crosshairCursor;

/// @brief Field logVerbose, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

static inline ::GlobalNamespace::CursorManager* New_ctor() ;

/// @brief Method SetFree, addr 0x180420b50, size 0xb0, virtual false, abstract: false, final false
static inline void SetFree() ;

/// @brief Method SetLocked, addr 0x180420c00, size 0xb0, virtual false, abstract: false, final false
static inline void SetLocked() ;

constexpr ::GlobalNamespace::CursorManager_CursorData const& __cordl_internal_get_UIcursor() const;

constexpr ::GlobalNamespace::CursorManager_CursorData& __cordl_internal_get_UIcursor() ;

constexpr ::GlobalNamespace::CursorManager_CursorData const& __cordl_internal_get_crosshairCursor() const;

constexpr ::GlobalNamespace::CursorManager_CursorData& __cordl_internal_get_crosshairCursor() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr void __cordl_internal_set_UIcursor(::GlobalNamespace::CursorManager_CursorData  value) ;

constexpr void __cordl_internal_set_crosshairCursor(::GlobalNamespace::CursorManager_CursorData  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_instance, addr 0x180420cb0, size 0x30, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CursorManager* get_instance() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CursorManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CursorManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CursorManager(CursorManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CursorManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CursorManager(CursorManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5160};

/// @brief Field crosshairCursor, offset: 0x10, size: 0x10, def value: None
 ::GlobalNamespace::CursorManager_CursorData  ___crosshairCursor;

/// @brief Field UIcursor, offset: 0x20, size: 0x10, def value: None
 ::GlobalNamespace::CursorManager_CursorData  ___UIcursor;

/// @brief Field logVerbose, offset: 0x30, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CursorManager, ___crosshairCursor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CursorManager, ___UIcursor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CursorManager, ___logVerbose) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CursorManager) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace

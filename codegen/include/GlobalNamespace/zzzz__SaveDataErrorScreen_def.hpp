#pragma once
// IWYU pragma private; include "GlobalNamespace/SaveDataErrorScreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SaveDataErrorScreen)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SaveDataErrorScreen;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SaveDataErrorScreen*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SaveDataErrorScreen*, "", "SaveDataErrorScreen");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SaveDataErrorScreen
class CORDL_TYPE SaveDataErrorScreen : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ErrorScreen, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ErrorScreen, put=__cordl_internal_set_ErrorScreen)) ::UnityW<::UnityEngine::GameObject>  ErrorScreen;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::SaveDataErrorScreen>  instance;

/// @brief Method Awake, addr 0x180389770, size 0x60, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method HideSaveDataError, addr 0x1803897d0, size 0x50, virtual false, abstract: false, final false
static inline void HideSaveDataError() ;

static inline ::GlobalNamespace::SaveDataErrorScreen* New_ctor() ;

/// @brief Method ShowSaveDataError, addr 0x180389820, size 0x50, virtual false, abstract: false, final false
static inline void ShowSaveDataError() ;

/// @brief Method Update, addr 0x180389870, size 0x80, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_ErrorScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_ErrorScreen() ;

constexpr void __cordl_internal_set_ErrorScreen(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::SaveDataErrorScreen> getStaticF_instance() ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::SaveDataErrorScreen>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveDataErrorScreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveDataErrorScreen", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveDataErrorScreen(SaveDataErrorScreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveDataErrorScreen", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveDataErrorScreen(SaveDataErrorScreen const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5562};

/// @brief Field ErrorScreen, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___ErrorScreen;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SaveDataErrorScreen, ___ErrorScreen) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SaveDataErrorScreen) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

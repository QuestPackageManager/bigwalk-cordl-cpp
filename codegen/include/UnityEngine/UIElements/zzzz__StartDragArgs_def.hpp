#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StartDragArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__DragVisualMode_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(StartDragArgs)
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections {
class Hashtable;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
struct EventModifiers;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StartDragArgs;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StartDragArgs);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StartDragArgs, "UnityEngine.UIElements", "StartDragArgs");
// Dependencies UnityEngine.EventModifiers, UnityEngine.UIElements.DragVisualMode
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StartDragArgs
struct CORDL_TYPE StartDragArgs {
public:
// Declarations
 __declspec(property(get=get_assetPaths, put=set_assetPaths)) ::ArrayW<::StringW>  assetPaths;

 __declspec(property(get=get_entityIds, put=set_entityIds)) ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::EntityId>*  entityIds;

 __declspec(property(get=get_genericData, put=set_genericData)) ::System::Collections::Hashtable*  genericData;

 __declspec(property(put=set_modifiers)) ::UnityEngine::EventModifiers  modifiers;

 __declspec(property(get=get_title)) ::StringW  title;

 __declspec(property(get=get_visualMode)) ::UnityEngine::UIElements::DragVisualMode  visualMode;

/// @brief Method SetGenericData, addr 0x181d38fe0, size 0x80, virtual false, abstract: false, final false
inline void SetGenericData(::StringW  key, ::System::Object*  data) ;

/// @brief Method .ctor, addr 0x1824bc0e0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  title, ::UnityEngine::UIElements::DragVisualMode  visualMode) ;

/// @brief Method .ctor, addr 0x1824bc150, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::StringW  title, ::UnityEngine::UIElements::DragVisualMode  visualMode, ::UnityEngine::EventModifiers  modifiers) ;

/// @brief Method get_assetPaths, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_assetPaths() ;

/// @brief Method get_entityIds, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::EntityId>* get_entityIds() ;

/// @brief Method get_genericData, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Hashtable* get_genericData() ;

/// @brief Method get_title, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_title() ;

/// @brief Method get_visualMode, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::DragVisualMode get_visualMode() ;

/// @brief Method set_assetPaths, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_assetPaths(::ArrayW<::StringW>  value) ;

/// @brief Method set_entityIds, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_entityIds(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::EntityId>*  value) ;

/// @brief Method set_genericData, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_genericData(::System::Collections::Hashtable*  value) ;

/// @brief Method set_modifiers, addr 0x1804bdb30, size 0x10, virtual false, abstract: false, final false
inline void set_modifiers(::UnityEngine::EventModifiers  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr StartDragArgs() ;

// Ctor Parameters [CppParam { name: "_title_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_visualMode_k__BackingField", ty: "::UnityEngine::UIElements::DragVisualMode", modifiers: "", def_value: None }, CppParam { name: "_modifiers_k__BackingField", ty: "::UnityEngine::EventModifiers", modifiers: "", def_value: None }, CppParam { name: "_genericData_k__BackingField", ty: "::System::Collections::Hashtable*", modifiers: "", def_value: None }, CppParam { name: "_entityIds_k__BackingField", ty: "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::EntityId>*", modifiers: "", def_value: None }, CppParam { name: "_assetPaths_k__BackingField", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }]
constexpr StartDragArgs(::StringW  _title_k__BackingField, ::UnityEngine::UIElements::DragVisualMode  _visualMode_k__BackingField, ::UnityEngine::EventModifiers  _modifiers_k__BackingField, ::System::Collections::Hashtable*  _genericData_k__BackingField, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::EntityId>*  _entityIds_k__BackingField, ::ArrayW<::StringW>  _assetPaths_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3517};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <title>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::StringW  _title_k__BackingField;

/// @brief Field <visualMode>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::UnityEngine::UIElements::DragVisualMode  _visualMode_k__BackingField;

/// @brief Field <modifiers>k__BackingField, offset: 0xc, size: 0x4, def value: None
 ::UnityEngine::EventModifiers  _modifiers_k__BackingField;

/// @brief Field <genericData>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Hashtable*  _genericData_k__BackingField;

/// @brief Field <entityIds>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::EntityId>*  _entityIds_k__BackingField;

/// @brief Field <assetPaths>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::StringW>  _assetPaths_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StartDragArgs, _title_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StartDragArgs, _visualMode_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StartDragArgs, _modifiers_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StartDragArgs, _genericData_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StartDragArgs, _entityIds_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StartDragArgs, _assetPaths_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StartDragArgs) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::UIElements

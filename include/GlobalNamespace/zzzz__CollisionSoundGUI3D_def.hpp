#pragma once
// IWYU pragma private; include "GlobalNamespace/CollisionSoundGUI3D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CollisionSoundGUI3D)
namespace GlobalNamespace {
struct CollisionSoundGUI3D_LOG3D;
}
namespace GlobalNamespace {
class IAudioGUI;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CollisionSoundGUI3D;
}
namespace GlobalNamespace {
struct CollisionSoundGUI3D_LOG3D;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CollisionSoundGUI3D*);
MARK_VAL_T(::GlobalNamespace::CollisionSoundGUI3D_LOG3D);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CollisionSoundGUI3D*, "", "CollisionSoundGUI3D");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CollisionSoundGUI3D_LOG3D, "", "CollisionSoundGUI3D/LOG3D");
// Dependencies UnityEngine.Color, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: CollisionSoundGUI3D/LOG3D
struct CORDL_TYPE CollisionSoundGUI3D_LOG3D {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CollisionSoundGUI3D_LOG3D() ;

// Ctor Parameters [CppParam { name: "Log", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "WorldPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "Distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
constexpr CollisionSoundGUI3D_LOG3D(::StringW  Log, ::UnityEngine::Vector3  WorldPos, float_t  Distance, ::UnityEngine::Color  Color) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4820};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Log, offset: 0x0, size: 0x8, def value: None
 ::StringW  Log;

/// @brief Field WorldPos, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Vector3  WorldPos;

/// @brief Field Distance, offset: 0x14, size: 0x4, def value: None
 float_t  Distance;

/// @brief Field Color, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Color  Color;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CollisionSoundGUI3D_LOG3D, Log) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSoundGUI3D_LOG3D, WorldPos) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSoundGUI3D_LOG3D, Distance) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSoundGUI3D_LOG3D, Color) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CollisionSoundGUI3D_LOG3D) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CollisionSoundGUI3D
class CORDL_TYPE CollisionSoundGUI3D : public ::System::Object {
public:
// Declarations
using LOG3D = ::GlobalNamespace::CollisionSoundGUI3D_LOG3D;

 __declspec(property(get=get_GUIDebugMode, put=set_GUIDebugMode)) bool  GUIDebugMode;

 __declspec(property(get=get_Identifier)) ::StringW  Identifier;

/// @brief Field _guiDebugLog, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__guiDebugLog, put=__cordl_internal_set__guiDebugLog)) ::System::Collections::Generic::List_1<::GlobalNamespace::CollisionSoundGUI3D_LOG3D>*  _guiDebugLog;

/// @brief Field _guiDebugTextStyle, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__guiDebugTextStyle, put=__cordl_internal_set__guiDebugTextStyle)) ::UnityEngine::GUIStyle*  _guiDebugTextStyle;

/// @brief Convert operator to "::GlobalNamespace::IAudioGUI"
constexpr operator  ::GlobalNamespace::IAudioGUI*() noexcept;

/// @brief Method AddGUILog, addr 0x18032cd00, size 0x1a0, virtual false, abstract: false, final false
inline void AddGUILog(::StringW  content, ::UnityEngine::Vector3  worldPos, float_t  dist) ;

/// @brief Method DrawGUI, addr 0x18032cea0, size 0x4a0, virtual true, abstract: false, final true
inline void DrawGUI() ;

static inline ::GlobalNamespace::CollisionSoundGUI3D* New_ctor() ;

/// @brief Method <AddGUILog>b__10_0, addr 0x18032d340, size 0x30, virtual false, abstract: false, final false
inline void _AddGUILog_b__10_0(double_t  t) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CollisionSoundGUI3D_LOG3D>* const& __cordl_internal_get__guiDebugLog() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CollisionSoundGUI3D_LOG3D>*& __cordl_internal_get__guiDebugLog() ;

constexpr ::UnityEngine::GUIStyle* const& __cordl_internal_get__guiDebugTextStyle() const;

constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get__guiDebugTextStyle() ;

constexpr void __cordl_internal_set__guiDebugLog(::System::Collections::Generic::List_1<::GlobalNamespace::CollisionSoundGUI3D_LOG3D>*  value) ;

constexpr void __cordl_internal_set__guiDebugTextStyle(::UnityEngine::GUIStyle*  value) ;

/// @brief Method .ctor, addr 0x18032d370, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_GUIDebugMode, addr 0x18032d450, size 0x70, virtual false, abstract: false, final false
inline bool get_GUIDebugMode() ;

/// @brief Method get_Identifier, addr 0x18032d4c0, size 0x10, virtual true, abstract: false, final true
inline ::StringW get_Identifier() ;

/// @brief Convert to "::GlobalNamespace::IAudioGUI"
constexpr ::GlobalNamespace::IAudioGUI* i___GlobalNamespace__IAudioGUI() noexcept;

/// @brief Method set_GUIDebugMode, addr 0x18032d4d0, size 0xb0, virtual false, abstract: false, final false
inline void set_GUIDebugMode(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CollisionSoundGUI3D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CollisionSoundGUI3D", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CollisionSoundGUI3D(CollisionSoundGUI3D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollisionSoundGUI3D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollisionSoundGUI3D(CollisionSoundGUI3D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4821};

/// @brief Field _guiDebugLog, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CollisionSoundGUI3D_LOG3D>*  ____guiDebugLog;

/// @brief Field _guiDebugTextStyle, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  ____guiDebugTextStyle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CollisionSoundGUI3D, ____guiDebugLog) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSoundGUI3D, ____guiDebugTextStyle) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CollisionSoundGUI3D) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

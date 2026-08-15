#pragma once
// IWYU pragma private; include "GlobalNamespace/TextChatHud.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TextChatHudBlip_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextChatHud)
namespace GlobalNamespace {
struct TextChatHud_BlipDirectionType;
}
namespace GlobalNamespace {
class TextChatHud_BlipGroup;
}
namespace GlobalNamespace {
struct TextChatHud_BlipIcon;
}
namespace GlobalNamespace {
struct TextChatHud_HudSource;
}
namespace GlobalNamespace {
class TextChatSource;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct TextChatHud_BlipDirectionType;
}
namespace GlobalNamespace {
struct TextChatHud_BlipIcon;
}
namespace GlobalNamespace {
class TextChatHud;
}
namespace GlobalNamespace {
class TextChatHud_BlipGroup;
}
namespace GlobalNamespace {
struct TextChatHud_HudSource;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TextChatHud_BlipDirectionType);
MARK_VAL_T(::GlobalNamespace::TextChatHud_BlipIcon);
MARK_REF_T(::GlobalNamespace::TextChatHud*);
MARK_REF_T(::GlobalNamespace::TextChatHud_BlipGroup*);
MARK_VAL_T(::GlobalNamespace::TextChatHud_HudSource);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextChatHud_BlipDirectionType, "", "TextChatHud/BlipDirectionType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextChatHud_BlipIcon, "", "TextChatHud/BlipIcon");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextChatHud*, "", "TextChatHud");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextChatHud_BlipGroup*, "", "TextChatHud/BlipGroup");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextChatHud_HudSource, "", "TextChatHud/HudSource");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TextChatHud/BlipDirectionType
struct CORDL_TYPE TextChatHud_BlipDirectionType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TextChatHud_BlipDirectionType_Unwrapped
enum struct __TextChatHud_BlipDirectionType_Unwrapped : int32_t {
__E_NoBlip = static_cast<int32_t>(0x0),
__E_Left = static_cast<int32_t>(0x1),
__E_Right = static_cast<int32_t>(0x2),
__E_Up = static_cast<int32_t>(0x3),
__E_Down = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextChatHud_BlipDirectionType_Unwrapped () const noexcept {
return static_cast<__TextChatHud_BlipDirectionType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TextChatHud_BlipDirectionType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextChatHud_BlipDirectionType(int32_t  value__) noexcept;

/// @brief Field Down value: I32(4)
static ::GlobalNamespace::TextChatHud_BlipDirectionType const Down;

/// @brief Field Left value: I32(1)
static ::GlobalNamespace::TextChatHud_BlipDirectionType const Left;

/// @brief Field NoBlip value: I32(0)
static ::GlobalNamespace::TextChatHud_BlipDirectionType const NoBlip;

/// @brief Field Right value: I32(2)
static ::GlobalNamespace::TextChatHud_BlipDirectionType const Right;

/// @brief Field Up value: I32(3)
static ::GlobalNamespace::TextChatHud_BlipDirectionType const Up;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5324};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextChatHud_BlipDirectionType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextChatHud_BlipDirectionType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TextChatHud/BlipIcon
struct CORDL_TYPE TextChatHud_BlipIcon {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TextChatHud_BlipIcon_Unwrapped
enum struct __TextChatHud_BlipIcon_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Player = static_cast<int32_t>(0x1),
__E_Radio = static_cast<int32_t>(0x2),
__E_Typing = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextChatHud_BlipIcon_Unwrapped () const noexcept {
return static_cast<__TextChatHud_BlipIcon_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TextChatHud_BlipIcon() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextChatHud_BlipIcon(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::TextChatHud_BlipIcon const None;

/// @brief Field Player value: I32(1)
static ::GlobalNamespace::TextChatHud_BlipIcon const Player;

/// @brief Field Radio value: I32(2)
static ::GlobalNamespace::TextChatHud_BlipIcon const Radio;

/// @brief Field Typing value: I32(3)
static ::GlobalNamespace::TextChatHud_BlipIcon const Typing;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5325};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextChatHud_BlipIcon, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextChatHud_BlipIcon) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, TextChatHudBlip
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextChatHud/BlipGroup
class CORDL_TYPE TextChatHud_BlipGroup : public ::System::Object {
public:
// Declarations
/// @brief Field _isDirty, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDirty, put=__cordl_internal_set__isDirty)) bool  _isDirty;

/// @brief Field _sources, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__sources, put=__cordl_internal_set__sources)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TextChatSource>>*  _sources;

/// @brief Field blips, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_blips, put=__cordl_internal_set_blips)) ::ArrayW<::UnityW<::GlobalNamespace::TextChatHudBlip>>  blips;

/// @brief Method Add, addr 0x180445c10, size 0xd0, virtual false, abstract: false, final false
inline void Add(::GlobalNamespace::TextChatSource*  textChatSource) ;

static inline ::GlobalNamespace::TextChatHud_BlipGroup* New_ctor() ;

/// @brief Method Refresh, addr 0x180445ce0, size 0x130, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method Remove, addr 0x180445e10, size 0xc0, virtual false, abstract: false, final false
inline void Remove(::GlobalNamespace::TextChatSource*  textChatSource) ;

constexpr bool const& __cordl_internal_get__isDirty() const;

constexpr bool& __cordl_internal_get__isDirty() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TextChatSource>>* const& __cordl_internal_get__sources() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TextChatSource>>*& __cordl_internal_get__sources() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TextChatHudBlip>> const& __cordl_internal_get_blips() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TextChatHudBlip>>& __cordl_internal_get_blips() ;

constexpr void __cordl_internal_set__isDirty(bool  value) ;

constexpr void __cordl_internal_set__sources(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TextChatSource>>*  value) ;

constexpr void __cordl_internal_set_blips(::ArrayW<::UnityW<::GlobalNamespace::TextChatHudBlip>>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextChatHud_BlipGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextChatHud_BlipGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextChatHud_BlipGroup(TextChatHud_BlipGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextChatHud_BlipGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextChatHud_BlipGroup(TextChatHud_BlipGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5326};

/// @brief Field blips, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::TextChatHudBlip>>  ___blips;

/// @brief Field _sources, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TextChatSource>>*  ____sources;

/// @brief Field _isDirty, offset: 0x20, size: 0x1, def value: None
 bool  ____isDirty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextChatHud_BlipGroup, ___blips) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatHud_BlipGroup, ____sources) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatHud_BlipGroup, ____isDirty) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextChatHud_BlipGroup) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies TextChatHud::BlipDirectionType
namespace GlobalNamespace {
// Is value type: true
// CS Name: TextChatHud/HudSource
struct CORDL_TYPE TextChatHud_HudSource {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TextChatHud_HudSource() ;

// Ctor Parameters [CppParam { name: "textChatSource", ty: "::UnityW<::GlobalNamespace::TextChatSource>", modifiers: "", def_value: None }, CppParam { name: "blipDirectionType", ty: "::GlobalNamespace::TextChatHud_BlipDirectionType", modifiers: "", def_value: None }]
constexpr TextChatHud_HudSource(::UnityW<::GlobalNamespace::TextChatSource>  textChatSource, ::GlobalNamespace::TextChatHud_BlipDirectionType  blipDirectionType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5327};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field textChatSource, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TextChatSource>  textChatSource;

/// @brief Field blipDirectionType, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::TextChatHud_BlipDirectionType  blipDirectionType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextChatHud_HudSource, textChatSource) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatHud_HudSource, blipDirectionType) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextChatHud_HudSource) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextChatHud
class CORDL_TYPE TextChatHud : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BlipDirectionType = ::GlobalNamespace::TextChatHud_BlipDirectionType;

using BlipGroup = ::GlobalNamespace::TextChatHud_BlipGroup;

using BlipIcon = ::GlobalNamespace::TextChatHud_BlipIcon;

using HudSource = ::GlobalNamespace::TextChatHud_HudSource;

/// @brief Field _hudSources, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__hudSources, put=__cordl_internal_set__hudSources)) ::System::Collections::Generic::List_1<::GlobalNamespace::TextChatHud_HudSource>*  _hudSources;

/// @brief Field blipGroupDown, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_blipGroupDown, put=__cordl_internal_set_blipGroupDown)) ::GlobalNamespace::TextChatHud_BlipGroup*  blipGroupDown;

/// @brief Field blipGroupLeft, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_blipGroupLeft, put=__cordl_internal_set_blipGroupLeft)) ::GlobalNamespace::TextChatHud_BlipGroup*  blipGroupLeft;

/// @brief Field blipGroupRight, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_blipGroupRight, put=__cordl_internal_set_blipGroupRight)) ::GlobalNamespace::TextChatHud_BlipGroup*  blipGroupRight;

/// @brief Field blipGroupUp, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_blipGroupUp, put=__cordl_internal_set_blipGroupUp)) ::GlobalNamespace::TextChatHud_BlipGroup*  blipGroupUp;

/// @brief Field logVerbose, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Method Awake, addr 0x1804564d0, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetBlipGroup, addr 0x180456520, size 0x30, virtual false, abstract: false, final false
inline ::GlobalNamespace::TextChatHud_BlipGroup* GetBlipGroup(::GlobalNamespace::TextChatHud_BlipDirectionType  blipDirectionType) ;

/// @brief Method GetBlipType, addr 0x180456550, size 0x1b0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TextChatHud_BlipDirectionType GetBlipType(::GlobalNamespace::TextChatSource*  source, ::GlobalNamespace::TextChatHud_BlipDirectionType  oldDirectionType) ;

static inline ::GlobalNamespace::TextChatHud* New_ctor() ;

/// @brief Method OnDirectionChange, addr 0x180456700, size 0x190, virtual false, abstract: false, final false
inline void OnDirectionChange(::GlobalNamespace::TextChatSource*  source, ::GlobalNamespace::TextChatHud_BlipDirectionType  oldDirectionType, ::GlobalNamespace::TextChatHud_BlipDirectionType  newDirectionType) ;

/// @brief Method Update, addr 0x180456890, size 0x330, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TextChatHud_HudSource>* const& __cordl_internal_get__hudSources() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TextChatHud_HudSource>*& __cordl_internal_get__hudSources() ;

constexpr ::GlobalNamespace::TextChatHud_BlipGroup* const& __cordl_internal_get_blipGroupDown() const;

constexpr ::GlobalNamespace::TextChatHud_BlipGroup*& __cordl_internal_get_blipGroupDown() ;

constexpr ::GlobalNamespace::TextChatHud_BlipGroup* const& __cordl_internal_get_blipGroupLeft() const;

constexpr ::GlobalNamespace::TextChatHud_BlipGroup*& __cordl_internal_get_blipGroupLeft() ;

constexpr ::GlobalNamespace::TextChatHud_BlipGroup* const& __cordl_internal_get_blipGroupRight() const;

constexpr ::GlobalNamespace::TextChatHud_BlipGroup*& __cordl_internal_get_blipGroupRight() ;

constexpr ::GlobalNamespace::TextChatHud_BlipGroup* const& __cordl_internal_get_blipGroupUp() const;

constexpr ::GlobalNamespace::TextChatHud_BlipGroup*& __cordl_internal_get_blipGroupUp() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr void __cordl_internal_set__hudSources(::System::Collections::Generic::List_1<::GlobalNamespace::TextChatHud_HudSource>*  value) ;

constexpr void __cordl_internal_set_blipGroupDown(::GlobalNamespace::TextChatHud_BlipGroup*  value) ;

constexpr void __cordl_internal_set_blipGroupLeft(::GlobalNamespace::TextChatHud_BlipGroup*  value) ;

constexpr void __cordl_internal_set_blipGroupRight(::GlobalNamespace::TextChatHud_BlipGroup*  value) ;

constexpr void __cordl_internal_set_blipGroupUp(::GlobalNamespace::TextChatHud_BlipGroup*  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextChatHud() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextChatHud", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextChatHud(TextChatHud && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextChatHud", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextChatHud(TextChatHud const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5328};

/// @brief Field blipGroupLeft, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::TextChatHud_BlipGroup*  ___blipGroupLeft;

/// @brief Field blipGroupRight, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::TextChatHud_BlipGroup*  ___blipGroupRight;

/// @brief Field blipGroupUp, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::TextChatHud_BlipGroup*  ___blipGroupUp;

/// @brief Field blipGroupDown, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::TextChatHud_BlipGroup*  ___blipGroupDown;

/// @brief Field _hudSources, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::TextChatHud_HudSource>*  ____hudSources;

/// @brief Field logVerbose, offset: 0x48, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextChatHud, ___blipGroupLeft) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatHud, ___blipGroupRight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatHud, ___blipGroupUp) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatHud, ___blipGroupDown) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatHud, ____hudSources) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatHud, ___logVerbose) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextChatHud) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace

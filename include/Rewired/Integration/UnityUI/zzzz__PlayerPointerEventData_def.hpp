#pragma once
// IWYU pragma private; include "Rewired/Integration/UnityUI/PlayerPointerEventData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Integration/UnityUI/zzzz__PointerEventType_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerPointerEventData)
namespace Rewired::Integration::UnityUI {
struct PointerEventType;
}
namespace Rewired::UI {
class IMouseInputSource;
}
namespace Rewired::UI {
class ITouchInputSource;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
// Forward declare root types
namespace Rewired::Integration::UnityUI {
class PlayerPointerEventData;
}
// Write type traits
MARK_REF_T(::Rewired::Integration::UnityUI::PlayerPointerEventData*);
DEFINE_IL2CPP_CLASS(::Rewired::Integration::UnityUI::PlayerPointerEventData*, "Rewired.Integration.UnityUI", "PlayerPointerEventData");
// Dependencies Rewired.Integration.UnityUI.PointerEventType, UnityEngine.EventSystems.PointerEventData
namespace Rewired::Integration::UnityUI {
// Is value type: false
// CS Name: Rewired.Integration.UnityUI.PlayerPointerEventData
class CORDL_TYPE PlayerPointerEventData : public ::UnityEngine::EventSystems::PointerEventData {
public:
// Declarations
/// @brief Field <buttonIndex>k__BackingField, offset 0x1dc, size 0x4 
 __declspec(property(get=__cordl_internal_get__buttonIndex_k__BackingField, put=__cordl_internal_set__buttonIndex_k__BackingField)) int32_t  _buttonIndex_k__BackingField;

/// @brief Field <inputSourceIndex>k__BackingField, offset 0x1c4, size 0x4 
 __declspec(property(get=__cordl_internal_get__inputSourceIndex_k__BackingField, put=__cordl_internal_set__inputSourceIndex_k__BackingField)) int32_t  _inputSourceIndex_k__BackingField;

/// @brief Field <mouseSource>k__BackingField, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get__mouseSource_k__BackingField, put=__cordl_internal_set__mouseSource_k__BackingField)) ::Rewired::UI::IMouseInputSource*  _mouseSource_k__BackingField;

/// @brief Field <playerId>k__BackingField, offset 0x1c0, size 0x4 
 __declspec(property(get=__cordl_internal_get__playerId_k__BackingField, put=__cordl_internal_set__playerId_k__BackingField)) int32_t  _playerId_k__BackingField;

/// @brief Field <sourceType>k__BackingField, offset 0x1d8, size 0x4 
 __declspec(property(get=__cordl_internal_get__sourceType_k__BackingField, put=__cordl_internal_set__sourceType_k__BackingField)) ::Rewired::Integration::UnityUI::PointerEventType  _sourceType_k__BackingField;

/// @brief Field <touchSource>k__BackingField, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get__touchSource_k__BackingField, put=__cordl_internal_set__touchSource_k__BackingField)) ::Rewired::UI::ITouchInputSource*  _touchSource_k__BackingField;

 __declspec(property(get=get_buttonIndex, put=set_buttonIndex)) int32_t  buttonIndex;

 __declspec(property(get=get_inputSourceIndex, put=set_inputSourceIndex)) int32_t  inputSourceIndex;

 __declspec(property(get=get_mouseSource, put=set_mouseSource)) ::Rewired::UI::IMouseInputSource*  mouseSource;

 __declspec(property(get=get_playerId, put=set_playerId)) int32_t  playerId;

 __declspec(property(get=get_sourceType, put=set_sourceType)) ::Rewired::Integration::UnityUI::PointerEventType  sourceType;

 __declspec(property(get=get_touchSource, put=set_touchSource)) ::Rewired::UI::ITouchInputSource*  touchSource;

static inline ::Rewired::Integration::UnityUI::PlayerPointerEventData* New_ctor(::UnityEngine::EventSystems::EventSystem*  eventSystem) ;

/// @brief Method ToString, addr 0x1803aba70, size 0x200, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get__buttonIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__buttonIndex_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__inputSourceIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__inputSourceIndex_k__BackingField() ;

constexpr ::Rewired::UI::IMouseInputSource* const& __cordl_internal_get__mouseSource_k__BackingField() const;

constexpr ::Rewired::UI::IMouseInputSource*& __cordl_internal_get__mouseSource_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__playerId_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__playerId_k__BackingField() ;

constexpr ::Rewired::Integration::UnityUI::PointerEventType const& __cordl_internal_get__sourceType_k__BackingField() const;

constexpr ::Rewired::Integration::UnityUI::PointerEventType& __cordl_internal_get__sourceType_k__BackingField() ;

constexpr ::Rewired::UI::ITouchInputSource* const& __cordl_internal_get__touchSource_k__BackingField() const;

constexpr ::Rewired::UI::ITouchInputSource*& __cordl_internal_get__touchSource_k__BackingField() ;

constexpr void __cordl_internal_set__buttonIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__inputSourceIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__mouseSource_k__BackingField(::Rewired::UI::IMouseInputSource*  value) ;

constexpr void __cordl_internal_set__playerId_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__sourceType_k__BackingField(::Rewired::Integration::UnityUI::PointerEventType  value) ;

constexpr void __cordl_internal_set__touchSource_k__BackingField(::Rewired::UI::ITouchInputSource*  value) ;

/// @brief Method .ctor, addr 0x1803abc70, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::EventSystems::EventSystem*  eventSystem) ;

/// @brief Method get_buttonIndex, addr 0x1803abca0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_buttonIndex() ;

/// @brief Method get_inputSourceIndex, addr 0x1803abcb0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_inputSourceIndex() ;

/// @brief Method get_mouseSource, addr 0x1803abcc0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::UI::IMouseInputSource* get_mouseSource() ;

/// @brief Method get_playerId, addr 0x1803abcd0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_playerId() ;

/// @brief Method get_sourceType, addr 0x1803abce0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Integration::UnityUI::PointerEventType get_sourceType() ;

/// @brief Method get_touchSource, addr 0x1803abcf0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::UI::ITouchInputSource* get_touchSource() ;

/// @brief Method set_buttonIndex, addr 0x1803abd00, size 0x10, virtual false, abstract: false, final false
inline void set_buttonIndex(int32_t  value) ;

/// @brief Method set_inputSourceIndex, addr 0x1803abd10, size 0x10, virtual false, abstract: false, final false
inline void set_inputSourceIndex(int32_t  value) ;

/// @brief Method set_mouseSource, addr 0x1803abd20, size 0x20, virtual false, abstract: false, final false
inline void set_mouseSource(::Rewired::UI::IMouseInputSource*  value) ;

/// @brief Method set_playerId, addr 0x1803abd40, size 0x10, virtual false, abstract: false, final false
inline void set_playerId(int32_t  value) ;

/// @brief Method set_sourceType, addr 0x1803abd50, size 0x10, virtual false, abstract: false, final false
inline void set_sourceType(::Rewired::Integration::UnityUI::PointerEventType  value) ;

/// @brief Method set_touchSource, addr 0x1803abd60, size 0x20, virtual false, abstract: false, final false
inline void set_touchSource(::Rewired::UI::ITouchInputSource*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerPointerEventData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerPointerEventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerPointerEventData(PlayerPointerEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerPointerEventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerPointerEventData(PlayerPointerEventData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5696};

/// @brief Field <playerId>k__BackingField, offset: 0x1c0, size: 0x4, def value: None
 int32_t  ____playerId_k__BackingField;

/// @brief Field <inputSourceIndex>k__BackingField, offset: 0x1c4, size: 0x4, def value: None
 int32_t  ____inputSourceIndex_k__BackingField;

/// @brief Field <mouseSource>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
 ::Rewired::UI::IMouseInputSource*  ____mouseSource_k__BackingField;

/// @brief Field <touchSource>k__BackingField, offset: 0x1d0, size: 0x8, def value: None
 ::Rewired::UI::ITouchInputSource*  ____touchSource_k__BackingField;

/// @brief Field <sourceType>k__BackingField, offset: 0x1d8, size: 0x4, def value: None
 ::Rewired::Integration::UnityUI::PointerEventType  ____sourceType_k__BackingField;

/// @brief Field <buttonIndex>k__BackingField, offset: 0x1dc, size: 0x4, def value: None
 int32_t  ____buttonIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Integration::UnityUI::PlayerPointerEventData, ____playerId_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::PlayerPointerEventData, ____inputSourceIndex_k__BackingField) == 0x1c4, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::PlayerPointerEventData, ____mouseSource_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::PlayerPointerEventData, ____touchSource_k__BackingField) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::PlayerPointerEventData, ____sourceType_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::PlayerPointerEventData, ____buttonIndex_k__BackingField) == 0x1dc, "Offset mismatch!");

static_assert(sizeof(::Rewired::Integration::UnityUI::PlayerPointerEventData) == 0x1e0, "Size mismatch!");

} // namespace end def Rewired::Integration::UnityUI

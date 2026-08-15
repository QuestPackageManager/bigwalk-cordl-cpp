#pragma once
// IWYU pragma private; include "Rewired/ActionElementMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__ControllerElementType_def.hpp"
#include "Rewired/zzzz__KeyboardKeyCode_def.hpp"
#include "Rewired/zzzz__ModifierKeyFlags_def.hpp"
#include "Rewired/zzzz__ModifierKey_def.hpp"
#include "Rewired/zzzz__Pole_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ActionElementMap)
namespace Rewired::Utils::Classes::Data {
class SerializedObject;
}
namespace Rewired {
struct AxisRange;
}
namespace Rewired {
struct AxisType;
}
namespace Rewired {
struct ControllerElementTarget;
}
namespace Rewired {
struct ControllerElementType;
}
namespace Rewired {
class ControllerMap;
}
namespace Rewired {
struct ControllerType;
}
namespace Rewired {
struct ElementAssignmentType;
}
namespace Rewired {
struct ElementAssignment;
}
namespace Rewired {
class HardwareControllerMap_Game;
}
namespace Rewired {
class IControllerElementTarget;
}
namespace Rewired {
struct KeyboardKeyCode;
}
namespace Rewired {
struct ModifierKeyFlags;
}
namespace Rewired {
struct ModifierKey;
}
namespace Rewired {
struct Pole;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct KeyCode;
}
// Forward declare root types
namespace Rewired {
class ActionElementMap;
}
// Write type traits
MARK_REF_T(::Rewired::ActionElementMap*);
DEFINE_IL2CPP_CLASS(::Rewired::ActionElementMap*, "Rewired", "ActionElementMap");
// Dependencies Rewired.AxisRange, Rewired.ControllerElementType, Rewired.KeyboardKeyCode, Rewired.ModifierKey, Rewired.ModifierKeyFlags, Rewired.Pole, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ActionElementMap
class CORDL_TYPE ActionElementMap : public ::System::Object {
public:
// Declarations
/// @brief Field QfUTriqKDPzbKWIhsoahKZTbnClN, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_QfUTriqKDPzbKWIhsoahKZTbnClN, put=__cordl_internal_set_QfUTriqKDPzbKWIhsoahKZTbnClN)) ::Rewired::ControllerMap*  QfUTriqKDPzbKWIhsoahKZTbnClN;

/// @brief Field ZkYGvxiZbAEvaOjrnJLDFlIgnJNiA, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_ZkYGvxiZbAEvaOjrnJLDFlIgnJNiA, put=__cordl_internal_set_ZkYGvxiZbAEvaOjrnJLDFlIgnJNiA)) uint32_t  ZkYGvxiZbAEvaOjrnJLDFlIgnJNiA;

/// @brief Field _actionCategoryId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__actionCategoryId, put=__cordl_internal_set__actionCategoryId)) int32_t  _actionCategoryId;

/// @brief Field _actionId, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__actionId, put=__cordl_internal_set__actionId)) int32_t  _actionId;

/// @brief Field _axisContribution, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__axisContribution, put=__cordl_internal_set__axisContribution)) ::Rewired::Pole  _axisContribution;

/// @brief Field _axisRange, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__axisRange, put=__cordl_internal_set__axisRange)) ::Rewired::AxisRange  _axisRange;

/// @brief Field _elementIdentifierId, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__elementIdentifierId, put=__cordl_internal_set__elementIdentifierId)) int32_t  _elementIdentifierId;

/// @brief Field _elementType, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__elementType, put=__cordl_internal_set__elementType)) ::Rewired::ControllerElementType  _elementType;

/// @brief Field _invert, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__invert, put=__cordl_internal_set__invert)) bool  _invert;

/// @brief Field _keyboardKeyCode, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__keyboardKeyCode, put=__cordl_internal_set__keyboardKeyCode)) ::Rewired::KeyboardKeyCode  _keyboardKeyCode;

/// @brief Field _modifierKey1, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__modifierKey1, put=__cordl_internal_set__modifierKey1)) ::Rewired::ModifierKey  _modifierKey1;

/// @brief Field _modifierKey2, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__modifierKey2, put=__cordl_internal_set__modifierKey2)) ::Rewired::ModifierKey  _modifierKey2;

/// @brief Field _modifierKey3, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__modifierKey3, put=__cordl_internal_set__modifierKey3)) ::Rewired::ModifierKey  _modifierKey3;

 __declspec(property(get=get_actionDescriptiveName)) ::StringW  actionDescriptiveName;

 __declspec(property(get=get_actionId, put=set_actionId)) int32_t  actionId;

 __declspec(property(get=get_axisContribution, put=set_axisContribution)) ::Rewired::Pole  axisContribution;

 __declspec(property(get=get_axisRange, put=set_axisRange)) ::Rewired::AxisRange  axisRange;

 __declspec(property(get=get_axisType)) ::Rewired::AxisType  axisType;

 __declspec(property(get=get_controllerMap)) ::Rewired::ControllerMap*  controllerMap;

 __declspec(property(get=get_elementIdentifierGlyph)) ::System::Object*  elementIdentifierGlyph;

 __declspec(property(get=get_elementIdentifierGlyphCount)) int32_t  elementIdentifierGlyphCount;

 __declspec(property(get=get_elementIdentifierId, put=set_elementIdentifierId)) int32_t  elementIdentifierId;

 __declspec(property(get=get_elementIdentifierName)) ::StringW  elementIdentifierName;

 __declspec(property(get=get_elementIndex)) int32_t  elementIndex;

 __declspec(property(get=get_elementType, put=MBDjTgHWihSuenesQZGgKGjnRtCNA)) ::Rewired::ControllerElementType  elementType;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_hasModifiers)) bool  hasModifiers;

 __declspec(property(get=get_id)) int32_t  id;

 __declspec(property(get=get_invert, put=set_invert)) bool  invert;

 __declspec(property(get=get_isModified, put=set_isModified)) bool  isModified;

 __declspec(property(get=get_keyCode, put=set_keyCode)) ::UnityEngine::KeyCode  keyCode;

 __declspec(property(get=get_keyboardKeyCode, put=set_keyboardKeyCode)) ::Rewired::KeyboardKeyCode  keyboardKeyCode;

/// @brief Field lBgVQgctmdUmIdKXgdVlTgqePJJA, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_lBgVQgctmdUmIdKXgdVlTgqePJJA, put=__cordl_internal_set_lBgVQgctmdUmIdKXgdVlTgqePJJA)) bool  lBgVQgctmdUmIdKXgdVlTgqePJJA;

/// @brief Field lRweYTpYEkpsdxlAhrunLgLqTjyc, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_lRweYTpYEkpsdxlAhrunLgLqTjyc, put=__cordl_internal_set_lRweYTpYEkpsdxlAhrunLgLqTjyc)) ::Rewired::ModifierKeyFlags  lRweYTpYEkpsdxlAhrunLgLqTjyc;

 __declspec(property(get=get_modifiedTime)) double_t  modifiedTime;

 __declspec(property(get=get_modifierKey1, put=set_modifierKey1)) ::Rewired::ModifierKey  modifierKey1;

 __declspec(property(get=get_modifierKey2, put=set_modifierKey2)) ::Rewired::ModifierKey  modifierKey2;

 __declspec(property(get=get_modifierKey3, put=set_modifierKey3)) ::Rewired::ModifierKey  modifierKey3;

 __declspec(property(get=get_modifierKeyFlags)) ::Rewired::ModifierKeyFlags  modifierKeyFlags;

/// @brief Field neERhzwLaNspRnXmyTrIgjTBlpzv, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_neERhzwLaNspRnXmyTrIgjTBlpzv, put=__cordl_internal_set_neERhzwLaNspRnXmyTrIgjTBlpzv)) ::Rewired::HardwareControllerMap_Game*  neERhzwLaNspRnXmyTrIgjTBlpzv;

/// @brief Field pTRyabnfCQfDdqbSmwltRmLncIFfA, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_pTRyabnfCQfDdqbSmwltRmLncIFfA, put=__cordl_internal_set_pTRyabnfCQfDdqbSmwltRmLncIFfA)) int32_t  pTRyabnfCQfDdqbSmwltRmLncIFfA;

/// @brief Field pTUcsKiIiDhJFZuDxRiJuKMsFvZDA, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_pTUcsKiIiDhJFZuDxRiJuKMsFvZDA, put=__cordl_internal_set_pTUcsKiIiDhJFZuDxRiJuKMsFvZDA)) ::StringW  pTUcsKiIiDhJFZuDxRiJuKMsFvZDA;

/// @brief Field qOkwtAlwwEPIULcXrcJRAIpfFUDxA, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_qOkwtAlwwEPIULcXrcJRAIpfFUDxA, put=__cordl_internal_set_qOkwtAlwwEPIULcXrcJRAIpfFUDxA)) ::StringW  qOkwtAlwwEPIULcXrcJRAIpfFUDxA;

/// @brief Field sVRRtLqGNVENKCOUnmPEGehhtKBbB, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_sVRRtLqGNVENKCOUnmPEGehhtKBbB, put=__cordl_internal_set_sVRRtLqGNVENKCOUnmPEGehhtKBbB)) double_t  sVRRtLqGNVENKCOUnmPEGehhtKBbB;

/// @brief Field s_toStringSB, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_toStringSB, put=setStaticF_s_toStringSB)) ::System::Text::StringBuilder*  s_toStringSB;

/// @brief Field slHYcHNAdsCcAIpoHpnhaCzkRPdS, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_slHYcHNAdsCcAIpoHpnhaCzkRPdS, put=__cordl_internal_set_slHYcHNAdsCcAIpoHpnhaCzkRPdS)) int32_t  slHYcHNAdsCcAIpoHpnhaCzkRPdS;

/// @brief Field uidCounter, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_uidCounter, put=setStaticF_uidCounter)) int32_t  uidCounter;

 __declspec(property(get=aqsRcaWKNzedJVJGxBXvXmSQacBKA)) bool  xysLebekCdSPPcmPoXjNSJwszbYM;

/// @brief Method BPJBIarlDVwyFnlVojHALEpQqaYG, addr 0x18196e880, size 0x190, virtual false, abstract: false, final false
inline ::StringW BPJBIarlDVwyFnlVojHALEpQqaYG() ;

/// @brief Method CheckForAssignmentConflict, addr 0x18196ea10, size 0x100, virtual false, abstract: false, final false
inline bool CheckForAssignmentConflict(::Rewired::ElementAssignment  elementAssignment) ;

/// @brief Method CheckForAssignmentConflict, addr 0x18196eb10, size 0xa0, virtual false, abstract: false, final false
inline bool CheckForAssignmentConflict(::Rewired::ActionElementMap*  elementMap) ;

/// @brief Method DroqZsnPMipxgWFyamUlTuCtcZmF, addr 0x18196ebb0, size 0xa0, virtual false, abstract: false, final false
inline void DroqZsnPMipxgWFyamUlTuCtcZmF(::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method GetElementIdentifierFinalGlyphKeys, addr 0x18196ec50, size 0x150, virtual false, abstract: false, final false
inline int32_t GetElementIdentifierFinalGlyphKeys(::System::Collections::Generic::ICollection_1<::StringW>*  results) ;

/// @brief Method GetElementIdentifierGlyphs, addr 0x18196eda0, size 0x160, virtual false, abstract: false, final false
inline int32_t GetElementIdentifierGlyphs(::System::Collections::Generic::ICollection_1<::System::Object*>*  results) ;

/// @brief Method GetElementIdentifierGlyphs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline int32_t GetElementIdentifierGlyphs(::System::Collections::Generic::ICollection_1<T>*  results) ;

/// @brief Method IsTarget, addr 0x18196ef00, size 0x50, virtual false, abstract: false, final false
inline bool IsTarget(::Rewired::ControllerElementTarget  elementTarget) ;

/// @brief Method IsTarget, addr 0x18196ef50, size 0x1b0, virtual false, abstract: false, final false
inline bool IsTarget(::Rewired::IControllerElementTarget*  elementTarget) ;

/// @brief Method KGjJxXIfdCHPKtNZkuCRwpucWGVc, addr 0x18196f100, size 0x90, virtual false, abstract: false, final false
inline bool KGjJxXIfdCHPKtNZkuCRwpucWGVc(::Rewired::KeyboardKeyCode  _cordl_fixed_empty_name_whitespace, ::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method MBDjTgHWihSuenesQZGgKGjnRtCNA, addr 0x18196f190, size 0x40, virtual false, abstract: false, final false
inline void MBDjTgHWihSuenesQZGgKGjnRtCNA(::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method MLtHZgmkQPtGzyMgUeeevieGpvNl, addr 0x18196f1d0, size 0x3a0, virtual false, abstract: false, final false
inline int32_t MLtHZgmkQPtGzyMgUeeevieGpvNl(::System::Collections::Generic::ICollection_1<::System::Object*>*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ActionElementMap* New_ctor() ;

static inline ::Rewired::ActionElementMap* New_ctor(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ActionElementMap* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::KeyboardKeyCode  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::ModifierKey  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::ModifierKey  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::ModifierKey  _cordl_fixed_empty_name_whitespace_param_6) ;

static inline ::Rewired::ActionElementMap* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

static inline ::Rewired::ActionElementMap* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_4) ;

static inline ::Rewired::ActionElementMap* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method ShowInField, addr 0x18196f570, size 0x130, virtual false, abstract: false, final false
inline bool ShowInField(::Rewired::AxisRange  fieldActionRange) ;

/// @brief Method TgaTZEiabwxhPkgxrFnambrqCwrs, addr 0x18196f6a0, size 0x30, virtual false, abstract: false, final false
static inline int32_t TgaTZEiabwxhPkgxrFnambrqCwrs() ;

/// @brief Method ToString, addr 0x18196f6d0, size 0x6a0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryGetCombinedElementIdentifierFinalGlyphKey, addr 0x18196fd70, size 0x30, virtual false, abstract: false, final false
static inline bool TryGetCombinedElementIdentifierFinalGlyphKey(::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*  actionElementMaps, ::by_ref<::StringW>  result) ;

/// @brief Method TryGetCombinedElementIdentifierGlyph, addr 0x18196fda0, size 0x30, virtual false, abstract: false, final false
static inline bool TryGetCombinedElementIdentifierGlyph(::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*  actionElementMaps, ::by_ref<::System::Object*>  result) ;

/// @brief Method TryGetCombinedElementIdentifierName, addr 0x18196fdd0, size 0x160, virtual false, abstract: false, final false
static inline bool TryGetCombinedElementIdentifierName(::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*  actionElementMaps, ::by_ref<::StringW>  result) ;

/// @brief Method XJWmQNQiDcCXSanqpsDwPJEnJDgQ, addr 0x18196ff30, size 0x20, virtual false, abstract: false, final false
inline void XJWmQNQiDcCXSanqpsDwPJEnJDgQ() ;

/// @brief Method ZTyZRrnnGndpfzSllMuwDXfycyUf, addr 0x18196ff50, size 0x190, virtual false, abstract: false, final false
inline void ZTyZRrnnGndpfzSllMuwDXfycyUf(::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2) ;

constexpr ::Rewired::ControllerMap* const& __cordl_internal_get_QfUTriqKDPzbKWIhsoahKZTbnClN() const;

constexpr ::Rewired::ControllerMap*& __cordl_internal_get_QfUTriqKDPzbKWIhsoahKZTbnClN() ;

constexpr uint32_t const& __cordl_internal_get_ZkYGvxiZbAEvaOjrnJLDFlIgnJNiA() const;

constexpr uint32_t& __cordl_internal_get_ZkYGvxiZbAEvaOjrnJLDFlIgnJNiA() ;

constexpr int32_t const& __cordl_internal_get__actionCategoryId() const;

constexpr int32_t& __cordl_internal_get__actionCategoryId() ;

constexpr int32_t const& __cordl_internal_get__actionId() const;

constexpr int32_t& __cordl_internal_get__actionId() ;

constexpr ::Rewired::Pole const& __cordl_internal_get__axisContribution() const;

constexpr ::Rewired::Pole& __cordl_internal_get__axisContribution() ;

constexpr ::Rewired::AxisRange const& __cordl_internal_get__axisRange() const;

constexpr ::Rewired::AxisRange& __cordl_internal_get__axisRange() ;

constexpr int32_t const& __cordl_internal_get__elementIdentifierId() const;

constexpr int32_t& __cordl_internal_get__elementIdentifierId() ;

constexpr ::Rewired::ControllerElementType const& __cordl_internal_get__elementType() const;

constexpr ::Rewired::ControllerElementType& __cordl_internal_get__elementType() ;

constexpr bool const& __cordl_internal_get__invert() const;

constexpr bool& __cordl_internal_get__invert() ;

constexpr ::Rewired::KeyboardKeyCode const& __cordl_internal_get__keyboardKeyCode() const;

constexpr ::Rewired::KeyboardKeyCode& __cordl_internal_get__keyboardKeyCode() ;

constexpr ::Rewired::ModifierKey const& __cordl_internal_get__modifierKey1() const;

constexpr ::Rewired::ModifierKey& __cordl_internal_get__modifierKey1() ;

constexpr ::Rewired::ModifierKey const& __cordl_internal_get__modifierKey2() const;

constexpr ::Rewired::ModifierKey& __cordl_internal_get__modifierKey2() ;

constexpr ::Rewired::ModifierKey const& __cordl_internal_get__modifierKey3() const;

constexpr ::Rewired::ModifierKey& __cordl_internal_get__modifierKey3() ;

constexpr bool const& __cordl_internal_get_lBgVQgctmdUmIdKXgdVlTgqePJJA() const;

constexpr bool& __cordl_internal_get_lBgVQgctmdUmIdKXgdVlTgqePJJA() ;

constexpr ::Rewired::ModifierKeyFlags const& __cordl_internal_get_lRweYTpYEkpsdxlAhrunLgLqTjyc() const;

constexpr ::Rewired::ModifierKeyFlags& __cordl_internal_get_lRweYTpYEkpsdxlAhrunLgLqTjyc() ;

constexpr ::Rewired::HardwareControllerMap_Game* const& __cordl_internal_get_neERhzwLaNspRnXmyTrIgjTBlpzv() const;

constexpr ::Rewired::HardwareControllerMap_Game*& __cordl_internal_get_neERhzwLaNspRnXmyTrIgjTBlpzv() ;

constexpr int32_t const& __cordl_internal_get_pTRyabnfCQfDdqbSmwltRmLncIFfA() const;

constexpr int32_t& __cordl_internal_get_pTRyabnfCQfDdqbSmwltRmLncIFfA() ;

constexpr ::StringW const& __cordl_internal_get_pTUcsKiIiDhJFZuDxRiJuKMsFvZDA() const;

constexpr ::StringW& __cordl_internal_get_pTUcsKiIiDhJFZuDxRiJuKMsFvZDA() ;

constexpr ::StringW const& __cordl_internal_get_qOkwtAlwwEPIULcXrcJRAIpfFUDxA() const;

constexpr ::StringW& __cordl_internal_get_qOkwtAlwwEPIULcXrcJRAIpfFUDxA() ;

constexpr double_t const& __cordl_internal_get_sVRRtLqGNVENKCOUnmPEGehhtKBbB() const;

constexpr double_t& __cordl_internal_get_sVRRtLqGNVENKCOUnmPEGehhtKBbB() ;

constexpr int32_t const& __cordl_internal_get_slHYcHNAdsCcAIpoHpnhaCzkRPdS() const;

constexpr int32_t& __cordl_internal_get_slHYcHNAdsCcAIpoHpnhaCzkRPdS() ;

constexpr void __cordl_internal_set_QfUTriqKDPzbKWIhsoahKZTbnClN(::Rewired::ControllerMap*  value) ;

constexpr void __cordl_internal_set_ZkYGvxiZbAEvaOjrnJLDFlIgnJNiA(uint32_t  value) ;

constexpr void __cordl_internal_set__actionCategoryId(int32_t  value) ;

constexpr void __cordl_internal_set__actionId(int32_t  value) ;

constexpr void __cordl_internal_set__axisContribution(::Rewired::Pole  value) ;

constexpr void __cordl_internal_set__axisRange(::Rewired::AxisRange  value) ;

constexpr void __cordl_internal_set__elementIdentifierId(int32_t  value) ;

constexpr void __cordl_internal_set__elementType(::Rewired::ControllerElementType  value) ;

constexpr void __cordl_internal_set__invert(bool  value) ;

constexpr void __cordl_internal_set__keyboardKeyCode(::Rewired::KeyboardKeyCode  value) ;

constexpr void __cordl_internal_set__modifierKey1(::Rewired::ModifierKey  value) ;

constexpr void __cordl_internal_set__modifierKey2(::Rewired::ModifierKey  value) ;

constexpr void __cordl_internal_set__modifierKey3(::Rewired::ModifierKey  value) ;

constexpr void __cordl_internal_set_lBgVQgctmdUmIdKXgdVlTgqePJJA(bool  value) ;

constexpr void __cordl_internal_set_lRweYTpYEkpsdxlAhrunLgLqTjyc(::Rewired::ModifierKeyFlags  value) ;

constexpr void __cordl_internal_set_neERhzwLaNspRnXmyTrIgjTBlpzv(::Rewired::HardwareControllerMap_Game*  value) ;

constexpr void __cordl_internal_set_pTRyabnfCQfDdqbSmwltRmLncIFfA(int32_t  value) ;

constexpr void __cordl_internal_set_pTUcsKiIiDhJFZuDxRiJuKMsFvZDA(::StringW  value) ;

constexpr void __cordl_internal_set_qOkwtAlwwEPIULcXrcJRAIpfFUDxA(::StringW  value) ;

constexpr void __cordl_internal_set_sVRRtLqGNVENKCOUnmPEGehhtKBbB(double_t  value) ;

constexpr void __cordl_internal_set_slHYcHNAdsCcAIpoHpnhaCzkRPdS(int32_t  value) ;

/// @brief Method .ctor, addr 0x181970140, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x181970190, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181970330, size 0x80, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::KeyboardKeyCode  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::ModifierKey  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::ModifierKey  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::ModifierKey  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method .ctor, addr 0x1819702e0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method .ctor, addr 0x1819700e0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method .ctor, addr 0x181970270, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method aANuABBWrWRAoXMKmGyzzIlTWShP, addr 0x1819703b0, size 0x80, virtual false, abstract: false, final false
inline void aANuABBWrWRAoXMKmGyzzIlTWShP() ;

/// @brief Method aqsRcaWKNzedJVJGxBXvXmSQacBKA, addr 0x181970430, size 0x30, virtual false, abstract: false, final false
inline bool aqsRcaWKNzedJVJGxBXvXmSQacBKA() ;

/// @brief Method bcmGNqwjzqArrGmDsjcYfiKGxbdZB, addr 0x181970460, size 0x60, virtual false, abstract: false, final false
inline void bcmGNqwjzqArrGmDsjcYfiKGxbdZB() ;

/// @brief Method eaEzichcKEOOpadwUmjqOtiilnNH, addr 0x1819704c0, size 0x60, virtual false, abstract: false, final false
inline bool eaEzichcKEOOpadwUmjqOtiilnNH(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::System::Text::StringBuilder* getStaticF_s_toStringSB() ;

static inline int32_t getStaticF_uidCounter() ;

/// @brief Method get_actionDescriptiveName, addr 0x181970520, size 0x150, virtual false, abstract: false, final false
inline ::StringW get_actionDescriptiveName() ;

/// @brief Method get_actionId, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_actionId() ;

/// @brief Method get_axisContribution, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Pole get_axisContribution() ;

/// @brief Method get_axisRange, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::AxisRange get_axisRange() ;

/// @brief Method get_axisType, addr 0x181970670, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::AxisType get_axisType() ;

/// @brief Method get_controllerMap, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ControllerMap* get_controllerMap() ;

/// @brief Method get_elementIdentifierGlyph, addr 0x181970750, size 0x120, virtual false, abstract: false, final false
inline ::System::Object* get_elementIdentifierGlyph() ;

/// @brief Method get_elementIdentifierGlyphCount, addr 0x181970690, size 0xc0, virtual false, abstract: false, final false
inline int32_t get_elementIdentifierGlyphCount() ;

/// @brief Method get_elementIdentifierId, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_elementIdentifierId() ;

/// @brief Method get_elementIdentifierName, addr 0x181970870, size 0xe0, virtual false, abstract: false, final false
inline ::StringW get_elementIdentifierName() ;

/// @brief Method get_elementIndex, addr 0x180e25b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_elementIndex() ;

/// @brief Method get_elementType, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ControllerElementType get_elementType() ;

/// @brief Method get_enabled, addr 0x1802fdd10, size 0x10, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_hasModifiers, addr 0x181970950, size 0x20, virtual false, abstract: false, final false
inline bool get_hasModifiers() ;

/// @brief Method get_id, addr 0x1803d7410, size 0x10, virtual false, abstract: false, final false
inline int32_t get_id() ;

/// @brief Method get_invert, addr 0x1803a7470, size 0x10, virtual false, abstract: false, final false
inline bool get_invert() ;

/// @brief Method get_isModified, addr 0x181970970, size 0x10, virtual false, abstract: false, final false
inline bool get_isModified() ;

/// @brief Method get_keyCode, addr 0x181970980, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::KeyCode get_keyCode() ;

/// @brief Method get_keyboardKeyCode, addr 0x1803914b0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::KeyboardKeyCode get_keyboardKeyCode() ;

/// @brief Method get_modifiedTime, addr 0x181970990, size 0x10, virtual false, abstract: false, final false
inline double_t get_modifiedTime() ;

/// @brief Method get_modifierKey1, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ModifierKey get_modifierKey1() ;

/// @brief Method get_modifierKey2, addr 0x180392ff0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ModifierKey get_modifierKey2() ;

/// @brief Method get_modifierKey3, addr 0x180392fe0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ModifierKey get_modifierKey3() ;

/// @brief Method get_modifierKeyFlags, addr 0x1819709a0, size 0x50, virtual false, abstract: false, final false
inline ::Rewired::ModifierKeyFlags get_modifierKeyFlags() ;

/// @brief Method jmZOFzwEuilDgjsgQPqXejwbuVOc, addr 0x1819709f0, size 0xc0, virtual false, abstract: false, final false
static inline void jmZOFzwEuilDgjsgQPqXejwbuVOc(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method lkneqSAyEGHwMFvEDinhWKrdbhKHb, addr 0x181970ab0, size 0x90, virtual false, abstract: false, final false
inline void lkneqSAyEGHwMFvEDinhWKrdbhKHb(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method nbsOtMFyHhlfxJSuWpQJCJVgjxIe, addr 0x181970b40, size 0x3a0, virtual false, abstract: false, final false
inline int32_t nbsOtMFyHhlfxJSuWpQJCJVgjxIe(::System::Collections::Generic::ICollection_1<::StringW>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ncJHluiSXqfFHzQikcACxOKMApGAb, addr 0x181970ee0, size 0x1f0, virtual false, abstract: false, final false
static inline bool ncJHluiSXqfFHzQikcACxOKMApGAb(::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, ::by_ref<::System::Object*>  _cordl_fixed_empty_name_whitespace_param_3, ::by_ref<::StringW>  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method olWaXlqiTcmKMeNzkyvqUaxiRbAt, addr 0x1819710d0, size 0x50, virtual false, abstract: false, final false
inline bool olWaXlqiTcmKMeNzkyvqUaxiRbAt(::Rewired::ElementAssignmentType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method qZHTPqeULSPPPCYgOAuVmLEhiufY, addr 0x181971120, size 0x1d0, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::SerializedObject* qZHTPqeULSPPPCYgOAuVmLEhiufY() ;

static inline void setStaticF_s_toStringSB(::System::Text::StringBuilder*  value) ;

static inline void setStaticF_uidCounter(int32_t  value) ;

/// @brief Method set_actionId, addr 0x1819712f0, size 0x50, virtual false, abstract: false, final false
inline void set_actionId(int32_t  value) ;

/// @brief Method set_axisContribution, addr 0x181971340, size 0xa0, virtual false, abstract: false, final false
inline void set_axisContribution(::Rewired::Pole  value) ;

/// @brief Method set_axisRange, addr 0x1819713e0, size 0x110, virtual false, abstract: false, final false
inline void set_axisRange(::Rewired::AxisRange  value) ;

/// @brief Method set_elementIdentifierId, addr 0x1819714f0, size 0x180, virtual false, abstract: false, final false
inline void set_elementIdentifierId(int32_t  value) ;

/// @brief Method set_enabled, addr 0x180503b70, size 0x10, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_invert, addr 0x181971670, size 0x40, virtual false, abstract: false, final false
inline void set_invert(bool  value) ;

/// @brief Method set_isModified, addr 0x1819716b0, size 0x50, virtual false, abstract: false, final false
inline void set_isModified(bool  value) ;

/// @brief Method set_keyCode, addr 0x181971700, size 0xe0, virtual false, abstract: false, final false
inline void set_keyCode(::UnityEngine::KeyCode  value) ;

/// @brief Method set_keyboardKeyCode, addr 0x1819717e0, size 0xe0, virtual false, abstract: false, final false
inline void set_keyboardKeyCode(::Rewired::KeyboardKeyCode  value) ;

/// @brief Method set_modifierKey1, addr 0x1819718c0, size 0xe0, virtual false, abstract: false, final false
inline void set_modifierKey1(::Rewired::ModifierKey  value) ;

/// @brief Method set_modifierKey2, addr 0x1819719a0, size 0xe0, virtual false, abstract: false, final false
inline void set_modifierKey2(::Rewired::ModifierKey  value) ;

/// @brief Method set_modifierKey3, addr 0x181971a80, size 0xe0, virtual false, abstract: false, final false
inline void set_modifierKey3(::Rewired::ModifierKey  value) ;

/// @brief Method vQEbUyBiwDEIjTyqlbvRjPwKboHE, addr 0x181971b60, size 0xa0, virtual false, abstract: false, final false
inline void vQEbUyBiwDEIjTyqlbvRjPwKboHE(::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method wSUIKMCjkPGwVrkTHeweAXaiLqki, addr 0x181971c00, size 0x1c0, virtual false, abstract: false, final false
inline void wSUIKMCjkPGwVrkTHeweAXaiLqki(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method yRZWwRgAIwEhwAfCiJcEOSvkKvid, addr 0x181971dc0, size 0x80, virtual false, abstract: false, final false
static inline bool yRZWwRgAIwEhwAfCiJcEOSvkKvid(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method zQEBAKJIPhYDjUxHlOJogqOdaXOm, addr 0x181971e40, size 0x90, virtual false, abstract: false, final false
inline void zQEBAKJIPhYDjUxHlOJogqOdaXOm() ;

/// @brief Method zmoPXIzDmAdtOklVxWYIlHUHcswDA, addr 0x181971ed0, size 0x40, virtual false, abstract: false, final false
inline void zmoPXIzDmAdtOklVxWYIlHUHcswDA() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActionElementMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActionElementMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ActionElementMap(ActionElementMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActionElementMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActionElementMap(ActionElementMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2018};

/// @brief Field _actionCategoryId, offset: 0x10, size: 0x4, def value: None
 int32_t  ____actionCategoryId;

/// @brief Field _actionId, offset: 0x14, size: 0x4, def value: None
 int32_t  ____actionId;

/// @brief Field _elementType, offset: 0x18, size: 0x4, def value: None
 ::Rewired::ControllerElementType  ____elementType;

/// @brief Field _elementIdentifierId, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____elementIdentifierId;

/// @brief Field _axisRange, offset: 0x20, size: 0x4, def value: None
 ::Rewired::AxisRange  ____axisRange;

/// @brief Field _invert, offset: 0x24, size: 0x1, def value: None
 bool  ____invert;

/// @brief Field _axisContribution, offset: 0x28, size: 0x4, def value: None
 ::Rewired::Pole  ____axisContribution;

/// @brief Field _keyboardKeyCode, offset: 0x2c, size: 0x4, def value: None
 ::Rewired::KeyboardKeyCode  ____keyboardKeyCode;

/// @brief Field _modifierKey1, offset: 0x30, size: 0x4, def value: None
 ::Rewired::ModifierKey  ____modifierKey1;

/// @brief Field _modifierKey2, offset: 0x34, size: 0x4, def value: None
 ::Rewired::ModifierKey  ____modifierKey2;

/// @brief Field _modifierKey3, offset: 0x38, size: 0x4, def value: None
 ::Rewired::ModifierKey  ____modifierKey3;

/// @brief Field QfUTriqKDPzbKWIhsoahKZTbnClN, offset: 0x40, size: 0x8, def value: None
 ::Rewired::ControllerMap*  ___QfUTriqKDPzbKWIhsoahKZTbnClN;

/// @brief Field lBgVQgctmdUmIdKXgdVlTgqePJJA, offset: 0x48, size: 0x1, def value: None
 bool  ___lBgVQgctmdUmIdKXgdVlTgqePJJA;

/// @brief Field pTRyabnfCQfDdqbSmwltRmLncIFfA, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___pTRyabnfCQfDdqbSmwltRmLncIFfA;

/// @brief Field slHYcHNAdsCcAIpoHpnhaCzkRPdS, offset: 0x50, size: 0x4, def value: None
 int32_t  ___slHYcHNAdsCcAIpoHpnhaCzkRPdS;

/// @brief Field ZkYGvxiZbAEvaOjrnJLDFlIgnJNiA, offset: 0x54, size: 0x4, def value: None
 uint32_t  ___ZkYGvxiZbAEvaOjrnJLDFlIgnJNiA;

/// @brief Field qOkwtAlwwEPIULcXrcJRAIpfFUDxA, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___qOkwtAlwwEPIULcXrcJRAIpfFUDxA;

/// @brief Field pTUcsKiIiDhJFZuDxRiJuKMsFvZDA, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___pTUcsKiIiDhJFZuDxRiJuKMsFvZDA;

/// @brief Field lRweYTpYEkpsdxlAhrunLgLqTjyc, offset: 0x68, size: 0x4, def value: None
 ::Rewired::ModifierKeyFlags  ___lRweYTpYEkpsdxlAhrunLgLqTjyc;

/// @brief Field neERhzwLaNspRnXmyTrIgjTBlpzv, offset: 0x70, size: 0x8, def value: None
 ::Rewired::HardwareControllerMap_Game*  ___neERhzwLaNspRnXmyTrIgjTBlpzv;

/// @brief Field sVRRtLqGNVENKCOUnmPEGehhtKBbB, offset: 0x78, size: 0x8, def value: None
 double_t  ___sVRRtLqGNVENKCOUnmPEGehhtKBbB;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ActionElementMap, ____actionCategoryId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ActionElementMap, ____actionId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::ActionElementMap, ____elementType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ActionElementMap, ____elementIdentifierId) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ActionElementMap, ____axisRange) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ActionElementMap, ____invert) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::ActionElementMap, ____axisContribution) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ActionElementMap, ____keyboardKeyCode) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ActionElementMap, ____modifierKey1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::ActionElementMap, ____modifierKey2) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Rewired::ActionElementMap, ____modifierKey3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::ActionElementMap, ___QfUTriqKDPzbKWIhsoahKZTbnClN) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::ActionElementMap, ___lBgVQgctmdUmIdKXgdVlTgqePJJA) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::ActionElementMap, ___pTRyabnfCQfDdqbSmwltRmLncIFfA) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ActionElementMap, ___slHYcHNAdsCcAIpoHpnhaCzkRPdS) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::ActionElementMap, ___ZkYGvxiZbAEvaOjrnJLDFlIgnJNiA) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Rewired::ActionElementMap, ___qOkwtAlwwEPIULcXrcJRAIpfFUDxA) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::ActionElementMap, ___pTUcsKiIiDhJFZuDxRiJuKMsFvZDA) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::ActionElementMap, ___lRweYTpYEkpsdxlAhrunLgLqTjyc) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Rewired::ActionElementMap, ___neERhzwLaNspRnXmyTrIgjTBlpzv) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Rewired::ActionElementMap, ___sVRRtLqGNVENKCOUnmPEGehhtKBbB) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Rewired::ActionElementMap) == 0x80, "Size mismatch!");

} // namespace end def Rewired

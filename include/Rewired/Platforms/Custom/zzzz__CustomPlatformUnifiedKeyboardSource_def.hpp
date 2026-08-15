#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/CustomPlatformUnifiedKeyboardSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Platforms/Custom/zzzz__CustomPlatformUnifiedControllerSource_def.hpp"
#include "Rewired/zzzz__KeyboardKeyCode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomPlatformUnifiedKeyboardSource)
namespace Rewired::Platforms::Custom {
class CustomPlatformUnifiedKeyboardSource_KeyPropertyMap;
}
namespace Rewired::Platforms::Custom {
struct KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key;
}
namespace Rewired::Utils::Classes::Data {
template<typename TKey,typename TValue>
class IndexedDictionary_2;
}
namespace Rewired {
struct KeyboardKeyCode;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
// Forward declare root types
namespace Rewired::Platforms::Custom {
class CustomPlatformUnifiedKeyboardSource;
}
namespace Rewired::Platforms::Custom {
class CustomPlatformUnifiedKeyboardSource_KeyPropertyMap;
}
namespace Rewired::Platforms::Custom {
struct KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key;
}
// Write type traits
MARK_REF_T(::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*);
MARK_REF_T(::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*);
MARK_VAL_T(::Rewired::Platforms::Custom::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*, "Rewired.Platforms.Custom", "CustomPlatformUnifiedKeyboardSource");
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*, "Rewired.Platforms.Custom", "CustomPlatformUnifiedKeyboardSource/KeyPropertyMap");
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key, "Rewired.Platforms.Custom", "CustomPlatformUnifiedKeyboardSource/KeyPropertyMap/Key");
// Dependencies Rewired.KeyboardKeyCode
namespace Rewired::Platforms::Custom {
// Is value type: true
// CS Name: Rewired.Platforms.Custom.CustomPlatformUnifiedKeyboardSource/KeyPropertyMap/Key
struct CORDL_TYPE KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key() ;

// Ctor Parameters [CppParam { name: "keyCode", ty: "::Rewired::KeyboardKeyCode", modifiers: "", def_value: None }, CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }]
constexpr KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key(::Rewired::KeyboardKeyCode  keyCode, ::StringW  label) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2302};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field keyCode, offset: 0x0, size: 0x4, def value: None
 ::Rewired::KeyboardKeyCode  keyCode;

/// @brief Field label, offset: 0x8, size: 0x8, def value: None
 ::StringW  label;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Custom::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key, keyCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key, label) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Custom::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Platforms::Custom
// Dependencies System.Object
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.CustomPlatformUnifiedKeyboardSource/KeyPropertyMap
class CORDL_TYPE CustomPlatformUnifiedKeyboardSource_KeyPropertyMap : public ::System::Object {
public:
// Declarations
using Key = ::Rewired::Platforms::Custom::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key;

/// @brief Field WywyELccNOIqYAeEorUwyFVyQMaMA, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_WywyELccNOIqYAeEorUwyFVyQMaMA, put=__cordl_internal_set_WywyELccNOIqYAeEorUwyFVyQMaMA)) ::Rewired::Utils::Classes::Data::IndexedDictionary_2<int32_t,::StringW>*  WywyELccNOIqYAeEorUwyFVyQMaMA;

/// @brief Field ZEuSTWflvbKDGXoiRUhvibTTkggW, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_ZEuSTWflvbKDGXoiRUhvibTTkggW, put=__cordl_internal_set_ZEuSTWflvbKDGXoiRUhvibTTkggW)) bool  ZEuSTWflvbKDGXoiRUhvibTTkggW;

 __declspec(property(get=mHSRJkrekcLwHAtmwRpYGcdHdUNU, put=zrOvCiSOYvbsLAfZxMPWovZOFrLY)) bool  nprxxUlRoSqIhFeinzSjLyYSDhjI;

/// @brief Method Get, addr 0x181881cb0, size 0x110, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::Platforms::Custom::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key> Get() ;

/// @brief Method Get, addr 0x181881c20, size 0x90, virtual false, abstract: false, final false
inline ::Rewired::Platforms::Custom::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key Get(::Rewired::KeyboardKeyCode  keyCode) ;

static inline ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap* New_ctor() ;

static inline ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap* New_ctor(::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Set, addr 0x181881dc0, size 0x40, virtual false, abstract: false, final false
inline void Set(::Rewired::Platforms::Custom::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key  key) ;

/// @brief Method Set, addr 0x181881e00, size 0x1c0, virtual false, abstract: false, final false
inline void Set(::System::Collections::Generic::ICollection_1<::Rewired::Platforms::Custom::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key>*  keys) ;

constexpr ::Rewired::Utils::Classes::Data::IndexedDictionary_2<int32_t,::StringW>* const& __cordl_internal_get_WywyELccNOIqYAeEorUwyFVyQMaMA() const;

constexpr ::Rewired::Utils::Classes::Data::IndexedDictionary_2<int32_t,::StringW>*& __cordl_internal_get_WywyELccNOIqYAeEorUwyFVyQMaMA() ;

constexpr bool const& __cordl_internal_get_ZEuSTWflvbKDGXoiRUhvibTTkggW() const;

constexpr bool& __cordl_internal_get_ZEuSTWflvbKDGXoiRUhvibTTkggW() ;

constexpr void __cordl_internal_set_WywyELccNOIqYAeEorUwyFVyQMaMA(::Rewired::Utils::Classes::Data::IndexedDictionary_2<int32_t,::StringW>*  value) ;

constexpr void __cordl_internal_set_ZEuSTWflvbKDGXoiRUhvibTTkggW(bool  value) ;

/// @brief Method .ctor, addr 0x181882040, size 0x200, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x181881fc0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method mHSRJkrekcLwHAtmwRpYGcdHdUNU, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool mHSRJkrekcLwHAtmwRpYGcdHdUNU() ;

/// @brief Method zrOvCiSOYvbsLAfZxMPWovZOFrLY, addr 0x1803a7530, size 0x10, virtual false, abstract: false, final false
inline void zrOvCiSOYvbsLAfZxMPWovZOFrLY(bool  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomPlatformUnifiedKeyboardSource_KeyPropertyMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomPlatformUnifiedKeyboardSource_KeyPropertyMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomPlatformUnifiedKeyboardSource_KeyPropertyMap(CustomPlatformUnifiedKeyboardSource_KeyPropertyMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomPlatformUnifiedKeyboardSource_KeyPropertyMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomPlatformUnifiedKeyboardSource_KeyPropertyMap(CustomPlatformUnifiedKeyboardSource_KeyPropertyMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2303};

/// @brief Field WywyELccNOIqYAeEorUwyFVyQMaMA, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::IndexedDictionary_2<int32_t,::StringW>*  ___WywyELccNOIqYAeEorUwyFVyQMaMA;

/// @brief Field ZEuSTWflvbKDGXoiRUhvibTTkggW, offset: 0x18, size: 0x1, def value: None
 bool  ___ZEuSTWflvbKDGXoiRUhvibTTkggW;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap, ___WywyELccNOIqYAeEorUwyFVyQMaMA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap, ___ZEuSTWflvbKDGXoiRUhvibTTkggW) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Platforms::Custom
// Dependencies Rewired.Platforms.Custom.CustomPlatformUnifiedControllerSource
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.CustomPlatformUnifiedKeyboardSource
class CORDL_TYPE CustomPlatformUnifiedKeyboardSource : public ::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource {
public:
// Declarations
using KeyPropertyMap = ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap;

/// @brief Field HVuZBkIWMLLCvNWASPdRpvTWosiK, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_HVuZBkIWMLLCvNWASPdRpvTWosiK, put=__cordl_internal_set_HVuZBkIWMLLCvNWASPdRpvTWosiK)) ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*  HVuZBkIWMLLCvNWASPdRpvTWosiK;

 __declspec(property(get=get_keyPropertyMap, put=set_keyPropertyMap)) ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*  keyPropertyMap;

/// @brief Method CjpEwktykuVJGJJEGvkulMRYcKLHA, addr 0x18187f8d0, size 0x190, virtual false, abstract: false, final false
inline void CjpEwktykuVJGJJEGvkulMRYcKLHA() ;

static inline ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource* New_ctor() ;

/// @brief Method SetKeyValue, addr 0x18187fa60, size 0xb0, virtual false, abstract: false, final false
inline void SetKeyValue(::Rewired::KeyboardKeyCode  keyCode, bool  value) ;

/// @brief Method WWgsRFnzSkRIyJAYgqHIyMrEkAjW, addr 0x18187fb10, size 0x20, virtual true, abstract: false, final false
inline void WWgsRFnzSkRIyJAYgqHIyMrEkAjW() ;

constexpr ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap* const& __cordl_internal_get_HVuZBkIWMLLCvNWASPdRpvTWosiK() const;

constexpr ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*& __cordl_internal_get_HVuZBkIWMLLCvNWASPdRpvTWosiK() ;

constexpr void __cordl_internal_set_HVuZBkIWMLLCvNWASPdRpvTWosiK(::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*  value) ;

/// @brief Method .ctor, addr 0x18187fb30, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_keyPropertyMap, addr 0x18187fbf0, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap* get_keyPropertyMap() ;

/// @brief Method set_keyPropertyMap, addr 0x18187fc50, size 0x60, virtual false, abstract: false, final false
inline void set_keyPropertyMap(::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomPlatformUnifiedKeyboardSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomPlatformUnifiedKeyboardSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomPlatformUnifiedKeyboardSource(CustomPlatformUnifiedKeyboardSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomPlatformUnifiedKeyboardSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomPlatformUnifiedKeyboardSource(CustomPlatformUnifiedKeyboardSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2304};

/// @brief Field HVuZBkIWMLLCvNWASPdRpvTWosiK, offset: 0x38, size: 0x8, def value: None
 ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*  ___HVuZBkIWMLLCvNWASPdRpvTWosiK;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource, ___HVuZBkIWMLLCvNWASPdRpvTWosiK) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource) == 0x40, "Size mismatch!");

} // namespace end def Rewired::Platforms::Custom

#pragma once
// IWYU pragma private; include "Rewired/Keyboard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerPollingInfo_def.hpp"
#include "Rewired/zzzz__ControllerWithMap_def.hpp"
#include "Rewired/zzzz__KeyboardKeyCode_def.hpp"
#include "Rewired/zzzz__ModifierKeyFlags_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Keyboard)
namespace GlobalNamespace {
class mgEoYhWDNSuilPYVDQosKwaMZrnc;
}
namespace GlobalNamespace {
class uArTaRyygpuxWdJDbqGWbDpuXIZu;
}
namespace Rewired::Interfaces {
class IUnifiedKeyboardSource;
}
namespace Rewired::Internal::Glyphs {
class KeyedGlyph;
}
namespace Rewired::Internal::Localization {
class DeviceLocalizationInfo;
}
namespace Rewired::Internal::Localization {
class LocalizedString;
}
namespace Rewired {
class ActionElementMap;
}
namespace Rewired {
class ControllerDataUpdater;
}
namespace Rewired {
class ControllerElementIdentifier;
}
namespace Rewired {
class ControllerMap;
}
namespace Rewired {
struct ControllerPollingInfo;
}
namespace Rewired {
class Controller_Button;
}
namespace Rewired {
class Controller_Extension;
}
namespace Rewired {
class HardwareControllerMap_Game;
}
namespace Rewired {
struct InputSource;
}
namespace Rewired {
struct KeyboardKeyCode;
}
namespace Rewired {
class Keyboard_ModifierKeyInfo;
}
namespace Rewired {
class Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA;
}
namespace Rewired {
class Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA;
}
namespace Rewired {
class Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA;
}
namespace Rewired {
class Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki;
}
namespace Rewired {
class Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA;
}
namespace Rewired {
struct ModifierKeyFlags;
}
namespace Rewired {
struct ModifierKey;
}
namespace Rewired {
struct UpdateLoopType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
struct Guid;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct KeyCode;
}
// Forward declare root types
namespace Rewired {
class Keyboard;
}
namespace Rewired {
class Keyboard_ModifierKeyInfo;
}
namespace Rewired {
class Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA;
}
namespace Rewired {
class Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA;
}
namespace Rewired {
class Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA;
}
namespace Rewired {
class Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki;
}
namespace Rewired {
class Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA;
}
// Write type traits
MARK_REF_T(::Rewired::Keyboard*);
MARK_REF_T(::Rewired::Keyboard_ModifierKeyInfo*);
MARK_REF_T(::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*);
MARK_REF_T(::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA*);
MARK_REF_T(::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA*);
MARK_REF_T(::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki*);
MARK_REF_T(::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA*);
DEFINE_IL2CPP_CLASS(::Rewired::Keyboard*, "Rewired", "Keyboard");
DEFINE_IL2CPP_CLASS(::Rewired::Keyboard_ModifierKeyInfo*, "Rewired", "Keyboard/ModifierKeyInfo");
DEFINE_IL2CPP_CLASS(::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*, "Rewired", "Keyboard/PFnhNPpwZVfAuwJXKbMAhYmgApvdA");
DEFINE_IL2CPP_CLASS(::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA*, "Rewired", "Keyboard/XIKHlfTbcwlktEocCanUHYxnRennA");
DEFINE_IL2CPP_CLASS(::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA*, "Rewired", "Keyboard/eewhiYlfclwnjWRFojkzSTQkkwmA");
DEFINE_IL2CPP_CLASS(::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki*, "Rewired", "Keyboard/egzZyOOngliCQNQoyFbUZkKzzvki");
DEFINE_IL2CPP_CLASS(::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA*, "Rewired", "Keyboard/sofOAjmnIBdUjPuzeCUVcqDxWewiA");
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Keyboard/ModifierKeyInfo
class CORDL_TYPE Keyboard_ModifierKeyInfo : public ::System::Object {
public:
// Declarations
/// @brief Field longKey, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_longKey, put=__cordl_internal_set_longKey)) ::StringW  longKey;

/// @brief Field longName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_longName, put=__cordl_internal_set_longName)) ::StringW  longName;

/// @brief Field shortKey, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_shortKey, put=__cordl_internal_set_shortKey)) ::StringW  shortKey;

/// @brief Field shortName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_shortName, put=__cordl_internal_set_shortName)) ::StringW  shortName;

/// @brief Method GetKey, addr 0x1819225d0, size 0x10, virtual false, abstract: false, final false
inline ::StringW GetKey(bool  useShort) ;

/// @brief Method GetName, addr 0x1819225e0, size 0x10, virtual false, abstract: false, final false
inline ::StringW GetName(bool  useShort) ;

static inline ::Rewired::Keyboard_ModifierKeyInfo* New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3) ;

constexpr ::StringW const& __cordl_internal_get_longKey() const;

constexpr ::StringW& __cordl_internal_get_longKey() ;

constexpr ::StringW const& __cordl_internal_get_longName() const;

constexpr ::StringW& __cordl_internal_get_longName() ;

constexpr ::StringW const& __cordl_internal_get_shortKey() const;

constexpr ::StringW& __cordl_internal_get_shortKey() ;

constexpr ::StringW const& __cordl_internal_get_shortName() const;

constexpr ::StringW& __cordl_internal_get_shortName() ;

constexpr void __cordl_internal_set_longKey(::StringW  value) ;

constexpr void __cordl_internal_set_longName(::StringW  value) ;

constexpr void __cordl_internal_set_shortKey(::StringW  value) ;

constexpr void __cordl_internal_set_shortName(::StringW  value) ;

/// @brief Method .ctor, addr 0x1817595d0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Keyboard_ModifierKeyInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Keyboard_ModifierKeyInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Keyboard_ModifierKeyInfo(Keyboard_ModifierKeyInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Keyboard_ModifierKeyInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Keyboard_ModifierKeyInfo(Keyboard_ModifierKeyInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1840};

/// @brief Field shortName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___shortName;

/// @brief Field longName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___longName;

/// @brief Field shortKey, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___shortKey;

/// @brief Field longKey, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___longKey;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Keyboard_ModifierKeyInfo, ___shortName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Keyboard_ModifierKeyInfo, ___longName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Keyboard_ModifierKeyInfo, ___shortKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Keyboard_ModifierKeyInfo, ___longKey) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::Keyboard_ModifierKeyInfo) == 0x30, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Keyboard/eewhiYlfclwnjWRFojkzSTQkkwmA
class CORDL_TYPE Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA : public ::System::Object {
public:
// Declarations
/// @brief Field huiikMMgidAipJptCcJlmQCeegVBb, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_huiikMMgidAipJptCcJlmQCeegVBb, put=__cordl_internal_set_huiikMMgidAipJptCcJlmQCeegVBb)) ::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA*  huiikMMgidAipJptCcJlmQCeegVBb;

/// @brief Field tCYGGFREAMKqGSiVGDDjRomPMvnN, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_tCYGGFREAMKqGSiVGDDjRomPMvnN, put=__cordl_internal_set_tCYGGFREAMKqGSiVGDDjRomPMvnN)) ::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA*  tCYGGFREAMKqGSiVGDDjRomPMvnN;

static inline ::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA* New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr ::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA* const& __cordl_internal_get_huiikMMgidAipJptCcJlmQCeegVBb() const;

constexpr ::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA*& __cordl_internal_get_huiikMMgidAipJptCcJlmQCeegVBb() ;

constexpr ::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA* const& __cordl_internal_get_tCYGGFREAMKqGSiVGDDjRomPMvnN() const;

constexpr ::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA*& __cordl_internal_get_tCYGGFREAMKqGSiVGDDjRomPMvnN() ;

constexpr void __cordl_internal_set_huiikMMgidAipJptCcJlmQCeegVBb(::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA*  value) ;

constexpr void __cordl_internal_set_tCYGGFREAMKqGSiVGDDjRomPMvnN(::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA*  value) ;

/// @brief Method .ctor, addr 0x1819274c0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA(Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA(Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1841};

/// @brief Field huiikMMgidAipJptCcJlmQCeegVBb, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA*  ___huiikMMgidAipJptCcJlmQCeegVBb;

/// @brief Field tCYGGFREAMKqGSiVGDDjRomPMvnN, offset: 0x18, size: 0x8, def value: None
 ::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA*  ___tCYGGFREAMKqGSiVGDDjRomPMvnN;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA, ___huiikMMgidAipJptCcJlmQCeegVBb) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA, ___tCYGGFREAMKqGSiVGDDjRomPMvnN) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA) == 0x20, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Keyboard/sofOAjmnIBdUjPuzeCUVcqDxWewiA
class CORDL_TYPE Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA : public ::System::Object {
public:
// Declarations
/// @brief Field PNvTVkvzsXQFZyCgGLbVWndiKqyW, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_PNvTVkvzsXQFZyCgGLbVWndiKqyW, put=__cordl_internal_set_PNvTVkvzsXQFZyCgGLbVWndiKqyW)) bool  PNvTVkvzsXQFZyCgGLbVWndiKqyW;

/// @brief Field shmqRKiaFQRgHjCcCisCDINLwTlN, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_shmqRKiaFQRgHjCcCisCDINLwTlN, put=__cordl_internal_set_shmqRKiaFQRgHjCcCisCDINLwTlN)) ::Rewired::Internal::Localization::LocalizedString*  shmqRKiaFQRgHjCcCisCDINLwTlN;

static inline ::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA* New_ctor(::Rewired::Internal::Localization::LocalizedString*  _cordl_fixed_empty_name_whitespace) ;

constexpr bool const& __cordl_internal_get_PNvTVkvzsXQFZyCgGLbVWndiKqyW() const;

constexpr bool& __cordl_internal_get_PNvTVkvzsXQFZyCgGLbVWndiKqyW() ;

constexpr ::Rewired::Internal::Localization::LocalizedString* const& __cordl_internal_get_shmqRKiaFQRgHjCcCisCDINLwTlN() const;

constexpr ::Rewired::Internal::Localization::LocalizedString*& __cordl_internal_get_shmqRKiaFQRgHjCcCisCDINLwTlN() ;

constexpr void __cordl_internal_set_PNvTVkvzsXQFZyCgGLbVWndiKqyW(bool  value) ;

constexpr void __cordl_internal_set_shmqRKiaFQRgHjCcCisCDINLwTlN(::Rewired::Internal::Localization::LocalizedString*  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Internal::Localization::LocalizedString*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA(Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA(Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1842};

/// @brief Field shmqRKiaFQRgHjCcCisCDINLwTlN, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Internal::Localization::LocalizedString*  ___shmqRKiaFQRgHjCcCisCDINLwTlN;

/// @brief Field PNvTVkvzsXQFZyCgGLbVWndiKqyW, offset: 0x18, size: 0x1, def value: None
 bool  ___PNvTVkvzsXQFZyCgGLbVWndiKqyW;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA, ___shmqRKiaFQRgHjCcCisCDINLwTlN) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA, ___PNvTVkvzsXQFZyCgGLbVWndiKqyW) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA) == 0x20, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Keyboard/PFnhNPpwZVfAuwJXKbMAhYmgApvdA
class CORDL_TYPE Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA : public ::System::Object {
public:
// Declarations
/// @brief Field HicPwNGDkgMfJSjKbkgnViqeRssw, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_HicPwNGDkgMfJSjKbkgnViqeRssw, put=__cordl_internal_set_HicPwNGDkgMfJSjKbkgnViqeRssw)) bool  HicPwNGDkgMfJSjKbkgnViqeRssw;

/// @brief Field ndpqIBEdWYBzKlptKaLnAViRgKNIA, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ndpqIBEdWYBzKlptKaLnAViRgKNIA, put=__cordl_internal_set_ndpqIBEdWYBzKlptKaLnAViRgKNIA)) ::Rewired::Internal::Glyphs::KeyedGlyph*  ndpqIBEdWYBzKlptKaLnAViRgKNIA;

static inline ::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA* New_ctor(::Rewired::Internal::Glyphs::KeyedGlyph*  _cordl_fixed_empty_name_whitespace) ;

constexpr bool const& __cordl_internal_get_HicPwNGDkgMfJSjKbkgnViqeRssw() const;

constexpr bool& __cordl_internal_get_HicPwNGDkgMfJSjKbkgnViqeRssw() ;

constexpr ::Rewired::Internal::Glyphs::KeyedGlyph* const& __cordl_internal_get_ndpqIBEdWYBzKlptKaLnAViRgKNIA() const;

constexpr ::Rewired::Internal::Glyphs::KeyedGlyph*& __cordl_internal_get_ndpqIBEdWYBzKlptKaLnAViRgKNIA() ;

constexpr void __cordl_internal_set_HicPwNGDkgMfJSjKbkgnViqeRssw(bool  value) ;

constexpr void __cordl_internal_set_ndpqIBEdWYBzKlptKaLnAViRgKNIA(::Rewired::Internal::Glyphs::KeyedGlyph*  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Internal::Glyphs::KeyedGlyph*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA(Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA(Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1843};

/// @brief Field ndpqIBEdWYBzKlptKaLnAViRgKNIA, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Internal::Glyphs::KeyedGlyph*  ___ndpqIBEdWYBzKlptKaLnAViRgKNIA;

/// @brief Field HicPwNGDkgMfJSjKbkgnViqeRssw, offset: 0x18, size: 0x1, def value: None
 bool  ___HicPwNGDkgMfJSjKbkgnViqeRssw;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA, ___ndpqIBEdWYBzKlptKaLnAViRgKNIA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA, ___HicPwNGDkgMfJSjKbkgnViqeRssw) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA) == 0x20, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerPollingInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Keyboard/egzZyOOngliCQNQoyFbUZkKzzvki
class CORDL_TYPE Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki : public ::System::Object {
public:
// Declarations
/// @brief Field BwdrXQlaHoKkGwkDQmtGPLKslhmE, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_BwdrXQlaHoKkGwkDQmtGPLKslhmE, put=__cordl_internal_set_BwdrXQlaHoKkGwkDQmtGPLKslhmE)) ::Rewired::Keyboard*  BwdrXQlaHoKkGwkDQmtGPLKslhmE;

/// @brief Field IvEVejcfaGiFKFAMATsNpxkYQTGQ, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_IvEVejcfaGiFKFAMATsNpxkYQTGQ, put=__cordl_internal_set_IvEVejcfaGiFKFAMATsNpxkYQTGQ)) int32_t  IvEVejcfaGiFKFAMATsNpxkYQTGQ;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)) ::Rewired::ControllerPollingInfo  System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field nlAwPcCRIlTCehPBmCLijLSLCtjJ, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_nlAwPcCRIlTCehPBmCLijLSLCtjJ, put=__cordl_internal_set_nlAwPcCRIlTCehPBmCLijLSLCtjJ)) int32_t  nlAwPcCRIlTCehPBmCLijLSLCtjJ;

/// @brief Field pMzDggyVRKrzNwDZFiRABkJSxvnA, offset 0x18, size 0x38 
 __declspec(property(get=__cordl_internal_get_pMzDggyVRKrzNwDZFiRABkJSxvnA, put=__cordl_internal_set_pMzDggyVRKrzNwDZFiRABkJSxvnA)) ::Rewired::ControllerPollingInfo  pMzDggyVRKrzNwDZFiRABkJSxvnA;

/// @brief Field wvEdFLhDJSTvgdJGJBhGpkawxORC, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_wvEdFLhDJSTvgdJGJBhGpkawxORC, put=__cordl_internal_set_wvEdFLhDJSTvgdJGJBhGpkawxORC)) int32_t  wvEdFLhDJSTvgdJGJBhGpkawxORC;

/// @brief Field xUHjAMqGARqhUytHqVkavFAeKThN, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_xUHjAMqGARqhUytHqVkavFAeKThN, put=__cordl_internal_set_xUHjAMqGARqhUytHqVkavFAeKThN)) int32_t  xUHjAMqGARqhUytHqVkavFAeKThN;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1819275a0, size 0x290, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator, addr 0x181927830, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current, addr 0x181859c00, size 0x30, virtual true, abstract: false, final true
inline ::Rewired::ControllerPollingInfo System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x181927830, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x181859c30, size 0x40, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181049e50, size 0x6fe0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::Rewired::Keyboard* const& __cordl_internal_get_BwdrXQlaHoKkGwkDQmtGPLKslhmE() const;

constexpr ::Rewired::Keyboard*& __cordl_internal_get_BwdrXQlaHoKkGwkDQmtGPLKslhmE() ;

constexpr int32_t const& __cordl_internal_get_IvEVejcfaGiFKFAMATsNpxkYQTGQ() const;

constexpr int32_t& __cordl_internal_get_IvEVejcfaGiFKFAMATsNpxkYQTGQ() ;

constexpr int32_t const& __cordl_internal_get_nlAwPcCRIlTCehPBmCLijLSLCtjJ() const;

constexpr int32_t& __cordl_internal_get_nlAwPcCRIlTCehPBmCLijLSLCtjJ() ;

constexpr ::Rewired::ControllerPollingInfo const& __cordl_internal_get_pMzDggyVRKrzNwDZFiRABkJSxvnA() const;

constexpr ::Rewired::ControllerPollingInfo& __cordl_internal_get_pMzDggyVRKrzNwDZFiRABkJSxvnA() ;

constexpr int32_t const& __cordl_internal_get_wvEdFLhDJSTvgdJGJBhGpkawxORC() const;

constexpr int32_t& __cordl_internal_get_wvEdFLhDJSTvgdJGJBhGpkawxORC() ;

constexpr int32_t const& __cordl_internal_get_xUHjAMqGARqhUytHqVkavFAeKThN() const;

constexpr int32_t& __cordl_internal_get_xUHjAMqGARqhUytHqVkavFAeKThN() ;

constexpr void __cordl_internal_set_BwdrXQlaHoKkGwkDQmtGPLKslhmE(::Rewired::Keyboard*  value) ;

constexpr void __cordl_internal_set_IvEVejcfaGiFKFAMATsNpxkYQTGQ(int32_t  value) ;

constexpr void __cordl_internal_set_nlAwPcCRIlTCehPBmCLijLSLCtjJ(int32_t  value) ;

constexpr void __cordl_internal_set_pMzDggyVRKrzNwDZFiRABkJSxvnA(::Rewired::ControllerPollingInfo  value) ;

constexpr void __cordl_internal_set_wvEdFLhDJSTvgdJGJBhGpkawxORC(int32_t  value) ;

constexpr void __cordl_internal_set_xUHjAMqGARqhUytHqVkavFAeKThN(int32_t  value) ;

/// @brief Method .ctor, addr 0x181859da0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki(Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki(Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1844};

/// @brief Field nlAwPcCRIlTCehPBmCLijLSLCtjJ, offset: 0x10, size: 0x4, def value: None
 int32_t  ___nlAwPcCRIlTCehPBmCLijLSLCtjJ;

/// @brief Field pMzDggyVRKrzNwDZFiRABkJSxvnA, offset: 0x18, size: 0x38, def value: None
 ::Rewired::ControllerPollingInfo  ___pMzDggyVRKrzNwDZFiRABkJSxvnA;

/// @brief Field wvEdFLhDJSTvgdJGJBhGpkawxORC, offset: 0x50, size: 0x4, def value: None
 int32_t  ___wvEdFLhDJSTvgdJGJBhGpkawxORC;

/// @brief Field BwdrXQlaHoKkGwkDQmtGPLKslhmE, offset: 0x58, size: 0x8, def value: None
 ::Rewired::Keyboard*  ___BwdrXQlaHoKkGwkDQmtGPLKslhmE;

/// @brief Field xUHjAMqGARqhUytHqVkavFAeKThN, offset: 0x60, size: 0x4, def value: None
 int32_t  ___xUHjAMqGARqhUytHqVkavFAeKThN;

/// @brief Field IvEVejcfaGiFKFAMATsNpxkYQTGQ, offset: 0x64, size: 0x4, def value: None
 int32_t  ___IvEVejcfaGiFKFAMATsNpxkYQTGQ;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki, ___nlAwPcCRIlTCehPBmCLijLSLCtjJ) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki, ___pMzDggyVRKrzNwDZFiRABkJSxvnA) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki, ___wvEdFLhDJSTvgdJGJBhGpkawxORC) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki, ___BwdrXQlaHoKkGwkDQmtGPLKslhmE) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki, ___xUHjAMqGARqhUytHqVkavFAeKThN) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki, ___IvEVejcfaGiFKFAMATsNpxkYQTGQ) == 0x64, "Offset mismatch!");

static_assert(sizeof(::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki) == 0x68, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerPollingInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Keyboard/XIKHlfTbcwlktEocCanUHYxnRennA
class CORDL_TYPE Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA : public ::System::Object {
public:
// Declarations
/// @brief Field NATgprtlgurrxYzZDrIDDYLBThdt, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_NATgprtlgurrxYzZDrIDDYLBThdt, put=__cordl_internal_set_NATgprtlgurrxYzZDrIDDYLBThdt)) int32_t  NATgprtlgurrxYzZDrIDDYLBThdt;

/// @brief Field OotvUrfSeAFWemvoWLSGjTmgUvqV, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_OotvUrfSeAFWemvoWLSGjTmgUvqV, put=__cordl_internal_set_OotvUrfSeAFWemvoWLSGjTmgUvqV)) int32_t  OotvUrfSeAFWemvoWLSGjTmgUvqV;

/// @brief Field RGUIEJBnSAUXTUEBQOlybMlhPhfB, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_RGUIEJBnSAUXTUEBQOlybMlhPhfB, put=__cordl_internal_set_RGUIEJBnSAUXTUEBQOlybMlhPhfB)) int32_t  RGUIEJBnSAUXTUEBQOlybMlhPhfB;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)) ::Rewired::ControllerPollingInfo  System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field epHMcxMbDoEaiFoEryasZXYvnPYe, offset 0x18, size 0x38 
 __declspec(property(get=__cordl_internal_get_epHMcxMbDoEaiFoEryasZXYvnPYe, put=__cordl_internal_set_epHMcxMbDoEaiFoEryasZXYvnPYe)) ::Rewired::ControllerPollingInfo  epHMcxMbDoEaiFoEryasZXYvnPYe;

/// @brief Field lCFmANCwkGwiqcqZDiPuLseemHJP, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_lCFmANCwkGwiqcqZDiPuLseemHJP, put=__cordl_internal_set_lCFmANCwkGwiqcqZDiPuLseemHJP)) ::Rewired::Keyboard*  lCFmANCwkGwiqcqZDiPuLseemHJP;

/// @brief Field pkXAbQbYOIepObCYQsUKBCiGUJWlB, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_pkXAbQbYOIepObCYQsUKBCiGUJWlB, put=__cordl_internal_set_pkXAbQbYOIepObCYQsUKBCiGUJWlB)) int32_t  pkXAbQbYOIepObCYQsUKBCiGUJWlB;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1819271b0, size 0x290, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator, addr 0x181927440, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current, addr 0x181859c00, size 0x30, virtual true, abstract: false, final true
inline ::Rewired::ControllerPollingInfo System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x181927440, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x181859c30, size 0x40, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181049e50, size 0x6fe0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get_NATgprtlgurrxYzZDrIDDYLBThdt() const;

constexpr int32_t& __cordl_internal_get_NATgprtlgurrxYzZDrIDDYLBThdt() ;

constexpr int32_t const& __cordl_internal_get_OotvUrfSeAFWemvoWLSGjTmgUvqV() const;

constexpr int32_t& __cordl_internal_get_OotvUrfSeAFWemvoWLSGjTmgUvqV() ;

constexpr int32_t const& __cordl_internal_get_RGUIEJBnSAUXTUEBQOlybMlhPhfB() const;

constexpr int32_t& __cordl_internal_get_RGUIEJBnSAUXTUEBQOlybMlhPhfB() ;

constexpr ::Rewired::ControllerPollingInfo const& __cordl_internal_get_epHMcxMbDoEaiFoEryasZXYvnPYe() const;

constexpr ::Rewired::ControllerPollingInfo& __cordl_internal_get_epHMcxMbDoEaiFoEryasZXYvnPYe() ;

constexpr ::Rewired::Keyboard* const& __cordl_internal_get_lCFmANCwkGwiqcqZDiPuLseemHJP() const;

constexpr ::Rewired::Keyboard*& __cordl_internal_get_lCFmANCwkGwiqcqZDiPuLseemHJP() ;

constexpr int32_t const& __cordl_internal_get_pkXAbQbYOIepObCYQsUKBCiGUJWlB() const;

constexpr int32_t& __cordl_internal_get_pkXAbQbYOIepObCYQsUKBCiGUJWlB() ;

constexpr void __cordl_internal_set_NATgprtlgurrxYzZDrIDDYLBThdt(int32_t  value) ;

constexpr void __cordl_internal_set_OotvUrfSeAFWemvoWLSGjTmgUvqV(int32_t  value) ;

constexpr void __cordl_internal_set_RGUIEJBnSAUXTUEBQOlybMlhPhfB(int32_t  value) ;

constexpr void __cordl_internal_set_epHMcxMbDoEaiFoEryasZXYvnPYe(::Rewired::ControllerPollingInfo  value) ;

constexpr void __cordl_internal_set_lCFmANCwkGwiqcqZDiPuLseemHJP(::Rewired::Keyboard*  value) ;

constexpr void __cordl_internal_set_pkXAbQbYOIepObCYQsUKBCiGUJWlB(int32_t  value) ;

/// @brief Method .ctor, addr 0x181859da0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA(Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA(Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1845};

/// @brief Field pkXAbQbYOIepObCYQsUKBCiGUJWlB, offset: 0x10, size: 0x4, def value: None
 int32_t  ___pkXAbQbYOIepObCYQsUKBCiGUJWlB;

/// @brief Field epHMcxMbDoEaiFoEryasZXYvnPYe, offset: 0x18, size: 0x38, def value: None
 ::Rewired::ControllerPollingInfo  ___epHMcxMbDoEaiFoEryasZXYvnPYe;

/// @brief Field RGUIEJBnSAUXTUEBQOlybMlhPhfB, offset: 0x50, size: 0x4, def value: None
 int32_t  ___RGUIEJBnSAUXTUEBQOlybMlhPhfB;

/// @brief Field lCFmANCwkGwiqcqZDiPuLseemHJP, offset: 0x58, size: 0x8, def value: None
 ::Rewired::Keyboard*  ___lCFmANCwkGwiqcqZDiPuLseemHJP;

/// @brief Field OotvUrfSeAFWemvoWLSGjTmgUvqV, offset: 0x60, size: 0x4, def value: None
 int32_t  ___OotvUrfSeAFWemvoWLSGjTmgUvqV;

/// @brief Field NATgprtlgurrxYzZDrIDDYLBThdt, offset: 0x64, size: 0x4, def value: None
 int32_t  ___NATgprtlgurrxYzZDrIDDYLBThdt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA, ___pkXAbQbYOIepObCYQsUKBCiGUJWlB) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA, ___epHMcxMbDoEaiFoEryasZXYvnPYe) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA, ___RGUIEJBnSAUXTUEBQOlybMlhPhfB) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA, ___lCFmANCwkGwiqcqZDiPuLseemHJP) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA, ___OotvUrfSeAFWemvoWLSGjTmgUvqV) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA, ___NATgprtlgurrxYzZDrIDDYLBThdt) == 0x64, "Offset mismatch!");

static_assert(sizeof(::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA) == 0x68, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerWithMap, Rewired.KeyboardKeyCode, Rewired.ModifierKeyFlags, System.Guid
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Keyboard
class CORDL_TYPE Keyboard : public ::Rewired::ControllerWithMap {
public:
// Declarations
using ModifierKeyInfo = ::Rewired::Keyboard_ModifierKeyInfo;

using PFnhNPpwZVfAuwJXKbMAhYmgApvdA = ::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA;

using XIKHlfTbcwlktEocCanUHYxnRennA = ::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA;

using eewhiYlfclwnjWRFojkzSTQkkwmA = ::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA;

using egzZyOOngliCQNQoyFbUZkKzzvki = ::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki;

using sofOAjmnIBdUjPuzeCUVcqDxWewiA = ::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA;

/// @brief Field AxSfZGEuNIEhzOeURMyurxJVSMCn, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get_AxSfZGEuNIEhzOeURMyurxJVSMCn, put=__cordl_internal_set_AxSfZGEuNIEhzOeURMyurxJVSMCn)) ::Rewired::ModifierKeyFlags  AxSfZGEuNIEhzOeURMyurxJVSMCn;

/// @brief Field EVEEJdWjHiSRUyBfkbVUxuAAyXMS, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_EVEEJdWjHiSRUyBfkbVUxuAAyXMS, put=__cordl_internal_set_EVEEJdWjHiSRUyBfkbVUxuAAyXMS)) ::ArrayW<int32_t>  EVEEJdWjHiSRUyBfkbVUxuAAyXMS;

/// @brief Field HemGXeUPJhJvwebpUVvlkaIlMUDm, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_HemGXeUPJhJvwebpUVvlkaIlMUDm, put=__cordl_internal_set_HemGXeUPJhJvwebpUVvlkaIlMUDm)) ::System::Func_2<::Rewired::KeyboardKeyCode,int32_t>*  HemGXeUPJhJvwebpUVvlkaIlMUDm;

/// @brief Field LFcVLrSjiOFsayMgroaDuurtLPUs, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_LFcVLrSjiOFsayMgroaDuurtLPUs, put=__cordl_internal_set_LFcVLrSjiOFsayMgroaDuurtLPUs)) ::GlobalNamespace::uArTaRyygpuxWdJDbqGWbDpuXIZu*  LFcVLrSjiOFsayMgroaDuurtLPUs;

/// @brief Field LJFkLhamLTxHSpdizTxThsvLiKvT, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_LJFkLhamLTxHSpdizTxThsvLiKvT, put=setStaticF_LJFkLhamLTxHSpdizTxThsvLiKvT)) ::System::Guid  LJFkLhamLTxHSpdizTxThsvLiKvT;

/// @brief Field PCbFuhTTkgmYJeJelRAKSSNPINxk, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PCbFuhTTkgmYJeJelRAKSSNPINxk, put=setStaticF_PCbFuhTTkgmYJeJelRAKSSNPINxk)) ::Rewired::Keyboard*  PCbFuhTTkgmYJeJelRAKSSNPINxk;

 __declspec(property(get=XwImOTLansFrXKUcApqoXkRdejRe)) ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*>*  RvAJMZyKZhCNxqPtOIThiDBaTOnc;

 __declspec(property(get=vldabiOVqcMXmHAaFmscNLxHgCQi)) ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA*>*  VsIgyJBvGtkQuXSHmHjpbpUKLsffb;

/// @brief Field WHZImEqkUQqwcDGhsAZKcsLbBtUg, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_WHZImEqkUQqwcDGhsAZKcsLbBtUg, put=__cordl_internal_set_WHZImEqkUQqwcDGhsAZKcsLbBtUg)) ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA*>*  WHZImEqkUQqwcDGhsAZKcsLbBtUg;

/// @brief Field WWvEEtTTCUwbNEYgXFmYmgrfdVfJ, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_WWvEEtTTCUwbNEYgXFmYmgrfdVfJ, put=__cordl_internal_set_WWvEEtTTCUwbNEYgXFmYmgrfdVfJ)) ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*>*  WWvEEtTTCUwbNEYgXFmYmgrfdVfJ;

/// @brief Field XGkJhGBboJWaVLEgzJuNtrywneeB, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_XGkJhGBboJWaVLEgzJuNtrywneeB, put=__cordl_internal_set_XGkJhGBboJWaVLEgzJuNtrywneeB)) ::GlobalNamespace::mgEoYhWDNSuilPYVDQosKwaMZrnc*  XGkJhGBboJWaVLEgzJuNtrywneeB;

/// @brief Field YEGEyzsTRNaKeJGecBjGsAmRhRpv, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_YEGEyzsTRNaKeJGecBjGsAmRhRpv, put=__cordl_internal_set_YEGEyzsTRNaKeJGecBjGsAmRhRpv)) ::Rewired::Interfaces::IUnifiedKeyboardSource*  YEGEyzsTRNaKeJGecBjGsAmRhRpv;

/// @brief Field cfcILFBaTWXVAjugnkQktuFHFwbxA, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get_cfcILFBaTWXVAjugnkQktuFHFwbxA, put=__cordl_internal_set_cfcILFBaTWXVAjugnkQktuFHFwbxA)) int32_t  cfcILFBaTWXVAjugnkQktuFHFwbxA;

 __declspec(property(get=get_deviceInstanceGuid)) ::System::Guid  deviceInstanceGuid;

/// @brief Field euQrwvBXUBNwfydWyTGhphadWQoQ, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_euQrwvBXUBNwfydWyTGhphadWQoQ, put=setStaticF_euQrwvBXUBNwfydWyTGhphadWQoQ)) ::ArrayW<::Rewired::KeyboardKeyCode>  euQrwvBXUBNwfydWyTGhphadWQoQ;

/// @brief Field tGYbRouQNyNmheVNLghyaAPYujct, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get_tGYbRouQNyNmheVNLghyaAPYujct, put=__cordl_internal_set_tGYbRouQNyNmheVNLghyaAPYujct)) ::Rewired::ModifierKeyFlags  tGYbRouQNyNmheVNLghyaAPYujct;

/// @brief Method AIUOmUHjhvehTlbFvZDLJAOEWiCR, addr 0x18191d510, size 0x160, virtual false, abstract: false, final false
inline ::System::Object* AIUOmUHjhvehTlbFvZDLJAOEWiCR(::Rewired::ModifierKey  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ARXdZpeRrVRgvpxXfKKvOgLwwwU, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::KeyCode ARXdZpeRrVRgvpxXfKKvOgLwwwU(::Rewired::KeyboardKeyCode  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method BakeActionElementMap, addr 0x18191d670, size 0x20, virtual true, abstract: false, final false
inline void BakeActionElementMap(::Rewired::ControllerMap*  controllerMap, ::Rewired::ActionElementMap*  map) ;

/// @brief Method BakeMap, addr 0x18191d690, size 0x120, virtual true, abstract: false, final false
inline void BakeMap(::Rewired::ControllerMap*  controllerMap) ;

/// @brief Method ClhPyohPsojxasWjrRPARERctcJb, addr 0x18191d7b0, size 0x270, virtual false, abstract: false, final false
static inline void ClhPyohPsojxasWjrRPARERctcJb(::by_ref<int32_t>  _cordl_fixed_empty_name_whitespace, ::by_ref<::UnityEngine::KeyCode>  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method ESbTZMCHYaDLQZtxwRcTcLUKdtdv, addr 0x18191da20, size 0x170, virtual false, abstract: false, final false
inline bool ESbTZMCHYaDLQZtxwRcTcLUKdtdv(::Rewired::KeyboardKeyCode  _cordl_fixed_empty_name_whitespace, ::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method FhFSPaAVUjbisTxWHOPHMbXWMUxM, addr 0x18191db90, size 0x260, virtual false, abstract: false, final false
inline void FhFSPaAVUjbisTxWHOPHMbXWMUxM(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method GetButtonIndex, addr 0x18191de80, size 0x40, virtual false, abstract: false, final false
inline int32_t GetButtonIndex(::Rewired::KeyboardKeyCode  keyCode) ;

/// @brief Method GetButtonIndexByKeyCode, addr 0x18191ddf0, size 0x90, virtual false, abstract: false, final false
inline int32_t GetButtonIndexByKeyCode(::UnityEngine::KeyCode  keyCode) ;

/// @brief Method GetElementIdentifierByKeyCode, addr 0x18191dec0, size 0xb0, virtual false, abstract: false, final false
inline ::Rewired::ControllerElementIdentifier* GetElementIdentifierByKeyCode(::UnityEngine::KeyCode  keyCode) ;

/// @brief Method GetKey, addr 0x18191ea00, size 0xb0, virtual false, abstract: false, final false
inline bool GetKey(::UnityEngine::KeyCode  keyCode) ;

/// @brief Method GetKeyCodeByButtonIndex, addr 0x18191df70, size 0x190, virtual false, abstract: false, final false
inline ::UnityEngine::KeyCode GetKeyCodeByButtonIndex(int32_t  buttonIndex) ;

/// @brief Method GetKeyCodeById, addr 0x18191e100, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::KeyCode GetKeyCodeById(int32_t  elementIdentifierId) ;

/// @brief Method GetKeyDoublePressDown, addr 0x18191e2d0, size 0xb0, virtual false, abstract: false, final false
inline bool GetKeyDoublePressDown(::UnityEngine::KeyCode  keyCode) ;

/// @brief Method GetKeyDoublePressDown, addr 0x18191e380, size 0xc0, virtual false, abstract: false, final false
inline bool GetKeyDoublePressDown(::UnityEngine::KeyCode  keyCode, float_t  speed) ;

/// @brief Method GetKeyDoublePressHold, addr 0x18191e500, size 0x60, virtual false, abstract: false, final false
inline bool GetKeyDoublePressHold(::UnityEngine::KeyCode  keyCode) ;

/// @brief Method GetKeyDoublePressHold, addr 0x18191e440, size 0xc0, virtual false, abstract: false, final false
inline bool GetKeyDoublePressHold(::UnityEngine::KeyCode  keyCode, float_t  speed) ;

/// @brief Method GetKeyDown, addr 0x18191e560, size 0xb0, virtual false, abstract: false, final false
inline bool GetKeyDown(::UnityEngine::KeyCode  keyCode) ;

/// @brief Method GetKeyName, addr 0x18191e610, size 0xa0, virtual false, abstract: false, final false
static inline ::StringW GetKeyName(::UnityEngine::KeyCode  key) ;

/// @brief Method GetKeyName, addr 0x18191e6b0, size 0x90, virtual false, abstract: false, final false
static inline ::StringW GetKeyName(::UnityEngine::KeyCode  key, ::Rewired::ModifierKeyFlags  flags) ;

/// @brief Method GetKeyPrev, addr 0x18191e740, size 0xb0, virtual false, abstract: false, final false
inline bool GetKeyPrev(::UnityEngine::KeyCode  keyCode) ;

/// @brief Method GetKeyTimePressed, addr 0x18191e7f0, size 0xb0, virtual false, abstract: false, final false
inline double_t GetKeyTimePressed(::UnityEngine::KeyCode  keyCode) ;

/// @brief Method GetKeyTimeUnpressed, addr 0x18191e8a0, size 0xb0, virtual false, abstract: false, final false
inline double_t GetKeyTimeUnpressed(::UnityEngine::KeyCode  keyCode) ;

/// @brief Method GetKeyUp, addr 0x18191e950, size 0xb0, virtual false, abstract: false, final false
inline bool GetKeyUp(::UnityEngine::KeyCode  keyCode) ;

/// @brief Method GetKeyboardKeyCodeByButtonIndex, addr 0x18191eab0, size 0x120, virtual false, abstract: false, final false
static inline ::Rewired::KeyboardKeyCode GetKeyboardKeyCodeByButtonIndex(int32_t  buttonIndex) ;

/// @brief Method GetModifierKey, addr 0x18191f120, size 0xe0, virtual false, abstract: false, final false
inline bool GetModifierKey(::Rewired::ModifierKey  key) ;

/// @brief Method GetModifierKeyDown, addr 0x18191ebd0, size 0x100, virtual false, abstract: false, final false
inline bool GetModifierKeyDown(::Rewired::ModifierKey  key) ;

/// @brief Method GetModifierKeyGlyph, addr 0x18191ecd0, size 0x30, virtual false, abstract: false, final false
static inline ::System::Object* GetModifierKeyGlyph(::Rewired::ModifierKey  modifierKey) ;

/// @brief Method GetModifierKeyName, addr 0x18191ed00, size 0x40, virtual false, abstract: false, final false
static inline ::StringW GetModifierKeyName(::Rewired::ModifierKey  modifierKey) ;

/// @brief Method GetModifierKeyName, addr 0x18191ed40, size 0x40, virtual false, abstract: false, final false
static inline ::StringW GetModifierKeyName(::Rewired::ModifierKey  modifierKey, bool  getShortName) ;

/// @brief Method GetModifierKeyPrev, addr 0x18191ed80, size 0xe0, virtual false, abstract: false, final false
inline bool GetModifierKeyPrev(::Rewired::ModifierKey  key) ;

/// @brief Method GetModifierKeyTimePressed, addr 0x18191ee60, size 0xe0, virtual false, abstract: false, final false
inline double_t GetModifierKeyTimePressed(::Rewired::ModifierKey  key) ;

/// @brief Method GetModifierKeyTimeUnpressed, addr 0x18191ef40, size 0xe0, virtual false, abstract: false, final false
inline double_t GetModifierKeyTimeUnpressed(::Rewired::ModifierKey  key) ;

/// @brief Method GetModifierKeyUp, addr 0x18191f020, size 0x100, virtual false, abstract: false, final false
inline bool GetModifierKeyUp(::Rewired::ModifierKey  key) ;

/// @brief Method IDZyosIJIVGfBhtFFvVaBuGfWcZqA, addr 0x18191f200, size 0x190, virtual false, abstract: false, final false
inline ::StringW IDZyosIJIVGfBhtFFvVaBuGfWcZqA(::Rewired::ModifierKey  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method IThawtPqHUhdMerAfaSKCTaPAdOe, addr 0x18191f390, size 0xa0, virtual true, abstract: false, final false
inline bool IThawtPqHUhdMerAfaSKCTaPAdOe(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method IsModifierKey, addr 0x18191f430, size 0x20, virtual false, abstract: false, final false
static inline bool IsModifierKey(::UnityEngine::KeyCode  key) ;

/// @brief Method KeyCodeToModifierKey, addr 0x18191f4d0, size 0x70, virtual false, abstract: false, final false
static inline ::Rewired::ModifierKey KeyCodeToModifierKey(::UnityEngine::KeyCode  key) ;

/// @brief Method KeyCodeToModifierKeyFlags, addr 0x18191f450, size 0x80, virtual false, abstract: false, final false
static inline ::Rewired::ModifierKeyFlags KeyCodeToModifierKeyFlags(::UnityEngine::KeyCode  key) ;

/// @brief Method ModifierKeyFlagsContain, addr 0x18191f540, size 0x50, virtual false, abstract: false, final false
static inline bool ModifierKeyFlagsContain(::Rewired::ModifierKeyFlags  flags, ::Rewired::ModifierKey  key) ;

/// @brief Method ModifierKeyFlagsContain, addr 0x18191f590, size 0x90, virtual false, abstract: false, final false
static inline bool ModifierKeyFlagsContain(::Rewired::ModifierKeyFlags  flags, ::UnityEngine::KeyCode  key) ;

/// @brief Method ModifierKeyFlagsToKeyCode, addr 0x18191f620, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::KeyCode ModifierKeyFlagsToKeyCode(::Rewired::ModifierKeyFlags  flags) ;

/// @brief Method ModifierKeyFlagsToModifierKey, addr 0x18191f680, size 0x50, virtual false, abstract: false, final false
static inline ::Rewired::ModifierKey ModifierKeyFlagsToModifierKey(::Rewired::ModifierKeyFlags  flags) ;

/// @brief Method ModifierKeyFlagsToString, addr 0x18191f8d0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW ModifierKeyFlagsToString(::Rewired::ModifierKeyFlags  flags) ;

/// @brief Method ModifierKeyFlagsToString, addr 0x18191f6d0, size 0x200, virtual false, abstract: false, final false
static inline ::StringW ModifierKeyFlagsToString(::Rewired::ModifierKeyFlags  flags, bool  getShortName) ;

/// @brief Method ModifierKeyToModifierKeyFlags, addr 0x18191f8e0, size 0x40, virtual false, abstract: false, final false
static inline ::Rewired::ModifierKeyFlags ModifierKeyToModifierKeyFlags(::Rewired::ModifierKey  key) ;

static inline ::Rewired::Keyboard* New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::Interfaces::IUnifiedKeyboardSource*  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::Keyboard* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_6, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_7) ;

/// @brief Method ObSCzYffQxantKhCzQZpcSHSExiSA, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline ::Rewired::KeyboardKeyCode ObSCzYffQxantKhCzQZpcSHSExiSA(::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method PMzGmYGDDoapfMKQLLaURYNhkONSA, addr 0x18191f920, size 0x90, virtual false, abstract: false, final false
static inline int32_t PMzGmYGDDoapfMKQLLaURYNhkONSA(::Rewired::KeyboardKeyCode  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method PNHCOADcaRSJbDFPVHjEmmcQOAJIA, addr 0x18191f9b0, size 0x60, virtual false, abstract: false, final false
inline bool PNHCOADcaRSJbDFPVHjEmmcQOAJIA(::Rewired::KeyboardKeyCode  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method PollForAllButtons, addr 0x18191fa60, size 0x50, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* PollForAllButtons() ;

/// @brief Method PollForAllButtonsDown, addr 0x18191fa10, size 0x50, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* PollForAllButtonsDown() ;

/// @brief Method PollForAllKeys, addr 0x18191fa60, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* PollForAllKeys() ;

/// @brief Method PollForAllKeysDown, addr 0x18191fa10, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* PollForAllKeysDown() ;

/// @brief Method PollForFirstButton, addr 0x18191fad0, size 0x20, virtual true, abstract: false, final false
inline ::Rewired::ControllerPollingInfo PollForFirstButton() ;

/// @brief Method PollForFirstButtonDown, addr 0x18191fab0, size 0x20, virtual true, abstract: false, final false
inline ::Rewired::ControllerPollingInfo PollForFirstButtonDown() ;

/// @brief Method PollForFirstKey, addr 0x18191fcf0, size 0x200, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo PollForFirstKey() ;

/// @brief Method PollForFirstKeyDown, addr 0x18191faf0, size 0x200, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo PollForFirstKeyDown() ;

/// @brief Method QcvigjyMEblDihoeKwaLYfblpMge, addr 0x18191fef0, size 0x170, virtual false, abstract: false, final false
inline void QcvigjyMEblDihoeKwaLYfblpMge() ;

/// @brief Method RPGvdZVwnHieXpdPEnNDFCwWJHLx, addr 0x181920060, size 0x200, virtual false, abstract: false, final false
inline void RPGvdZVwnHieXpdPEnNDFCwWJHLx() ;

/// @brief Method RjmumSnhsdpCDbnLvjsrIUSIDgBKA, addr 0x181920260, size 0x80, virtual false, abstract: false, final false
static inline bool RjmumSnhsdpCDbnLvjsrIUSIDgBKA(::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA*  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace_param_3, ::by_ref<::StringW>  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method UdulFHrPifItuEODRnUmXrhHoqfO, addr 0x18191f430, size 0x20, virtual false, abstract: false, final false
static inline bool UdulFHrPifItuEODRnUmXrhHoqfO(::Rewired::KeyboardKeyCode  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method VoekEtsfdJwXZNNXOihzxRmbLMk, addr 0x1819202e0, size 0x100, virtual false, abstract: false, final false
static inline ::ArrayW<::Rewired::KeyboardKeyCode> VoekEtsfdJwXZNNXOihzxRmbLMk() ;

/// @brief Method XMvhLuSfxDjNiLrVFNHtTURkdGps, addr 0x1819203e0, size 0x20, virtual true, abstract: false, final false
inline void XMvhLuSfxDjNiLrVFNHtTURkdGps() ;

/// @brief Method XwImOTLansFrXKUcApqoXkRdejRe, addr 0x181920400, size 0x280, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*>* XwImOTLansFrXKUcApqoXkRdejRe() ;

/// @brief Method YFrsXBtTVbOlDAwSfTPKWzrQVced, addr 0x181920680, size 0x1d0, virtual false, abstract: false, final false
static inline ::StringW YFrsXBtTVbOlDAwSfTPKWzrQVced(::Rewired::ModifierKey  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ZrtbCvFuuAboJMBwuZGSMsLeIqoeb, addr 0x181920850, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::ModifierKeyFlags ZrtbCvFuuAboJMBwuZGSMsLeIqoeb(::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace) ;

constexpr ::Rewired::ModifierKeyFlags const& __cordl_internal_get_AxSfZGEuNIEhzOeURMyurxJVSMCn() const;

constexpr ::Rewired::ModifierKeyFlags& __cordl_internal_get_AxSfZGEuNIEhzOeURMyurxJVSMCn() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_EVEEJdWjHiSRUyBfkbVUxuAAyXMS() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_EVEEJdWjHiSRUyBfkbVUxuAAyXMS() ;

constexpr ::System::Func_2<::Rewired::KeyboardKeyCode,int32_t>* const& __cordl_internal_get_HemGXeUPJhJvwebpUVvlkaIlMUDm() const;

constexpr ::System::Func_2<::Rewired::KeyboardKeyCode,int32_t>*& __cordl_internal_get_HemGXeUPJhJvwebpUVvlkaIlMUDm() ;

constexpr ::GlobalNamespace::uArTaRyygpuxWdJDbqGWbDpuXIZu* const& __cordl_internal_get_LFcVLrSjiOFsayMgroaDuurtLPUs() const;

constexpr ::GlobalNamespace::uArTaRyygpuxWdJDbqGWbDpuXIZu*& __cordl_internal_get_LFcVLrSjiOFsayMgroaDuurtLPUs() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA*>* const& __cordl_internal_get_WHZImEqkUQqwcDGhsAZKcsLbBtUg() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA*>*& __cordl_internal_get_WHZImEqkUQqwcDGhsAZKcsLbBtUg() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*>* const& __cordl_internal_get_WWvEEtTTCUwbNEYgXFmYmgrfdVfJ() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*>*& __cordl_internal_get_WWvEEtTTCUwbNEYgXFmYmgrfdVfJ() ;

constexpr ::GlobalNamespace::mgEoYhWDNSuilPYVDQosKwaMZrnc* const& __cordl_internal_get_XGkJhGBboJWaVLEgzJuNtrywneeB() const;

constexpr ::GlobalNamespace::mgEoYhWDNSuilPYVDQosKwaMZrnc*& __cordl_internal_get_XGkJhGBboJWaVLEgzJuNtrywneeB() ;

constexpr ::Rewired::Interfaces::IUnifiedKeyboardSource* const& __cordl_internal_get_YEGEyzsTRNaKeJGecBjGsAmRhRpv() const;

constexpr ::Rewired::Interfaces::IUnifiedKeyboardSource*& __cordl_internal_get_YEGEyzsTRNaKeJGecBjGsAmRhRpv() ;

constexpr int32_t const& __cordl_internal_get_cfcILFBaTWXVAjugnkQktuFHFwbxA() const;

constexpr int32_t& __cordl_internal_get_cfcILFBaTWXVAjugnkQktuFHFwbxA() ;

constexpr ::Rewired::ModifierKeyFlags const& __cordl_internal_get_tGYbRouQNyNmheVNLghyaAPYujct() const;

constexpr ::Rewired::ModifierKeyFlags& __cordl_internal_get_tGYbRouQNyNmheVNLghyaAPYujct() ;

constexpr void __cordl_internal_set_AxSfZGEuNIEhzOeURMyurxJVSMCn(::Rewired::ModifierKeyFlags  value) ;

constexpr void __cordl_internal_set_EVEEJdWjHiSRUyBfkbVUxuAAyXMS(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_HemGXeUPJhJvwebpUVvlkaIlMUDm(::System::Func_2<::Rewired::KeyboardKeyCode,int32_t>*  value) ;

constexpr void __cordl_internal_set_LFcVLrSjiOFsayMgroaDuurtLPUs(::GlobalNamespace::uArTaRyygpuxWdJDbqGWbDpuXIZu*  value) ;

constexpr void __cordl_internal_set_WHZImEqkUQqwcDGhsAZKcsLbBtUg(::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA*>*  value) ;

constexpr void __cordl_internal_set_WWvEEtTTCUwbNEYgXFmYmgrfdVfJ(::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*>*  value) ;

constexpr void __cordl_internal_set_XGkJhGBboJWaVLEgzJuNtrywneeB(::GlobalNamespace::mgEoYhWDNSuilPYVDQosKwaMZrnc*  value) ;

constexpr void __cordl_internal_set_YEGEyzsTRNaKeJGecBjGsAmRhRpv(::Rewired::Interfaces::IUnifiedKeyboardSource*  value) ;

constexpr void __cordl_internal_set_cfcILFBaTWXVAjugnkQktuFHFwbxA(int32_t  value) ;

constexpr void __cordl_internal_set_tGYbRouQNyNmheVNLghyaAPYujct(::Rewired::ModifierKeyFlags  value) ;

/// @brief Method .ctor, addr 0x1819208b0, size 0x3f0, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::Interfaces::IUnifiedKeyboardSource*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x181920ca0, size 0x110, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_6, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_7) ;

/// @brief Method bJWMDcysSbPTrUNlnrwuXEXiTZsb, addr 0x181920db0, size 0x40, virtual false, abstract: false, final false
static inline int32_t bJWMDcysSbPTrUNlnrwuXEXiTZsb(::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method cKdeUtgqwOGUplINVaYnuzKxeZor, addr 0x181920df0, size 0x1b0, virtual false, abstract: false, final false
inline bool cKdeUtgqwOGUplINVaYnuzKxeZor(::Rewired::KeyboardKeyCode  _cordl_fixed_empty_name_whitespace, ::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::System::Guid getStaticF_LJFkLhamLTxHSpdizTxThsvLiKvT() ;

static inline ::Rewired::Keyboard* getStaticF_PCbFuhTTkgmYJeJelRAKSSNPINxk() ;

static inline ::ArrayW<::Rewired::KeyboardKeyCode> getStaticF_euQrwvBXUBNwfydWyTGhphadWQoQ() ;

/// @brief Method get_deviceInstanceGuid, addr 0x181920fa0, size 0xa0, virtual true, abstract: false, final false
inline ::System::Guid get_deviceInstanceGuid() ;

/// @brief Method gmHLefDchiOoqYugwAfjxvBplDdf, addr 0x181921040, size 0x60, virtual false, abstract: false, final false
inline bool gmHLefDchiOoqYugwAfjxvBplDdf(::Rewired::KeyboardKeyCode  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method jracUMALzmsSZkecSvyOLBtnUNIQA, addr 0x1819210a0, size 0xb0, virtual false, abstract: false, final false
static inline bool jracUMALzmsSZkecSvyOLBtnUNIQA(::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace_param_2, ::by_ref<::StringW>  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method kGVDVVeRQbYRgqfaNyittVooecae, addr 0x181921150, size 0x60, virtual true, abstract: false, final false
inline void kGVDVVeRQbYRgqfaNyittVooecae(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method oqrBsxQFQdBhDrDTAEzITgcZBNhJA, addr 0x1819211b0, size 0x2c0, virtual false, abstract: false, final false
inline void oqrBsxQFQdBhDrDTAEzITgcZBNhJA() ;

/// @brief Method rUIeHdRpToYaezFOeFfCZFPdovRB, addr 0x181921470, size 0x70, virtual false, abstract: false, final false
static inline bool rUIeHdRpToYaezFOeFfCZFPdovRB(::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace_param_2, ::by_ref<::System::Object*>  _cordl_fixed_empty_name_whitespace_param_3) ;

static inline void setStaticF_LJFkLhamLTxHSpdizTxThsvLiKvT(::System::Guid  value) ;

static inline void setStaticF_PCbFuhTTkgmYJeJelRAKSSNPINxk(::Rewired::Keyboard*  value) ;

static inline void setStaticF_euQrwvBXUBNwfydWyTGhphadWQoQ(::ArrayW<::Rewired::KeyboardKeyCode>  value) ;

/// @brief Method sjDStGotOTCttyUYJazBDsvbgRNl, addr 0x1819214e0, size 0x2e0, virtual false, abstract: false, final false
inline ::StringW sjDStGotOTCttyUYJazBDsvbgRNl(::Rewired::ModifierKey  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method vldabiOVqcMXmHAaFmscNLxHgCQi, addr 0x1819217c0, size 0x270, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA*>* vldabiOVqcMXmHAaFmscNLxHgCQi() ;

/// @brief Method xEUbXDaAqOQlJbnikgDqLpToPyFkA, addr 0x181921a30, size 0x220, virtual false, abstract: false, final false
inline bool xEUbXDaAqOQlJbnikgDqLpToPyFkA(::by_ref<::Rewired::Controller_Button*>  _cordl_fixed_empty_name_whitespace, ::by_ref<::Rewired::Controller_Button*>  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ModifierKey  _cordl_fixed_empty_name_whitespace_param_2) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Keyboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Keyboard", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Keyboard(Keyboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Keyboard", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Keyboard(Keyboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1846};

/// @brief Field vKQGAnbPukPLxNvgGOBakgZKIVcfA offset 0xffffffff size 0x8
static constexpr ::ConstString  vKQGAnbPukPLxNvgGOBakgZKIVcfA{u" + "};

/// @brief Field YEGEyzsTRNaKeJGecBjGsAmRhRpv, offset: 0x130, size: 0x8, def value: None
 ::Rewired::Interfaces::IUnifiedKeyboardSource*  ___YEGEyzsTRNaKeJGecBjGsAmRhRpv;

/// @brief Field AxSfZGEuNIEhzOeURMyurxJVSMCn, offset: 0x138, size: 0x4, def value: None
 ::Rewired::ModifierKeyFlags  ___AxSfZGEuNIEhzOeURMyurxJVSMCn;

/// @brief Field tGYbRouQNyNmheVNLghyaAPYujct, offset: 0x13c, size: 0x4, def value: None
 ::Rewired::ModifierKeyFlags  ___tGYbRouQNyNmheVNLghyaAPYujct;

/// @brief Field HemGXeUPJhJvwebpUVvlkaIlMUDm, offset: 0x140, size: 0x8, def value: None
 ::System::Func_2<::Rewired::KeyboardKeyCode,int32_t>*  ___HemGXeUPJhJvwebpUVvlkaIlMUDm;

/// @brief Field EVEEJdWjHiSRUyBfkbVUxuAAyXMS, offset: 0x148, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___EVEEJdWjHiSRUyBfkbVUxuAAyXMS;

/// @brief Field cfcILFBaTWXVAjugnkQktuFHFwbxA, offset: 0x150, size: 0x4, def value: None
 int32_t  ___cfcILFBaTWXVAjugnkQktuFHFwbxA;

/// @brief Field XGkJhGBboJWaVLEgzJuNtrywneeB, offset: 0x158, size: 0x8, def value: None
 ::GlobalNamespace::mgEoYhWDNSuilPYVDQosKwaMZrnc*  ___XGkJhGBboJWaVLEgzJuNtrywneeB;

/// @brief Field LFcVLrSjiOFsayMgroaDuurtLPUs, offset: 0x160, size: 0x8, def value: None
 ::GlobalNamespace::uArTaRyygpuxWdJDbqGWbDpuXIZu*  ___LFcVLrSjiOFsayMgroaDuurtLPUs;

/// @brief Field WHZImEqkUQqwcDGhsAZKcsLbBtUg, offset: 0x168, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA*>*  ___WHZImEqkUQqwcDGhsAZKcsLbBtUg;

/// @brief Field WWvEEtTTCUwbNEYgXFmYmgrfdVfJ, offset: 0x170, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*>*  ___WWvEEtTTCUwbNEYgXFmYmgrfdVfJ;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Keyboard, ___YEGEyzsTRNaKeJGecBjGsAmRhRpv) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Rewired::Keyboard, ___AxSfZGEuNIEhzOeURMyurxJVSMCn) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Rewired::Keyboard, ___tGYbRouQNyNmheVNLghyaAPYujct) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Keyboard, ___HemGXeUPJhJvwebpUVvlkaIlMUDm) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Rewired::Keyboard, ___EVEEJdWjHiSRUyBfkbVUxuAAyXMS) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Rewired::Keyboard, ___cfcILFBaTWXVAjugnkQktuFHFwbxA) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Rewired::Keyboard, ___XGkJhGBboJWaVLEgzJuNtrywneeB) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Rewired::Keyboard, ___LFcVLrSjiOFsayMgroaDuurtLPUs) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Rewired::Keyboard, ___WHZImEqkUQqwcDGhsAZKcsLbBtUg) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Rewired::Keyboard, ___WWvEEtTTCUwbNEYgXFmYmgrfdVfJ) == 0x170, "Offset mismatch!");

static_assert(sizeof(::Rewired::Keyboard) == 0x178, "Size mismatch!");

} // namespace end def Rewired

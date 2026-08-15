#pragma once
// IWYU pragma private; include "Rewired/PlayerSaveData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__CustomControllerMapSaveData_def.hpp"
#include "Rewired/zzzz__InputBehavior_def.hpp"
#include "Rewired/zzzz__JoystickMapSaveData_def.hpp"
#include "Rewired/zzzz__KeyboardMapSaveData_def.hpp"
#include "Rewired/zzzz__MouseMapSaveData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerSaveData)
namespace Rewired {
class ControllerMapSaveData;
}
namespace Rewired {
class CustomControllerMapSaveData;
}
namespace Rewired {
class InputBehavior;
}
namespace Rewired {
class JoystickMapSaveData;
}
namespace Rewired {
class KeyboardMapSaveData;
}
namespace Rewired {
class MouseMapSaveData;
}
namespace Rewired {
class PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired {
class PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE;
}
namespace Rewired {
struct PlayerSaveData;
}
// Write type traits
MARK_REF_T(::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE*);
MARK_VAL_T(::Rewired::PlayerSaveData);
DEFINE_IL2CPP_CLASS(::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE*, "Rewired", "PlayerSaveData/GFjRHKWGKbEwwupMcwgFLTyKavoE");
DEFINE_IL2CPP_CLASS(::Rewired::PlayerSaveData, "Rewired", "PlayerSaveData");
// Dependencies Rewired.CustomControllerMapSaveData, Rewired.InputBehavior, Rewired.JoystickMapSaveData, Rewired.KeyboardMapSaveData, Rewired.MouseMapSaveData
namespace Rewired {
// Is value type: true
// CS Name: Rewired.PlayerSaveData
struct CORDL_TYPE PlayerSaveData {
public:
// Declarations
using GFjRHKWGKbEwwupMcwgFLTyKavoE = ::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE;

 __declspec(property(get=get_AllControllerMapSaveData)) ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerMapSaveData*>*  AllControllerMapSaveData;

 __declspec(property(get=get_customControllerMapCount)) int32_t  customControllerMapCount;

 __declspec(property(get=get_customControllerMapSaveData)) ::ArrayW<::Rewired::CustomControllerMapSaveData*>  customControllerMapSaveData;

 __declspec(property(get=get_inputBehaviorCount)) int32_t  inputBehaviorCount;

 __declspec(property(get=get_inputBehaviors)) ::ArrayW<::Rewired::InputBehavior*>  inputBehaviors;

 __declspec(property(get=get_joystickMapCount)) int32_t  joystickMapCount;

 __declspec(property(get=get_joystickMapSaveData)) ::ArrayW<::Rewired::JoystickMapSaveData*>  joystickMapSaveData;

 __declspec(property(get=get_keyboardMapCount)) int32_t  keyboardMapCount;

 __declspec(property(get=get_keyboardMapSaveData)) ::ArrayW<::Rewired::KeyboardMapSaveData*>  keyboardMapSaveData;

 __declspec(property(get=get_mouseMapCount)) int32_t  mouseMapCount;

 __declspec(property(get=get_mouseMapSaveData)) ::ArrayW<::Rewired::MouseMapSaveData*>  mouseMapSaveData;

/// @brief Method .ctor, addr 0x1819b9670, size 0x1a0, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::Rewired::JoystickMapSaveData*>  _cordl_fixed_empty_name_whitespace, ::ArrayW<::Rewired::KeyboardMapSaveData*>  _cordl_fixed_empty_name_whitespace_param_1, ::ArrayW<::Rewired::MouseMapSaveData*>  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<::Rewired::CustomControllerMapSaveData*>  _cordl_fixed_empty_name_whitespace_param_3, ::System::Collections::Generic::IList_1<::Rewired::InputBehavior*>*  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method get_AllControllerMapSaveData, addr 0x1819b9810, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerMapSaveData*>* get_AllControllerMapSaveData() ;

/// @brief Method get_customControllerMapCount, addr 0x1803aba50, size 0x20, virtual false, abstract: false, final false
inline int32_t get_customControllerMapCount() ;

/// @brief Method get_customControllerMapSaveData, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::CustomControllerMapSaveData*> get_customControllerMapSaveData() ;

/// @brief Method get_inputBehaviorCount, addr 0x1818d0670, size 0x20, virtual false, abstract: false, final false
inline int32_t get_inputBehaviorCount() ;

/// @brief Method get_inputBehaviors, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::InputBehavior*> get_inputBehaviors() ;

/// @brief Method get_joystickMapCount, addr 0x180cbd2a0, size 0x2e0, virtual false, abstract: false, final false
inline int32_t get_joystickMapCount() ;

/// @brief Method get_joystickMapSaveData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::JoystickMapSaveData*> get_joystickMapSaveData() ;

/// @brief Method get_keyboardMapCount, addr 0x1819b98a0, size 0x60, virtual false, abstract: false, final false
inline int32_t get_keyboardMapCount() ;

/// @brief Method get_keyboardMapSaveData, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::KeyboardMapSaveData*> get_keyboardMapSaveData() ;

/// @brief Method get_mouseMapCount, addr 0x1803a9050, size 0x20, virtual false, abstract: false, final false
inline int32_t get_mouseMapCount() ;

/// @brief Method get_mouseMapSaveData, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::MouseMapSaveData*> get_mouseMapSaveData() ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayerSaveData() ;

// Ctor Parameters [CppParam { name: "tcYuVSRUYBQgRYOmEIEKQMdQheIK", ty: "::ArrayW<::Rewired::JoystickMapSaveData*>", modifiers: "", def_value: None }, CppParam { name: "IhThRItEiKqyLgAcrsGjdqivWnVS", ty: "::ArrayW<::Rewired::KeyboardMapSaveData*>", modifiers: "", def_value: None }, CppParam { name: "kovBnTVrJCamqaAISZwmNVRZxbgSA", ty: "::ArrayW<::Rewired::MouseMapSaveData*>", modifiers: "", def_value: None }, CppParam { name: "haBuoIZzeeKonTmHdbTWhNLnxyeCA", ty: "::ArrayW<::Rewired::CustomControllerMapSaveData*>", modifiers: "", def_value: None }, CppParam { name: "nOkrwMdfIWXUtsatbNGETekOWnK", ty: "::ArrayW<::Rewired::InputBehavior*>", modifiers: "", def_value: None }]
constexpr PlayerSaveData(::ArrayW<::Rewired::JoystickMapSaveData*>  tcYuVSRUYBQgRYOmEIEKQMdQheIK, ::ArrayW<::Rewired::KeyboardMapSaveData*>  IhThRItEiKqyLgAcrsGjdqivWnVS, ::ArrayW<::Rewired::MouseMapSaveData*>  kovBnTVrJCamqaAISZwmNVRZxbgSA, ::ArrayW<::Rewired::CustomControllerMapSaveData*>  haBuoIZzeeKonTmHdbTWhNLnxyeCA, ::ArrayW<::Rewired::InputBehavior*>  nOkrwMdfIWXUtsatbNGETekOWnK) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2103};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field tcYuVSRUYBQgRYOmEIEKQMdQheIK, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::Rewired::JoystickMapSaveData*>  tcYuVSRUYBQgRYOmEIEKQMdQheIK;

/// @brief Field IhThRItEiKqyLgAcrsGjdqivWnVS, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::Rewired::KeyboardMapSaveData*>  IhThRItEiKqyLgAcrsGjdqivWnVS;

/// @brief Field kovBnTVrJCamqaAISZwmNVRZxbgSA, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Rewired::MouseMapSaveData*>  kovBnTVrJCamqaAISZwmNVRZxbgSA;

/// @brief Field haBuoIZzeeKonTmHdbTWhNLnxyeCA, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Rewired::CustomControllerMapSaveData*>  haBuoIZzeeKonTmHdbTWhNLnxyeCA;

/// @brief Field nOkrwMdfIWXUtsatbNGETekOWnK, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Rewired::InputBehavior*>  nOkrwMdfIWXUtsatbNGETekOWnK;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PlayerSaveData, tcYuVSRUYBQgRYOmEIEKQMdQheIK) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerSaveData, IhThRItEiKqyLgAcrsGjdqivWnVS) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerSaveData, kovBnTVrJCamqaAISZwmNVRZxbgSA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerSaveData, haBuoIZzeeKonTmHdbTWhNLnxyeCA) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerSaveData, nOkrwMdfIWXUtsatbNGETekOWnK) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::PlayerSaveData) == 0x28, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.PlayerSaveData, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerSaveData/GFjRHKWGKbEwwupMcwgFLTyKavoE
class CORDL_TYPE PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE : public ::System::Object {
public:
// Declarations
/// @brief Field KmzmBdrwPxnJylYlmWBqHBNpWGKE, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get_KmzmBdrwPxnJylYlmWBqHBNpWGKE, put=__cordl_internal_set_KmzmBdrwPxnJylYlmWBqHBNpWGKE)) ::Rewired::PlayerSaveData  KmzmBdrwPxnJylYlmWBqHBNpWGKE;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ControllerMapSaveData__get_Current)) ::Rewired::ControllerMapSaveData*  System_Collections_Generic_IEnumerator_Rewired_ControllerMapSaveData__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field VBZrwmzvBmouEGawYgYwqumkRMAl, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_VBZrwmzvBmouEGawYgYwqumkRMAl, put=__cordl_internal_set_VBZrwmzvBmouEGawYgYwqumkRMAl)) ::Rewired::ControllerMapSaveData*  VBZrwmzvBmouEGawYgYwqumkRMAl;

/// @brief Field dDLhMjpEMPjWfdpUEQMPkEXTRrqr, offset 0x50, size 0x28 
 __declspec(property(get=__cordl_internal_get_dDLhMjpEMPjWfdpUEQMPkEXTRrqr, put=__cordl_internal_set_dDLhMjpEMPjWfdpUEQMPkEXTRrqr)) ::Rewired::PlayerSaveData  dDLhMjpEMPjWfdpUEQMPkEXTRrqr;

/// @brief Field jpYDVYijwCHKYQNwinYloxCkddYJ, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_jpYDVYijwCHKYQNwinYloxCkddYJ, put=__cordl_internal_set_jpYDVYijwCHKYQNwinYloxCkddYJ)) int32_t  jpYDVYijwCHKYQNwinYloxCkddYJ;

/// @brief Field lVSIhfaEQyEjipRLdbuQnzPBBKtj, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_lVSIhfaEQyEjipRLdbuQnzPBBKtj, put=__cordl_internal_set_lVSIhfaEQyEjipRLdbuQnzPBBKtj)) int32_t  lVSIhfaEQyEjipRLdbuQnzPBBKtj;

/// @brief Field nbUAoNBOwczTDzPFquVSMPQuSzgp, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_nbUAoNBOwczTDzPFquVSMPQuSzgp, put=__cordl_internal_set_nbUAoNBOwczTDzPFquVSMPQuSzgp)) int32_t  nbUAoNBOwczTDzPFquVSMPQuSzgp;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerMapSaveData*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerMapSaveData*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerMapSaveData*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerMapSaveData*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1819b8100, size 0x200, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ControllerMapSaveData>.GetEnumerator, addr 0x1819b8300, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerMapSaveData*>* System_Collections_Generic_IEnumerable_Rewired_ControllerMapSaveData__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ControllerMapSaveData>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::Rewired::ControllerMapSaveData* System_Collections_Generic_IEnumerator_Rewired_ControllerMapSaveData__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1819b8300, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181049e50, size 0x6fe0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::Rewired::PlayerSaveData const& __cordl_internal_get_KmzmBdrwPxnJylYlmWBqHBNpWGKE() const;

constexpr ::Rewired::PlayerSaveData& __cordl_internal_get_KmzmBdrwPxnJylYlmWBqHBNpWGKE() ;

constexpr ::Rewired::ControllerMapSaveData* const& __cordl_internal_get_VBZrwmzvBmouEGawYgYwqumkRMAl() const;

constexpr ::Rewired::ControllerMapSaveData*& __cordl_internal_get_VBZrwmzvBmouEGawYgYwqumkRMAl() ;

constexpr ::Rewired::PlayerSaveData const& __cordl_internal_get_dDLhMjpEMPjWfdpUEQMPkEXTRrqr() const;

constexpr ::Rewired::PlayerSaveData& __cordl_internal_get_dDLhMjpEMPjWfdpUEQMPkEXTRrqr() ;

constexpr int32_t const& __cordl_internal_get_jpYDVYijwCHKYQNwinYloxCkddYJ() const;

constexpr int32_t& __cordl_internal_get_jpYDVYijwCHKYQNwinYloxCkddYJ() ;

constexpr int32_t const& __cordl_internal_get_lVSIhfaEQyEjipRLdbuQnzPBBKtj() const;

constexpr int32_t& __cordl_internal_get_lVSIhfaEQyEjipRLdbuQnzPBBKtj() ;

constexpr int32_t const& __cordl_internal_get_nbUAoNBOwczTDzPFquVSMPQuSzgp() const;

constexpr int32_t& __cordl_internal_get_nbUAoNBOwczTDzPFquVSMPQuSzgp() ;

constexpr void __cordl_internal_set_KmzmBdrwPxnJylYlmWBqHBNpWGKE(::Rewired::PlayerSaveData  value) ;

constexpr void __cordl_internal_set_VBZrwmzvBmouEGawYgYwqumkRMAl(::Rewired::ControllerMapSaveData*  value) ;

constexpr void __cordl_internal_set_dDLhMjpEMPjWfdpUEQMPkEXTRrqr(::Rewired::PlayerSaveData  value) ;

constexpr void __cordl_internal_set_jpYDVYijwCHKYQNwinYloxCkddYJ(int32_t  value) ;

constexpr void __cordl_internal_set_lVSIhfaEQyEjipRLdbuQnzPBBKtj(int32_t  value) ;

constexpr void __cordl_internal_set_nbUAoNBOwczTDzPFquVSMPQuSzgp(int32_t  value) ;

/// @brief Method .ctor, addr 0x180d66740, size 0x3cb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerMapSaveData*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerMapSaveData*>* i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerMapSaveData__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerMapSaveData*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerMapSaveData*>* i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerMapSaveData__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE(PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE(PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2102};

/// @brief Field lVSIhfaEQyEjipRLdbuQnzPBBKtj, offset: 0x10, size: 0x4, def value: None
 int32_t  ___lVSIhfaEQyEjipRLdbuQnzPBBKtj;

/// @brief Field VBZrwmzvBmouEGawYgYwqumkRMAl, offset: 0x18, size: 0x8, def value: None
 ::Rewired::ControllerMapSaveData*  ___VBZrwmzvBmouEGawYgYwqumkRMAl;

/// @brief Field nbUAoNBOwczTDzPFquVSMPQuSzgp, offset: 0x20, size: 0x4, def value: None
 int32_t  ___nbUAoNBOwczTDzPFquVSMPQuSzgp;

/// @brief Field KmzmBdrwPxnJylYlmWBqHBNpWGKE, offset: 0x28, size: 0x28, def value: None
 ::Rewired::PlayerSaveData  ___KmzmBdrwPxnJylYlmWBqHBNpWGKE;

/// @brief Field dDLhMjpEMPjWfdpUEQMPkEXTRrqr, offset: 0x50, size: 0x28, def value: None
 ::Rewired::PlayerSaveData  ___dDLhMjpEMPjWfdpUEQMPkEXTRrqr;

/// @brief Field jpYDVYijwCHKYQNwinYloxCkddYJ, offset: 0x78, size: 0x4, def value: None
 int32_t  ___jpYDVYijwCHKYQNwinYloxCkddYJ;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE, ___lVSIhfaEQyEjipRLdbuQnzPBBKtj) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE, ___VBZrwmzvBmouEGawYgYwqumkRMAl) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE, ___nbUAoNBOwczTDzPFquVSMPQuSzgp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE, ___KmzmBdrwPxnJylYlmWBqHBNpWGKE) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE, ___dDLhMjpEMPjWfdpUEQMPkEXTRrqr) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE, ___jpYDVYijwCHKYQNwinYloxCkddYJ) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE) == 0x80, "Size mismatch!");

} // namespace end def Rewired

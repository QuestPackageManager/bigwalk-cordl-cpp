#pragma once
// IWYU pragma private; include "Rowlan/UnityStandardAssets/CrossPlatformInput/VirtualInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VirtualInput)
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
class CrossPlatformInputManager_VirtualAxis;
}
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
class CrossPlatformInputManager_VirtualButton;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
class VirtualInput;
}
// Write type traits
MARK_REF_T(::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*);
DEFINE_IL2CPP_CLASS(::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*, "Rowlan.UnityStandardAssets.CrossPlatformInput", "VirtualInput");
// Dependencies System.Object, UnityEngine.Vector3
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
// Is value type: false
// CS Name: Rowlan.UnityStandardAssets.CrossPlatformInput.VirtualInput
class CORDL_TYPE VirtualInput : public ::System::Object {
public:
// Declarations
/// @brief Field <virtualMousePosition>k__BackingField, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get__virtualMousePosition_k__BackingField, put=__cordl_internal_set__virtualMousePosition_k__BackingField)) ::UnityEngine::Vector3  _virtualMousePosition_k__BackingField;

/// @brief Field m_AlwaysUseVirtual, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AlwaysUseVirtual, put=__cordl_internal_set_m_AlwaysUseVirtual)) ::System::Collections::Generic::List_1<::StringW>*  m_AlwaysUseVirtual;

/// @brief Field m_VirtualAxes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VirtualAxes, put=__cordl_internal_set_m_VirtualAxes)) ::System::Collections::Generic::Dictionary_2<::StringW,::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>*  m_VirtualAxes;

/// @brief Field m_VirtualButtons, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VirtualButtons, put=__cordl_internal_set_m_VirtualButtons)) ::System::Collections::Generic::Dictionary_2<::StringW,::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>*  m_VirtualButtons;

 __declspec(property(get=get_virtualMousePosition, put=set_virtualMousePosition)) ::UnityEngine::Vector3  virtualMousePosition;

/// @brief Method AxisExists, addr 0x181ac25b0, size 0x30, virtual false, abstract: false, final false
inline bool AxisExists(::StringW  name) ;

/// @brief Method ButtonExists, addr 0x181ac25e0, size 0x30, virtual false, abstract: false, final false
inline bool ButtonExists(::StringW  name) ;

/// @brief Method GetAxis, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t GetAxis(::StringW  name, bool  raw) ;

/// @brief Method GetButton, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool GetButton(::StringW  name) ;

/// @brief Method GetButtonDown, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool GetButtonDown(::StringW  name) ;

/// @brief Method GetButtonUp, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool GetButtonUp(::StringW  name) ;

/// @brief Method MousePosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 MousePosition() ;

static inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput* New_ctor() ;

/// @brief Method RegisterVirtualAxis, addr 0x181ac2610, size 0x110, virtual false, abstract: false, final false
inline void RegisterVirtualAxis(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*  axis) ;

/// @brief Method RegisterVirtualButton, addr 0x181ac2720, size 0x110, virtual false, abstract: false, final false
inline void RegisterVirtualButton(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*  button) ;

/// @brief Method SetAxis, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetAxis(::StringW  name, float_t  value) ;

/// @brief Method SetAxisNegative, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetAxisNegative(::StringW  name) ;

/// @brief Method SetAxisPositive, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetAxisPositive(::StringW  name) ;

/// @brief Method SetAxisZero, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetAxisZero(::StringW  name) ;

/// @brief Method SetButtonDown, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetButtonDown(::StringW  name) ;

/// @brief Method SetButtonUp, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetButtonUp(::StringW  name) ;

/// @brief Method SetVirtualMousePositionX, addr 0x181ac2830, size 0x20, virtual false, abstract: false, final false
inline void SetVirtualMousePositionX(float_t  f) ;

/// @brief Method SetVirtualMousePositionY, addr 0x181ac2850, size 0x20, virtual false, abstract: false, final false
inline void SetVirtualMousePositionY(float_t  f) ;

/// @brief Method SetVirtualMousePositionZ, addr 0x181ac2870, size 0x30, virtual false, abstract: false, final false
inline void SetVirtualMousePositionZ(float_t  f) ;

/// @brief Method UnRegisterVirtualAxis, addr 0x181ac28a0, size 0x60, virtual false, abstract: false, final false
inline void UnRegisterVirtualAxis(::StringW  name) ;

/// @brief Method UnRegisterVirtualButton, addr 0x181ac2900, size 0x60, virtual false, abstract: false, final false
inline void UnRegisterVirtualButton(::StringW  name) ;

/// @brief Method VirtualAxisReference, addr 0x181ac2960, size 0x60, virtual false, abstract: false, final false
inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis* VirtualAxisReference(::StringW  name) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__virtualMousePosition_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__virtualMousePosition_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_m_AlwaysUseVirtual() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_AlwaysUseVirtual() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>* const& __cordl_internal_get_m_VirtualAxes() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>*& __cordl_internal_get_m_VirtualAxes() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>* const& __cordl_internal_get_m_VirtualButtons() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>*& __cordl_internal_get_m_VirtualButtons() ;

constexpr void __cordl_internal_set__virtualMousePosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_AlwaysUseVirtual(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_m_VirtualAxes(::System::Collections::Generic::Dictionary_2<::StringW,::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>*  value) ;

constexpr void __cordl_internal_set_m_VirtualButtons(::System::Collections::Generic::Dictionary_2<::StringW,::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>*  value) ;

/// @brief Method .ctor, addr 0x181ac29c0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_virtualMousePosition, addr 0x1802f80b0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_virtualMousePosition() ;

/// @brief Method set_virtualMousePosition, addr 0x1805e10f0, size 0x70, virtual false, abstract: false, final false
inline void set_virtualMousePosition(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VirtualInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtualInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtualInput(VirtualInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtualInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtualInput(VirtualInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20362};

/// @brief Field <virtualMousePosition>k__BackingField, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____virtualMousePosition_k__BackingField;

/// @brief Field m_VirtualAxes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>*  ___m_VirtualAxes;

/// @brief Field m_VirtualButtons, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>*  ___m_VirtualButtons;

/// @brief Field m_AlwaysUseVirtual, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___m_AlwaysUseVirtual;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput, ____virtualMousePosition_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput, ___m_VirtualAxes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput, ___m_VirtualButtons) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput, ___m_AlwaysUseVirtual) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput) == 0x38, "Size mismatch!");

} // namespace end def Rowlan::UnityStandardAssets::CrossPlatformInput
